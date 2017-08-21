#include "function.h"
#include "two_operands.h"

#ifndef _SUB_
#define _SUB_

namespace m_math
{
    class sub:public function, public two_operands
    {
    public:
        sub(const function& lop, const function& rop);

        function * clone() const override;
        std::string derivate(std::string var) const override;
        std::string to_string() const override;

        ~sub() = default;

    protected:        
        sub(function * lop, function * rop);

    private:

    };
}

#endif