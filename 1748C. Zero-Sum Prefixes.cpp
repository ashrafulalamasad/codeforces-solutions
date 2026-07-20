#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        map<ll, ll> freq;
        ll sum = 0, ans = 0, maxfreq = 0;
        bool first = true;
        for(ll i = 0; i < n; i++){
            sum += a[i];
            if(a[i] == 0){
                if(first){
                    ans += freq[0];
                    first = false;
                }else{
                    ans += maxfreq;
                }
                freq.clear();
                maxfreq = 0;
            }
            freq[sum]++;
            maxfreq = max(maxfreq, freq[sum]);
        }
        if(first){
            ans += freq[0];
        }else{
            ans += maxfreq;
        }
        cout << ans << endl;
    }
    return 0;
}
