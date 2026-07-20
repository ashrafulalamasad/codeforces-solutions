#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    vector<ll>a(3);
    for(ll i=0; i<3; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll mid = a[1];
    cout << (mid - a[0]) + (a[2] - mid) << endl;
    return 0;
}
