#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll a, b, x; cin >> a >> b >> x;
    if(a > b) swap(a, b);
    ll left = (a+x-1)/x;
    ll right = b/x;
    if(left > right){
        cout << 0;
        return 0;
    }
    cout << x * (left + right) * (right - left + 1) / 2;
    return 0;
}
