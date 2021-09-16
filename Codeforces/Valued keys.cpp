#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

string solve(string s,string t){
	char maxi='a';
	rep(i,0,s.size()){
		if(s[i]>maxi||t[i]>maxi){
			maxi=s[i];
		}
	}
	string ans;
	rep(i,0,s.size()){
		if(s[i]<t[i]){
			return "-1";
		}
		if(s[i]==t[i]){
			ans+=maxi;
		}
		else{
			ans+=min(s[i],t[i]);
		}
	}
	return ans;
}
int main(){
  string s,t;
  cin>>s>>t;
  cout<<solve(s,t)<<endl;
  return 0;
}

