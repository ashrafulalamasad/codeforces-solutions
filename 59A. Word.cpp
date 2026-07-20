#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; cin >> s;
    ll low = 0, up = 0;
    for(char c:s){
        if(c>='A' && c<='Z'){
            up++;
        }else{
            low++;
        }
    }
    if(low < up){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }else if(up < low){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s << endl;
    return 0;
}
