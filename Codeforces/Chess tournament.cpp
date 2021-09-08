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
char p[101][101];
string solve(int n,string s){
	int ctr=0,ctr1=0;
	for(int i=0;i<n;i++){
		if(s[i]=='1'){
			ctr++;
		}
		else if(s[i]=='2'){
			ctr1++;
		}
	}
	if(n==2&&ctr==ctr1){
		 return "NO";
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				p[i][j]='X';
			}
			else{
				p[i][j]='=';
			}
		}
	}
	bool pos=false;
	for(int i=0;i<n;i++){
		if(s[i]=='2'){
			bool flag=false;
			for(int j=0;j<n;j++){
				if(i!=j){
					if(s[j]=='2'){
						if(p[j][i]!='+'){
							p[i][j]='+';
							p[j][i]='-';
							flag=true;
							break;
						}
					}
				}
			}
			if(!flag){
				pos=true;
				break;
			}
		}
	}
	if(pos){
		return "NO";
	}
	else{
		return "YES";
	}
}
int main(){
  int t;
  cin>>t;
  while(t--){
  	int n;
  	cin>>n;
  	string s,ans;
  	cin>>s;
  	ans=solve(n,s);
  	if(ans=="YES"){
  		cout<<ans<<endl;
    	for(int i=0;i<n;i++){
    		for(int j=0;j<n;j++){
    			cout<<p[i][j];
			}
			cout<<endl;
		}
	}
	else{
		cout<<ans<<endl;
	}
  }
  return 0;
}

