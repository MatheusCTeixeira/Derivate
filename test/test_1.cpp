#include <iostream>

#include "../include/mc_math.hpp"

int main() {
    using namespace std;

    using namespace m_math;

    variable x{"x"};

    const function& f = mul(sum(cos(sin(x)), tan(x)), ln(x));
    cout << "f'(x)=" << f.derivate("x") << endl;

    return 0;
}