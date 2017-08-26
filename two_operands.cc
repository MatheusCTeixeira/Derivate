#include "two_operands.h"

namespace m_math
{
    two_operands::two_operands(function * lop, function * rop):m_lop{lop}, m_rop{rop}
    {
        
    }

    void two_operands::set_left_operand(function * lop)
    {
        this->m_lop = lop;
    }

    function * two_operands::left_operand() const
    {
        return this->m_lop;
    }

    void two_operands::set_right_operand(function * rop)
    {
        this->m_rop = rop;
    }

    function * two_operands::right_operand() const
    {
        return this->m_rop;
    }

    two_operands::~two_operands()
    {
        
    }
}