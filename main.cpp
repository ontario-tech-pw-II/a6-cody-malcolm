#include <iostream>
#include "str.h"

using namespace std;

int main(int argc, char const *argv[]) {

  //adapted from the lab
  cout << "TEST PROGRAM !!" << endl;

  str s1("Test");
  str s3("!!");

  cin >> s1 >> s3;
  cout << endl;

  cout << "s1 = ";
  s1.print();

  str s2 = s1;

  cout << "s2 = ";
  s2.print();

  cout << "s3 = ";
  s3.print();

  cout << "DO s1.clear()" << endl;
  s1.clear();
  cout << "\ts1 = ";

  s1.print();

  cout << "DO s2=s2+s3" << endl;
  // this tests both assignment and + operators
  s2 = s2 + s3;

  cout << "\ts2 = ";
  s2.print();

  cout << "DO swap(s2,s3)" << endl;
  swap(s2,s3);

  cout << "\ts2 = ";
  s2.print();

  cout << "\ts3 = ";
  s3.print();

  cout << s1 << s2 << s3 << endl;


  return 0;
}
