#include "function.hpp"
#include "two_operands.hpp"

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
