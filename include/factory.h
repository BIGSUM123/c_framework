#ifndef __FACTORY_H__
#define __FACTORY_H__

#include "unit.h"

typedef struct factory factory_t;

typedef unit_t (*create_low_unit_fn)( factory_t *self);
typedef unit_t (*create_mid_unit_fn)( factory_t *self);
typedef unit_t (*create_high_unit_fn)( factory_t *self);

struct factory
{
    int x;
    int y;
    create_low_unit_fn create_low_unit;
    create_mid_unit_fn create_mid_unit;
    create_high_unit_fn create_high_unit;
};

#endif //__FACTORY_H__