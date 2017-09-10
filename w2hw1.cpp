#include<stdio.h>

int main()
{
int t_bjt,t_utc;
printf("Enter a BJT Time:",t_bjt);
scanf("%d",&t_bjt);

	if (t_bjt>2359){
			printf("%d","Error!");
	}else if (t_bjt<800){
		t_utc=t_bjt-800+2400;
		printf("%d",t_utc);
	}else if(800<=t_bjt<809){
		t_utc=t_bjt-800;
		printf("%02d",t_utc);	
	}else{
		t_utc=t_bjt-800;
		printf("%d",t_utc);
	}
	return 0;
}
