#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<ll> a(n);
        for(auto &x: a) cin >> x;
        sort(a.begin(), a.end());
        ll maxLen = 1, len = 1;
        for(ll i = 1; i < n; i++){
            if(a[i] - a[i-1] <= k){
                len++;
            }else{
                len = 1;
            }
            maxLen = max(maxLen, len);
        }
        cout << n - maxLen << endl;
    }
    return 0;
}
