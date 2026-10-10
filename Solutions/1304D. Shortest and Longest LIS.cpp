#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; string s; cin >> n >> s;
        vector<ll> ans(n);
        ll num = n, last = 0;
        for(ll i = 0; i < n; i++){
            if(i == n - 1 || s[i] == '>'){
                for(ll j = i; j >= last; j--) ans[j] = num--;
                last = i + 1;
            }
        }
        for(ll i = 0; i < n; i++) cout << ans[i] << " ";
        cout << endl;
        num = 1; last = 0;
        for(ll i = 0; i < n; i++){
            if(i == n - 1 || s[i] == '<'){
                for(ll j = i; j >= last; j--) ans[j] = num++;
                last = i + 1;
            }
        }
        for(ll i = 0; i < n; i++) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
