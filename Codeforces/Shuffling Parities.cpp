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
#define ull unsigned long long 
int main(){
   int t;
   cin>>t;
   while(t--){
   	  int n;
   	  cin>>n;
   	  vector<int>v(n);
   	  for(int i=0;i<n;i++){
   	  	  cin>>v[i];
	   }
	   int odd=0,even=0;
	   for(int i=0;i<n;i++){
	   	  if(v[i]&1){
	   	  	  odd++;
			}
			else{
				even++;
			}
	   }
	   int oddindex=n/2;
	   int evenindex=n/2;
	   if(n%2==1){
	   	  oddindex+=1;
	   }
	   cout<<min(odd,evenindex)+min(even,oddindex)<<endl;
   }
  return 0;
}

