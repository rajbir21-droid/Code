#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		s+='A';
		vector<int>p;
		for(int i=0;i<s.size();i++){
			if(s[i]=='A'){
				p.push_back(i);
			}
		}
		int maxi=0;
		for(int i=0;i<p.size()-1;i++){
			maxi=max(maxi,((p[i+1]-p[i])-1));
		}
		cout<<maxi<<endl;
	}
}
