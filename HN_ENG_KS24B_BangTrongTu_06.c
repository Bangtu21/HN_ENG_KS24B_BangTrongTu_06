#include<stdio.h>
int main(){
	int choice;
	int n;
	int arr[100];
	int newElement;
	int indexDelete;
	int count;
	int min1, min2, max;
	int count8=0;
	int search;
	printf("MENU\n");
	printf("1. Nhap so phan tu va gia tri cho mang\n");
	printf("2. In ra cac gia tri phan tu\n");
	printf("3. Dem so luong cac so hoan hao\n");
	printf("4. Tim gia tri nho thu hai trong mang (khong duoc sap xep mang)\n");
	printf("5. Them mot phan tu vao vi tri ngau nhien trong mang\n");
	printf("6. Xoa phan tu\n");
	printf("7. Sap xep mang theo thu tu tang dan (bubble sort)\n");
	printf("8. Cho nguoi dung nhap vao mot phan tu, tim kiem xem phan tu do co ton tai trong mang hay khong(liner sort)\n");
	printf("9. Sap xep lai mang va hien thi ra toan bo phan tu co trong mang sao cho toan bo so le dung truoc, so chan dung sau\n");
	printf("10. Kiem tra xem mang co phai mang tang dan hay khong\n");
	printf("11. Thoat chuong trinh\n");
	printf("\nLua chon cua ban: ");
	scanf("%d", &choice);
	while(choice>11){
		printf("MENU\n");
		printf("1. Nhap so phan tu va gia tri cho mang\n");
		printf("2. In ra cac gia tri phan tu\n");
		printf("3. Dem so luong cac so hoan hao\n");
		printf("4. Tim gia tri nho thu hai trong mang (khong duoc sap xep mang)\n");
		printf("5. Them mot phan tu vao vi tri ngau nhien trong mang\n");
		printf("6. Xoa phan tu\n");
		printf("7. Sap xep mang theo thu tu tang dan (bubble sort)\n");
		printf("8. Cho nguoi dung nhap vao mot phan tu, tim kiem xem phan tu do co ton tai trong mang hay khong(liner sort)\n");
		printf("9. Sap xep lai mang va hien thi ra toan bo phan tu co trong mang sao cho toan bo so le dung truoc, so chan dung sau\n");
		printf("10. Kiem tra xem mang co phai mang tang dan hay khong\n");
		printf("11. Thoat chuong trinh\n");
		printf("\nLua chon cua ban: ");
		scanf("%d", &choice);
	}
	while(choice<11){
		switch(choice){
			case 1:
				printf("Hay nhap do dai phan tu: ");
				scanf("%d", &n);
				for(int i=0; i<n; i++){
					printf("Hay nhap gia tri cua phan tu thu %d: ", i+1);
					scanf("%d", &arr[i]);
				}
				break;
				
			case 2:
				for(int i=0; i<n; i++){
					printf("arr[%d]=%d\n", i, arr[i]);
				}
				printf("\n");
				break;
				
			case 3:
				break;
				
			case 4:
				if(n<2){
					int min=arr[0];
					for(int i=0; i<n; i++){
						if(arr[i]>max){
							max=arr[i];
						}
						int min1=max;
						int min2=max;
						for(int i=0; i<n; i++){
							if(arr[i]<min){
								min2=min1;
								min1=arr[i];
							}else if(arr[i]<min2 && arr[i]!=min1){
								min2=arr[i];
							}
						}
					}
				}
				printf("Gia tri nho thu 2 la %d\n", min2);
				break;
				
			case 5:
				printf("Nhap phan tu ban muon them vao mang: ");
				scanf("%d", &newElement);
				if(n<100){
					arr[n]=newElement;
					n++;
				}
				for(int i=0; i<n; i++){
					printf("%d ", arr[i]);
				}
				printf("\n");
				break;
				
			case 6:
				printf("Hay nhap vi tri ban muon xoa: ");
				scanf("%d", &indexDelete);
				for(int i=indexDelete; i<n-1; i++){
					arr[i]=arr[i+1];
				}
				n--;
				for(int i=0; i<n; i++){
					printf("%d", arr[i]);
				}
				printf("\n");
				break;
				
			case 7:
				for(int i=0; i<n-1; i++){
					for(int f=0; f<n-i-1; f++){
						if(arr[f]>arr[f+1]){
							int temp=arr[f];
							arr[f]=arr[f+1];
							arr[f+1]=temp;
						}
					}
				}
				for(int i=0; i<n; i++){
					printf("%d ", arr[i]);
				}
				printf("\n");
				break;
				
			case 8:
				printf("Hay nhap vao mot phan tu ban muon tim: ");
				scanf("%d", &search);
				for(int i=0; i<n; i++){
					if(arr[i]==search){
						printf("Phan tu co ton tai trong mang\n");
						count8++;
						break;	
					}
				}
				if(count==0){
					printf("");
				}

									
			case 9:
				break;
				
			case 10:
				for(int i=0; i<n-1; i++){
					if(arr[i+1]>=arr[i]){
						count++;
					}
					if(count==n-1){
						printf("Day la mang tang dan");
						break;
					}else{
						printf("Day khong phai mang tang dan");
					}
				}
				printf("\n");
				break;
		}
		printf("\nMENU\n");
		printf("1. Nhap so phan tu va gia tri cho mang\n");
		printf("2. In ra cac gia tri phan tu\n");
		printf("3. Dem so luong cac so hoan hao\n");
		printf("4. Tim gia tri nho thu hai trong mang (khong duoc sap xep mang)\n");
		printf("5. Them mot phan tu vao vi tri ngau nhien trong mang\n");
		printf("6. Xoa phan tu\n");
		printf("7. Sap xep mang theo thu tu tang dan (bubble sort)\n");
		printf("8. Cho nguoi dung nhap vao mot phan tu, tim kiem xem phan tu do co ton tai trong mang hay khong(liner sort)\n");
		printf("9. Sap xep lai mang va hien thi ra toan bo phan tu co trong mang sao cho toan bo so le dung truoc, so chan dung sau\n");
		printf("10. Kiem tra xem mang co phai mang tang dan hay khong\n");
		printf("11. Thoat chuong trinh\n");
		printf("\nLua chon cua ban: ");
		scanf("%d", &choice);
	}
	
	
	
	
}
