#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll l, r; cin >> l >> r;
        if(l <= 0 && r >= 0){
            cout << max(0LL, abs(l + r) - 1) << endl;
        }else{
            cout << r - l << endl;
        }
    }
    return 0;
}
