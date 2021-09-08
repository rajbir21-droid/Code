#include<bits/stdc++.h>
using namespace std;

void solve(){
string s;
	cin>>s;
	int i=0;
	stack<char>sp;
	 while(i<s.size()){
		if(sp.empty()){
			sp.push(s[i]);
		}
		else if(s[i]=='B'&&sp.top()=='A'){
			sp.pop();
		}
		else if(s[i]=='B'&&sp.top()=='B'){
			sp.pop();
		}
		else{
			sp.push(s[i]);
		}
		i++;
	}
	cout<<sp.size()<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
	   solve();
	}
}
