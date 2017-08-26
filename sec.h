#include "function.h"
#include "one_operand.h"

namespace m_math
{
    class sec:public function, one_operand
    {
    public:
        sec(const function& op);

        function * clone() const override;
        std::string derivate(std::string var) const override;
        std::string to_string() const override;

        ~sec();

    protected:
        sec(function * op);

    private:

    };

}