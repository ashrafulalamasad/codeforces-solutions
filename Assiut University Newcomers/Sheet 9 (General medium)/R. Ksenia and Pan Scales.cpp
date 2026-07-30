#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s, extra; cin >> s >> extra;
    ll pipe = s.find('|');
    string left = s.substr(0, pipe), right = s.substr(pipe + 1);
    ll l = left.size(), r = right.size(), e = extra.size();
    ll diff = abs(l - r);
    if(diff > e || (e - diff) % 2 != 0){
        cout << "Impossible" << endl;
        return 0;
    }
    ll addL = (e - diff) / 2 + max(0LL, (r - l));
    ll addR = e - addL;
    cout << left + extra.substr(0, addL) << "|" << right + extra.substr(addL) << endl;
    return 0;
}
