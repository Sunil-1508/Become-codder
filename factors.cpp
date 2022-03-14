#include<bits/stdc++.h>
using namespace std;
int main()
{ int n,i=2;
 cout<<"enter n \n";
 cin>>n;
 cout<<"1 ";
 while(i<=sqrt(n))//i<=i*i
 {
 	if(n%i==0)
 	{
 		if(i!=n/i)
 		cout<<i<<" "<<n/i<<" ";
 		else
 		cout<<i<<" ";
	 }
	 i++;
 }
 cout<<n;
}
