#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, ans = 0; cin >> n;
    string s;
    while(n--){
        cin >> s;
        if(s == "Tetrahedron") ans += 4;
        else if(s == "Cube") ans += 6;
        else if(s == "Octahedron") ans += 8;
        else if(s == "Dodecahedron") ans += 12;
        else if(s == "Icosahedron") ans += 20;
    }
    cout << ans << endl;
    return 0;
}
