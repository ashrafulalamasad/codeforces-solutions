#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, k; cin >> n >> k;
    ll odd_count = (n + 1) / 2;
    if(k <= odd_count){
        cout << 2 * k - 1 << endl;
    }else{
        cout << 2 * (k - odd_count) << endl;
    }
    return 0;
}
