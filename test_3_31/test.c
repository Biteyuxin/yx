#define _CRT_SECURE_NO_WARNINGS//在源文件的第一行放上这么一句话
////标准函数写法   
#include<stdio.h>//调用函数库（打招呼） （标准输入输出）
//int main()//C语言代码中一定要有main函数（主函数）
//{
//	printf("hehe\n");//printf是一个库函数，专门用来打印数据
//	return 0;
//}
////古老的函数，过时的写法
////void main()
////{
////
////}

//数据类型及大小
//char 字符型
//short 短整型
//int   整型
//long  长整型
//long long 更长的整型
//float 单精度浮点型
//double  双精度浮点型
//int main()
//{
//	printf("%zu\n", sizeof(char));
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(int));//sizeof(int)<=sizeof(long)
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//	return 0;
//}

//int main()
//{
//	int age = 20;//向内存申请空间存储数据
//	double price = 66.6;//精度高用double反之用float
//
//	return 0;
//}

//变量与常量的概念（在同一范围内，变量只能定义一次）
//int b = 12;//在大括号外部定义的变量叫全局变量
//int a = 100;
//int main()
//{
//	//short age = 20;//定义了不同的变量
//	//int hight = 180;
//	//float weight = 88.5;
//	int a = 10;//大括号内部定义的变量叫局部变量
//	printf("%d\n", a);//全局变量和局部变量可以相同，当全局变量和局部变量名字相同的情况下，局部优先（但是不建议写成一样）
//	return 0;
//}
//变量分为局部变量和全局变量

//写一个代码计算两个数的和（变量的运用）
//int main()
//{
//	int num1 = 0;//初始化，负责是随机值
//	int num2 = 0;
//	//输入两个整数，计算求和，输出结果
//	scanf("%d %d", &num1, &num2);//scanf是一个输入函数
//	//scanf_s这个函数是VS自己提供的函数，非标准C提供的函数，那也就是只有VS编译器自己认识
//	//我们建议使用scanf
//	int sum = num1 + num2;
//	printf("%d", sum);
//	return 0;
//}

//一、变量的作用域
// 1.局部变量
// 就是变量所在的局部范围（所在的大括号之内）
// 这里定义了两个不同局部范围的变量
//int main()
//{
//	{
//		int a = 10;
//		printf("%d", a);
//	}
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	{
//		printf("%d", a);
//	}
//	printf("%d", a);
//	return 0;
//}
// 2.全局变量
// 全局变量的作用域是整个工程
// 声明来自外部符号
// extern int a;
//int main()
//{
//	{
//		printf("%d", a);
//	}
//	printf("%d", a);
//	return 0;
//}
//二、变量的生命周期
//一个人的生命周期是从出生到死亡
//变量的生命周期呢？
//1.局部变量的生命周期
//int main()
//{
//	{
//		int a = 100;//进入作用域生命周期开始
//		printf("%d", a);
//	}//出作用域生命周期结束
//	printf("%d", a);
//	return 0;
//}
//2.全局变量的生命周期
// 全局变量可以说是整个程序的生命周期
// int a = 10;
//int main()
//{
//	{
//		int a = 100;
//	}
//	printf("%d", a);
//	return 0;
//}

//变量的作用域≈生命周期