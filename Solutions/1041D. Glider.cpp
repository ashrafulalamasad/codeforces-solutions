#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, h; cin >> n >> h;
    vector<ll> l(n, 0), r(n, 0), len(n, 0), gap(n, 0);
    for(ll i = 0; i < n; i++) cin >> l[i] >> r[i];
    for(ll i = 0; i < n; i++) len[i] = r[i] - l[i];
    for(ll i = 0; i + 1 < n; i++) gap[i] = l[i + 1] - r[i];
    ll left = 0, sumLen = 0, sumGap = 0, best = 0;
    for(ll right = 0; right < n; right++){
        sumLen = sumLen + len[right];
        if(right > left) sumGap = sumGap + gap[right - 1];
        while(sumGap >= h){
            sumLen = sumLen - len[left];
            sumGap = sumGap - gap[left];
            left++;
        }
        if(sumLen > best) best = sumLen;
    }
    cout << h + best << endl;
    return 0;
}
