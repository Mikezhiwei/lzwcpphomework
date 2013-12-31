#include<iostream>
#include<stdlib.h>

using std::endl;
using std::cout;
using std::cin;
int & sum(int a[],int n)
{
	  int sum=0;
	  for(int i=0;i<n;i++)
	  {
		  sum+=a[i];
	  }
	  return(sum);
}
int main()
{
	int a[]={1,2,3};
	int &s=sum(a,3);
	cout<<s<<endl;
    system("pause");
}
