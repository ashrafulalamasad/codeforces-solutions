#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m;
    while(cin >> n >> m){
        if(n <= 0 || m <= 0) break;
        ll sum = 0;
        ll a = min(n, m), b = max(n, m);
        for(ll i = a; i <= b; i++){
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << endl;
    }
    return 0;
}
