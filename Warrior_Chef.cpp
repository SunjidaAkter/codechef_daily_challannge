#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int q;cin>>q;
    while(q--){
        int n,x;cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++){
            int y=x;
            for(int j=0;j<n;j++){
                if(y-=a[j]>0)continue;
                else break;
            }
        }
    }
    return 0;
}