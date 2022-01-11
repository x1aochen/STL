#include "stdafx.h"
#include<iostream>
#include<queue>
#include<string>
using namespace std;

class person{
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

void main()
{
	queue<person>q;

	person p1("A",10);
	person p2("B",20);
	person p3("C",30);
	person p4("D",40);

	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	cout<<q.size()<<endl;

	while(!q.empty())
	{
		cout<<"head.name&age: "<<q.front().m_name<<" "<<q.front().m_age<<endl;

		cout<<"end.name&age: "<<q.back().m_name<<" "<<q.back().m_age<<endl;

		q.pop();
	}
	
	cout<<q.size()<<endl;


}

