#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, cnt = 0;
    cin >> n;
    for(ll mask = 1; mask < (1<<10); mask++){
        ll num = 0;
        for(ll i = 9; i >= 0; i--)
            if(mask >> i & 1) num = num*10 + 1;
            else if(num) num = num*10;
        if(num >= 1 && num <= n) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
