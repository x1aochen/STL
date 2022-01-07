#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;


void Find()
{
    string str1="abcdefgef";
	int pos=str1.find("df");
	if(pos==-1)
	 cout<<"string not found"<<endl;
	else  
	 cout<<"string found"<<pos<<endl;

	//rfind:find from right to left
	pos=str1.rfind("ef");
	 cout<<pos<<endl;
}


void Replace()
{
	string str1="abcdef";
    
	str1.replace(1,3,"1111");
	
	cout<<str1<<endl;//a1111ef
}


void Compare()
{
	string str1="hello";
	string str2="hello";
    
	if(str1.compare(str2)==0)
	{cout<<"str1=str2"<<endl;}
	else if(str1.compare(str2)>0)
	{cout<<"str1>str2"<<endl;}
	else
	{cout<<"str1<str2"<<endl;}
}


void Access()
{   
	//read single char
	string str1="hello";
	//use[]to call single char
	for(int i=0;i<str1.size();i++)
	{cout<<str1[i]<<endl;}
    
	//use at call
	for(int i=0;i<str1.size();i++)
	{cout<<str1.at(i)<<endl;}

	//write single char
	str1[0]='x';
	str1.at(1)='x';
	cout<<str1<<endl;
}

void InsertDelete()
{
	string str1="hello";
	str1.insert(1,"111");
	cout<<str1<<endl;

	str1.erase(1,4);
	cout<<str1<<endl;
}

void GetSubstring()
{
	string str1="helloworld";
	string substr=str1.substr(0,5);
	cout<<substr<<endl;

	int pos=str1.find("o");

	substr=str1.substr(0,pos);
	cout<<substr<<endl;
}

int main()
{
	Find();

	Replace();

	Compare();

	Access();

	InsertDelete();

	GetSubstring();
}
