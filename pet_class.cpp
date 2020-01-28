#include "pet.h"

Pet::Pet() {
  m_name = "";
  m_age = 0;
  m_type = "";
  m_weight = 0;
}

Pet::Pet(string name, int age, string type, double weight) {
  m_name = name;
  m_age = age;
  m_type = type;
  m_weight = weight;
}

void Pet::SetName(string name) {
  m_name = name;
}

void Pet::SetAge(int age) {
  m_age = age;
}

void Pet::SetType(string type) {
  m_type = type;
}

void Pet::SetWeight(double weight) {
  m_weight = weight;
}

string Pet::GetName() {
  return m_name;
}

int Pet::GetAge() {
  return m_age;
}

string Pet::GetType() {
  return m_type;
}

double Pet::GetWeight() {
  return m_weight;
}
