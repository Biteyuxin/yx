#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
//2022.4.1 
//常量
//1.字面常量
//2.const修饰的常变量
//3.define定义的标识符常量
//4.枚举常量
int main()
{
	//30
	//3.14
	//'w'
	//"abc"
	const int a = 10;//const:防止变量被更改(const修饰的常变量,本质是变量不能被修改，具有常量的属性))
	a = 30;
	printf("%d", a);
    int n = 10;
	int arr[10] = { 0 };//数组中需要的是常量

	return 0;
}
#define MAX 100
#define STR "abcd"
int main()
{
	int a = MAX;
	printf("%d", MAX);
	printf("%s\n", STR);
	return 0;
}

enum Color
{
	//枚举常量
	//Red,
	//Green,
	//Blue
};//枚举常量是不能被更改的
int main()
{
	//三原色
	//RGB
	int num = 10;
	enum Color c = Red;
	return 0;
}





//字符串
int main()
{
	char ch = 'w';//字符
	char arr1[10] = "abcde";//双引号引起来的一串字符叫字符串,用字符类型数组存储
		//c语言中没有字符串类型，所以双引号引起来的一串字符叫字符串
	//字符串的末尾隐藏了一个"\0"
	char arr2[] = {'a','b','c','d'};
	printf("%s\n", arr1);
	printf("%s", arr2);
	return 0;
}





//转义字符
//早期有个三字母词？？）--> ],用\?可以防止出现三字母词
int main()
{
	printf("%s",(are you ok/* ??)*/)//可能会打印出小方块
	%c、%d、%s、%f、%lf
	printf("%c", '\'');转义单引号，表示字符常量，双引号方法相同
	printf("abcd\\0ef");//转义\0
	printf("\a");//\a发出警告
	printf("\t");//水平制表符，相当一个tab
	printf("\r");//\r回车
	printf("%c",'\130');//八进制对应的十进制对应的ASCII码 \ddd
	printf("%c",'\x60');//十六进制对应的十进制对应的ASCII码\cdd
	return 0;
}
//注释：对于代码本身没有价值。标注解释 /**/、//
//1. 注释可以梳理梳理
//2. 对复杂的代码进行解释
//3. 写代码的时候写注释，是帮助自己，帮助别人的





//选择语句
int main()
{
	int input;
	printf("加入比特\n");
	printf("你要好好学习吗？");
	scanf("%d", &input);
	if (input == 1)
		printf("好offer");
	else
		printf("卖红薯");
	return 0;
}
//循环语句
int main()
{
	int line = 0;
	printf("加入比特\n");
	printf("写代码\n");
	while (line < 1000)
	{
		printf("写代码\n");
		line++;
	}
	if (line == 1000)
		printf("好offer");
	else
		printf("继续加油\n");
	return 0;
}




//c语言是结构化的程序设计语言，无非就是
//-顺序结构
//-选择结构
//-循环结构




函数
int ADD(int x,int y)
{
	int z = 0;
	z = x + y;
}
int main()
{
	int n1 = 0;
	int n2 = 0;
	//输入
	scanf("%d %d", &n1, &n2);
	//求和
	int sum = ADD(n1,n2);
	//打印
	printf("%d", sum);
	return 0;
}




数组
	int arr[10] = {10,11,12,13,14,15,16,17,18,19};
	char ch[5];
	double d[30];

	//0~9
	//printf("%d\n", arr[8]);
	int i = 0;
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i = i + 1;
	}

	printf("abc\0def");


	return 0;
}