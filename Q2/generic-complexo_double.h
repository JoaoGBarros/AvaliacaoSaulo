#ifndef GENERIC_COMPLEXO_DOUBLE_H_
#define GENERIC_COMPLEXO_DOUBLE_H_

#undef TYPE
#undef TYPED
#undef TIPO

#define TYPE double
#define TYPED(THING) THING ## _D
#define TIPO "lf"

#include "complexo.h"

#undef TYPE
#undef TYPED
#undef TIPO


#endif

