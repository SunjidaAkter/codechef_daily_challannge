#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int q;cin>>q;
    while(q--){
        int n,m;cin>>n>>m;
        string s1,s2;cin>>s1>>s2;
        int cnt=0,mn=INT_MAX;
        for(int i=0;i<n-m+1;i++){
            for(int j=0;j<m;j++){
                int x=abs(s1[i+j]-s2[j]);
                if(x>5)x=10-x;
                cnt+=x;
            }
            mn=min(mn,cnt);
            cnt=0;
        }
        cout<<mn<<endl;
    }
    return 0;
}