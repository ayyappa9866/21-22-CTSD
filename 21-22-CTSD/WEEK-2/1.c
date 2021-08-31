#include<stdio.h>
void displayDetails(char sname[30],int,char,char sbranch[10],long long int,float);
void displayDetails(char sname[30],int srollno,char sgender,char sbranch[10],long long int sphoneno,float scgpa)
{
	printf("Name=%s",sname);
	printf("\nId num=%d",srollno%100000);
	printf("\nGender=%c",sgender);
	printf("\nDept=%s",sbranch);
	printf("\nPhoneno=%lld-%lld-%lld",sphoneno/10000000,(sphoneno/10000)%1000,sphoneno%10000);
	printf("\nCgpa=%f",scgpa);
}
int main()
{
	char name[30],branch[10],gender;
	int rollno;
	long long int phoneno;
	float cgpa;
	printf("Enter the name of a student=");
	scanf("%s",name);
	printf("Enter the rollno of a student=");
	scanf("%d",&rollno);
	printf("Enter gender of a student=");
	scanf(" %c",&gender);
	printf("Enter the Branch of a student=");
	scanf("%s",branch);
	printf("Enter the phone no of a student=");
	scanf("%lld",&phoneno);
	printf("Enter CGPA of a student=");
	scanf("%f",&cgpa);
	displayDetails(name,rollno,gender,branch,phoneno,cgpa);
	return 0;	
}
