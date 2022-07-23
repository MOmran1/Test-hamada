#include <stdio.h>
#include <math.h>
char calc(char,int,int,int*);
int main(void)
{
char a;
int n1, n2;
printf("Enter the operator  ");
scanf("%c",&a); 
printf("Enter Number_1  ");
scanf("%d",&n1);

printf("Enter Number_2  ");
scanf("%d",&n2);
int R=0;
char error;
error=calc(a,n1,n2,&R);
	
	printf("%d",R);
	
	
	
}
char calc(char a,int n1,int n2,int*Result){
	
	switch(a){
		case ('+'): *Result = n1+n2; break;
		case ('-'): *Result = n1+n2; break;
		case ('*'): *Result= n1*n2; break;
        case ('/'):
		if(n2==0)
		return 0;
	else {*Result=n1/ n2; return 1;}
	break;
		
		
		
		
	}
	
	
	
	
}