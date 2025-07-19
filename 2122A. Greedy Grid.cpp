#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m;
        if(n == 1 || m == 1 || (n == 2 && m == 2)){
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
    }
    return 0;
}
