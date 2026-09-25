#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), b(n), ans;
        for(ll i = 0; i < n; i++) cin >> a[i] >> b[i];
        for(ll i = 0; i < n; i++){
            bool contained = false;
            for(ll j = 0; j < n; j++){
                if(i != j && a[j] <= a[i] && b[i] <= b[j]) contained = true;
            }
            if(!contained) ans.push_back(i + 1);
        }
        ll m = ans.size();
        cout << m << endl;
        for(ll i = 0; i < m; i++) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
