#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    cout << fixed << setprecision(6);
    ll L, s1, s2; cin >> L >> s1 >> s2;
    ll d = abs(s1 - s2);
    ll q; cin >> q;
    while(q--){
        ll area; cin >> area;
        double t = sqrt(2.0) * (L - sqrt((double)area)) / d;
        cout << t << endl;
    }
    return 0;
}
