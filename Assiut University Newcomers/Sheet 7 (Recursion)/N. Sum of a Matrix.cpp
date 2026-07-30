#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll arr1[100][100], arr2[100][100], rows, cols;

void sumMatrix(ll r, ll c){
    if(r == rows) return;
    if(c == cols){
        sumMatrix(r + 1, 0);
    }else{
        if(c) cout << " ";
        cout << arr1[r][c] + arr2[r][c];
        if(c == cols - 1) cout << endl;
        sumMatrix(r, c + 1);
    }
}

int main()
{
    fast;
    cin >> rows >> cols;
    for(ll i = 0; i < rows; i++){
        for(ll j = 0; j < cols; j++){
            cin >> arr1[i][j];
        }
    }
    for(ll i = 0; i < rows; i++){
        for(ll j = 0; j < cols; j++){
            cin >> arr2[i][j];
        }
    }
    sumMatrix(0, 0);
    return 0;
}
