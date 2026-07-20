#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> w(n);
        for(ll i = 0; i < n; i++) cin >> w[i];
        ll l = 0, r = n - 1;
        ll sumL = 0, sumR = 0, ans = 0;
        while(l <= r){
            if(sumL <= sumR){
                sumL += w[l++];
            }else{
                sumR += w[r--];
            }
            if(sumL == sumR){
                ans = l + (n - 1 - r);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
