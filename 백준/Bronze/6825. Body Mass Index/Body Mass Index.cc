#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
    double w, h;
    cin >> w >> h;
    double a = w / pow(h, 2);

    if (a < 18.5) cout<<"Underweight";
    else if (a >= 18.5 && a < 25) cout<<"Normal weight";
    else if (a >= 25) cout<<"Overweight";

  return 0;
}