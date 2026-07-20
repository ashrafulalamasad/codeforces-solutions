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
        ll count[10] = {0};
        for(char c : s) count[c - '0']++;
        string result(10, '0');
        for(ll i = 0; i < 10; i++){
            ll minDigit = max(0LL, 9 - i);
            for(ll d = minDigit; d <= 9; d++){
                if(count[d] > 0){
                    result[i] = '0' + d;
                    count[d]--;
                    break;
                }
            }
        }
        cout << result << endl;
    }
    return 0;
}
