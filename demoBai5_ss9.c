#include<stdio.h>
#include<stdlib.h> 
int main(){
	int choice, check,length ;
	int num[100];
	int temp = 0;
	int max, min, count=0,number, index;
	do{
	 
	printf("\n*******MENU******\n");
	printf("\n1. Nhap so phan tu can nhap va gia tri cac phan tu ");
	printf("\n2. In ra gia tri cac phan tu dang quan li ");
	printf("\n3. In ra cac phan tu chan va tinh tong ");
	printf("\n4. In ra gia tri lon nhat va gia tri nho nhat trong mang ");
	printf("\n5. In ra cac phan tu la so nguyen to trong mang va tinh tong ");
	printf("\n6.Nhap vao 1 so va thong ke so phan tu do trong mang ");
	printf("\n7.Them mot phan tu vao vi tri chi dinh ");
	printf("\n8.Thoat");
	printf("\n\tLua chon cua ban: ");
	scanf("%d",&choice);
	switch(choice){
	
		case 1: 
			temp=1;
			printf("Moi nhap vao so phan tu mang: ");
			scanf("%d",&length);
			
			for(int i=0; i<length; i++){
				printf("Nhap so nguyen ");
				scanf("%d",&num[i]);
			}
			break; 
		
		case 2: 
			if(temp==1){
			printf("Mang da duoc nhap la: ");
				for(int i=0; i<length; i++){
					printf("%d\t", num[i]);
			}
			}else{
				printf("Chua co du lieu trong mang, moi chon chuc nang 1 de nhap\n");
				
			}
			break;
			 
		case 3:
			if(temp==1){			
			printf("Cac phan tu chan co trong mang la: ");
			for(int i=0; i<=length;i++){
				if(num[i]%2==0){
					printf("%d\t",num[i]);
				}
			}
			}else{
				printf("Chua co du lieu trong mang, moi chon chuc nang 1 de nhap ");
			}
			break;
		case 4:
			if(temp==1){
				printf("Gia tri lon nhat trong mang la: ");
				for(int i=0; i<length; i++){
					if(num[i]>max){
						max=num[i];
					}
				}
				printf("%d",max);
				printf("\nGia tri nho nhat trong mang la: ");
				for(int i=0; i<length; i++){
					if(num[i]<min){
						min=num[i];
					}
				}printf("%d",min);
			}else{
				printf("Chua co du lieu trong mang, moi chon chuc nang 1 de nhap ");
			}
			break;
		case 5:
			if(temp==1){
				int sum=0; 
			printf("So nguyen to co trong mang la: ");
				for(int i=0; i<length; i++){
				count=0;			 
					for(int j=2; j<=num[i];j++){
						if(num[i]%j==0){
						 count+=1;	 
						}
					}
					if (count==1){
						sum+=num[i];
						printf("%d ",num[i]);
						 
					}
				}
				printf("\nTong = %d",sum); 
					
				
			}else{
				printf("Chua co du lieu trong mang, moi chon chuc nang 1 de nhap ");
			}
			break;
		case 6:
			if(temp==1){
				printf("Nhap gia tri muon tim: ");
					scanf("%d", &number);
					
					for ( int i = 0; i< length; i++){
						if ( number == num[i] ){
							count++;
						}
					}
					printf("\nSo %d xuat hien %d lan!", number, count);
				}else{
				printf("Chua co du lieu trong mang, moi chon chuc nang 1 de nhap ");
				}
			break;
		case 7:
			if(temp==1){
				printf("Moi nhap gia tri can them  ");
				scanf("%d",&number); 
				printf("Nhap vi tri can them "); 
				scanf("%d", &index);
				for(int i = length+1; i>=index;i--){
					num[i] = num[i-1];//Dich chuyen  
			 
				}
					num[index] = number;//chen gia tri do vao vi tri index
		
					//In ra ket qua
					for(int i = 0; i<length+1; i++){
						printf("%d\t",num[i]); 
					}					
			}else{
				printf("Chua co du lieu trong mang, moi chon chuc nang 1 de nhap "); 
			}
			break;
		case 8:
			exit(0); 
			break; 
		default:
			printf("Moi chon lai \n"); 
		 
	}

	
	}while(1);
	


return 0; 
}

