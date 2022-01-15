#include "stdafx.h"
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
//找到返回制定元素的迭代器，找不到返回end()
class person
{
public:
	person(string name,int age)
	{
		this->m_name=name;
		this->m_age=age;
	}
	//重载== 否则编译器不知道如何对比自定义数据类型
	bool operator==(const person&p)
	{
		if( this->m_name == p.m_name && this->m_age == p.m_age )
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	string m_name;
	int m_age;
};

void Find()
{
	vector<int>v1;
	for(int i=0; i<10; i++)
	{
		v1.push_back(i);
	}

	vector<int>::iterator it = find(v1.begin(),v1.end(),5);
	if( it == v1.end() )
	{
		cout<<" not find "<<endl;
	}
	else
	{
		cout<<*it<<endl;
	}

	vector<person>v2;

	person p1("A",10);
	person p2("B",20);
	person p3("C",30);
	person p4("D",40);

	v2.push_back(p1);
	v2.push_back(p2);
	v2.push_back(p3);
	v2.push_back(p4);
	
	person p5("A",10);

	vector<person>::iterator itt = find(v2.begin(),v2.end(),p5);
	if( itt == v2.end() )
	{
		cout<<" not find "<<endl;
	}
	else
	{
		cout<< itt->m_name << " " << itt->m_age <<endl;
	}
}
/*********************************/
class Greater
{
public:
	bool operator()(int val)
	{
		return val>5;
	}
};

class Greater20
{
	public:
	bool operator()(person &p)
	{
		return p.m_age>20;
	}
};

void FindIf()
{
	vector<int>v;
	for(int i=0; i<10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator it = find_if(v.begin(),v.end(),Greater());
	if( it == v.end() )
	{
		cout<<" not find "<<endl;
	}
	else
	{
		cout<<*it<<endl;
	}

	vector<person>v1;

	person p1("A",10);
	person p2("B",20);
	person p3("C",30);
	person p4("D",40);

	v1.push_back(p1);
	v1.push_back(p2);
	v1.push_back(p3);
	v1.push_back(p4);

	vector<person>::iterator itt = find_if(v1.begin(),v1.end(),Greater20());
	cout<< itt->m_name << " " << itt->m_age <<endl;
}
/*******************************/
//查找相邻重复的元素，返回第一个元素的迭代器，没有返回end()
void AdjancentFind()
{
	vector<int>v;
	v.push_back(0);
	v.push_back(2);
	v.push_back(0);
	v.push_back(3);
	v.push_back(1);
	v.push_back(3);
	v.push_back(3);
	
	vector<int>::iterator it = adjacent_find(v.begin(),v.end());
    cout<< *it <<endl;
}
/***********************************/
//查找元素是否存在 返回true 否则false
//必须在无序序列中不可用
void BinarySearch()
{
	vector<int>v;
	for(int i=0; i<10; i++)
	{
		v.push_back(i);
	}

	bool ret = binary_search(v.begin(),v.end(),9);
}
/**********************************/
//统计个数

class person1
{
public:
	person1(string name,int age)
	{
		this->m_name=name;
		this->m_age=age;
	}
	//重载== 否则编译器不知道如何对比自定义数据类型
	bool operator == (const person1&p)
	{
		if( this->m_age == p.m_age )
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	string m_name;
	int m_age;
};

void Count()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	int c = count(v.begin(),v.end(),1);
	cout << c <<endl;

	vector<person1>v1;

	person1 p1("A",10);
	person1 p2("B",10);
	person1 p3("C",30);
	person1 p4("D",40);
	person1 p5("E",10);

	v1.push_back(p1);
	v1.push_back(p2);
	v1.push_back(p3);
	v1.push_back(p4);
	//v1.push_back(p5);

	int num = count(v1.begin(),v1.end(),p5);
	cout << num << endl;
}

// CountIf() 条件判断

void main()
{
	//Find();

	//FindIf();

	//AdjancentFind();

	//BinarySearch();

	//Count();
}
