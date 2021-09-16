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
  	int n;
  	cin>>n;
  	vi v(n);
  	rep(i,0,n){
  	  cin>>v[i];	
	}
	int sum=0;
	for(auto c:v){
		sum+=c;
	}
    if(sum<n){
    	cout<<1<<endl;
    }
	else{
		cout<<sum-n<<endl;
	}
  }
  return 0;
}

