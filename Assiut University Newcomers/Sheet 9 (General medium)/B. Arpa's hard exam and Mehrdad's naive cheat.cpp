#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    if(n == 0){
        cout << 1 << endl;
        return 0;
    }
    ll p[] = {8, 4, 2, 6};
    cout << p[(n - 1) % 4] << endl;
    return 0;
}
