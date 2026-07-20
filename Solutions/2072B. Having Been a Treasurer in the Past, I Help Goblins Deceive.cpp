#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll num, dsh = 0, und_scr = 0; string str; cin >> num >> str;
        for(char ch : str){
            (ch == '-') ? dsh++ : und_scr++;
        }
        if(dsh < 2){
            cout << 0 << endl; continue;
        }
        ll left_side = dsh/2, right_side = dsh - left_side;
        ll ans = (ll)und_scr * left_side * right_side;
        cout << ans << endl;
    }
    return 0;
}
