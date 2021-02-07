#include <iostream>

using namespace std;

int main()
{
   int sum = 0;
   int start = 50;
   int end = 100;
   int num = 0;
   while(start <= end) {
      sum += start;
      start++;
      num++;
   }
   cout << "sum of " << start - num << " -  " << end << " = " << sum << endl;
   return 0;
}
