//Q: C. Format the information of 5 students (name, marks, cgpa, course) in a table like structure in a file.
#include<stdio.h>
#include<string.h>
struct student{
    int rollNo;
    char name[25];
    float cgpa;
    char course[25];
};

void main(){
    FILE *fptr;
    fptr = fopen("file_ch10_c.txt", "w");

        fprintf(fptr, "Student - 01\n");
        struct student s1;
            s1.rollNo = 101;
            fprintf(fptr, "\tRoll No : %d\n", s1.rollNo);

            strcpy(s1.name, "Anshu");
            fprintf(fptr, "\tName : %s\n", s1.name);

            s1.cgpa = 9.3;
            fprintf(fptr, "\tCGPA : %f\n", s1.cgpa);

            strcpy(s1.course, "CS");
            fprintf(fptr, "\tCourse : %s\n\n", s1.course);

        fprintf(fptr, "Student - 02\n");
        struct student s2;
            s2.rollNo = 102;
            fprintf(fptr, "\tRoll No : %d\n", s2.rollNo);

            strcpy(s2.name, "Ashish");
            fprintf(fptr, "\tName : %s\n", s2.name);

            s2.cgpa = 9.03;
            fprintf(fptr, "\tCGPA : %f\n", s2.cgpa);

            strcpy(s2.course, "CSE");
            fprintf(fptr, "\tCourse : %s\n\n", s2.course);

        fprintf(fptr, "Student - 03\n");
        struct student s3;
            s3.rollNo = 103;
            fprintf(fptr, "\tRoll No : %d\n", s3.rollNo);

            strcpy(s3.name, "Anuraj");
            fprintf(fptr, "\tName : %s\n", s3.name);

            s3.cgpa = 8.84;
            fprintf(fptr, "\tCGPA : %f\n", s3.cgpa);

            strcpy(s3.course, "ME");
            fprintf(fptr, "\tCourse : %s\n\n", s3.course);

        fprintf(fptr, "Student - 04\n");
        struct student s4;
            s4.rollNo = 104;
            fprintf(fptr, "\tRoll No : %d\n", s4.rollNo);

            strcpy(s4.name, "Kalpit");
            fprintf(fptr, "\tName : %s\n", s4.name);

            s4.cgpa = 9.5;
            fprintf(fptr, "\tCGPA : %f\n", s4.cgpa);

            strcpy(s4.course, "CE");
            fprintf(fptr, "\tCourse : %s\n\n", s4.course);

        fprintf(fptr, "Student - 05\n");
        struct student s5;
            s5.rollNo = 105;
            fprintf(fptr, "\tRoll No : %d\n", s5.rollNo);

            strcpy(s5.name, "Shivam");
            fprintf(fptr, "\tName : %s\n", s5.name);

            s5.cgpa = 9.1;
            fprintf(fptr, "\tCGPA : %f\n", s5.cgpa);  

            strcpy(s5.course, "TI");
            fprintf(fptr, "\tCourse : %s\n\n", s5.course);

    fclose(fptr);
    //return 0;
}

//Done