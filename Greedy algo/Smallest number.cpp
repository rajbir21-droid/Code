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
