// tmp2tmp.cpp -- Լ��ģ����Ԫtemplate friends to a template class 
#include <iostream>
using std::cout;
using std::endl;

// template prototypes����Ҫ���ඨ��ǰ����ÿ����Ԫģ�庯�� 
//��������Ϊ���ඨ������������ģ�壬���Խ�Լ����.. 
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
    //Ȼ���ٴν�ģ������Ϊ��Ԫ 
    friend void counts<TT>();				//counts����û�в����������<TT>��ָ������廯 
    friend void report<>(HasFriendT<TT> &);	//<>��ʵ��<HasFriendT<TT> >��Ϊ�����ɲ����ƶϣ�����ʡ�� 
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
    report(hfdb);  // generate report(HasFriendT<double> &)�������͵���Ԫ��������� 
    cout << "counts<int>() output:\n";			//û��T���͵���Ԫ�������Լ���counts���� 
    counts<int>();								//������������counts<int>����Ϊ2 
    cout << "counts<double>() output:\n";		//counts<double>����Ϊ1
    counts<double>();

    return 0; 
}
