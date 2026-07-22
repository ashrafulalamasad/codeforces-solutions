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
        ll ones = 0;
        while(n > 0){
            if(n % 2 == 1) ones++;
            n /= 2;
        }
        ll ans = (1LL << ones) - 1;
        cout << ans << endl;
    }
    return 0;
}
