#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<ll> freq(n + 2, 0);
        for(ll i = 0; i < n; i++){
            ll x; cin >> x; freq[x]++;
        }
        ll mex = 0;
        while(freq[mex] > 0) mex++;
        ll f = 0, sumF = 0;
        for(ll x = 0; x < mex; x++){
            if(freq[x] == 1){
                f++; sumF += x;
            }
        }
        ll y = 0;
        while(y < mex && freq[y] == 1) y++;
        ll c = n - f, ans = 0;
        if(k == 1){
            ans = sumF + c * mex;
        }else if(c == 0){
            ans = sumF;
        }else{
            if(y < mex){
                ll cnt = n - y;
                ll sumA = y * (y - 1) / 2 + cnt * y;
                if(cnt <= 1){
                    ans = sumA;
                }else{
                    if(k % 2 == 0){
                        ans = sumA;
                    }else{
                        ans = sumA + cnt;
                    }
                }
            }else{
                ll sumA = sumF + c * mex;
                if(c <= 1){
                    ans = sumA;
                }else{
                    if(k % 2 == 1){
                        ans = sumA;
                    }else{
                        ans = sumA + c;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
