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
   	  string s;
   	  cin>>s;
   	  int flag=0;
   	  for(int i=0;i<=4;i++){
   	     string temp=s.substr(0,i)+s.substr(n-4+i);
			if(temp=="2020"){
				flag=1;
				break;
			}	
	  }
	  flag?cout<<"YES"<<endl:cout<<"NO"<<endl;
   }   
  return 0;
}

