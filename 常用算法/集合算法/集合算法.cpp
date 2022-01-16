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
	//������������Ǵ���������С����������ȡ��С������С
	v.resize(min(v1.size(),v2.size()));
	//��ȡ����,���ص�����
	vector<int>::iterator it = set_intersection (v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());

	for_each(v.begin(),it,Printf);//������ʹ�÷��صĵ���������Ϊv.size���ܹ���
	cout<<endl;
/*****************************************************************/
	//�������������������������û�н���������Ϊ�������
	v.resize(v1.size()+v2.size());

	vector<int>::iterator itend = set_union (v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());

	for_each(v.begin(),itend,Printf);
	cout<<endl;
/*****************************************************************/
	//����������������������û�н�����ȡ����������size
	v.resize(max(v1.size(),v2.size()));

	vector<int>::iterator itt = set_difference (v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());
	cout<<"v1��v2�Ĳ��";
	for_each(v.begin(),itt,Printf);
	cout<<endl;

	vector<int>::iterator ittt = set_difference (v2.begin(),v2.end(),v1.begin(),v1.end(),v.begin());
	cout<<"v2��v1�Ĳ��";
	for_each(v.begin(),ittt,Printf);
	cout<<endl;

}

void main()
{
	Set();
}