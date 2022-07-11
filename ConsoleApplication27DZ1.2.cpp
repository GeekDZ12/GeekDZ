#include<iostream>

class Power{
    double base = 2;
    double sign = 16;
//====================================================
public:
void setValues(double base, double sign) {
    this->base = base; // указатели как в коспекте//
    this->sign = sign;
}
double calculate();
};
//====================================================
double Power::calculate() {
    int s = sign;
    double result = 1;
    while (s) {
        if (s % 2) {
            result *= base;
            s -= 1;
        }
        else {
            base *= base;
            s /= 2;
        }
    }
    return result;
}
//========================================================
    
int main()
{
    Power p;
    std::cout << p.calculate() << std::endl;
    p.setValues(2, 10);
    std::cout << p.calculate() << std::endl;
}

