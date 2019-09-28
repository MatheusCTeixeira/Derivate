# Derivative

### O que é?
Uma biblioteca para o cálculo algébrico de expressões matematicas. Por ora, o
foco é no cálculo da derivada. Em breve, será desenvolvido algoritmos para a
simplificação de expressões.

### Estrutura
Até o momento, o sistema possui 3 etapas:
- Texto ==> AST
- AST (Estrutura interna. Onde todo o processamento é realizado.)
- AST ==> Texto
(* No momento, eu estou desenvolvendo a 2 etapa *).

### Amostras:
Código:
```C
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
```

Output:
```bash
f'(x)=((-sin(sin(x))*cos(x)*1+(sec(x))^2*1)*ln(x)+(cos(sin(x))+tan(x))*(1/x)*1)
```