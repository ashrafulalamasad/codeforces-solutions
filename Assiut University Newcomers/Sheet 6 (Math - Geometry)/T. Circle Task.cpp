#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

double calcDistance(ll x1, ll y1, ll x2, ll y2){
    ll diffX = (x2 - x1) * (x2 - x1);
    ll diffY = (y2 - y1) * (y2 - y1);
    return sqrt((double)diffX + (double)diffY);
}

int main()
{
    fast;
    ll x, y, radius, times;
    cin >> x >> y >> radius >> times;
    while(times--){
        ll x2, y2; cin >> x2 >> y2;
        double distance = calcDistance(x, y, x2, y2);
        if(distance <= radius){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
