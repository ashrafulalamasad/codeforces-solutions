#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        for(ll i = 1; i <= n; i++){
            for(ll j = i + 1; j <= n; j++){
                ll difference = j - i;
                if(n % 2 == 0 && difference == n / 2) cout << 0 << ' ';
                else if(difference <= n / 2) cout << 1 << ' ';
                else cout << -1 << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}
