#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	struct {
		bool operator()(int &a,int &b){
			bitset<32>p(a);
            bitset<32>d(b);
            if(p.count()==d.count()){
               return a<b;
            }
            return p.count()<d.count();
		}
	}cmp;
    vector<int> sortByBits(vector<int>& arr) {
        
        vector<int>v;
        sort(arr.begin(),arr.end(),cmp); 
        return arr;    
    }
};


int main(){
	Solution obj;
	vector<int>a;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int c;
		cin>>c;
		a.push_back(c);
	}
	cout<<endl;
	vector<int>ab;
	ab=obj.sortByBits(a);
	for(int i=0;i<ab.size();i++){
		cout<<ab[i]<<" ";
	}
}
