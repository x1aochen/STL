#include "stdafx.h"
#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>
using namespace std;

//�����º���
void test1()
{   //negate һԪ�º�����ȡ���º���
	negate<int>n;
	cout << n(50) <<endl;

	//plus ��Ԫ�������ӷ�
	plus<int>p;
	cout << p(10,20) <<endl;
	//���� minus<T>  �˷� multiplies<T>  ���� divides<T>  ȡģ modulus<T> 
}

//��ϵ�º���
void test2()
{
	//greater<T>���� equal_to<T>���� not_equal_to<T>������ greater_equal<T>���ڵ���	less<T>С�� less_equal<T>С�ڵ���	
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

//�߼��º���
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
