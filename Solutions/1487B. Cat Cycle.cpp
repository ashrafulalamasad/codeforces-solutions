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
        k--;
        if(n % 2 == 0) cout << k % n + 1 << endl;
        else cout << (k + k / (n / 2)) % n + 1 << endl;
    }
    return 0;
}
