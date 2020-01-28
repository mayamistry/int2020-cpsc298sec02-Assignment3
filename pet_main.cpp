#include <iostream>
#include <string>
using namespace std;

#include "pet.h"

int main (int argc, char**argv) {
  Pet *p1 = new Pet("Bob", 2, "Dog", 15.9);
  Pet *p2 = new Pet("Mr. Whiskers", 3, "Cat", 10);

  cout << "Info about Pet #1: " << endl;
  cout << "Name: " << p1->GetName() << endl;
  cout << "Age: " << p1->GetAge() << endl;
  cout << "Type: " << p1->GetType() << endl;
  cout << "Weight: " << p1->GetWeight() << endl;

  cout << endl;

  cout << "Info about Pet #2: " << endl;
  cout << "Name: " << p2->GetName() << endl;
  cout << "Age: " << p2->GetAge() << endl;
  cout << "Type: " << p2->GetType() << endl;
  cout << "Weight: " << p2->GetWeight() << endl;

  return 0;
}
