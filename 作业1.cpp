#include<stdio.h>

void sort(int x,int y,int z);
int main()
{	
	int x,y,z;
	printf("Plz enter 3 integers:");
	scanf("%d %d %d",&x,&y,&z);
	sort(x,y,z);
	return 0;

 } 
 
 void sort(int x,int y,int z)
 {	int i;
 	if(x>=y){
 		i=x;
 		x=y;
 		y=i;
 		if(y>=z){
 			i=y;
 			y=z;
 			z=i;
 			if(x>y){
	 		i=x;
	 		x=y;
	 		y=i;
	 		}
		}
		 
	 }
	 if(x<y&&y>=z){
	 		i=y;
 			y=z;
 			z=i;
 			if(x>y){
	 		i=x;
	 		x=y;
	 		y=i;
	 		}
		}
	
	printf("%d\t%d\t%d",x,y,z);		
}
 
