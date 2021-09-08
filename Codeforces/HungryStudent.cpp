#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		while(n!=0){
		    if(n<3){
		    	break;
			}
		   if(n%3==0||n%7==0){
		   	n=0;
		   }
		   else if(n>=10){
		   	n-=10;
		   }
		   else if(n>=7){
		   	n-=7;
		   }
		   else{
		   	n-=3;
		   }
		}
		n==0?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
}
