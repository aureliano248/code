
#include<iostream>
using namespace std;
//友元
class Object;
class Int
{
    //类友元
    //friend class Object;
    //成员函数友元
    friend void Object::Get_val(const Int& it);
private:
    
    int value;
public:
    Int(int x = 0) :value(x) { cout << "Create Int" << this << endl; }
  //  Int(int x) :value(x) {}
    ~Int(){cout << "Destory Int" << this << endl;}
    //外部函数友元
   friend void Print(const Int& it);
  
};
class Object
{
 public:
     void Get_val(const Int& it);
};

void Print(const Int& it)
{
    cout << it.value << endl;
}
int main()
{
    Int a(10);
    Print(a);
    Object obj;
    obj.Get_val(a);
    return 0;
}