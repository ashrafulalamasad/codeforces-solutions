#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; cin >> s;
    vector<char>nums;
    for(char c:s){
        if(isdigit(c)){
            nums.push_back(c);
        }
    }
    sort(nums.begin(), nums.end());
    for(ll i=0; i<nums.size(); i++){
        cout << nums[i];
        if(i != nums.size()-1){
            cout << "+";
        }
    }
    return 0;
}
