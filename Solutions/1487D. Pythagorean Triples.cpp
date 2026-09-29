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
        ll limit = sqrtl(2 * n - 1);
        while((limit + 1) * (limit + 1) <= 2 * n - 1) limit++;
        while(limit * limit > 2 * n - 1) limit--;
        cout << (limit - 1) / 2 << endl;
    }
    return 0;
}
