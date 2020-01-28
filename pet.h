#include <string>
#include <iostream>

using namespace std;

//.h file for the pet class
class Pet {
  public:
    Pet();
    Pet(string name, int age, string type, double weight);
    //accessors
    string GetName();
    int GetAge();
    string GetType();
    double GetWeight();
    //mutators
    void SetName(string name);
    void SetAge(int age);
    void SetType(string type);
    void SetWeight(double weight);

  //member variables =
  private:
    string m_name;
    int m_age;
    string m_type;
    double m_weight;
};
