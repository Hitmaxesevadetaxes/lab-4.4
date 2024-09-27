#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double R, xp, xk, dx, F, x;

    cout << "R: "; cin >> R;
    cout << "xp: "; cin >> xp;
    cout << "xk: "; cin >> xk;
    cout << "dx: "; cin >> dx;

    cout << fixed;
    cout << "--------------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(10) << "F(x)" << " |" << endl;
    cout << "--------------------------------" << endl;

   
    for (x = xp; x <= xk; x += dx) {
        
        if (x >= -8 && x < -R) {
            F = -R;
        }
        
        else if (x >= -R && x < 0) {
            F = x; 
        }
        
        else if (x >= 0 && x <= R) {
            F = -sqrt(R * R - x * x); 
        }
        
        else if (x > R && x <= 5) {
            F = 3 * (x - R) / (5 - R); 
        }
        
        else if (x > 5) {
            F = 3;
        }

       
        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << F
            << " |" << endl;
    }

    cout << "--------------------------------" << endl;

    return 0;
}
