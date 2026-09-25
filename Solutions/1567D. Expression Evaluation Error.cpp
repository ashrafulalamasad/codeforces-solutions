#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll s, n; cin >> s >> n; vector<ll> ans;
        vector<ll> pw(10); pw[0] = 1;
        for(ll i = 1; i < 10; i++) pw[i] = pw[i - 1] * 10;
        ll remS = s, remN = n;
        while(remN > 1){
            ll pick = 1;
            for(ll i = 0; i < 10; i++){
                if(pw[i] <= remS && remS - pw[i] >= remN - 1) pick = pw[i];
            }
            ans.push_back(pick);
            remS = remS - pick;
            remN = remN - 1;
        }
        ans.push_back(remS);
        for(ll i = 0; i < n; i++) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
