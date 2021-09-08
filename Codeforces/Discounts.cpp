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

int main(){
  ll n;
  cin>>n;
  vi v(n);
  rep(i,0,n){
  	cin>>v[i];
  }
  sort(v.begin(),v.end(),greater<ll>());
  ll m,sum=0,s=0;
  for(auto c:v){
  	sum+=c;
  }
  s=sum;
  cin>>m;
  for(int i=0;i<m;i++){
  	ll q;
  	cin>>q;
  	sum-=v[q-1];
  	cout<<sum<<endl;
  	sum=s;
  }
  return 0;
}

