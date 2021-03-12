#include<stdio.h>
#include<stdlib.h>

int main() {
  int n,i,k;
  scanf("%d",&n);
  int a[n];
  for(i=0; i<n;i++){
  	scanf("%d",&a[i]);
  }
  scanf("%d",&k);
  for(i=0;i<n;i++){
  	if(a[i]%k!=0){
    	printf("X ");
    }else {
        printf("%d ",a[i]);
    }
  }
    return 0;
}