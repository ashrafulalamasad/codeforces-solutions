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
        if(n == 0){
            cout << 0 << endl;
            continue;
        }
        while(n > 0){
            cout << n % 10;
            n /= 10;
            if(n > 0) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
