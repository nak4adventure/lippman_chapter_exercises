#include <iostream>

using namespace std;

int main()
{
   int num1, num2;
   cout << "int 1: ";
   cin >> num1;
   cout << "int 2: ";
   cin >> num2;
   while(num1 <= num2) {
      cout << num1 << endl;
      ++num1;
   }
   
   return 0;
}
