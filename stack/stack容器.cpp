#include"stdafx.h"
#include<iostream>
#include<stack>
using namespace std;

void main()
{
	stack<int>s;
    
	s.push(1);
	s.push(2);
	s.push(3);

	while(!s.empty())
	{
		//see stack top
		cout<<"stack top:"<<s.top()<<endl;

		//out of stack
		s.pop();
	}
	cout<<"stack siz:"<<s.size()<<endl;
}
