#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//һԪν��
class P
{
public:
	bool operator()(int v)
	{
		return v>5;
	}
};

void test1()
{
	vector<int>v;
	for( int i=0; i<10; i++ )
	{
		v.push_back(i);
	}

	//����Ϊ������
	//P(),��������
	vector<int>::iterator it = find_if(v.begin(),v.end(),P());
	if(it == v.end())
	{
		cout<<"not find"<<endl;
	}
	else
	{
		cout<<*it<<endl;
	}
}

//��Ԫν��
class C
{
public:
	bool operator()( int v1,int v2 )
	{
		return v1>v2;
	}

};

void test2()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(2);
	v.push_back(4);

	sort(v.begin(),v.end());
	for( vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	sort(v.begin(),v.end(),C());//ָ����������ṩ�º���
	for( vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
}

void main()
{
	//test1();

	test2();
}

