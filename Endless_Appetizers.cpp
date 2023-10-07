#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pub push_back
#define pob pop_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
void solve(){
    double x,y;int z;cin>>x>>y>>z;
    double xy=x+(double)(z/30);
    cout<<ceil(xy/y)<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}