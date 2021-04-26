import matplotlib.pyplot as plt
import numpy as np
import os
import PIL
import pathlib
import tensorflow as tf
from tensorflow import keras
from tensorflow.keras import layers
from tensorflow.keras.models import Sequential

img_height = 180
img_width = 180
num_classes = 5

data_root_orig = "/home/yee/DataSet/flower_photos"
data_root = pathlib.Path(data_root_orig)

train_ds = tf.keras.preprocessing.image_dataset_from_directory(
    data_root,
    validation_split=0.2,
    subset="training",
    seed=123,
    image_size=(180, 180),
    batch_size=32)

class_names = train_ds.class_names

data_augmentation = keras.Sequential(
    [
        layers.experimental.preprocessing.RandomFlip("horizontal",
                                                     input_shape=(img_height,
                                                                  img_width,
                                                                  3)),
        layers.experimental.preprocessing.RandomRotation(0.1),
        layers.experimental.preprocessing.RandomZoom(0.1),
    ]
)


def create_model():
    model = Sequential([
        data_augmentation,
        layers.experimental.preprocessing.Rescaling(1./255),
        layers.Conv2D(16, 3, padding='same', activation='relu'),
        layers.MaxPooling2D(),
        layers.Conv2D(32, 3, padding='same', activation='relu'),
        layers.MaxPooling2D(),
        layers.Conv2D(64, 3, padding='same', activation='relu'),
        layers.MaxPooling2D(),
        layers.Dropout(0.2),
        layers.Flatten(),
        layers.Dense(128, activation='relu'),
        layers.Dense(num_classes)
    ])
    model.compile(optimizer='adam',
                  loss=tf.keras.losses.SparseCategoricalCrossentropy(
                      from_logits=True),
                  metrics=['accuracy'])
    return model


# data_root_orig="/home/yee/DataSet/flower_photos/sunflowers"
data_root_orig = "/home/yee/GraduationDesign/MakeSampleSet/sunflowers"
data_root = pathlib.Path(data_root_orig)
# 创建模型实例
model = create_model()

# 恢复权重
model.load_weights('../checkpoints/Flowers/Flowers_checkpoint')

# 遍历文件夹中的每个文件测试
for item in data_root.iterdir():
    # print(item)
    img = keras.preprocessing.image.load_img(
        item, target_size=(img_height, img_width)
    )
    img_array = keras.preprocessing.image.img_to_array(img)
    img_array = tf.expand_dims(img_array, 0)  # Create a batch

    predictions = model.predict(img_array)
    score = tf.nn.softmax(predictions[0])

    print(
        "Likely belongs to {} with a {:.2f} percent confidence."
        .format(class_names[np.argmax(score)], 100 * np.max(score))
    )
