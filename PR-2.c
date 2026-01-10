#include <stdio.h>

int main() {
    int marks;

    printf("Enter your Marks:- ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100) {
        printf("Grade: A, Excellent work \n");
    } 
    else if (marks >= 70 && marks < 90) {
        printf("Grade: B, Well done \n");
    } 
    else if (marks >= 60 && marks < 70) {
        printf("Grade: C, Good job\n");
    }
    else if (marks >= 35 && marks < 60) {
        printf("Grade: D, You passed\n");
    } 
    else if (marks >= 0 && marks < 35) {
        printf("Grade: F, Sorry,you failed\n");
    }     
    else {
        printf("Invalid marks entered!\n");
    }
    if ( marks >= 35 && marks < 100) {
        printf("You are eligible for next level");
    }
	else {
        printf("Please try again next time");	
	}
       
}
