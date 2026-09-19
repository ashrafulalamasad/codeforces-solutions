#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; ll l = 1, r = n;
        while(l < r){
            ll mid = (l + r) / 2;
            cout << "? " << l << " " << mid << endl;
            ll cnt = 0;
            for(ll i = l; i <= mid; i++){
                ll x; cin >> x;
                if(x >= l && x <= mid) cnt++;
            }
            if(cnt % 2 == 1) r = mid;
            else l = mid + 1;
        }
        cout << "! " << l << endl;
    }
    return 0;
}
