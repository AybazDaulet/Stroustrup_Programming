#include <iostream>
#include <string>
using namespace std;
int main() {
  cout << "Enter the name of the person you want to write to: ";
  string name;
  cin >> name;
  cout << "Dear " << name << "," << endl
       << "How are you doing? I haven't heard from you for long time? How is "
          "your family? Ane news since then?";
  cout << "Enter the name of another friend: ";
  string friend_name;
  cin >> friend_name;
  cout << "Have you seen " << friend_name << " lately?" << endl;
  int age;
  cout << "Enter the age of the receipient: ";
  cin >> age;
  cout << "I hear you just had a birthday and you are " << age << " years old."
       << endl;
  if (age <= 0 || age >= 110) {
    cout << "you're kidding!" << endl;
  }
  if (age < 12) {
    cout << "Next year you will be " << age + 1 << endl;
  } else if (age == 17) {
    cout << "Next year you will be able to vote" << endl;
  } else if (age > 70) {
    cout << "Are you retired?" << endl;
  }
  cout << "Yours sincerely," << "\n\n" << "Daulet" << endl;
}
