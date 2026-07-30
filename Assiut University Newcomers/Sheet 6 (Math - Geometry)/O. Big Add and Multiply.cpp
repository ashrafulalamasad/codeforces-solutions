#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

string addStrings(const string &a, const string &b){
    string result = "";
    ll carry = 0;
    ll i = a.size() - 1, j = b.size() - 1;
    while(i >= 0 || j >= 0 || carry){
        ll sum = carry;
        if(i >= 0) sum += a[i--] - '0';
        if(j >= 0) sum += b[j--] - '0';
        carry = sum / 10;
        result += ('0' + sum % 10);
    }
    reverse(result.begin(), result.end());
    return result;
}

string multiplyByConst(const string &a, ll k){
    string result = "";
    ll carry = 0;
    for(ll i = a.size() - 1; i >= 0; i--){
        ll prod = (a[i] - '0') * k + carry;
        carry = prod / 10;
        result += ('0' + prod % 10);
    }
    while(carry){
        result += ('0' + carry % 10);
        carry /= 10;
    }
    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    fast;
    string num; cin >> num;
    cout << addStrings(num, "9999") << endl;
    cout << multiplyByConst(num, 9999) << endl;
    return 0;
}
