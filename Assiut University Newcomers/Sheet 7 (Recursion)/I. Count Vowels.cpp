#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isVowel(char c){
    return c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u';
}

ll countVowels(const string &str, ll idx){
    if(idx < 0) return 0;
    return (isVowel(str[idx]) ? 1 : 0) + countVowels(str, idx - 1);
}

int main()
{
    fast;
    string str; getline(cin, str);
    cout << countVowels(str, str.size() - 1) << endl;
    return 0;
}
