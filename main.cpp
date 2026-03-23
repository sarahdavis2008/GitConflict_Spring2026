#include <iostream>

using namespace std;

int add(int a, int b);

int main()
{
    cout << "Hello CS 150!\n";
    cout << add(5, 12) << endl;
    return 0;
}

int add(int a, int b)
{
    return a + b;
}