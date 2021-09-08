#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		vector<char>v(26);
		for(char i='a';i<='z';i++){
			v[i-'a']=i;
		}
		char c=v[s.size()-1];
		int i=0,j=s.size()-1;
		while(i<=j){
			if(s[i]==c){
				i++;
			}
			else if(s[j]==c){
				j--;
			}
			else{
				break;
			}
			c--;
		}
		if(i-j==1){
			cout<<"YES"<<endl;
		}	
		else{
			cout<<"NO"<<endl;
		}
	}
}
