#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; string s; cin >> s;
        map<char, ll> count, need;
        for(ll i = 0; i < n; i++) count[s[i]]++;
        ll dx = count['E'] - count['W'];
        ll dy = count['N'] - count['S'];
        if(dx % 2 != 0 || dy % 2 != 0){
            cout << "NO" << endl;
            continue;
        }
        if(dx == 0 && dy == 0){
            if(n == 2){
                cout << "NO" << endl;
                continue;
            }
            if(count['N'] > 0){
                need['N'] = 1;
                need['S'] = 1;
            }else{
                need['E'] = 1;
                need['W'] = 1;
            }
        }else{
            need['E'] = max(0LL, dx / 2);
            need['W'] = max(0LL, -dx / 2);
            need['N'] = max(0LL, dy / 2);
            need['S'] = max(0LL, -dy / 2);
        }
        string ans(n, 'H');
        for(ll i = 0; i < n; i++){
            if(need[s[i]] > 0){
                ans[i] = 'R';
                need[s[i]]--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
