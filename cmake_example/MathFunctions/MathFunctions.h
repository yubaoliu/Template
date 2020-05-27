#ifdef USE_MYMATH
#include "MathFunctions.h"
#endif

#ifdef USE_MYMATH
  const double outputValue = mysqrt(inputValue);
#else
    const double outputValue = sqrt(inputValue);
#endif

