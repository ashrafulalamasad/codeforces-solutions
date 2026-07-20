#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll a, b, c; cin >> a >> b >> c;
    int food[7] = {0, 1, 2, 0, 2, 1, 0};
    ll weeks = min({a / 3, b / 2, c / 2});
    a -= weeks * 3;
    b -= weeks * 2;
    c -= weeks * 2;
    ll ans = 0;
    for(int start = 0; start < 7; start++){
        ll ra = a, rb = b, rc = c;
        ll days = 0;
        int day = start;
        while(true){
            int f = food[day];
            if(f == 0 && ra > 0) ra--;
            else if(f == 1 && rb > 0) rb--;
            else if(f == 2 && rc > 0) rc--;
            else break;
            days++;
            day = (day + 1) % 7;
        }
        ans = max(ans, days);
    }
    cout << weeks * 7 + ans << endl;
    return 0;
}
