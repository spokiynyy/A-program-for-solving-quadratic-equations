

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, discriminant, root1, root2;

    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The roots are " << endl;
        cout << "root 1" << root1 << endl;
        cout << "root 2" << root2 << endl;
    }
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        cout << "The root is " << endl;
        cout << root1 << endl;
    }
    else {
        cout << "The equation has no real roots" << endl;
    }
    return 0;
}
