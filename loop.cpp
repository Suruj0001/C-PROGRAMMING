#include <iostream>
using namespace std;

int main()
{
int n;

cout << "Enter a positive integer: ";
cin >> n;

for (int i = 1; i <= 10; ++i) {
cout << n << " * " << i << " = " << n * i << endl;
}

return 0;
}
/*
 basically ++i returns the value after it is incremented, while i++ return the value before it is incremented.
  At the end, in both cases the i will have its value incremented.
*/
