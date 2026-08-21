#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll a; string b_str; cin >> a >> b_str;
    string c; cin >> c; ll val = 0;
    for(ll i = 0; i < (ll)c.size(); i++){
        char ch = c[i];
        ll digit = 0;
        if(ch >= '0' && ch <= '9'){
            digit = ch - '0';
        }else if(ch >= 'A' && ch <= 'Z'){
            digit = ch - 'A' + 10;
        }else if(ch >= 'a' && ch <= 'z'){
            digit = ch - 'a' + 10;
        }
        val = val * a + digit;
    }
    if(b_str == "R"){
        string res = "";
        ll values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        for(ll i = 0; i < 13; i++){
            while(val >= values[i]){
                res += symbols[i];
                val -= values[i];
            }
        }
        cout << res << endl;
    }else{
        ll b = stoll(b_str);
        if(val == 0){
            cout << 0 << endl;
        }else{
            string res = "";
            while(val > 0){
                ll digit = val % b;
                if(digit < 10){
                    res += (char)('0' + digit);
                }else{
                    res += (char)('A' + digit - 10);
                }
                val /= b;
            }
            reverse(res.begin(), res.end());
            cout << res << endl;
        }
    }
    return 0;
}
