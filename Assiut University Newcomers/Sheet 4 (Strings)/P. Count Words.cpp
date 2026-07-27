#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; getline(cin, s);
    bool inWord = false;
    ll cnt = 0;
    for(char ch: s){
        if(isalpha((unsigned char)ch)){
            if(!inWord){
                cnt++; inWord = true;
            }
        }else inWord = false;
    }
    cout << cnt << endl;
    return 0;
}
