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
  int n,k;
  cin>>n>>k;
  vi v(n);
  for(int i=0;i<n;i++){
  	cin>>v[i];
  }
  sort(v.begin(),v.end());
  cout<<v[n-k]<<endl;
  return 0;
}

