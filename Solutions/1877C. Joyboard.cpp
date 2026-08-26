#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, k, ans = 0; cin >> n >> m >> k;
        if(k == 1){
            ans = 1;
        }else if(k == 2){
            ans = min(n - 1, m) + m / n;
        }else if(k == 3){
            ans = max(0LL, m - n + 1) - m / n;
        }else{
            ans = 0;
        }
        cout << ans << endl;
    }
    return 0;
}
