

#include <iostream>
using namespace std;

int main() 
{
	int arr[] = { 2,4,6,8 };

	int* p = arr;
	 
	p++;
	p++;
	cout << *p << endl;

}

