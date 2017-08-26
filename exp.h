#include "function.h"
#include "one_operand.h"

#ifndef _EXP_
#define _EXP_

namespace m_math
{
    class exp:public function, public one_operand
    {
    public:
        exp(const function& op);

        function * clone() const override;
        std::string derivate(std::string var) const override;
        std::string to_string() const override;

        ~exp();

    protected:
        exp(function * op);

    private:
    };
}

#endif