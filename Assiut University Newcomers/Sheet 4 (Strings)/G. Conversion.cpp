#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; getline(cin, s);
    for(char &c : s){
        if(c == ',') c = ' ';
        if(c >= 'a' && c <= 'z'){
            c = toupper(c);
        }else if(c >= 'A' && c <= 'Z'){
            c = tolower(c);
        }
    }
    cout << s << endl;
    return 0;
}
