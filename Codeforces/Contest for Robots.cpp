#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin>>n;
	vector<int>a(n);
	vector<int>b(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	int ctr=0,czero=0;
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){
			ctr++;
		}
		if(a[i]==1&&b[i]==0){
			czero++;
		}
	}
	if(ctr==0){
		cout<<-1<<endl;
	}
	else if(ctr&&czero){
		int ans=ctr/czero;
		cout<<ans<<endl;
	}
	else{
		cout<<-1<<endl;
	}
}
