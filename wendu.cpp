// wendu.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
using  namespace std;
float  changed(float* c);

int  main(int argc, _TCHAR* argv[])
{
	cout<<"please input the degree Fahrenheit"<<endl;
	float  a,b;
	cin>>a;
	b=changed(&a);
	cout<<"after changde the degree Fahrenheit is "<<endl;
	cout<<b<<endl;
	system("pause");
	return 0;
}
float  changed(float* c)
{
	  return ((9.0/5.0)*(*c)+32.0);
}

