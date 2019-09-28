#pragma once

#include "function.hpp"

namespace m_math
{
class two_operands
{
public:
    void set_left_operand(function * lop);
    function * left_operand() const;

    void set_right_operand(function * rop);
    function * right_operand() const;

    ~two_operands();

protected:
    two_operands(function * lop, function * rop);

private:
    function * m_lop;
    function * m_rop;

};
}
