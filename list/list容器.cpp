#include "stdafx.h"
#include<iostream>
#include<list>
#include<string>
using namespace std;

void printf(const list<int>&L)
{
	for(list<int>::const_iterator it=L.begin();it!=L.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
}

void structure()
{
	list<int>L1;
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(3);
	L1.push_back(4);
	printf(L1);

	//section
	list<int>L2(L1.begin(),L1.end());
	printf(L2);

	//copy
	list<int>L3(L2);
	printf(L3);

    //n个elem
	list<int>L4(5,10);
	printf(L4);
}

void assignment()
{
	list<int>L1;
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(3);
	L1.push_back(4);
	printf(L1);
	
	list<int>L2;
	L2=L1;

	list<int>L3;
	L3.assign(L2.begin(),L2.end());

	list<int>L4;
	L4.assign(5,10);

}

void swap()
{
	list<int>L1;
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(3);
	L1.push_back(4);
	printf(L1);

	list<int>L2;
	L2.assign(5,10);
	printf(L2);

	L1.swap(L2);
	printf(L1);
	printf(L2);
}

void size()
{
	list<int>L1;
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(3);
	L1.push_back(4);
	printf(L1);

	if(L1.empty())
	{
		cout<<"L1 empty"<<endl;
	}
	else
	{
		cout<<"L1 not empty"<<endl;
		cout<<"L1.size:"<<L1.size()<<endl;
	}

	//L1.resize(10);
	//printf(L1);//1234000000

	L1.resize(10,1);
	printf(L1); //1234111111

}

void InsertDelete()
{
	list<int>L1;
	L1.push_back(3);
	L1.push_back(4);
	L1.push_front(2);
	L1.push_front(1);
	printf(L1);

	L1.pop_back();
	printf(L1); //123

	L1.pop_front();
	printf(L1); //23

	L1.insert(L1.begin(),1);
	printf(L1); //123

	list<int>::iterator it=L1.begin();
	L1.insert(++it,0);
	printf(L1); //1023

	it=L1.begin();
	L1.erase(++it);
	printf(L1); //123

	L1.remove(1);
	printf(L1);//23

	L1.clear();
	printf(L1);
}

void DataAccess()
{
	list<int>L1;
	L1.push_back(3);
	L1.push_back(4);
	L1.push_front(2);
	L1.push_front(1);
	printf(L1);

	cout<<"the first data:"<<L1.front()<<endl;
	cout<<"the end data:"<<L1.back()<<endl;

	list<int>::iterator it=L1.begin();
	it++;it--;//支持双向
    //it=it+1; //不支持随机访问
}

bool Compare(int L1,int L2)
{
	//降序
	return L1>L2;
}

void ReverseSort()
{
	list<int>L1;
	L1.push_back(4);
	L1.push_back(3);
	L1.push_front(1);
	L1.push_front(2);
	printf(L1);

	L1.reverse();//反转
	printf(L1);

	L1.sort();//不支持随机访问迭代器的容器，内部提供对应算法
	printf(L1);

	L1.sort(Compare);//制定排序规则
	printf(L1);
}



class person{
public:
	string m_name;
	int m_age;
	int m_height;
public:
	person(string name,int age,int height)
	{
		this->m_name=name;
		this->m_age=age;
		this->m_height=height;
	}
};

bool compare(person&p1,person&p2)
{
	if(p1.m_age==p2.m_age)
	{
		return p1.m_height>p2.m_height;
	}
	return p1.m_age<p2.m_age;
}

void test()
{
	//年龄升序，年龄相等则身高降序
	list<person>L;

	person p1("A",10,100);
	person p2("B",10,110);
	person p3("C",12,130);
	person p4("D",13,140);
	person p5("E",10,120);

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	
	for(list<person>::iterator it=L.begin();it!=L.end();it++)
	{
		cout<<"name: "<<it->m_name<<" age: "<<it->m_age<<" height: "<<it->m_height<<endl;
	}

	L.sort(compare);//自定义类型需制定排序规则
	cout<<"after sorting:"<<endl;
	for(list<person>::iterator it=L.begin();it!=L.end();it++)
	{
		cout<<"name: "<<it->m_name<<" age: "<<it->m_age<<" height: "<<it->m_height<<endl;
	}
}



void main()
{
	//structure();

	//assignment();

	//swap();

	//size();

	//InsertDelete();

	//DataAccess();

	//ReverseSort();

	//test();
}
