#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,sum;
	cin>>n>>sum;
	int ctr=0;
	while(sum!=0){
		if(sum>=n){
			sum-=n;
			ctr++;
		}
		else{
			n--;
		}
	}
	cout<<ctr<<endl;
}
