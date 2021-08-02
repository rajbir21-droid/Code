#include<bits/stdc++.h>
using namespace std;
struct{
        bool operator()(string a ,string b) const
        {
            string value1 = a+b;
            string value2 = b+a;
            
            return value1>value2;
        }
    }customcompare;
string largestNumber(vector<string>& nums) {
        sort(begin(nums),end(nums),customcompare);
        string ans;
        int ctr=0;
        for(auto i=0;i<nums.size();i++){
            if(nums[i]=="0"){
                ctr++;
            }
            ans+=nums[i];
        }
        if(ctr==ans.length()){
            return "0";
        }
        return ans;
}
int main() {
  int n;
  cin >> n;
  vector<string> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    cin >> a[i];
  }
  cout << largestNumber(a)<<endl;
}
