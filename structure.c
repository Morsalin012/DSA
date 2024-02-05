#include<stdio.h>
struct student{
    int roll;
    float marks1,marks2,marks3;
    char name[50];
};
int main(){
    struct student students[5];
    printf("Enter the student details:\n");
    for(int i=0; i<5; i++){
        printf("Enter the %d no students roll: ", i+1);
        scanf("%d", &students[i].roll);
        printf("Enter the students name:\n");
        scanf("%s", students[i].name);
        printf("Enter the marks of 3 subjects: ");
        scanf("%f %f %f", &students[i].marks1,&students[i].marks2,&students[i].marks3);

    float total=0;
    float min=students[i].marks1;
    if(students[i].marks1>students[i].marks2){
      min=students[i].marks2;
    }
    else if(students[i].marks2>students[i].marks3){
        min=students[i].marks3;
    }
    total=students[i].marks1+students[i].marks2+students[i].marks3-min;
    float avg=total/2;

    printf("Roll: %d, Name: %s, Average Marks: %.2f", students[i].roll, students[i].name, avg);

    if(avg>=80){
        printf("Grade: A+ \n");
    }
    else if(avg<80&& avg>=70){
        printf("Grade: A \n");
    }
    else if(avg<70&& avg>=65){
        printf("Grade: B+ \n");
    }
    else if(avg<65&& avg>=60){
        printf("Grade: B\ n");
    }
    else if(avg<60&& avg>=55){
        printf("Grade: B- \n");
    }
    else if(avg<55&& avg>=50){
        printf("Grade: C \n");
    }
    else if(avg<50&& avg>=40){
        printf("Grade: D \n");
    }
    else if(avg>40){
        printf("Grade: F \n");
    }
  }
}
