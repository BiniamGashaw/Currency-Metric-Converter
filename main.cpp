
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#define COLMFT1 40
#define COLMFT2 20
using namespace std;
float conversion(float &, float &);
string setLocation(int &);
float rate(int &, int &);
float currency(int &);

void standardToMetric();
void metricToStandard();
int main()
{
    float currencyRate = 0;
    int first, second;
    float startingCurrency = 0;
    float conversionCurrency = 0;
    float total = 0;
    string firstLocation, secondLocation;

    cout << fixed << setprecision(2);
    cout << endl << "Welcome to Currency/Metric Units Converter" << endl << endl;
    cout << "Would you like to convert 1. units or 2. currency? :";
    int choice;
    cin >> choice;
    if (choice == 1)
    {
        cout << "Would you like to convert from 1. (Standard to Metric) or 2. (Metric to Standard): ";
        int secondChoice;
        cin >> secondChoice;

        if (secondChoice == 1)
        {
            standardToMetric();
        }
        else if (secondChoice == 2)
        {
            metricToStandard();
        }
    }
    else
    {

        cout << "Please select starting Foreign Currency" << endl;
        cout << "1. USD" << endl << "2. Euro" << endl << "3. Yen" << endl << "4. Pound" << endl << "5. Franc" << endl << "0. Exit" << endl << "Choice: ";
        cin >> first;
        firstLocation = setLocation(first);
        startingCurrency = currency(first);
        cout << "Please select conversion Foreign Currency" << endl;
        cout << "1. USD" << endl << "2. Euro" << endl << "3. Yen" << endl << "4. Pound" << endl << "5. Franc" << endl << "0. Exit" << endl << "Choice: ";
        cin >> second;
        secondLocation = setLocation(second);
        currencyRate = rate(first, second);

        cout << setw(COLMFT1) << left << firstLocation;
        cout << setw(COLMFT2) << right << fixed << setprecision(2) << startingCurrency << endl;
        cout << "Conversion rate(per " << secondLocation << "):    ";
        cout << setw(COLMFT2) << right << currencyRate << "%" << endl;
        total = conversion(startingCurrency, currencyRate);
        cout << secondLocation << "    ";
        cout << setw(COLMFT1) << right << total << endl;
        cout << "\n--------------------------- " << endl;
        cout << "\nEnd of Rate Converter" << endl;
    }
}

float conversion(float &startingCurrency, float &rate)
{
    return (startingCurrency * rate);
}

float currency(int &first)
{
    float inputValue = 0;
    switch (first)
    {
    case 0:
        return 0;
    case 1:

        cout << setw(COLMFT1) << left << "Enter a value (Dollars): ";
        cin >> inputValue;
        cout << endl;
        break;
    case 2:

        cout << setw(COLMFT1) << left << "Enter a value (Euro): ";
        cin >> inputValue;
        cout << endl;
        break;
    case 3:

        cout << setw(COLMFT1) << left << "Enter a value (Yen): ";
        cin >> inputValue;
        cout << endl;
        break;
    case 4:

        cout << setw(COLMFT1) << left << "Enter a value (Pound): ";
        cin >> inputValue;
        cout << endl;
        break;

    case 5:

        cout << setw(COLMFT1) << left << "Enter a value (Franc): ";
        cin >> inputValue;
        cout << endl;
        break;

    default:
        cout << "input valid currency" << endl;
    }
    return inputValue;
}

float rate(int &first, int &second)
{
    float rate = 0;
    if (first == 1 && second == 1)
    {
        rate = 1.00;
    }
    else if (first == 1 && second == 2)
    {
        rate = 0.91;
    }
    else if (first == 1 && second == 3)
    {
        rate = 144.15;
    }
    else if (first == 1 && second == 4)
    {
        rate = 0.78;
    }
    else if (first == 1 && second == 5)
    {
        rate = 0.85;
    }
    else if (first == 2 && second == 1)
    {
        rate = 1.10;
    }
    else if (first == 2 && second == 2)
    {
        rate = 1.00;
    }
    else if (first == 2 && second == 3)
    {
        rate = 157.90;
    }
    else if (first == 2 && second == 4)
    {
        rate = 0.86;
    }
    else if (first == 2 && second == 5)
    {
        rate = 0.93;
    }
    else if (first == 3 && second == 1)
    {
        rate = 0.0069;
    }
    else if (first == 3 && second == 2)
    {
        rate = 0.0063;
    }
    else if (first == 3 && second == 3)
    {
        rate = 1.00;
    }
    else if (first == 3 && second == 4)
    {
        rate = 0.0054;
    }
    else if (first == 3 && second == 5)
    {
        rate = 0.0059;
    }
    else if (first == 4 && second == 1)
    {
        rate = 1.28;
    }
    else if (first == 4 && second == 2)
    {
        rate = 1.16;
    }
    else if (first == 4 && second == 3)
    {
        rate = 183.87;
    }
    else if (first == 4 && second == 4)
    {
        rate = 1.00;
    }
    else if (first == 4 && second == 5)
    {
        rate = 1.09;
    }
    else if (first == 5 && second == 1)
    {
        rate = 1.18;
    }
    else if (first == 5 && second == 2)
    {
        rate = 1.08;
    }
    else if (first == 5 && second == 3)
    {
        rate = 170.07;
    }
    else if (first == 5 && second == 4)
    {
        rate = 0.92;
    }
    else if (first == 5 && second == 5)
    {
        rate = 1;
    }
    else
    {
        rate = -1.11;
    }
    return rate;
}

string setLocation(int &choice)
{
    if (choice == 1)
    {
        return "USD($)";
    }
    else if (choice == 2)
    {
        return "Euros(€)";
    }
    else if (choice == 3)
    {
        return "Yen(¥)";
    }
    else if (choice == 4)
    {
        return "Pounds(£)";
    }
    else if (choice == 5)
    {
        return "Franc(ƒ)";
    }
    else
    {
        return "invalid location";
    }
}

void standardToMetric()
{
    float standardUnit = 0.00;
    float conversionRate = 0.00;
    int metricChoice;
    cout << "Input standard unit: ";
    cin >> standardUnit;
    cout << endl << "1. Miles to Kilometers" << endl << "2. Feet to Meters" << endl << "3. Miles to Meters" << endl << "4. Feet to Kilometers" << endl << "5. Fahrenheit to Celsius: ";
    cin >> metricChoice;
    switch (metricChoice)
    {

    case 1:
        conversionRate = 1.60934;
        standardUnit *= conversionRate;
        break;
    case 2:
        conversionRate = 0.3048;
        standardUnit *= conversionRate;
        break;
    case 3:
        conversionRate = 1609.34;
        standardUnit *= conversionRate;
        break;
    case 4:
        conversionRate = 3280.84;
        standardUnit /= conversionRate;
        break;

    case 5:
        
        standardUnit = (standardUnit - 32) / 1.8;
        break;
    }
    cout << endl << "Standard to Metric: " << standardUnit << endl;
}
void metricToStandard()
{
    float standardUnit = 0.00;
    float conversionRate = 0.00;
    int standardChoice;
    cout << "Input Metric unit: ";
    cin >> standardUnit;
    cout << endl << "1. Kilometers to Miles" << endl << "2. Meters to Feet" << endl << "3. Meters to Miles" << endl << "4. Kilometers to Feet" << endl << "5. Celsius to Farenheit: ";
    cin >> standardChoice;
    switch (standardChoice)
    {

    case 1:
        conversionRate = 0.621371;
        standardUnit *= conversionRate;
        break;
    case 2:
        conversionRate = 3.28084;
        standardUnit *= conversionRate;
        break;
    case 3:
        conversionRate = 0.000621371;
        standardUnit *= conversionRate;
        break;
    case 4:
        conversionRate = 3280.84;
        standardUnit *= conversionRate;
        break;
    case 5:
        standardUnit = (standardUnit * 1.8) + 32;
        break;
    }
    cout << endl << "Metric to Standard: " << standardUnit << endl;
}
