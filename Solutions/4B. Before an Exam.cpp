#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll d, sumTime; cin >> d >> sumTime;
    ll minSum = 0, maxSum = 0;
    ll mn[d], mx[d];
    for(ll i = 0; i < d; i++){
        cin >> mn[i] >> mx[i];
        minSum += mn[i];
        maxSum += mx[i];
    }
    if(sumTime < minSum || sumTime > maxSum){
        cout << "NO" << endl;
        return 0;
    }
    ll rem = sumTime - minSum;
    ll ans[d];
    for(ll i = 0; i < d; i++){
        ll add = min(rem, mx[i] - mn[i]);
        ans[i] = mn[i] + add;
        rem -= add;
    }
    cout << "YES" << endl;
    for(ll i = 0; i < d; i++){
        cout << ans[i];
        if(i < d - 1) cout << " ";
    }
    cout << endl;
    return 0;
}
