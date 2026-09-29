#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<ll> used(64, 0);
        bool possible = true;
        for(ll i = 0; i < n; i++){
            ll value; cin >> value;
            ll position = 0;
            while(value > 0){
                ll digit = value % k;
                if(digit > 1 || (digit == 1 && used[position])) possible = false;
                used[position] |= digit;
                value /= k;
                position++;
            }
        }
        if(possible) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
