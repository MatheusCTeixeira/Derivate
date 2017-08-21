#include "function.h"

namespace m_math
{
    class variable:public function
    {
    public:
        variable(std::string name);

        function * clone() const override;
        std::string derivate(std::string var) const override;
        std::string to_string() const override;

        ~variable();

    private:
        std::string m_var;
    };
}