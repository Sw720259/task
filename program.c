#include<stdio.h>
int main(){
	int num1=20,num2=45,largest;
	largest=(num1>num2)?num1:num2;
	printf("largest number is:%d\n",largest);

	return 0;
}
#include<stdio.h>
 int main(){
	 int num1=20,num2=45,num3=10,average;
	 average=(num1+num2+num3)/3;
	 printf("average numbers is:%d\n",average);

	 return 0;
 }
#include<stdio.h>
int main(){
	char c;
	printf("enter a character:\n");
	scanf("%c",&c);
	printf("ASCI values of %c=%d",c,c);

	return 0;
}
#include<stdio.h>
int main(){
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	(num>0)?printf("%d is positive.\n",num):
	(num<0)?printf("%d is negative.\n",num):

	printf("number is zero.\n");

	return 0;
}
#include<stdio.h>
int main(){
	int day;
	printf("enter a number(1-7):");
	sacnf("%d",&day);
	switch(day){
		case 1:
			printf("sunday\n");
			break;
		case 2:
			printf("monday\n");
			break;
		case 3:
			printf("tuesday\n");
			break;
		case 4:
			printf("wednesday\n");
			break;
		case 5:
			printf("thrusday\n");
			break;
		case 6:
			printf("friday\n");
			break;
		case 7:
			printf("saturday\n");
			break;
		case 8:
			printf("invalid day:\n");
			break;
	}
	return 0;
}
