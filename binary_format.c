#include<stdio.h>
#include<math.h>
int main()
{
long int num;
int arr[8],res=0,base=1;
int i,j=0,k;


printf("Enter number: \n");
scanf("%ld",&num);


for(i=63;i>=0;i--)
{
	
	printf("%ld",num>>i&1);

	if((i)%8==0)
		printf(" ");

	arr[j++]=num>>i&1;
	if(i%8==0)
	{
		for(k=7;k>=0;k--)
		{
			res+=arr[k]*base;
			base=base*2;
		}	
		base=1;
		printf("Result : %d\n",res);
		res=0;
		j=0;
	}
}

}
