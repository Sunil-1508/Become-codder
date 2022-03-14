#include<bits/stdc++.h>
using namespace std;
int main()
{ int n,i=2,count=2;//flag=0;
 cout<<"enter n \n";
 cin>>n;
 if(n==1)
 {
 	count+=1;
 }
 while(i<=sqrt(n))//i<=i*i
 {
 	if(n%i==0)
 	{
 		if(i!=n/i)	//cout<<"not prime";
 		count+=2;	//flag=1; break;
 		else
 		count++;
	 }
	 i++;
 }					//if(flag!=0) cout<<"prime";
 if(count==2)
 cout<<"prime";
 else
 cout<<"not a prime";
}
