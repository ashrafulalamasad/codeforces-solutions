#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; cin >> s; ll answer = s.size();
        for(string target : {string("00"), string("25"), string("50"), string("75")} ){
            ll ones = s.size() - 1;
            while(ones >= 0 && s[ones] != target[1]) ones--;
            if(ones < 0) continue;
            ll tens = ones - 1;
            while(tens >= 0 && s[tens] != target[0]) tens--;
            if(tens < 0) continue;
            answer = min(answer, (ll)s.size() - tens - 2);
        }
        cout << answer << endl;
    }
    return 0;
}
