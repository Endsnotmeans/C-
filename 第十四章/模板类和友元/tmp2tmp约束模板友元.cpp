// tmp2tmp.cpp -- 约束模板友元template friends to a template class 
#include <iostream>
using std::cout;
using std::endl;

// template prototypes首先要在类定义前声明每个友元模板函数 
//可能是因为在类定义外先声明了模板，所以叫约束型.. 
template <typename T> void counts();
template <typename T> void report(T &);

// template class
template <typename TT>
class HasFriendT
{
private:
    TT item;
    static int ct;
public:
    HasFriendT(const TT & i) : item(i) {ct++;}
    ~HasFriendT() { ct--; }
    //然后再次将模板声明为友元 
    friend void counts<TT>();				//counts（）没有参数，必须加<TT>来指名其具体化 
    friend void report<>(HasFriendT<TT> &);	//<>其实是<HasFriendT<TT> >因为可以由参数推断，所以省略 
};

template <typename T>
int HasFriendT<T>::ct = 0;

// template friend functions definitions
template <typename T>
void counts()
{
    cout << "template size: " << sizeof(HasFriendT<T>) << "; ";
    cout << "template counts(): " << HasFriendT<T>::ct << endl;
}

template <typename T>
void report(T & hf)
{
    cout << hf.item << endl;
}

int main()
{
    counts<int>();
    HasFriendT<int> hfi1(10);
    HasFriendT<int> hfi2(20);
    HasFriendT<double> hfdb(10.5);
    report(hfi1);  // generate report(HasFriendT<int> &)
    report(hfi2);  // generate report(HasFriendT<int> &)
    report(hfdb);  // generate report(HasFriendT<double> &)两种类型的友元，互相独立 
    cout << "counts<int>() output:\n";			//没种T类型的友元，都有自己的counts（） 
    counts<int>();								//所以输出结果，counts<int>（）为2 
    cout << "counts<double>() output:\n";		//counts<double>（）为1
    counts<double>();

    return 0; 
}
