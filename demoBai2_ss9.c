#include<stdio.h>
int main(){
	int num[100] = {1,2,4,5,6};
	for(int i=0; i<5; i++){  //(sizeof (num)/sizeof (num[0]))
		printf("%d\t",num[i]); 
	} 
	 
	
	int number, index;
	printf("\nMoi nhap vao vi tri muon thay the  (-1)");
	scanf("%d",&index);
	printf("\nMoi nhap vao so nguyen muon thay the ");
	scanf("%d",&number);
	
	
	for(int i = 5; i>=index-1;i--){
	//Dich chuyen  
		 
	}
	num[index] = number;//chen gia tri do vao vi tri index
	
	//In ra ket qua
	for(int i = 0; i<5; i++){
		printf("%d\t",num[i]); 
	}
	return 0; 

} 
