#include <stdio.h>
#include "unit.h"
#include "poison.h"
#include <stdio.h>

static void show(unit_t *self)
{
    printf("毒液兵出现在坐标：[%d,%d]\n", self->x, self->y);
}


static void attack(unit_t *self)
{
    printf("毒液兵使用毒液喷射,攻击力为: %d\n", self->atk_val);
}

unit_t create_poison(int x, int y)
{
    unit_config_t unit_config = {
        .x = x,
        .y = y,
        .show = show,
        .atk = attack,
    };
	return create_mid_unit(unit_config);
}