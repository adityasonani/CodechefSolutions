#include <bits/stdc++.h>  

#define int long long
#define ln "\n"
#define fastio ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr)
#define mod 1e9+7

using namespace std;


void solve() {
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    int mx = *max_element(a.begin(), a.end());
    int cntmx = count(a.begin(), a.end(), mx);
    int cntchk = 0;
    for(int i=0; i<n; i++){
        if(count(a.begin(), a.end(), a[i]) > 2){
            cntchk = -1;
            break;
        }
    }
    if(cntmx==1 && cntchk==0) {
        sort(a.begin(), a.end());
        cout << "YES\n";
        int j;
        for(j=0; j<n; j+=2){
            cout << a[j] << " ";
        }
        if(n%2==0)
        {
            j = n-1;
        } else {
            j = n-2;
        }
        for(;j>=0; j-=2){
            cout << a[j] << " ";
        }
        cout << ln;
    }
    else{
        cout << "NO\n";
    }
}   

int32_t main(){
    fastio;
    
    int t; 
    cin >> t;
    while(t--)
        solve();
} 