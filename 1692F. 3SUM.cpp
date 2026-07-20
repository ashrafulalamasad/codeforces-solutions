#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        vector<ll> cnt(10);
        for(ll i=0; i<n; i++){
            ll x; cin >> x;
            cnt[x%10]++;
        }
        bool ok = false;
        for(ll i=0; i<10; i++){
            for(ll j=0; j<10; j++){
                for(ll k=0; k<10; k++){
                    if((i+j+k)%10 != 3) continue;
                    cnt[i]--; cnt[j]--; cnt[k]--;
                    if(cnt[i]>=0 && cnt[j]>=0 && cnt[k]>=0) ok = true;
                    cnt[i]++; cnt[j]++; cnt[k]++;
                }
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
