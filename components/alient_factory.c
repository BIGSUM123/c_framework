#include "factory.h"
#include "unit.h"
#include "alient_factory.h"
#include "roach.h"
#include "poison.h"
#include <stdio.h>

static unit_t alient_create_low_unit(factory_t *self)
{
    printf("蟑螂兵创建成功。\n");
    return create_roach(self->x, self->y);
}

static unit_t alient_create_mid_unit(factory_t *self)
{
    printf("毒液兵创建成功。\n");
    return create_poison(self->x, self->y);
}

factory_t create_alient_factory(int x, int y)
{
    factory_t factory = {
        .x = x,
        .y = y,
        .create_low_unit = alient_create_low_unit,
        .create_mid_unit = alient_create_mid_unit,
        .create_high_unit = (void*)0,
    };
    return factory;
}
