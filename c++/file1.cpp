#include<stdio.h>
#include<conio.h>
struct str{
	char name[20];
	int roll_no;
	int marks;
	int year;
};
main(){
	int i;
	str s[100];
	FILE *f=fopen("abc.txt","w+");
	for(i=1;i<=2;i++){
	printf("Enter name, roll no., marks, year of stud %d \n", i);
	scanf("%s %d %d %d",s[i].name, &s[i].roll_no, &s[i].marks, &s[i].year);
	fprintf(f,"%s %d %d %d\n",s[i].name, s[i].roll_no, s[i].marks, s[i].year);
	}
	
	
}
