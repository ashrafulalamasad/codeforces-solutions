#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll a, b; cin >> a >> b;
        if (a == b) {
            cout << 0 << endl;
        }
        else if (a == 0) {
            cout << -1 << endl;
        }
        else {
            ll target = a ^ b;
            if (target <= a) {
                cout << 1 << endl;
                cout << target << endl;
            }
            else if (b <= a) {
                cout << 2 << endl;
                cout << b << " " << a << endl;
            }
            else {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}
