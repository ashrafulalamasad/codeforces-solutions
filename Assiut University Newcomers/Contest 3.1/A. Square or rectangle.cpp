#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll w, h; cin >> w >> h;
        if(w == h) cout << "Square" << endl;
        else cout << "Rectangle" << endl;
    }
    return 0;
}
