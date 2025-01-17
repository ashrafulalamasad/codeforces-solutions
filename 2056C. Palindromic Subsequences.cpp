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
        cout << 1 << " ";
        for(int i = 2; i <= n - 2; i++){
            cout << i - 1 << " ";
        }
        cout << 1 << " " << 2 << endl;
    }
    return 0;
}
