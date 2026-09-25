#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll l1, l2, l3; cin >> l1 >> l2 >> l3;
        if(l1 == l2 && l3 % 2 == 0) cout << "YES" << endl;
        else if(l2 == l3 && l1 % 2 == 0) cout << "YES" << endl;
        else if(l1 == l3 && l2 % 2 == 0) cout << "YES" << endl;
        else if(l1 == l2 + l3) cout << "YES" << endl;
        else if(l2 == l1 + l3) cout << "YES" << endl;
        else if(l3 == l1 + l2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
