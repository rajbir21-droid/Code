#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		map<char,int>mp;
		for(int i=0;i<s.size();i++){
			mp[s[i]]++;
		}
	    for(int i=0;i<s.size();i++){
	    	if(mp[s[i]]>2){
	    		mp[s[i]]=2;
			}
		}
		/*for(auto c:mp){
			cout<<c.first<<"->"<<c.second<<" ";		
		}*/
		
	   int ctr=0,ans=0;
	   ans=s.size()/2;
	  for(auto c:mp){
	  	 ctr+=c.second;
	  }
	  cout<<ctr/2<<endl;
	}
}
