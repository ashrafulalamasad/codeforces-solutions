#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; string s; cin >> n >> s;
        map<pair<ll, ll>, ll> first;
        ll x = 0, y = 0, answer = n + 1, left = -1, right = -1;
        first[{0, 0}] = 0;
        for(ll i = 0; i < n; i++){
            if(s[i] == 'L') x--;
            if(s[i] == 'R') x++;
            if(s[i] == 'U') y++;
            if(s[i] == 'D') y--;
            if(first.count({x, y})){
                if(i + 1 - first[{x, y}] < answer){
                    answer = i + 1 - first[{x, y}];
                    left = first[{x, y}] + 1;
                    right = i + 1;
                }
            }
            first[{x, y}] = i + 1;
        }
        if(right == -1) cout << -1 << endl;
        else cout << left << " " << right << endl;
    }
    return 0;
}
