#include<stdio.h>
int main(){
	int num[100] = {1,2,9,4,5,6};
	for(int i=0; i<6 ; i++){  //())
		printf("%d\t",num[i]); 
	}
	int index;
	printf("\nMoi nhap vao vi tri muon xoa ");
	scanf("%d", &index);
	
	for ( int i = index; i<5; i++){
		num[i] = num[i+1]; 
	}
	for (int i=0; i<5; i++){
		printf("%d\t", num[i]); 
	}
	return 0; 
}                   
