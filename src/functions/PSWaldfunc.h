#ifndef PSWALDFUNC_H_
#define PSWALDFUNC_H_

#include <function/ScalarFunction.h>

namespace jags {
namespace wald {

class PSWaldfunc : public ScalarFunction 
{
  public:
    PSWaldfunc();

    bool checkParameterValue(std::vector<double const *> const &args) const;
    double evaluate(std::vector<double const *> const &args) const;
};

} // namespace wald
} // namespace jags

#endif /* PSWALDFUNC_H_ */
