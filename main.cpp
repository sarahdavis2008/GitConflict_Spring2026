#include <iostream>

using namespace std;

int add(int a, int b);
void say(string s);

int main()
{
    cout << "Hello CS 150!\n";
    cout << add(5, 12) << endl;
    say("Hello again from the SAY function!");

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

void say(string s)
{
    cout << s << endl;
}