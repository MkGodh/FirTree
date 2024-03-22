#include <string>

#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    using namespace std;
	int firTree;
 string slash = "#";
 string doubleSlash = "##";
 cout << "Введите высоту ёлки: ";
 cin >> firTree;
 for (int row = 0; row != firTree;) {
     for (int col = 0; col <= firTree; col++) {
         if (col < firTree) {
             cout << " ";
 
         }
         else if (col <= firTree) {
             cout << slash << "\n";
             firTree--;
         }
 
     }
     slash = slash + doubleSlash;
 }

}
