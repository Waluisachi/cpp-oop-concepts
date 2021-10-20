#include <iostream>
using std::string;

class Employee {
public:
  string Name;
  string Company;
  int Age;

  void introduceYourself(){
    std::cout << "Name - " << Name << std::endl;
    std::cout << "Company - " << Company << std::endl;
    std::cout << "Age - " << Age << std::endl;

  }

};

int main() {
  Employee employee1;
  employee1.Name = "Philip";
  employee1.Company = "OrionTech";
  employee1.Age = 23;

  employee1.introduceYourself();

  return 0;
}
