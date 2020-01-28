#include <string>
#include <iostream>

using namespace std;

class Pet {
  public:
    Pet();
    Pet(string name, int age, string type, double weight);

    string GetName();
    int GetAge();
    string GetType();
    double GetWeight();

    void SetName(string name);
    void SetAge(int age);
    void SetType(string type);
    void SetWeight(double weight);

  private:
    string m_name;
    int m_age;
    string m_type;
    double m_weight;
};
