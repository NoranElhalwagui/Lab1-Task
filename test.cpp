#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define loop(n) for(int i=0; i<n; i++)
#define sz(x) (int)(x).size()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define Cin(s)  for(auto&x:s)cin>>x
#define FIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
FIO;
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<ll> b(n);
    vector<ll> a(n);
    long long  c=1;
    for(auto &i:b) cin>>i;
    a[0]=c;
    for(int i=1;i<n;i++){
        ll diff=b[i]-b[i-1];
        ll idx=i+1;
        if(diff==idx) a[i]=++c;
        else{
            a[i]=a[i-diff];
        }
    }
    for(auto &i:a) cout<<i<<" ";
    cout<<el;
}
    return 0;
}