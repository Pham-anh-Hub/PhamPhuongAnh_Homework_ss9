#include<stdio.h>
int main(){
	int length;
	printf("Moi nhap vao so phan tu trong mang  ");
	scanf("%d",&length);
	 
	int num[length] ;
	for (int i = 0; i<length; i++){
		printf("Moi nhap vao so nguyen ");
		scanf("%d",&num[i]); 
	}
	for(int i = 0; i<length; i++){
		printf("%d\t",num[i]); 
	} 
	
	
	
	int number, index; 
	printf("\nMoi nhap vao so nguyen muon chen ");
	scanf("%d",&number);
	printf("\nMoi nhap vao vi tri muon chen (-1)");
	scanf("%d",&index);
	
	for(int i = length+1; i>=index;i--){
		num[i] = num[i-1];//Dich chuyen  
		 
	}
	num[index] = number;//chen gia tri do vao vi tri index
	
	//In ra ket qua
	for(int i = 0; i<length+1; i++){
		printf("%d\t",num[i]); 
	}
	return 0; 

} 
