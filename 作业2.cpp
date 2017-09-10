#include<stdio.h>
#include<math.h>
int poly(int n,int x); 
int main()
{	int n,x,b;
	printf("Plz enter n between 0 and 10:");
    scanf("%d",&n);	
    printf("Plz enter x:");
    scanf("%d",&x);
	b=poly(n,x);
	printf("%d",b);
	
}

int poly(int n,int x)
{
	int i,a=0;
	if (n==0){
	a=1; 
	}
	else if (n==1){
	a=x;
	}
	else{
		for(i=0;i<=n;i++){
		a+=pow(x,i);
		}
	}
	return (a);
}
