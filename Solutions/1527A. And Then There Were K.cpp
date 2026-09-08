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
        ll p = 1;
        while(p * 2 <= n){
            p *= 2;
        }
        cout << p - 1 << endl;
    }
    return 0;
}
