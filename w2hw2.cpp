#include<stdio.h>

int main()
{
	int sr,srs,srr;
	printf("Plz Enter singal report:",sr);
    scanf("%d",&sr);
//    printf("u entered:%d",sr);
//    
//    srs=sr%10;
//    srr=sr/10;
    switch(sr%10)
    {
    	case 1:printf("Faint signals, barely perceptible");break;
    	case 2:printf("Very weak signals");break;
    	case 3:printf("Weak signals");break;
    	case 4:printf("Fair signals");break;
    	case 5:printf("Fairly good signals");break;
    	case 6:printf("Good signals");break;
    	case 7:printf("Moderately strong signals");break;
    	case 8:printf("Strong signals");break;
    	case 9:printf("Extremely strong signals");break;
    	default:printf("a");
    }
    switch(sr/10)
    {
    	case 1:printf(",unreadable");break;
    	case 2:printf(",barely readable, occasional words distinguishable");break;
    	case 3:printf(",readable with considerable difficulty");break;
    	case 4:printf(",readable with practically no difficulty");break;
    	case 5:printf(",perfectly readable");break;
    	default:printf("");
    }
	
	
	return 0;
}
