// zuhe.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
using namespace std;
int  fac(int n);
int  combination(int m,int n);

int main(int argc, _TCHAR* argv[])
{   
	cout<<"please input the value of x and y"<<endl;
	int m,n;
	cin>>m;
	cin>>n;
	if(m>=n)
	{
		cout<<"the value of combination "<<combination(m,n)<<endl;
	}
	else
	{
		 cout<<"input the  numbers is illegal"<<endl;
	}
	system("pause");
	return 0;
}
int fac(int n)
{
	  if(n==1||n==0){
		  return n;
	  }
	  else{
		  n=n*fac(n-1);
	  }
}
int  combination(int m,int n)
{
	     long a=1;
		 int i;
		 for(i=0;i<n;i++)
		 {
			 a=a*(m-i);
		 }
		 return(a/fac(n));
}
