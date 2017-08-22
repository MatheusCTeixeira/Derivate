#include "function.h"
#include "two_operands.h"

#ifndef _MUL_
#define _MUL_

namespace m_math
{
    class mul:public function, public two_operands
    {
    public:
        mul(const function& lop, const function& rop);

        function * clone() const override;
        std::string derivate(std::string var) const override;
        std::string to_string() const override;

        ~mul() = default;

    protected:
        mul(function * lop, function * rop);

    private:

    };
}

#endif