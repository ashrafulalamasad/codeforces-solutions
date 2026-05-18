#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, a, b; cin >> n >> a >> b;
        ll ans;
        if(b >= 3 * a){
            ans = n * a;
        }else{
            ans = (n / 3) * b + min((n % 3) * a, b);
        }
        cout << ans << endl;
    }
    return 0;
}
