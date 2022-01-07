#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;

void printf(vector<int>&v)
{
	for(vector<int>::iterator it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
}

void Structure()
{
	//default ctor
	vector<int> v1;
	for(int i=0;i<5;i++)
	{
		v1.push_back(i);
	}
    printf(v1);

	//by interval
	vector<int>v2(v1.begin(),v1.end());
	printf(v2);

	vector<int>v3(5,1);
	printf(v3);

	//copy ctor
	vector<int>v4(v3);
	printf(v4);

	//赋值
	vector<int>v5; 
	v5=v1;
	printf(v5);

	vector<int>v6; 
	v6.assign(v1.begin(),v1.end());
	printf(v6);

	vector<int>v7;
	v7.assign(5,6);
	printf(v7);
}

void CapacitySzie()
{
	vector<int> v1;
	for(int i=0;i<5;i++)
	{
		v1.push_back(i);
	}
	//判断是否为空
	if(v1.empty())
	{
		cout<<"v1 empty"<<endl;
	}
	else
	{
		cout<<"v1 not empty"<<endl;
		cout<<"v1 have:"<<v1.capacity()<<endl;
		cout<<"v1.size="<<v1.size()<<endl;
	}
	//重置容器元素个数
	v1.resize(8,1);
	printf(v1);

	v1.resize(3);
	printf(v1);
}

void InsertDelete()
{

	vector<int> v1;
	//尾插
	v1.push_back(0);
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	printf(v1);

	//尾删
	v1.pop_back();
	printf(v1);

	//insert
	v1.insert(v1.begin(),10);
	printf(v1);

	v1.insert(v1.begin(),2,20);
	printf(v1);

	//delete
	v1.erase(v1.begin());
	printf(v1);

	//清空
	//v1.erase(v1.begin(),v1.end());
	v1.clear();
	printf(v1);
}

void DataAccess()
{
	//get data
	vector<int>v1;
	for(int i=0;i<5;i++)
	{
		v1.push_back(i);
	}

	cout<<v1.size()<<endl;

	for(int i=0;i<5;i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<endl;
 
    for(int i=0;i<5;i++)
	{
		cout<<v1.at(i)<<" ";
	}
	cout<<endl;
    
	//get first data
	cout<<v1.front()<<endl;

	//get last data
	cout<<v1.back()<<endl;
}

void swap()
{
	vector<int> v1;
	for(int i=0;i<5;i++)
	{
		v1.push_back(i);
	}

	vector<int> v2;
	for(int i=5;i>0;i--)
	{
		v2.push_back(i);
	}

	v1.swap(v2);
	printf(v1);
	printf(v2);
}

void ShrinkMemory()
{	
	vector<int>v;
	for(int i=0;i<10000;i++)
	{
		v.push_back(i);
	}
	cout<<v.capacity()<<endl;
	cout<<v.size()<<endl;

	v.resize(3);
	cout<<v.capacity()<<endl;
	cout<<v.size()<<endl;

	vector<int>(v).swap(v);

	cout<<v.capacity()<<endl;
	cout<<v.size()<<endl;
}

void ReserveSpace()
{
	vector<int>v;

	//v.reserve(10000); //提前预留出空间，节省了后续开辟次数
	int num=0; //动态内存开辟次数
	int *p=NULL;

	for(int i=0;i<10000;i++)
	{
		v.push_back(i);
		if(p!=&v[0])  //当开辟一次新内存时，p！=首地址
		{
			p=&v[0];
			num++;
		}
	}
	cout<<num<<endl;
}


int main()
{
	//Structure();

	//CapacitySzie();

	//InsertDelete();

	//DataAccess();

	//swap();

	//ShrinkMemory();

	//ReserveSpace();

}
