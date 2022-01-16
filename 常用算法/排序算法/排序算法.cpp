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

void Sort()
{
	vector<int>v;
	v.push_back(2);
	v.push_back(1);
	v.push_back(3);
	v.push_back(4);

	sort(v.begin(),v.end());

	for_each(v.begin(),v.end(),Printf);
	cout<<endl;

	sort(v.begin(),v.end(),greater<int>());

	for_each(v.begin(),v.end(),Printf);
	cout<<endl;
}
/************************************/
//洗牌算法
void  RandomShuffle()
{
	vector<int>v;
	for(int i=0;i<10;i++)
	{
		v.push_back(i);
	}

	random_shuffle(v.begin(),v.end());
	
	for_each(v.begin(),v.end(),Printf);
	cout<<endl;

}
/************************************/
//两个容器元素合并，并存储到另一个容器中
void Merge()
{
	vector<int>v1;
	for(int i=0;i<5;i++)
	{
		v1.push_back(i);

	}

	vector<int>v2;
	for(int i=5;i<10;i++)
	{
		v1.push_back(i);
	}

	vector<int>v;
	//提前分配大小
	v.resize(v1.size()+v2.size());

	merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());
	
	for_each(v.begin(),v.end(),Printf);
}
/*************************************/
void Reverse()
{
	vector<int>v1;
	for(int i=0;i<5;i++)
	{
		v1.push_back(i);
	}

	reverse(v1.begin(),v1.end());
	for_each(v1.begin(),v1.end(),Printf);
}

void main()
{
	//Sort();

	//RandomShuffle();

	//Merge();

	//Reverse();
}
