#include <iostream>

using namespace std;

int EuclidGcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return EuclidGcd(b, a % b);
    }
}

int main() {
    int a, b;
    cout << "Enter two numbers: \n";
    cin >> a >> b;
    
    int GCD = EuclidGcd(a, b);
    
    cout << "The GCD of " << a << " and " << b << " is: " << GCD << endl;

    return 0;
}
