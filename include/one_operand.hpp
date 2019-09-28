#pragma once

#include "function.hpp"

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
