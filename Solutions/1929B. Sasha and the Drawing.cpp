#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        if(k == 4 * n - 2){
            cout << 2 * n << endl;
        }else{
            cout << (k + 1) / 2 << endl;
        }
    }
    return 0;
}
