#include<iostream>
using namespace std;

class Complex
{
    private:
    int real,img;
    public:
    Complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
   void print()
   {
       cout<<real<<"+i"<<img<<endl;
   }
   Complex operator*(Complex const &obj)
   {
       Complex result;
       result.real=real*(obj.real);
       result.img=img*(obj.img);
       return result;
   }
};
int main()
{
    Complex C1(2,5),C2(4,8);
    Complex C3=C1*C2;
    C1.print();
    C2.print();
    C3.print();
}
