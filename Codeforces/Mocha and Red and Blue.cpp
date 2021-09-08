#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin>>t;
	while(t--){
		string s;
		int ctr=0;
		cin>>n;
		cin>>s;
		for(int j=0;j<s.size();j++){
		ctr=0;
		if(s.size()==1&&s[0]!='?'){
			break;
		}
		for(int i=j;i<s.size();i++){
			if(s[i]=='?'&&i==0){
				s[i]='B';
			}
			if(i==s.size()-1&&s[i-1]=='B'&&s[i]=='?'){
				s[i]='R';
			}
			else if(i==s.size()-1&&s[i-1]=='R'&&s[i]=='?'){
				s[i]='B';
			}
			if(s[i]=='?'&&s[i+1]=='?'){
				continue;
			}
			else if(s[i]=='?'&&s[i+1]=='B'){
				s[i]='R';
			}
			else if(s[i]=='?'&&s[i+1]=='R'){
				s[i]='B';
			}
		}
		for(int k=0;k<s.size();k++){
			if(s[k]!='?'){
				ctr++;
			}
		}
		if(ctr==s.size()){
			break;
		}
	  }
	  if(ctr!=s.size()){
	   for(int j=0;j<s.size();j++){
	  	for(int i=s.size()-1;i>=0;i--){
	  		if(s[i]!='?'){
	  			continue;
			  }
	  		if(s[i-1]=='R'){
	  			s[i]='B';
			  }
			  else if(s[i]=='?'&&s[i-1]=='B'){
			  	s[i]='R';
			  }
		  }
	    }
	    cout<<s<<endl;
	  }
	  else{
	  	cout<<s<<endl;
	  }
	}
	
}
