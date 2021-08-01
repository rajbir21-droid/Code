#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MaxPairwiseProduct(vector<ll>& num) {
    int n = num.size();
    sort(num.begin(),num.end(),greater<ll>());
    ll res=0;
    res=num[0]*num[1];
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<ll> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    cout << MaxPairwiseProduct(numbers)<< "\n";
    return 0;
}
