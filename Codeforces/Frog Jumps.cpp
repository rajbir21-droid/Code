#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		string s,f;
		cin>>s;
		f+='U';
		for(int i=0;i<s.size();i++){
			f.push_back(s[i]);
		}
		f+='R';
		int rpos=-1,currpos=0,ans=0,diff=0,i=0;
		for(int i=0;i<f.size();i++){
			if(s[i]=='R'){
				rpos=i;
				break;
			}
		}
		if(rpos==-1){
			cout<<s.size()+1<<endl;
		}
		else{
			for(i=0;i<f.size();i++){
				if(f[i]=='R'){
					diff=i-currpos;
					currpos=i;
				}
				ans=max(ans,diff);
			}
			cout<<ans<<endl;
		}
	}
}
