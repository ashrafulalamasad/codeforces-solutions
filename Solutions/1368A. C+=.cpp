#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll a, b, n; cin >> a >> b >> n;
        ll cnt = 0;
        while(a <= n && b <= n){
            if(a < b) a += b;
            else b += a;
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
