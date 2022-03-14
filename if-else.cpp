#include<iostream>
using namespace std;
int main()
{
	int n;
	string b="bunk the college\n", p="party\n";
	cout<<"enter the money given by daddy :";
	cin>>n;
	if(n>=1000)
	{
		cout<<b<<p;
		cout<<"movie";
	}
	else if(n<100&&n>500)
	{
		cout<<b<<p;
	}
	else if(n<=100 and n>=50)
	{
		cout<<b;
	}
	else{
		cout<<"nothing to do. listen the class";
	}
}
