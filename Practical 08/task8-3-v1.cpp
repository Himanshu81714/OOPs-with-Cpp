#include <iostream>

using namespace std;

int main()
{
int a = 10;

int *p;

int **q;

p = &a;

q = &p;

cout << *p<<endl;

cout << **q<<endl;
return 0;
}
