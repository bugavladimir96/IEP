#include <iostream>
using namespace std;

class ABC
{
    int val;

    public:
    ABC(int val)
    {
        this->val = val;
    }

    ABC& operator=(const ABC& rhs)
    {
        this->val = rhs.val;
        return *this;
    }
    
    void print();

};

void ABC::print()
{
    std::cout << val << std::endl;
}

   int main()
    {
        ABC temp(10), a(100), b(1000);

        a.print();
        a = temp;
        a.print();

        return 0;
    }
