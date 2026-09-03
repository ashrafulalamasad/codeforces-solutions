#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll digitSum(ll n){
    ll res = 0;
    for(ll p = 1; p <= n; p *= 10){
        ll high = n / (p * 10);
        ll cur = (n / p) % 10;
        ll low = n % p;
        res += high * 45 * p;
        res += cur * (cur - 1) / 2 * p;
        res += cur * (low + 1);
    }
    return res;
}

int main()
{
    fast;
    tc{
        ll k, d = 1, start = 1, cnt = 9; cin >> k;
        while(k >= d * cnt){
            k -= d * cnt; d++;
            start *= 10; cnt *= 10;
        }
        ll q = k / d, rem = k % d;
        ll ans = digitSum(start + q - 1);
        if(rem > 0){
            string s = to_string(start + q);
            for(ll i = 0; i < rem; i++){
                ans += s[i] - '0';
            }
        }
        cout << ans << endl;
    }
    return 0;
}
