#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    if(n <= 2){
        cout << -1 << endl;
    }else if(n % 2 == 1){
        ll m = (n * n - 1) / 2, k = (n * n + 1) / 2;
        cout << m << " " << k << endl;
    }else {
        ll m = n * n / 4 - 1, k = n * n / 4 + 1;
        cout << m << " " << k << endl;
    }
    return 0;
}
