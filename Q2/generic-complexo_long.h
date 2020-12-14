#ifndef GENERIC_COMPLEXO_LONG_H
#define GENERIC_COMPLEXO_LONG_H

#undef TYPE
#undef TYPED
#undef TIPO

#define TYPE long double
#define TYPED(THING) THING ## _Ld
#define TIPO "Lf"

#include "complexo.h"

#undef TYPE
#undef TYPED
#undef TIPO


#endif
