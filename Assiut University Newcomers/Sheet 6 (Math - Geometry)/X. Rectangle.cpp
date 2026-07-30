#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    ll minX = min(min(x1, x2), min(x3, x4));
    ll maxX = max(max(x1, x2), max(x3, x4));
    ll minY = min(min(y1, y2), min(y3, y4));
    ll maxY = max(max(y1, y2), max(y3, y4));
    ll points; cin >> points;
    for(ll i = 0; i < points; i++){
        ll px, py; cin >> px >> py;
        if(px >= minX && px <= maxX && py >= minY && py <= maxY){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
