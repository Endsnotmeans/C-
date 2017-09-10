#include<stdio.h>
#include<math.h>

int main()
{	int x;
	scanf("%d",&x);
	
	int digit,num=0,result=0;
	while (x>0){
		digit=x%10;
		num++;
		x /=10;
		printf("Digit is %d.\tNum is %d\n",digit,num);
	int binary;
	if(digit%2==num%2)
		binary=1;
	else
		binary=0;
	printf("%d\n",binary);
	double a;
		a=pow(2,num-1);
	result=result+a*binary;
	}	
	printf("%d\n",result);


//	printf("%d,%d",p,q);
}
