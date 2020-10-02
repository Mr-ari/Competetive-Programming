#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
			int p=0;
			for(int j=1;j<=(2*i-1);j++){
					if(j<=i){
						p++;	
						printf("%d",p);
					}
					else{
						p--;
						printf("%d",p);
					}
			}
			printf("\n");
	}

		for(int i=n-1;i>=0;i--){
			int p=0;
			for(int j=1;j<=(2*i-1);j++){
					if(j<=i){
						p++;	
						printf("%d",p);
					}
					else{
						p--;
						printf("%d",p);
					}
			}
			printf("\n");
	}
}
