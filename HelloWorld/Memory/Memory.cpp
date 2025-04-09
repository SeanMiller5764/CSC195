

#include <iostream>
using namespace std;

void set(int& i)
{
    i = 123;
}

void swap(int* i1, int* i2)
{
    int temp = *i1;
     *i1 = *i2;
     *i2 = temp;
}

int main()
{
    int i1 = 10;
    int i2 = 20;

    int& r = i1;
    r = 40;
    
    set(i1);

    cout << i1 << endl; // value of i1 
    cout << i2 << endl; // value of i2
    
    swap(i1, i2);
    
    int* p=&i1;

   
    cout << &i1 << endl;// address of i1
    cout << &r << endl;// address of refrence r of i1
    cout << p << endl;// pointer p pointing to i1 address
    cout << &p << endl;// address of pointer p or i1 address
    cout << *p << endl;// value in the pointer p pointing to the adress i1
    cout << i2 << endl;// value of i2 after swap method via pointers
}

