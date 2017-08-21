#include "function.h"
#include "two_operands.h"

#ifndef _SUM_
#define _SUM_

namespace m_math
{    
    class sum:public function, public two_operands
    {
    public:
        sum(const function& lop, const function& rop);

        function * clone() const override;
        std::string derivate(std::string var) const override;
        std::string to_string() const override;

        ~sum() = default;

    protected:
        sum(function * lop, function * rop);

    private:

    };
}

#endif