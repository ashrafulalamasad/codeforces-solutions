#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    vector<ll> a(4);
    for(int i=0; i<4; i++) cin>>a[i];
    sort(a.begin(), a.end());
    cout << a[3]-a[0] << " " << a[3]-a[1] << " " << a[3]-a[2];
    return 0;
}
