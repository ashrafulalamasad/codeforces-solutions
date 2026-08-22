#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; cin >> s;
    ll h = (s[0] - '0') * 10 + (s[1] - '0');
    ll m = (s[3] - '0') * 10 + (s[4] - '0');
    double hourAngle = (h % 12) * 30.0 + m * 0.5;
    double minuteAngle = m * 6.0;
    cout << setprecision(15) << hourAngle << ' ' << minuteAngle << endl;
    return 0;
}
