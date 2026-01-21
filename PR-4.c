#include <stdio.h>
int main(){
	for(int i=1; i<=5; i++){
		int num = 41;
		for(int j=1; j<=i; j++){
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}


//41
//41 42
//41 42 43
//41 42 43 44
//41 42 43 44 45

	printf("\n");
	int num1 = 11;
	for(int i=1; i<= 4; i++){
		for(int j=1; j<=i; j++){
			printf("%d ",num1);
			num1++;
		}
		printf("\n");
	}

//11
//12 13
//14 15 16
//17 18 19 20

    printf("\n");
    int num2 = 5;
	for(int i=num2; i>=1; i--){
		for(int k=1; k<=i; k++){
			  printf("  ");
		}   
		for(int j=i; j<=num2; j++){
			printf("%d ",j);
		   
		}
		printf("\n");
	}
	
//          5
//        4 5
//      3 4 5
//    2 3 4 5
//  1 2 3 4 5


	printf("\n");
    int rows = 5;
    for (int i = rows; i >= 1; i--) {
        for (int s = 0; s < rows - i; s++) {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) {
            if (j % 2 == 1)
                printf("1 ");
            else
                printf("0 ");
        }

        printf("\n");
    }
  
//1 0 1 0 1
//  1 0 1 0
//    1 0 1
//      1 0
//        1
    
    printf("\n");
    int num3 = 5;
	for(int i=num3; i>=1; i--){
		
		for(int j=1; j<=i; j++){
			printf(" ");
		}
		for(int k=i; k<=num3; k++){
			printf("%d",k);
		}
		for(int k=num3-1;k >=i; k--){
			printf("%d",k);
		}		
		printf("\n");
	}

//     5
//    454
//   34543
//  2345432
// 123454321


	printf("\n");
  	printf("\n");
    
    int n = 5; 
    int i, j, k;

    for (i = 1; i <= n; i++) {

        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for (k = 1; k <= 2 * (n - i) - 1; k++) {
            printf("  "); 
        }
    
        for (j = (i == n) ? i - 1 : i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

//1               1
//1 2           2 1
//1 2 3       3 2 1
//1 2 3 4   4 3 2 1
//1 2 3 4 5 4 3 2 1



	printf("\n");
    for (int j = 1; j <= 5; j++) {
        printf("* ");
    }
    printf("\n");

    printf("*       *\n");
    for (int j = 1; j <= 5; j++) {
        printf("* ");
    }
    printf("\n");
    printf("*\n");
    printf("*\n");   
}

//* * * * *
//*       * 
//* * * * *
//*
//*








