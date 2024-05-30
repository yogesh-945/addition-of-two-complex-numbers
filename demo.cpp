#include<iostream>
#include<string.h>
using namespace std;
class complex
{
    private:
    int real,imag;
    public:
    void getdata()
    {
        cout<<"enter real and imaginary number";
        cin>>real>>imag;
    }
    void display()
    {
        cout<<real<<"+i"<<imag<<endl;
    }
    complex operator + (complex c)
    {
        complex c3;
        c3.real=real+c.real;
        c3.imag=imag+c.imag;
        return c3;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c1+c2;
    c1.display();
    c2.display();
    c3.display();
    return 1;
}
    