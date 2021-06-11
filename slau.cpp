#include <iostream>
#include <cmath>
using namespace std;
const double zero = 1.0e-7;


int main() {
	double a, b, c, d, e, f, x = 0, y = 0, D, Dx, Dy;
	
	cin >> a >> b >> c >> d >> e >> f;

	D = a * d - c * b; // Определитель матрицы
	Dx = e * d - f * b;
	Dy = a * f - c * e;

    if (not fabs(D) <= zero) {
        x = Dx / D;
        y = Dy / D;
        cout << 2 << " " << x << " " << y;
    }
    else {
        if (fabs(a) + fabs(b) + fabs(c) + fabs(d) <= zero) {
            if (fabs(e) + fabs(f) <= zero) cout << 5 << endl; // бесконечное множество решений
            else cout << 0 << endl; // решений нет
        }
        else if ((not fabs(Dx) <= zero) || (not fabs(Dy) <= zero)) cout << 0; // нет решений
        else if (b == 0) {
            if (not fabs(a) <= zero) cout << 3 << " " << e / a << endl; // y - любое число
            else if (fabs(d) <= zero) cout << 3 << " " << f / c << endl; // y - любое число
            else if (fabs(c) <= zero) cout << 4 << " " << f / d << endl; // x - любое число
            else cout << 1 << " " << -c / d << " " << f / d << endl; // y = kx + b
        }
        else if (a == 0) {
            if (not fabs(b) <= zero) cout << 4 << " " << e / b << endl; // x - любое число
            else if (fabs(d) <= zero) cout << 3 << " " << f / c << endl; // y - любое число
            else if (fabs(c) <= zero) cout << 4 << " " << f / d << endl; // x - любое число
            else cout << 1 << " " << -c / d << " " << f / d << endl; // y = kx + b
        }
        else cout << 1 << " " << -a / b << " " << e / b << endl; // y = kx + b
    }
	return 0;
}
