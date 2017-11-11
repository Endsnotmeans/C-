// tempmemb.cpp -- template members
#include <iostream>
using std::cout;
using std::endl;

template <typename T>
class beta
{
private:
    template <typename V>  // nested template class member
    class hold
    {
    private:
        V val;
    public:
        hold(V v  = 0) : val(v) {}
        void show() const { cout << val << endl; }
        V Value() const { return val; }
    };
    hold<T> q;             // template object
    hold<int> n;           // template object
public:
    beta( T t, int i) : q(t), n(i) {}
    template<typename U>   // template method
    U blab(U u, T t) { return (n.Value() + q.Value()) * u / t; }
    void Show() const { q.show(); n.show();}
};
int main()
{
    beta<double> guy(3.5, 3);    //beta T为double，hold <T> q类型为double 

    guy.Show();
    cout<<"V was set to T,which is doulbe,then V was set to int\n"; 
    cout << guy.blab(10, 2.3) << endl;		//U设置为10，默认int 
    cout<<"U was set to int\n";
    cout << guy.blab(10.0, 2.3) << endl;	//I设置为10.2，默认double 
    cout<<"U was set to double\n";
    cout << "Done\n";
    return 0; 
}
