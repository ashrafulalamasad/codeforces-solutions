#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        ll d = k - 1, ans = 0;
        if(n % 2 == 0){
            ans = (n + d - 1) / d;
        }else{
            ans = 1 + ((n - k) + d - 1) / d;
        }
        cout << ans << endl;
    }
    return 0;
}
