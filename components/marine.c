#include <stdio.h>
#include "unit.h"
#include "marine.h"
#include <stdio.h>

static void show(unit_t *self)
{
    printf("海军陆战队出现在坐标：[%d,%d]\n", self->x, self->y);
}


static void attack(unit_t *self)
{
    printf("海军陆战队使用机关枪攻击,攻击力为: %d\n", self->atk_val);
}

unit_t create_marine(int x, int y)
{
    unit_config_t unit_config = {
        .x = x,
        .y = y,
        .show = show,
        .atk = attack,
    };
	return create_low_unit(unit_config);
}