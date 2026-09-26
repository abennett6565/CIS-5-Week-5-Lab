#include <iostream>
using std::cout;
using std::cin;

// Lab 5 — Andrew Bennett
// CIS 5 Week 05 · Eligibility check

int main() {
  int age = 0;
  double gpa = 0.0;

  //take input from the user to determine their age and current GPA
  cout << "How old are you? ";
  cin >> age;
  cout << "What's your GPA? ";
  cin >> gpa;

  //determine if the person is an adult and if their gpa is at the honors level
  bool adult = age >= 18;
  bool honors = gpa >= 3.5;
      
  if (adult && honors) //best case first - both requirements met
  {
    cout << "You are eligible for the honors program. Congratulations!";
  }
  else if (adult || honors) //exactly one requirement met
  {
    cout << "You only meet one of the two requirements. Either improve your GPA or wait until you are older.";
  }   
  else //neither — the program still answers
  {
    cout << "You are not eligible for the honors programs. Try harder next semester!";
  }  

  // Edge values to run: 17 / 18 with a 3.8, and 3.4 / 3.5 with age 20

  return 0;
}
