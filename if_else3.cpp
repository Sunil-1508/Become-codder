#include<bits/stdc++.h>
using namespace std;
int main()
{
	int fee,BC;
	float pre;
	cout<<"enter student details status_BC\n";
	cin>>BC;
	if(BC==0)
	{
		cout<<"SDL FEE =30,000";
	}
	else
	{   pre=(30000-(30000*5)/100);
		cout<<"SDL FEE="<<pre;
	}
}
