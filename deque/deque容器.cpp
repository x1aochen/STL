#include "stdafx.h"
#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

void printf(deque<int>&d)
{
	for(deque<int>::iterator it=d.begin();it!=d.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
}

void structure()
{
	deque<int>d1;
	for(int i=0;i<5;i++)
	{
		d1.push_back(i);
	}
	printf(d1);	

	deque<int>d2(d1.begin(),d1.end());
	printf(d2);

	deque<int>d3(5,10);//10 10 10 10 10
	printf(d3);

	deque<int>d4(d3);
	printf(d4);
}

void assignment()
{
	deque<int>d1;
	for(int i=0;i<5;i++)
	{
		d1.push_back(i);
	}
	printf(d1);

	//operator = 
	deque<int>d2;
	d2=d1;
    printf(d2);

	//assign
	deque<int>d3;
	d3.assign(d1.begin(),d1.end());
	printf(d3);

	deque<int>d4;
	d4.assign(5,10);
	printf(d4);
}
//deque容器没有容量概念
void size()
{
	deque<int>d1;
	for(int i=0;i<5;i++)
	{
		d1.push_back(i);
	}
	printf(d1);

	if(d1.empty())
	{
		cout<<"d1 empty"<<endl;
	}
	else
	{
		cout<<d1.size()<<endl;
	}

	d1.resize(10);
	d1.resize(10,1);//0123411111
	printf(d1);
	d1.resize(3);//012
	printf(d1);
}

void InsertDelete1()
{
	deque<int>d1;
	for(int i=0;i<5;i++)
	{
		d1.push_back(i);
	}
	printf(d1);

	d1.push_front(10);
	printf(d1);

	d1.pop_back();//只删除一个
	printf(d1);

	d1.pop_front();
	printf(d1);	
}

void InsertDelete2()
{
	deque<int>d2;
	for(int i=0;i<5;i++)
	{
		d2.push_back(i);
	}

	d2.insert(d2.begin(),100);
	printf(d2);

	d2.insert(d2.begin(),2,200);
    printf(d2);

	deque<int>d3;
	for(int i=0;i<5;i++)
	{
		d3.push_back(i);
	}
	printf(d3);
	 
	d3.insert(d3.begin(),d2.begin(),d2.end());
	printf(d3);

}

void InsertDelete3()//delete
{
	deque<int>d3;
	for(int i=0;i<5;i++)
	{
		d3.push_back(i);
	}

	deque<int>::iterator it=d3.begin();
	it++;
	d3.erase(it);
	printf(d3);//0234

	//clear all
	d3.clear();
}

void DataAccess()
{
	deque<int>d1;
	for(int i=0;i<5;i++)
	{
		d1.push_back(i);
	}
	
	for(int i=0;i<d1.size();i++)
	{
		cout<<d1[i]<<" ";
	}
	cout<<endl;

	for(int i=0;i<d1.size();i++)
	{
		cout<<d1.at(i)<<" ";
	}
	cout<<endl;

	cout<<"the first data"<<d1.front()<<endl;

	cout<<"the last data"<<d1.back()<<endl;
}

void sort()
{
	deque<int>d1;
	for(int i=5;i>0;i--)
	{
		d1.push_back(i);
	}

	sort(d1.begin(),d1.end());
	printf(d1);//12345
	
}


void main()
{
	//structure();

	//assignment();

	//size();

	//InsertDelete1();

	//InsertDelete2();

	//InsertDelete3();

	//DataAccess();

	//sort();
}

