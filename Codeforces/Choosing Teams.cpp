#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,k;
	cin>>n>>k;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	int ctr=0,ans=0;
	int i=0,j=0;
	while(j<v.size()){
		if(v[j]+k<=5){
			ctr++;
			v[j]+=k;
		}
		if(ctr==3){
			ctr=0;
			ans++;
		}
		j++;
	}
	cout<<ans<<endl;
}
