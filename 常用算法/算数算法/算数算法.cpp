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

void Accumulate()
{
	vector<int>v1;
	for(int i=0;i<5;i++)
	{
		v1.push_back(i);
	}
	//参数3为起始累加值

	int total = accumulate(v1.begin(),v1.end(),0);

	cout<< total <<endl;
	for_each(v1.begin(),v1.end(),Printf);
}

void Fill()
{
	vector<int>v1;
	v1.resize(10);
	//重新填充
	fill(v1.begin(),v1.end(),5);

	for_each(v1.begin(),v1.end(),Printf);
}

void main()
{
	//Accumulate();

	Fill();
}
