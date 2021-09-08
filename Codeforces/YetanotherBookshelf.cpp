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
		int ctr=0,cone=0,czero=0;
		vector<pair<int,int>>p;
		for(int i=0;i<v.size();i++){
			if(v[i]==1){
				p.push_back(make_pair(i,v[i]));
			}
		}
		for(int i=0;i<p.size()-1;i++){
			ctr+=(p[i+1].first-p[i].first)-1;
		}
	    cout<<ctr<<endl;
	}
}
