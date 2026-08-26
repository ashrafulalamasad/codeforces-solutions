#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, k; cin >> n >> m >> k;
        ll mn = max(1LL, abs(n - m)), mx = max(n, m);
        if(k < mn || k > mx){
            cout << -1 << endl;
            continue;
        }
        bool swapped = false;
        if(n < m){
            swapped = true;
            swap(n, m);
        }
        string s;
        for(ll i = 0; i < k; i++) s += '0';
        ll dec = k - (n - m);
        for(ll i = 0; i < dec; i++) s += '1';
        ll osc = n - k;
        if(n - m == k){
            for(ll i = 0; i < osc; i++){
                s += '1'; s += '0';
            }
        }else{
            for(ll i = 0; i < osc; i++){
                s += '0'; s += '1';
            }
        }
        if(swapped){
            for(ll i = 0; i < (ll)s.size(); i++) s[i] = (s[i] == '0' ? '1' : '0');
        }
        cout << s << endl;
    }
    return 0;
}
