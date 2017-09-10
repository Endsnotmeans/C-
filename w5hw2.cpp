#include<stdio.h>
int Pn(int);

int main(){
	int n,m,i;
	scanf("%d %d",&n,&m);
	for(i=n;i<=m;i++){
		if(Pn(i))
		printf("%d ",i);
	}
}



int Pn(int x)
{
	int Pn=0;
	int i,t;
	t=x;
	for(i=1;i<x;i++){
		if(x%i==0){ 
			
			t-=i;		 
		}
	}
		if(t==0)
		Pn=1;
		else
		Pn=0;
	return Pn;
}
