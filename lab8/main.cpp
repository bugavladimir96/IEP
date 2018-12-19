#include <iostream>
using namespace std;
class A{
  public:
    virtual void printA() const
    {
      cout << "A::printA()" << endl;
    }
    void init() const
    {
      cout << "A::init()" << endl;
    }
};
class B : public A{
  public:
    void printA() const
    {
      cout << "B::printA()" << endl;
    }
    void init() const
    {
      cout << "B::init()" << endl;
    }
};
int main()
{

    A* APtr = new A();
    APtr->printA();
    APtr->init();

    B* BPtr = new B();
    APtr = BPtr;
    cout << "Comportament polimorfic: ";
    APtr->printA();
    APtr->init();


  return 0;
}