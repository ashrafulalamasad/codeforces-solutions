#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isVowel(char c){
    return (c=='a'||c=='o'||c=='y'||c=='e'||c=='u'||c=='i');
}

int main()
{
    fast;
    string s; cin >> s;
    for(char c:s){
        c = tolower(c);
        if(!isVowel(c)){
            cout << "." << c;
        }
    }
    return 0;
}
