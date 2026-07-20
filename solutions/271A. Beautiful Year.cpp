#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll y; cin >> y;
    while(true){
        y++;
        string s = to_string(y);
        set<char> digits(s.begin(), s.end());
        if(digits.size() == 4){
            cout << y << endl;
            break;
        }
    }
    return 0;
}
