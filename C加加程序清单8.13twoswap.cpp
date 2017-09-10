#include<iostream>
template <class Any>
void Swap(Any &a,Any &b);

struct job
{
	char name[40];
	double salary;
	int floor;
 } ;
 
 //显示具体化声明，<>来指定类型 
 template<> void Swap<job>(job &j1,job &j2);	
 void Show(job &j);
 
 int main()
 {
 	using namespace std;
 	cout.precision(2);
 	cout.setf(ios::fixed,ios::floatfield);
 	int i=10,j=20;
 	cout<<"i,j= "<<i<<". "<<j<<".\n";
	cout<<"Using compiler-generated int swapper: \n";
	Swap(i,j);        //生成void Swap（int &，int &） 叫做实例化，隐式实例化 
	cout<<"Now i,j= "<<i<<", "<<j<<".\n";
	
	job sue={"Susan Yaffee",73000.60,7};
	job sidney={"Sidney Taffee",78060.72,9};
	cout<<"Before job swapping: \n";
	Show(sue);
	Show(sidney);
	Swap(sue,sidney);   		//调用void Swap(job&,job&)
	cout<<"After job swapping: \n";
	Show(sue);
	Show(sidney);
	
	return 0; 	
  } 

template<class Any>
void Swap(Any &a,Any &b)			//常规模版
{
	Any temp;
	temp=a;
	a=b;
	b=temp;
}

template<> void Swap<job> (job &j1,job &j2)		//显式具体化 
{
	double t1;
	int t2;
	t1=j1.salary ;
	j1.salary =j2.salary ;
	j2.salary =t1;
	t2=j1.floor ;
	j1.floor =j2.floor ;
	j2.floor =t2;
 } 
 
 void Show(job &j)
 {
 	using namespace std;
 	cout<<j.name <<": $"<<j.salary 
 		<<" on floor "<<j.floor <<endl;
 }
 
