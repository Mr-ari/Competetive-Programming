#include<stdio.h>
#include<string.h>
int * vote_count(int * arr , int n);
int main(){

    int sz;
    printf("Enter the number of Voting Candidates : \n");
    scanf("%d",&sz);

    printf("Enter the votes : \n");
    int arr[sz];
    for(int i=0;i<sz;i++) scanf("%d",&arr[i]);

    int *r = vote_count(arr,sz);

    printf("Votes for Each Candidates is below : \n");
    printf("1 : %d\n2 : %d\n3 : %d\n4 : %d\n5 : %d\nSPOILT BALLOT : %d\n",r[0],r[1],r[2],r[3],r[4],r[5]);
    
    return 0;
}

int * vote_count(int arr[] , int sz){
    static int res[6];
    memset(res,0,6*sizeof(arr[0]));
    for(int i=0;i<sz;i++){
        if(arr[i]>5) res[5]++;
        else res[arr[i]-1]++;
    }

    return res;
}