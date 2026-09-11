#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; cin >> s;
        ll d = 1, n = s.size();
        set<char> cur;
        for(ll i = 0; i < n; i++){
            if(cur.size() == 3 && !cur.count(s[i])){
                d++;
                cur.clear();
            }
            cur.insert(s[i]);
        }
        cout << d << endl;
    }
    return 0;
}
