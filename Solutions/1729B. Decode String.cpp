#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; string t; cin >> t;
        string s = ""; ll i = n - 1;
        while(i >= 0){
            ll v;
            if(t[i] == '0'){
                v = (t[i - 2] - '0') * 10 + (t[i - 1] - '0');
                i -= 3;
            }else{
                v = t[i] - '0';
                i--;
            }
            s += (char)('a' + v - 1);
        }
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
}
