#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
//2022.4.1 
//����
//1.���泣��
//2.const���εĳ�����
//3.define����ı�ʶ������
//4.ö�ٳ���
int main()
{
	//30
	//3.14
	//'w'
	//"abc"
	const int a = 10;//const:��ֹ����������(const���εĳ�����,�����Ǳ������ܱ��޸ģ����г���������))
	a = 30;
	printf("%d", a);
    int n = 10;
	int arr[10] = { 0 };//��������Ҫ���ǳ���

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
	//ö�ٳ���
	//Red,
	//Green,
	//Blue
};//ö�ٳ����ǲ��ܱ����ĵ�
int main()
{
	//��ԭɫ
	//RGB
	int num = 10;
	enum Color c = Red;
	return 0;
}





//�ַ���
int main()
{
	char ch = 'w';//�ַ�
	char arr1[10] = "abcde";//˫������������һ���ַ����ַ���,���ַ���������洢
		//c������û���ַ������ͣ�����˫������������һ���ַ����ַ���
	//�ַ�����ĩβ������һ��"\0"
	char arr2[] = {'a','b','c','d'};
	printf("%s\n", arr1);
	printf("%s", arr2);
	return 0;
}





//ת���ַ�
//�����и�����ĸ�ʣ�����--> ],��\?���Է�ֹ��������ĸ��
int main()
{
	printf("%s",(are you ok/* ??)*/)//���ܻ��ӡ��С����
	%c��%d��%s��%f��%lf
	printf("%c", '\'');ת�嵥���ţ���ʾ�ַ�������˫���ŷ�����ͬ
	printf("abcd\\0ef");//ת��\0
	printf("\a");//\a��������
	printf("\t");//ˮƽ�Ʊ�����൱һ��tab
	printf("\r");//\r�س�
	printf("%c",'\130');//�˽��ƶ�Ӧ��ʮ���ƶ�Ӧ��ASCII�� \ddd
	printf("%c",'\x60');//ʮ�����ƶ�Ӧ��ʮ���ƶ�Ӧ��ASCII��\cdd
	return 0;
}
//ע�ͣ����ڴ��뱾��û�м�ֵ����ע���� /**/��//
//1. ע�Ϳ�����������
//2. �Ը��ӵĴ�����н���
//3. д�����ʱ��дע�ͣ��ǰ����Լ����������˵�





//ѡ�����
int main()
{
	int input;
	printf("�������\n");
	printf("��Ҫ�ú�ѧϰ��");
	scanf("%d", &input);
	if (input == 1)
		printf("��offer");
	else
		printf("������");
	return 0;
}
//ѭ�����
int main()
{
	int line = 0;
	printf("�������\n");
	printf("д����\n");
	while (line < 1000)
	{
		printf("д����\n");
		line++;
	}
	if (line == 1000)
		printf("��offer");
	else
		printf("��������\n");
	return 0;
}




//c�����ǽṹ���ĳ���������ԣ��޷Ǿ���
//-˳��ṹ
//-ѡ��ṹ
//-ѭ���ṹ




����
int ADD(int x,int y)
{
	int z = 0;
	z = x + y;
}
int main()
{
	int n1 = 0;
	int n2 = 0;
	//����
	scanf("%d %d", &n1, &n2);
	//���
	int sum = ADD(n1,n2);
	//��ӡ
	printf("%d", sum);
	return 0;
}




����
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