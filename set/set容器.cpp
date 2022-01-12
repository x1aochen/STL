#include "stdafx.h"
#include<iostream>
#include<set>
#include<string>
using namespace std;
//所有数据被插入时自动排序
//关联式容器，底层结构二叉树
//set容器内不允许有重复元素
//multiset允许

void printf(set<int>&s)
{
	for(set<int>::iterator it=s.begin();it!=s.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
}

void structure()
{
	set<int>s1;
	//only use insert
	s1.insert(1);
	s1.insert(3);
	s1.insert(2);
	s1.insert(4);
	printf(s1);

	set<int>s2(s1);
	printf(s2);
}

void SizeSwap()
{
	set<int>s1;
	s1.insert(1);
	s1.insert(3);
	s1.insert(2);
	s1.insert(4);
	printf(s1);

	if(s1.empty())
	{
		cout<<"s1 empty"<<endl;
	}
	else
	{
		cout<<s1.size();
	}

	set<int>s2;
	s1.insert(5);
	s1.insert(7);
	s1.insert(6);
	s1.insert(8);
	printf(s2);

	s1.swap(s2);
	printf(s1);
	printf(s2);

}

void InsertErase()
{
	set<int>s1;
	s1.insert(1);
	s1.insert(3);
	s1.insert(2);
	s1.insert(4);
	s1.insert(5);
	s1.insert(6);

	s1.erase(2);
	
	s1.erase(s1.begin());
    printf(s1);

	s1.clear();
	printf(s1);

}

void find()
{
	set<int>s1;
	s1.insert(0);
	s1.insert(3);
	s1.insert(2);
	s1.insert(4);
	s1.insert(1);

	set<int>::iterator pos=s1.find(3);
	
	if(pos!=s1.end())
	{
		cout<<*pos<<endl;
	}
	else
	{
		cout<<"not find"<<endl;
	}

	int num=s1.count(3);
	cout<<num<<endl;
}

void Set()
{
	set<int>s1;
	s1.insert(1);

	pair<set<int>::iterator,bool> ret = s1.insert(2);
	
	if(ret.second)
	{
		cout<<"insert success"<<endl;
	}
	else
	{
		cout<<"insert fail"<<endl;
	}

	pair<set<int>::iterator,bool> ret1 = s1.insert(2);

	if(ret1.second)
	{
		cout<<"insert success"<<endl;
	}
	else
	{
		cout<<"insert fail"<<endl;
	}

	multiset<int>m;
	m.insert(1);
	m.insert(1);
	for(multiset<int>::iterator it=m.begin();it!=m.end();it++)
	{
		cout<<*it<<endl;
	}
}

void Pair()
{
	pair<string,int> p("A",20);
	cout<<p.first<<" "<<p.second<<endl;

	pair<string,int> p2=make_pair("B",20);
	cout<<p2.first<<" "<<p2.second<<endl;
}

class mycompare	
{
public:
	bool operator()(int v1,int v2)
	{
		return v1>v2;
	}
};

class person
{
public:
	string m_name;
	int m_age;
public:
	person(string name,int age)
	{
		this->m_name=name;
		this->m_age=age;
	}
};

void Sort()
{
	set<int,mycompare>s1;
	//在数据插入之前改变排序规则，利用仿函数
	s1.insert(0);
	s1.insert(3);
	s1.insert(2);
	s1.insert(4);
	s1.insert(1);
	
	for(set<int,mycompare>::iterator it=s1.begin();it!=s1.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	set<person>s;

	person p1("A",10);
	person p2("B",20);
	person p3("C",30);
	person p4("D",40);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for(set<person>::iterator it=s.begin();it!=s.end();it++)
	{
		cout<<it->m_name<<" "<<it->m_age;
	}
}


void main()
{
	//structure();

	//SizeSwap();

	//InsertErase();

	//find();

	//Set();

	//Pair();

	Sort();
}

