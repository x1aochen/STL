#include "stdafx.h"
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<functional>
#include<numeric>
using namespace std;

void Printf(int val)
{
	cout << val << " ";
}

void Set()
{
	vector<int>v1;
	vector<int>v2;
	for(int i=0;i<10;i++)
	{
		v1.push_back(i);
		v2.push_back(i+5);
	}
	
	vector<int>v;
	//最特殊情况既是大容器包含小容器，所以取最小容器大小
	v.resize(min(v1.size(),v2.size()));
	//获取交集,返回迭代器
	vector<int>::iterator it = set_intersection (v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());

	for_each(v.begin(),it,Printf);//结束点使用返回的迭代器，因为v.size可能过大
	cout<<endl;
/*****************************************************************/
	//并集，最特殊情况，两个容器没有交集，容量为两个相加
	v.resize(v1.size()+v2.size());

	vector<int>::iterator itend = set_union (v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());

	for_each(v.begin(),itend,Printf);
	cout<<endl;
/*****************************************************************/
	//差集，最特殊情况，两个容器没有交集，取两个中最大的size
	v.resize(max(v1.size(),v2.size()));

	vector<int>::iterator itt = set_difference (v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());
	cout<<"v1和v2的差集：";
	for_each(v.begin(),itt,Printf);
	cout<<endl;

	vector<int>::iterator ittt = set_difference (v2.begin(),v2.end(),v1.begin(),v1.end(),v.begin());
	cout<<"v2和v1的差集：";
	for_each(v.begin(),ittt,Printf);
	cout<<endl;

}

void main()
{
	Set();
}