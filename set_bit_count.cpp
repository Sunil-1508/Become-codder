#include<iostream>
using namespace std;
int main(){
	int n,k,i,count=0;
	cout<<"enter the number & k"<<endl;
	cin>>n>>k;
	n=n>>k-1;
	if(n&1==1)
		cout<<"yes";
	else 
	     cout<<"no";
}
