#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, x = 0, y = 0; string s; cin >> n >> s;
        bool found = false;
        for(ll i = 0; i < n; i++){
            if(s[i] == 'L') x--;
            else if(s[i] == 'R') x++;
            else if(s[i] == 'U') y++;
            else if(s[i] == 'D') y--;
            if(x==1 && y==1){
                found = true;
                break;
            }
        }
        if(found){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}
