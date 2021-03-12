#include<stdio.h>
#include<stdlib.h>

int main() {
  int n,i;
  scanf("%d",&n);
  int a[n];
  int b[n];
  int x[n];
  for(i=0; i<n;i++){
  	scanf("%d",&a[i]);
  }
  for(i=0; i<n;i++){
  	scanf("%d",&b[i]);
  }
  for(i=0;i<n;i++){
  	if(a[i]>b[i]){
    	x[i]=1;
    }else {
    	x[i]=0;
    }
  }
    int c=1;
    for(i=0;i<n;i++){
        c=c*x[i];
    }
    if(c==0){
        printf("0");
    }else {
        printf("1");
    }
    return 0;
}