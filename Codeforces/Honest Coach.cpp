#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		int i=0,j=1;
		int ans=INT_MAX;
		while(j<v.size()){
			ans=min(ans,(v[j]-v[i]));
			i++;
			j++;
		}
		cout<<ans<<endl;
		
	}
}
