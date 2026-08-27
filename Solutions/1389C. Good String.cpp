#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; cin >> s; ll longest = 0;
        for(ll first = 0; first < 10; first++){
            for(ll second = 0; second < 10; second++){
                char expected = char('0' + first);
                ll length = 0;
                for(char digit : s){
                    if(digit == expected){
                        length++;
                        expected = char('0' + first + second - (expected - '0'));
                    }
                }
                if(first != second) length -= length % 2;
                longest = max(longest, length);
            }
        }
        cout << s.size() - longest << endl;
    }
    return 0;
}
