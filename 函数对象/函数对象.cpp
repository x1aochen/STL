#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

//1.函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
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

//2.函数对象超出普通函数的概念，函数对象可以有自己的状态 
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

//3.函数对象可以作为参数传递
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


