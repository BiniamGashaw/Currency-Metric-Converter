
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main(){
    float usd;
    float euro;
    float rate;
    rate = 0.85;

    const int COLMFT1 = 35;
    const int COLMFT2 = 15;
    cout << fixed << setprecision(2);
    cout << endl << "Welcome to Currency Converter" << endl << endl;
    cout << setw(COLMFT1) << left << "Enter a value (US dollars): ";
    cin >> usd;
    cout << endl;

    cout << setw(COLMFT1) << left << "US dollars: ";
    cout << setw(COLMFT1) << right << usd << endl;
    cout << setw(COLMFT1) << left << "Conversion rate(per US dollar): ";
    cout << setw(COLMFT1) << right << rate << endl;
    euro = usd * rate;
    cout << "Euros: ";
    cout << setw(COLMFT1) << right << euro << endl;
    cout << "\n--------------------------- " << endl;
    cout << "\nEnd of Rate Converter" << endl;  

}