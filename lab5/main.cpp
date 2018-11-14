#include <iostream>
using namespace std;

class complex
{
    double real, imag;

    public:
    complex(double real, double imag)
    {
        this->real = real;
        this->imag = imag;
    }
    complex()
    {
        real = 0;
        imag = 0;
    }
  complex operator+(complex op);
  complex operator-(complex op);
  void print();

};

  complex complex::operator+(complex op)
  {
      complex temp;

      temp.real = real + op.real;
      temp.imag = imag + op.imag;

      return temp;
  }

    complex complex::operator-(complex op)
  {
      complex temp;

      temp.real = real - op.real;
      temp.imag = imag - op.imag;

      return temp;
  }

  void complex::print()
  {
    std::cout << real << " " << imag << std::endl;
  }

   int main()
    {
        complex result, c1(1.,1.), c2(2.,2.);

        result = c1 + c2;
        result.print();
        result = result - c2;
        result.print();
        return 0;
    }
