#include<stdio.h>
#include<stdlib.h> 
int main(){
	int length;
	int num[length];
	int number, index;
	printf("Moi nhap vao so phan tu trong mang  ");
	scanf("%d",&length);
do{
	int choice;
	printf("\n******MENU******\n");
	printf("1. Nhap vao mang \n");
	printf("2. Hien thi mang \n");
	printf("3. Them phan tu vao mang \n");
	printf("4. Sua phan tu trong mang \n");
	printf("5. Xoa phan tu trong mang \n");
	printf("6. Thoat \n");
	printf("\tLua chon cua ban: ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			 num[length] ;
			for (int i = 0; i<length; i++){
				printf("Moi nhap vao so nguyen ");
				scanf("%d",&num[i]);
				}
			break;
		case 2:
			
			printf("Mang sau khi nhap gia tri la: ");
			for (int i = 0; i<length; i++){
				printf("%d\t", num[i]);
				}
			
		
			break;
		case 3:
			 
			printf("\nMoi nhap vao so nguyen muon them ");
			scanf("%d",&number);
			printf("\nMoi nhap vao vi tri muon them (-1)");
			scanf("%d",&index);
	
			for(int i = length+1; i>=index;i--){
				num[i] = num[i-1];//Dich chuyen  
				 
			}
			num[index] = number;//chen gia tri do vao vi tri index
			
			//In ra ket qua
			for(int i = 0; i<length+1; i++){
				printf("%d\t",num[i]);
				}
			length ++;
			break;
			
		case 4:
			
			printf("\nMoi nhap vao vi tri muon thay the  (-1)");
			scanf("%d",&index);
			printf("\nMoi nhap vao so nguyen muon thay the ");
			scanf("%d",&number);
			
			
			for(int i = length; i>=index-1;i--){
			//Dich chuyen  
				 
			}
			num[index] = number;//chen gia tri do vao vi tri index
			
			//In ra ket qua
			for(int i = 0; i<length; i++){
				printf("%d\t",num[i]);
				}
			break;
		case 5:
			for(int i=0; i<length ; i++){  //())
			printf("%d\t",num[i]); 
			}
			printf("\nMoi nhap vao vi tri muon xoa (0-%d) ",length -1 );
			scanf("%d", &index);
	
			for ( int i = index; i<length-1; i++){
				num[i] = num[i+1]; 
			}
			for (int i=0; i<length-1; i++){
				printf("%d\t", num[i]);
				}
			length--;
			 
			break;
		case 6:
			exit(0); 
			break; 
		default:
			printf("\nNhap tu 1-6 ");
		} 
		}while(1);
		return 0;
		
}
