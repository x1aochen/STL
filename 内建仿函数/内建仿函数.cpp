#include "stdafx.h"
#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>
using namespace std;

//算术仿函数
void test1()
{   //negate 一元仿函数，取反仿函数
	negate<int>n;
	cout << n(50) <<endl;

	//plus 二元函数，加法
	plus<int>p;
	cout << p(10,20) <<endl;
	//减法 minus<T>  乘法 multiplies<T>  除法 divides<T>  取模 modulus<T> 
}

//关系仿函数
void test2()
{
	//greater<T>大于 equal_to<T>等于 not_equal_to<T>不等于 greater_equal<T>大于等于	less<T>小于 less_equal<T>小于等于	
	vector<int>v;
	v.push_back(2);
	v.push_back(1);
	v.push_back(3);
	v.push_back(4);

	sort(v.begin(),v.end(),greater<int>());

	for( vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

}

//逻辑仿函数
void test3()
{
	 //logical_not; 
	 //logical_and;
	 //logical_or;
}

void main()
{
	test1();

	test2();

	test3();
}
