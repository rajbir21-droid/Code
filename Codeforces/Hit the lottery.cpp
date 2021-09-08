#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n;
	cin>>n;
	ll ctr=0;
	while(n!=0){
		if(n>=100){
			n-=100;
			ctr++;
		}
		else if(n>=20){
			n-=20;
			ctr++;
		}
		else if(n>=10){
			n-=10;
			ctr++;
		}
		else if(n>=5){
			n-=5;
			ctr++;
		}
		else{
			n-=1;
			ctr++;
		}
	}
	cout<<ctr<<endl;	
}
