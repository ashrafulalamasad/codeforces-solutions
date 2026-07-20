#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    fast;
    tc{
        ll n, k, x; cin >> n >> k >> x;
        ll min_sum = k * (k + 1) / 2;
        ll max_sum = k * (2 * n - k + 1) / 2;
        if(x >= min_sum && x <= max_sum){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
