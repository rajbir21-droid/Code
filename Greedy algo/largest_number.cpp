/* 
 Q) As the last question of a successful interview, your boss gives you a few pieces of paper
with numbers on it and asks you to compose a largest number from these numbers. The
resulting number is going to be your salary, so you are very much interested in maximizing
this number. How can you do this?
*/
/*
  Problem Description
Task. Compose the largest number out of a set of integers.
Input Format. The first line of the input contains an integer 𝑛. The second line contains integers
𝑎1, 𝑎2, . . . , 𝑎𝑛.
Constraints. 1 ≤ 𝑛 ≤ 100; 1 ≤ 𝑎𝑖 ≤ 103
for all 1 ≤ 𝑖 ≤ 𝑛.
Output Format. Output the largest number that can be composed out of 𝑎1, 𝑎2, . . . , 𝑎𝑛.
Sample 1.
Input:
2
21 2
Output:
221
*/

//Solution
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
