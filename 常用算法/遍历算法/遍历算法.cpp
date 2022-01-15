#include "stdafx.h"
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

void printf1(int val)
{
	cout << val << " ";
}

class printf2
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void ForEach()
{
	vector<int>v;
	for(int i=0; i<10; i++)
	{
		v.push_back(i);
	}
	//普通函数
	for_each(v.begin(),v.end(),printf1);
	cout<<endl;
	//仿函数
	for_each(v.begin(),v.end(),printf2());
	cout<<endl;

}
/**********************************/
class Trans
{
public:
	int operator()(int val)
	{
		return val;
	}
};
//搬运
void Transform()
{
	vector<int>v1;
	for(int i=0; i<10; i++)
	{
		v1.push_back(i);
	}
	
	vector<int>v2;//目标容器
	v2.resize(v1.size());//需提前开辟空间

	transform(v1.begin(),v1.end(),v2.begin(),Trans());

	for_each(v2.begin(),v2.end(),printf1);
	cout<<endl;
}

void main()
{
	//ForEach();

	//Transform();

}
