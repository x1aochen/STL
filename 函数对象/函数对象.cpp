#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

//1.����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
class myadd
{
public:
	int operator ()(int v1,int v2)
	{
		return v1+v2;
	}

};

void test1()
{
	myadd add;
	cout << add(10,10)<<endl;
}

//2.�������󳬳���ͨ�����ĸ����������������Լ���״̬ 
class myprintf
{
public:
	myprintf()
	{
		this->count=0;
	}
	void operator()(string test)
	{
		cout << test << endl;
		count++;
	}
	int count;
};

void test2()
{
	myprintf printf;
	printf("hello world");
	printf("hello world");
	printf("hello world");
	cout << printf.count <<endl;
}

//3.�������������Ϊ��������
void Printf(myprintf &m,string t)
{
	m(t);
}

void test3()
{
	myprintf printf;
	Printf(printf,"hello C++");
}

void main()
{
	//test1();

	//test2();

	test3();
}


