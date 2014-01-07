#include <iostream>
 
using namespace std;
 
int main(){
 for (int i = 0; i <= 100; i++) {
  if ((i % 15) == 0) //for multiples of both 3 and 5
  cout << "FizzBuzz" << endl;
  else if ((i % 3) == 0) //multiples of 3
  cout << "Fizz" << endl;
  else if ((i % 5) == 0) //multiples of 5
  cout << "Buzz" << endl;
  else
  cout << i << endl; //all other numbers
  }
return 0;
}
