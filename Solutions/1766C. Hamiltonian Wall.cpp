#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll m; cin >> m; string top, bottom; cin >> top >> bottom;
        bool possible = false;
        for(ll start = 0; start < 2; start++){
            ll row = start;
            bool valid = true;
            for(ll column = 0; column < m; column++){
                if((row == 0 ? top[column] : bottom[column]) == 'W'){
                    valid = false;
                    break;
                }
                if(top[column] == 'B' && bottom[column] == 'B') row ^= 1;
            }
            if(valid) possible = true;
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}
