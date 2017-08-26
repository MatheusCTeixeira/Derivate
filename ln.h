#include "function.h"
#include "one_operand.h"

#ifndef _LN_
#define _LN_

namespace m_math
{
    class ln:public function, public one_operand
    {
    public:
        ln(const function& op);

        function * clone() const override;
        std::string derivate(std::string var) const override;
        std::string to_string() const override;

        ~ln();

    protected:
        ln(function * op);
        
    private:
    };
}

#endif