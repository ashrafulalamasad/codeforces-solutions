#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll toNum(char chr){
    if(chr >= '0' && chr <= '9') return chr - '0';
    return chr - 'A' + 10;
}

char toChar(ll num){
    if(num >= 0 && num <= 9) return num + '0';
    return num + 'A' - 10;
}

ll toDecimal(string num, ll base){
    ll result = 0;
    ll power = 1;
    for(ll i = num.size() - 1; i >= 0; i--){
        result += toNum(num[i]) * power;
        power *= base;
    }
    return result;
}

string fromDecimal(ll num, ll base){
    string result = "";
    while(num > 0){
        result += toChar(num % base);
        num /= base;
    }
    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    fast;
    ll type; cin >> type;
    if(type == 1){
        string num; cin >> num;
        ll base; cin >> base;
        cout << toDecimal(num, base) << endl;
    }else{
        ll num, base; cin >> num >> base;
        cout << fromDecimal(num, base) << endl;
    }
    return 0;
}
