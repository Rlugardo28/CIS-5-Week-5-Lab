 #include <iostream>
  using namespace std;
// Lab 5 — Raymundo Lugardo
// CIS 5 Week 05 · Eligibility check

int main() {
  int age = 0;
  double gpa = 0.0;

  // TODO: cout question, then cin, for age and for gpa
  cout << "Age?"; 
  cin >> age;

  cout <<"GPA?";
  cin >> gpa;
  
  // Thresholds: adult at 18, honors at 3.5 (change these and say why in a comment)
  // TODO: bool adult = ...;
  // TODO: bool honors = ...;
  bool adult = age >= 18;
  bool honors = gpa >= 3.5;
  // TODO: if (adult && honors) { ... }        best case first
  // TODO: else if (adult || honors) { ... }   exactly one requirement met
  // TODO: else { ... }                        neither — the program still answers
  if (adult && honors) {
    cout << "Eliglbe for the honors program.\n";
  }
  else if (adult || honors) {
    cout << "Almost there. One requirement met.\n"; 
  }

  else {
    cout << "Not eligible yet D:.\n";
  }
  // Edge values to run: 17 / 18 with a 3.8, and 3.4 / 3.5 with age 20

  return 0;
}
