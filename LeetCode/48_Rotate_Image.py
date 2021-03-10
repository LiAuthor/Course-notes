def rotate(matrix):
    matrix_size = len(matrix[0])
    for i in range(matrix_size):
        for j in range(i, matrix_size):
            matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]
    for i in range(matrix_size):
        matrix[i].reverse()


if __name__ = "__main__":
    temp = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
