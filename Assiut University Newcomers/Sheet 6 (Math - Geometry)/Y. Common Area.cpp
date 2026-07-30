#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll testCase; cin >> testCase;
    for(ll counter = 1; counter <= testCase; counter++){
        ll numR; cin >> numR;
        ll maxX1 = LLONG_MIN, maxY1 = LLONG_MIN;
        ll minX2 = LLONG_MAX, minY2 = LLONG_MAX;
        for(ll i = 0; i < numR; i++){
            ll x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            maxX1 = max(maxX1, x1);
            maxY1 = max(maxY1, y1);
            minX2 = min(minX2, x2);
            minY2 = min(minY2, y2);
        }
        ll area = 0;
        if(minX2 > maxX1 && minY2 > maxY1){
            area = (minX2 - maxX1) * (minY2 - maxY1);
        }
        cout << "Case #" << counter << ": " << area << endl;
    }
    return 0;
}
