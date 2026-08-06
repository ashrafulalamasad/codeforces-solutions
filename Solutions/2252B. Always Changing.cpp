#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t; cin >> t; while(t--)
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; string s; cin >> n >> s;
        ll n0 = count(s.begin(), s.end(), '0'), n1 = n - n0, d = n0 - n1;
        ll l0 = 0, l1 = 0;
        char c0 = '0', c1 = '1';
        for(char c : s){
            if(c == c0) l0++, c0 ^= 1;
            if(c == c1) l1++, c1 ^= 1;
        }
        ll ans = -1;
        for(ll D : {d - 1, d, d + 1}){
            if(D == 1 && l0) ans = max(ans, l0 - !(l0 % 2));
            if(D == -1 && l1) ans = max(ans, l1 - !(l1 % 2));
            if(D == 0){
                if(l0) ans = max(ans, l0 - (l0 % 2));
                if(l1) ans = max(ans, l1 - (l1 % 2));
            }
        }
        cout << (ans > 0 ? n - ans : -1) << endl;
    }
    return 0;
}
