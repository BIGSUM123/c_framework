#include "factory.h"
#include "unit.h"
#include "human_factory.h"
#include "marine.h"
#include "tank.h"
#include <stdio.h>

static unit_t human_create_low_unit(factory_t *self)
{
    printf("海军陆战队创建成功。\n");
    return create_marine(self->x, self->y);
}

static unit_t human_create_mid_unit(factory_t *self)
{
    printf("坦克战队创建成功。\n");
    return create_tank(self->x, self->y);
}

factory_t create_human_factory(int x, int y)
{
    factory_t factory = {
        .x = x,
        .y = y,
        .create_low_unit = human_create_low_unit,
        .create_mid_unit = human_create_mid_unit,
        .create_high_unit = (void*)0,
    };
    return factory;
}
