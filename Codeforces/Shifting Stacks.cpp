#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

string solve(vector<ll>&v){
		ll y=0,flag=0;
		string res="YES";
		for(ll i=0; i<v.size(); i++) {
			v[i] += y;
			y = (v[i]-i);
			if(y < 0)
			  res="NO";
		}
	    return res;
}

int main(){
  int t;
  cin>>t;
  while(t--){
  	int n;
  	cin>>n;
  	vi v(n);
  	rep(i,0,n){
  	  cin>>v[i];	
	}
	cout<<solve(v)<<endl;
  }
  return 0;
}

