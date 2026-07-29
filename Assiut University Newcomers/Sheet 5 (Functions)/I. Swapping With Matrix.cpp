#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void swapRows(vector<vector<ll>>& matrix, ll row1, ll row2) {
    swap(matrix[row1], matrix[row2]);
}

void swapColumns(vector<vector<ll>>& matrix, ll col1, ll col2, ll n) {
    for(ll i = 0; i < n; i++){
        swap(matrix[i][col1], matrix[i][col2]);
    }
}

int main()
{
    fast;
    ll n, x, y; cin >> n >> x >> y;
    vector<vector<ll>> matrix(n, vector<ll>(n));
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }
    swapRows(matrix, x - 1, y - 1);
    swapColumns(matrix, x - 1, y - 1, n);
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
