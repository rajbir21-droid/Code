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
     string ans,s;
     int sum=9;
     while(sum>0){
     	if(n>=sum){
     		n-=sum;
     		char c=sum+'0';
     		ans.push_back(c);
		 }
		 sum--;
	 }
    if(n!=0){
    	cout<<-1<<endl;
	}
	else{
		reverse(ans.begin(),ans.end());
		cout<<ans<<endl;
	}
  }
  return 0;
}

