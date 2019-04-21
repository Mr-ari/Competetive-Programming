#include <bits/stdtr1c++.h>
using namespace std;

//return the length of the longest increasing subsequence
int lis(vector<int> arr){
    int dp[arr.size()];
    int max = INT_MIN;
    for(auto &x : dp) x=1;
    for(int i=1;i<arr.size();i++){
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j] && dp[i]<dp[j]+1) dp[i] = dp[j]+1;
        }
    }
    for(auto x : dp) if(x>max) max=x;
    return max;
}

int main(){
    vector<int> arr = {10,22,9,33,21,50,41,60};
    cout<<lis(arr)<<endl;
}