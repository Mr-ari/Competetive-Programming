#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int q;
    cin>>q;
    while(q--){
        ll l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        ll ans1 = (l1+r1)/2;
        ll ans2 = (l2+r2)/2;
        if(ans1 == ans2) cout<<ans1<<" "<<ans2+1<<endl;
        else cout<<ans1<<" "<<ans2<<endl;
    }
}