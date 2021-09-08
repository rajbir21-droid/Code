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

int main(){
   int t;
   cin>>t;
   while(t--){
	 ll a=0,b=0;
		string s;
		cin>>s;
		for(int i=0;i<s.size();i++)
		if(i&1)
			a = a*10+s[i]-'0';
		else
		   b = b*10+s[i]-'0';
		a+=1;
		b+=1;
		cout<<a*b-2<<endl;
   }
  return 0;
}

