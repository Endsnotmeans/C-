#include<iostream>

int main()
{
	using namespace std;
	int day,hour,minute,second;
	long inputSecond;
	const int DAY=60*60*24;
	const int HOUR=60*60;
	const int MIN=60;
	 
	
	cout<<"Enter the number of seconds:";
	cin>>inputSecond;
	day=inputSecond/DAY;
	hour=(inputSecond%DAY)/HOUR;
	minute=((inputSecond%DAY)%HOUR)/MIN;
	second=((inputSecond%DAY)%HOUR)%MIN;
	
	
	cout<<inputSecond<<" seconds = "<<day<<" days,"
	<<hour<<" hours,"<<minute<<" minutes,"<<second<<" seconds";
	
	return 0;
}
