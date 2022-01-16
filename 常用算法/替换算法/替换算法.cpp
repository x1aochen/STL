#include "stdafx.h"
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<functional>
using namespace std;

void Printf(int val)
{
	cout << val << " ";
}

void Copy()
{
	vector<int>v1;
	for(int i=0;i<5;i++)
	{
		v1.push_back(i);
	}

	vector<int>v2;
	v2.resize(v1.size());

	copy(v1.begin(),v1.end(),v2.begin());

	for_each(v1.begin(),v1.end(),Printf);
}
/*****************************/
class Greater3
{
public:
	bool operator()(int val)
	{
		return val>3;
	}
};

void Replace()
{
	vector<int>v1;
	for(int i=0;i<5;i++)
	{
		v1.push_back(i);
	}

	replace(v1.begin(),v1.end(),2,20);

	for_each(v1.begin(),v1.end(),Printf);
	cout<<endl;

	vector<int>v2;
	for(int i=0;i<5;i++)
	{
		v2.push_back(i);
	}

	replace_if(v2.begin(),v2.end(),Greater3(),30);

	for_each(v2.begin(),v2.end(),Printf);
}
/*******************************/
void Swap()
{
	vector<int>v1;
	for(int i=0;i<5;i++)
	{
		v1.push_back(i);
	}

	vector<int>v2;
	for(int i=5;i<10;i++)
	{
		v2.push_back(i);
	}

	swap(v1,v2);
	for_each(v1.begin(),v1.end(),Printf);
	cout<<endl;
	for_each(v2.begin(),v2.end(),Printf);
}

void main()
{
	//Copy();

	//Replace();

	Swap();
}
