#include <iostream>
using namespace std;

int sum(int* a, int* b)
{
    *a += 30;
    return *a + *b;
}

int main(int argc, char const* argv[])
{
    int a = 10, b = 20;
    
    cout << sum(&a, &b) << endl;
    cout << a << endl;

    return 0;
}