#include <iostream>
#include <cmath>

using namespace std;

int main(){
    // Variables
    int n = 0, counter = 0;
    float avg = 0;

    // Outputting prompt
    cout << "Entra diez enteros: " << endl;

    // Inputting information
    for(int i = 0; i <= 9; i++){
        cin >> n;
        counter += n;
    }

    // Calculations
    avg = counter / 10.0;

    // Outputting information
    cout << "El average de la informacion provista seria: " << avg << endl;

    return 0;
}