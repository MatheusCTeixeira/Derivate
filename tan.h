#include "function.h"
#include "one_operand.h"

namespace m_math
{
    class tan:public function, one_operand
    {
    public:
        tan(const function& op);

        function * clone() const override;
        std::string derivate(std::string var) const override;
        std::string to_string() const override;

        ~tan();

    protected:
        tan(function * op);

    private:

    };

}