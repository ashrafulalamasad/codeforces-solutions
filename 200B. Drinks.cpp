#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    double n, x, total = 0; cin >> n;
    for(ll i=0; i<n; i++){
        cin >> x;
        total += x;
    }
    cout << fixed << setprecision(12) << total / n << endl;
    return 0;
}
