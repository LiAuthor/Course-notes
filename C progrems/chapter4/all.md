1. C语言中的算术运算符包括：`+`、`-`、`*`、`/`、`++`、`--`、`%` 等种类

2. 常见的关系运算符包括：`<`、`<=`、`>`、`>=`、`==`、`!=` 等种类

3. 常见的逻辑运算符包括：`&&`、`||`、`!` 等种类

**`&&`：** 与是双目运算符，要求有两个运算对象，表示两个运算对象都成立，则结果为真，否则结果为假。

例如：(a<b) && (x>y)，表示(a<b)和(x>y)同时成立则为真。

**`||`：**是双目运算符，要求有两个运算对象，表示两个运算对象只要任意一个成立，则结果为真，否则结果为假。

例如：(a<b) && (x>y)，表示(a<b)和(x>y)两个对象中任意一个成立则结果为真。

**`!`：**是单目运算符，只要求有一个运算对象，表示取运算对象反义，运算对象为真则结果为假，运算对象结果为假则结果为真。

***算术 > 关系 > 逻辑***

***逻辑运算符优先级： ! > && > ||***

***有括号优先括号***

#### 写出下面各逻辑表达式的值。设a=3,b=4,c=5。

（1）a + b > c && b == c

（2）a || b + c && b - c

（3）!(a > b) && !c || 1

（4）!(x = a) && (y = b) && 0

（5）!(a + b) + c - 1 && b + c / 2

```c
#include <stdio.h>
int main()
{
	int a = 3, b = 4, c = 5;
	printf("%d\n", a || b + c && b - c);
	printf("%d\n", a || b + c && b - c);
	printf("%d\n", !(a > b) && !c || 1);
	printf("%d\n", !(x = a) && (y = b) && 0);
	printf("%d\n", !(a + b) + c - 1 && b + c / 2);
	system("pause");//这一句是为了让控制台不退出
	return 0;
}
```

#### 4. 有3个整数a, b, c，由键盘输入，输出其中最大的数

```c
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && a == c) {
        printf("Three numbers are equal\n");
    }else if (a == b && a > c) {
        printf("a and b are the largest number\n", a); 
    }else if (a == c && a > b) {
        printf("a and c are the largest number\n", a); 
    }else if (b == c && b > a) {
        printf("c and b are the largest number\n", a); 
    }else if (a > b && a > c) {
        printf("a=%d is the largest number\n", a); 
    }else if (b > a && b > c) {
        printf("b=%d is the largest number\n", b); 
    }else {
        printf("c=%d is the largest number\n", c); 
    }   
    return 0;
}
```

#### 5.从键盘输入一个小于1000的正数,要求输出它的平方根(如平方根不是整数，则输出其整数部分)。要求在输入数据后先对其进行检查是否为小于1000 的正数。若不是,则要求重新输入

**解题思路：** 首先判断输入的数字是否大于1000且是正数，然后使用sqrt函数对数据进行取平方根，最主要的是最终在输出是调整输出格式，小数部分为0位，只需要正数部分，且整数部分不会超过4位

```c
#include <stdio.h>
#include <math.h>
int main()
{
	float a, b;
	scanf("%f", &a);
	if (a >= 1000 || a < 0) {
		printf("请输入小于1000的正数\n");
		scanf("%f", &a);
		b = sqrt(a);
	}
	else {
		b = sqrt(a);
	}
	printf("a=%4.0f, b=%4.0f\n", a, b);
	system("pause");//这一句是为了让控制台不退出
	return 0;
}
```

#### 9. 给一个不多于5位的正整数,要求:

#### ①求出它是几位数;

#### ②分别输出每一位数字;

#### ③按逆序输出各位数字

```c
#include <stdio.h>
int main()
{
	int num;
	printf("enter num:");
	scanf_s("%d", &num);
	if (num > 99999 || num < 0) {
		printf("请输入0~99999之间的正数\n");
		return -1;
	}
	if (num >= 10000) {
		printf("5\n");
	}else if (num >= 1000) {
		printf("4\n");
	}else if (num >= 100) {
		printf("3\n");
	}else if (num >= 10) {
		printf("2\n");
	}else {
		printf("1\n");
	}
	system("pause");
	return 0;
}
```

```c
#include <stdio.h>
int main()
{
	int num;
	printf("enter num:");
	scanf_s("%d", &num);
	if (num > 99999 || num < 0) {
		printf("请输入0~99999之间的数字\n");
		return -1;
	}
	if (num / 10000 > 0) {//取出万位数字
		printf("%d ", num / 10000);
	}
	if (num%10000 >= 1000) {//取余10000则可以取出低四位的数据，除以1000则得到千位的数字
		printf("%d ", (num % 10000) / 1000);
	}
	if (num%1000 >= 100) {//取余1000则可以取出低三位的数据，除以100则得到百位的数字
		printf("%d ", (num % 1000) / 100);
	}
	if (num%100 >= 10) {//取余100则可以取出低两位的数据，除以10则得到十位的数字
		printf("%d ", (num % 100) / 10);
	}
	if (num%10 >= 0) {//取余10则取出个位数字
		printf("%d ", num % 10);
	}
	printf("\n");
	system("pause");
	return 0;
}
```

```c
#include <stdio.h>
int main()
{
	int num;
	printf("enter num:");
	scanf_s("%d", &num);
	if (num > 99999 || num < 0) {
		printf("请输入0~99999之间的数字\n");
		return -1;
	}
	if (num % 10 >= 0) {
		printf("%d ", num % 10);
	}
	if (num % 100 >= 10) {
		printf("%d ", (num % 100) / 10);
	}
	if (num % 1000 >= 100) {
		printf("%d ", (num % 1000) / 100);
	}
	if (num % 10000 >= 1000) {
		printf("%d ", (num % 10000) / 1000);
	}
	if (num / 10000 > 0) {
		printf("%d ", num / 10000);
	}
	printf("\n");
	system("pause");
	return 0;
}
```

#### 11. 输入4个整数，要求按由小到大的顺序输出

```c
#include <stdio.h>
int main()
{
	int a, b, c, d;
	int max_num;
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	int tmp;
	//找到最小的数
	if (a > b) {
		tmp = a; a = b; b = tmp; // a>b两个数据交换,则给a存储小的b
	}
	if (a > c) {
		tmp = a; a = c; c = tmp;
	}
	if (a > d) {
		tmp = a; a = d; d = tmp;
	}
	//找到第二小的数，不需要和最小的数比较
	if (b > c) {
		tmp = b; b = c; c = tmp;
	}
	if (b > d) {
		tmp = b; b = d; d = tmp;
	}
	//找到第三小的数据，不需要和第一和第二小比较
	if (c > d) {
		tmp = c; c = d; d = tmp;
	}
	printf("%d %d %d %d\n", a, b, c, d);
	system("pause");
	return 0;
}
```

