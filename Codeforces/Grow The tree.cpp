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
  ll n,mid=0,sum=0;
  cin>>n;
  vi v(n);
  rep(i,0,n){
  	cin>>v[i];
  }
  mid=n/2;
  sort(v.begin(),v.end());
  for(int i=0;i<mid;i++){
  	sum+=v[i];
  }
  sum*=sum;
  //cout<<sum<<" ";
  ll sum1=0;
  for(int i=mid;i<n;i++){
     sum1+=v[i];
  }
  sum1*=sum1;
  cout<<sum+sum1<<endl;
  return 0;
}

