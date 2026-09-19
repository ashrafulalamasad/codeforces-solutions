#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll a, b, x; cin >> a >> b >> x;
        ll ans = llabs(a - b), cur = 0;
        while(a != b){
            if(b > a){
                swap(a, b);
            }
            if(cur + llabs(a - b) < ans){
                ans = cur + llabs(a - b);
            }
            a = a / x;
            cur++;
        }
        if(cur < ans){
            ans = cur;
        }
        cout << ans << endl;
    }
    return 0;
}
