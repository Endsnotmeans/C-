#include<iostream>
const int strsize=20;
struct bop{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;
};
int main(){
	using namespace std;
	cout<<"BOP report\n"
		<<"a.by name    b.by title\n"
		<<"c.by bopname d.by preference\n"
		<<"q.quit"<<endl;
	bop bop[2]={					//注意都是大括号 
		{"lbj","goat","king",1},
		{"kd","unreliable","cupcake",2}
	};
	char ch;
	cout<<"Enter your choice: ";
	while(cin.get(ch)&&ch!='q'){
		if(ch=='a'){
			for(int i=0;i<2;i++)
			cout<<bop[i].fullname<<endl;	//注意【i】的位置 
		}
		else if(ch=='b'){				//注意是“==”不是“=”  TOT
			for(int i=0;i<2;i++)
			cout<<bop[i].title<<endl;
		}
		else if(ch=='c'){
			for(int i=0;i<2;i++)
			cout<<bop[i].bopname<<endl;
		}
		else if(ch=='d'){
			for(int i=0;i<2;i++){
				switch(bop[i].preference )
				{
					case 0:cout<<bop[i].fullname <<endl;
							break;
					case 1:cout<<bop[i].title <<endl;
							break;
					case 2: cout<<bop[i].bopname <<endl;
							break;
				}
				
			}			
		}
		else
			cout<<"type again: "<<endl;
		cout<<"Next choice: "<<endl;
		cin.get(ch);
	}
	return 0;
}
