#include "function.h"

#ifndef _ONE_OPERAND_
#define _ONE_OPERAND_

namespace m_math
{
    class one_operand
    {
    public:        
        void set_operand(function * op);
        function * operand() const;

        virtual ~one_operand();

    protected:
        one_operand(function* op);

    private:
        function * m_op;
    };
}

#endif