#include<iostream>
using namespace std;

class Celsius {
private:
    float temp_c;

public:
    Celsius(float t) {
        temp_c = t;
    }

    float toFahrenheit() {
        return (9 * temp_c / 5) + 32;
    }

    void show() {
        cout << temp_c << "C" << endl;
    }
};

class Fahrenheit {
private:
    float temp_f;

public:
    Fahrenheit(float t) {
        temp_f = t;
    }

    float toCelsius() {
        return (5 * (temp_f - 32)) / 9;
    }

    void show() {
        cout << temp_f << "F" << endl;
    }
};

int main() {
    Celsius c(25);         // Celsius object with 25C
    Fahrenheit f(77);      // Fahrenheit object with 77F

    cout << "Celsius Temperature: ";
    c.show();
    cout << "Converted to Fahrenheit: " << c.toFahrenheit() << "F" << endl;

    cout << "\nFahrenheit Temperature: ";
    f.show();
    cout << "Converted to Celsius: " << f.toCelsius() << "C" << endl;

    return 0;
}
