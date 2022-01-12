#include "stdafx.h"
#include<iostream>
#include<string>
#include<map>
using namespace std;
//第一个元素为key（键值），起到索引作用，第二个元素为value（实值）
//所有元素根据key值自动排序
//empty.size,swap

void printf(map<int,string>&m)
{
	for(map<int,string>::iterator it=m.begin();it!=m.end();it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
	cout<<endl;

}

void structure()
{
	map<int,string>m;

	m.insert(pair<int,string>(1,"A"));
	m.insert(pair<int,string>(3,"C"));
	m.insert(pair<int,string>(2,"B"));
	
	m.insert(make_pair(4,"D"));
	m.insert(make_pair(5,"E"));
	m.insert(make_pair(6,"F"));

	m.insert(map<int,string>::value_type(7,"G"));
	m.insert(map<int,string>::value_type(8,"H"));
	m.insert(map<int,string>::value_type(9,"I"));

	m[10]="J";
	m[11]="K";
	m[12]="L";

	cout<<m[13]<<endl;
	printf(m);
}

void Delete()
{
	map<int,string>m;

	m.insert(pair<int,string>(1,"A"));
	m.insert(pair<int,string>(3,"C"));
	m.insert(pair<int,string>(2,"B"));
	
	m.insert(make_pair(4,"D"));
	m.insert(make_pair(5,"E"));
	m.insert(make_pair(6,"F"));

	m.erase(m.begin());

	m.erase(3);
	printf(m);

	m.erase(m.begin(),m.end());

	m.clear();
}

void Find()
{
	map<int,string>m;

	m.insert(pair<int,string>(1,"A"));
	m.insert(pair<int,string>(3,"C"));
	m.insert(pair<int,string>(3,"B"));
	
	m.insert(make_pair(4,"D"));
	m.insert(make_pair(5,"E"));
	m.insert(make_pair(6,"F"));

	map<int,string>::iterator pos = m.find(3);
	if(pos!=m.end())
	{
		cout<<pos->first<<" "<<pos->second<<endl;
	}
	else
	{
		cout<<"not find"<<endl;
	}
	//不允许元素重复，multimap可以
	int num=m.count(3);
	cout<<num<<endl;
}

class mycompare
{
public:
	bool operator()(int v1,int v2)
	{
		return v1>v2;
	}
};

void sort()
{
	map<int,string,mycompare>m;

	m.insert(pair<int,string>(1,"A"));
	m.insert(pair<int,string>(2,"C"));
	m.insert(pair<int,string>(3,"B"));

	for(map<int,string,mycompare>::iterator it=m.begin();it!=m.end();it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
	cout<<endl;
}

void main()
{
	//structure();

	//Delete();

	//Find();

	sort();
}