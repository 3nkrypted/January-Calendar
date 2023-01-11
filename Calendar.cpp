#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string week[7] = { "Su ", "Mo ", "Tu ", "We ", "Th ", "Fr ", "Sa "};
    int days = 31; 
    int day_uno = 1;
    
    cout << "|January 2023|";
    cout << endl;
    
    for (int i = 0; i < 7; i++) {  
    cout << week[i] << " ";
    }
    
    cout << endl;
    cout << "--------------------------";
    cout << endl;
    
    for (int i = 1; i <= 9; i++) {
        cout << " " << i ; cout << " "; //prints single digit with space to make them same width as others 
        if ((i + day_uno) % 7 == 1) {
            cout << endl;
        } else {
            cout << " ";
    }
  }                                                                              // I have no idea how it works
  
  for (int i = 10; i <= 31; i++) {
        cout << " " << i ; cout << " "; //prints rest 
        if ((i + day_uno) % 7 == 1) {
            cout << endl;
        } else {
            cout << "";
    }
  }
}
