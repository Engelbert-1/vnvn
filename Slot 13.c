//Q2_test.md (Github)

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//
//int main(){
//    system("cls");
//    //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
//    int n,i,s= 0;
//    int dem=1;
//    do{
//    scanf("%d", &n);
//	}while(n<0);
//	
//    for(i = n; i > 0; i--){
//        if (i % 2 == 0) {
//            s=s+i;
//            dem++;
//        }
//        if (dem == 4) {
//            break;
//        }
//    }
//    // Fixed Do not edit anything here.
//    printf("\nOUTPUT:\n");
//    //@STUDENT: WRITE YOUR OUTPUT HERE:
//    printf("%d", s);
//
//    //--FIXED PART - DO NOT EDIT ANYTHING BELOW
//    printf("\n");
//    system("pause");
//    return(0);
//}

//Q3_test.md (Github)
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//int main() {
//  system("cls");
//  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
//    int arr[7]; 
//	int i, j, temp;
//    
//    printf("nhap 7 so nguyen:\n");
//    for(i = 0; i < 7; i++){
//    scanf("%d", &arr[i]);
//    }
//    // sap xep tang dan (bubble sort)
//    for(i = 0; i < 7 - 1; i++){
//    	for (j = 0; j < 7 - i - 1; j++){
//        	if(arr[j] > arr[j + 1]){
//        // hoan doi gia tri cua 2 phan tu
//        		temp = arr[j];
//        		arr[j] = arr[j + 1];
//        		arr[j + 1] = temp;
//        	}
//    	}
//    }
//
//    // Fixed Do not edit anything here.
//	printf("\nOUTPUT:\n");
//    //@STUDENT: WRITE YOUR OUTPUT HERE:
//    
//    for(i = 0; i < 7; i++){
//    	printf("%d", arr[i]);
//    	if (i < 6){
//        	printf(" ");
//    	}
//  	}
//  	
//  	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
//  	printf("\n");
//  	system ("pause");
//  	return 0;
//}

//Q4_test.md (Github)
//#include <stdio.h>
//
//int main(){
//    system("cls");
//    char arr[100];  
//
//    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
//    printf("Enter a string: ");
//    fgets(arr, sizeof(arr), stdin);  
//
//    // Fixed Do not edit anything here.
//    printf("\nOUTPUT:\n");
//    //@STUDENT: WRITE YOUR OUTPUT HERE:
//    printf("The entered string is: %s", arr);  
//
//    //--FIXED PART - DO NOT EDIT ANYTHING HERE
//    printf("\n");
//    system("pause");
//    return 0;
//}

//Q6_test.md (Github)
//#include <stdio.h>
//
//int main() {
//    system("cls"); 
//    //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
//    int i;
//    char arr[100]; 
//    printf("Enter a string: ");
//    fgets(arr, sizeof(arr), stdin);
//
//    int DemnguyenAm = 0;
//    for(i = 0; arr[i] != '\0'; i++){
//        char ch = arr[i];
//        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
//            DemnguyenAm++;
//        }
//    }
//	// Fixed Do not edit anything here.
//    printf("\nOUTPUT:\n");
//    //@STUDENT: WRITE YOUR OUTPUT HERE:
//    
//    printf("Number of vowels: %d\n", DemnguyenAm);
//
//    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
//    printf("\n");
//    system("pause");
//    return(0);
//}

//Q1(Slot 13)
//#include <stdio.h>
//#include <stdlib.h>
//
//struct SinhVien {
//    char maSV[20];
//    float diemTB;
//};
//
//int main() {
//    int n;
//    printf("Nhap so luong sinh vien: "); scanf("%d", &n);
//    
//    struct SinhVien* sv = (struct SinhVien*)malloc(n * sizeof(struct SinhVien));
//    
//    for(int i = 0; i < n; i++){
//        printf("Nhap ma sinh vien cho sinh vien %d: ", i + 1);
//        scanf("%s", sv[i].maSV);
//        printf("Nhap diem trung binh cho sinh vien %d: ", i + 1);
//        scanf("%f", &sv[i].diemTB);
//    }
//    printf("Danh sach sinh vien:\n");
//    for(int i = 0; i < n; i++){
//        printf("Sinh vien %d: Ma SV: %s, Diem TB: %.2f\n", i + 1, sv[i].maSV, sv[i].diemTB);
//    }
//    free(sv);
//    return 0;
//}

//Q2(Slot 13)
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//struct DiemMonHoc {
//    char tenHS[50];
//    float diem;
//};
//
//int soSanhDiem(const void *a, const void *b) {
//    return (*(struct DiemMonHoc*)a).diem - (*(struct DiemMonHoc*)b).diem;
//}
//
//int main() {
//    int n;
//
//    printf("Nhap so luong diem: "); scanf("%d", &n);
//    
//    struct DiemMonHoc *dsDiem = (struct DiemMonHoc*)malloc(n * sizeof(struct DiemMonHoc));
//    for(int i = 0; i < n; i++){
//        printf("Nhap ten hoc sinh %d: ", i + 1);
//        scanf("%s", dsDiem[i].tenHS);
//        printf("Nhap diem cho hoc sinh %s: ", dsDiem[i].tenHS);
//        scanf("%f", &dsDiem[i].diem);
//    }
//
//    qsort(dsDiem, n, sizeof(struct DiemMonHoc), soSanhDiem);
//    printf("\nDanh sach diem mon hoc theo thu tu tang dan cua diem:\n");
//    for(int i = 0; i < n; i++){
//        printf("Hoc sinh: %s, Diem: %.2f\n", dsDiem[i].tenHS, dsDiem[i].diem);
//    }
//    free(dsDiem);
//    return 0;
//}

//Q3(Slot 13)
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//    int n;
//    printf("Nhap so luong phan tu cua mang: "); scanf("%d", &n);
//    int *mang = (int*)malloc(n * sizeof(int));
//
//    if (mang == NULL) {
//        printf("Khong the cap phat bo nho.");
//        return 1;
//    }
//
//    for (int i = 0; i < n; i++) {
//        printf("Nhap phan tu thu %d: ", i + 1);
//        scanf("%d", &mang[i]);
//    }
//    int tong = 0;
//    for (int i = 0; i < n; i++) {
//        tong += mang[i];
//    }
//    printf("Tong cac phan tu trong mang la: %d\n", tong);
//    free(mang);
//    return 0;
//}

//Q7_test.md (Github)
//#include <stdio.h>
//
//int main(){
//  	system("cls");
//  	// INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
//  	int i;
//  	char arr[20]; printf("");
//  	fgets(arr, sizeof(arr), stdin);
//  	int length = strlen(arr);
//  	int giua = (length - 5) / 2;
//
//   	// Fixed Do not edit anything here.
//    printf("\nOUTPUT:\n");
//    //@STUDENT: WRITE YOUR OUTPUT HERE:
//    
////  	for(i = giua; i < giua + 5; i++){
////    	printf("%c", arr[i]);
////  	}
//  	i = giua;
//    do{
//        printf("%c", arr[i]);
//        i++;
//    }while (i < giua + 5);
//  	// --FIXED PART - DO NOT EDIT ANYTHING HERE
//  	printf("\n");
//  	system("pause");
//  	return 0;
//} 
//

//Slot 14-slot15_1.md(Github)

//#include <stdio.h>
//int main() {
//	system("cls");
//  	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
//    int n;
//    do{
//        printf("nhap n (10 <= n <= 20): "); scanf("%d", &n);
//        if(n < 10 || n > 20){
//            printf("n ko hop le.Moi nhap lai\n");
//        }
//    }while (n < 10 || n > 20);
//    
//    // Fixed Do not edit anything here.
//    printf("\nOUTPUT:\n");
//    //@STUDENT: WRITE YOUR OUTPUT HERE:
//    
//    for(int i = 1; i <= n; i++){
//        for(int j = 1; j <= i; j++){
//            printf("*");
//        }
//        printf("\n");
//    }
//    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
//    printf("\n");
//    system ("pause");
//    return(0);
//}

//Slot 14-slot15_3.md(Github)

//#include <stdio.h>
//#include <string.h>
//
//int main() {
//  	system("cls");
//  	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
//  	char str1[100], str2[100];
//  	printf(""); scanf("%s", str1);
//  	printf(""); scanf("%s", str2);
//  	
//  	// Fixed Do not edit anything here.
//  	printf("\nOUTPUT:\n");
//  	//@STUDENT: WRITE YOUR OUTPUT HERE:
//
//  	if (strcmp(str1, str2) == 0) {
//    printf("Strings are equal");
//  	} else {
//    	printf("Strings are not equal");
//  	}
//  	
//	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
//  	printf("\n");
//  	system("pause");
//  	return 0;
//}

//Slot 14-slot15_4.md(Github)
#include <stdio.h>
#include <string.h>

int main(){
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char arr[100];  
	char searchStr[20]; 	
	printf("Enter a string: "); gets(arr); 	
	printf("Enter the search string: "); scanf("%s", searchStr); 
	
	char *result = strstr(arr, searchStr);
		  
	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
		  
	if(result){
		printf("Search string found.\n");
	} else {
		printf("Search string not found.\n");
	}

  	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
  	printf("\n");
  	system ("pause");
  	return(0);
}






