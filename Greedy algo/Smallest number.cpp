/*
The task is to find the smallest number with given sum of digits as S and number of digits as D.

 

Example 1:

Input:
S = 9 
D = 2
Output:
18
Explanation:
18 is the smallest number
possible with sum = 9
and total digits = 2.
 

Example 2:

Input:
S = 20
D = 3
Output:
299
Explanation:
299 is the smallest number
possible with sum = 20
and total digits = 3.

Expected Time Complexity: O(D)
Expected Auxiliary Space: O(1)

 

Constraints:
1 ≤ S ≤ 100
1 ≤ D ≤ 6
*/


// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string smallestNumber(int S, int D){
        // code here
        string s;
        while(S>0 && D>0){
            if(S>9){
                s+=to_string(9);
                S-=9;
                D--;
            }
            else if(S<=9&&D>1){
                s+=to_string(S-1);
                S=1;
                D--;
            }
            else if(D==1&&S<=9){
                s+=to_string(S);
                S=0;
                D=0;
            }
        }
        reverse(s.begin(),s.end());
        return S==0? s : "-1";
    }
};
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.smallestNumber(S,D) << endl;
    }
    return 0; 
}   // } Driver Code Ends
