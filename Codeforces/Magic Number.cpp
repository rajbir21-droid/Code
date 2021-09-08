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
  string s;
  cin>>s;
  stack<char>sp;
  for(int i=0;i<s.size();){
     if((s[i]=='1'&&s[i+1]!='4')){
     	sp.push('1');
     	i++;
	 }
	 else if((s[i]=='1'&&s[i+1]=='4'&&s[i+2]!='4')&&(i+1<s.size())){
	 	sp.push('1');
	 	sp.push('4');
	 	i+=2;
	 }
	 else if((s[i]=='1'&&s[i+1]=='4'&&s[i+2]=='4')
	        &&(i+2<s.size()&&i+1<s.size())){
	    sp.push('1');
		sp.push('4');
		sp.push('4');
		i+=3;       	
	 }
	else{
		i++;
	}
  }
  if(sp.size()==s.size()){
  	cout<<"YES"<<endl;
  }
  else{
  	cout<<"NO"<<endl;
  }
  return 0;
}

