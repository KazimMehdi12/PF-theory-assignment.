#include<stdio.h>
int main(){
	int arr[5];
	for(int i=0;i<5;i++){
		printf("Element %d : ",i);
		scanf("%d",&arr[i]);
		while(arr[i]>=9999){
			printf("Invalid!\n");
			printf("Element %d : ",i);
			scanf("%d",&arr[i]);
		}
	}
	int min,min2;
	min=arr[0];
	min2=arr[1];
	for(int i=0;i<5;i++){
		if(arr[i]<min){
			min2=min;
			min=arr[i];
		}
	}
	printf("Second smallest : %d",min2);
}
