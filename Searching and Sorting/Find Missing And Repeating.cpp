// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        sort(arr,arr+n);
        int *ans = new int(2);
        int ctr=1;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int miss=0;
        for(auto c:mp){
            if(c.second==2){
                  ans[0]=c.first;
                  break;
            }
        }
        set<int>sp(arr,arr+n);
        vector<int>v(sp.begin(),sp.end());
        for(int i=0;i<n;i++){
            if(ctr==v[i]){
                ctr++;
            }
            else{
                ans[1]=ctr;
                break;
            }
        }
        return ans;
        
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends
