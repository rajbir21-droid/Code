#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define vm vector<vi>
#define pb push_back
#define sort(a) sort(a.begin(),a.end())
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

int main(){
   int n;
   cin>>n;
   vi v(n);
   double sum=0;
   rep(i,0,n){
   	cin>>v[i];
   	sum+=v[i];
   }
   int ctr=0,i=0;
   sort(v);
   while(round(sum/n)<5){
   	sum+=5-v[i++];
   	ctr++;
   }
   cout<<ctr<<endl;
  return 0;
}

