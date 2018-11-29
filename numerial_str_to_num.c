#include<stdio.h>
int main()
{
int radix,X[30]={0};
long int x=0;
int i,j;
char char1;

printf("Enter Radix : \n");
scanf("%d",&radix);

printf("Enter Numeral string : and enter 100 to stop \n");
for(i=0;i<32;i++)
{
	
	scanf("%d",&X[i]);
	if(X[i]==100)
	{
		i=i-1;
		break;
	}
}
printf("I=%d\n",i);
for(j=0;j<=i;j++)
{
	x=x*radix+X[j];
		printf("Value of x : %ld\n",x);
}


}
