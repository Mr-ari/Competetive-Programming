#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


vector<ll> find_sub_sum(vector<ll> v){
    int n = v.size();
    vector<ll> s;
    for(int i = 0;i< 1<<n;i++){
        int j=0;
        int sum = 0;
        for(int no=i;no>0;no=no>>1,j++){
            if(no&1){
                sum+=v[j];
            }
        }
        s.push_back(sum);
    }
    return s;
}

int main(){

    int n;
    ll a,b;
    cin>>n;
    cin>>a>>b;
    vector<ll> v1(int(n/2),0),v2(n-int(n/2),0),s1,s2;
    for(int i=0;i<int(n/2);i++){
        cin>>v1[i];
    }
    for(int i=int(n/2);i<n;i++){
        cin>>v2[i - int(n/2)];
    }
    s1 = find_sub_sum(v1);
    s2 = find_sub_sum(v2);

    sort(s2.begin(),s2.end());

    ll ans=0;
    for(ll x:s1){
        auto it1 = lower_bound(s2.begin(),s2.end(),a-x);
        auto it2 = upper_bound(s2.begin(),s2.end(),b-x);

        ans += (it2-it1);
    }

    cout<<ans<<endl;
    return 0;
}