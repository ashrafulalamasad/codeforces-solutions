#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k, p; cin >> n >> k >> p;
        if(k == 0) {
            cout << 0 << endl;
            continue;
        }
        ll ops = (abs(k) + p - 1) / p;
        cout << (ops > n ? -1 : ops) << endl;
    }
    return 0;
}
