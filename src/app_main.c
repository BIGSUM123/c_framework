#include <stdio.h>
#include "unit.h"
#include "human_factory.h"
#include "alient_factory.h"

int main()
{
    factory_t human_factory = create_human_factory(10, 10);

    unit_t marine = human_factory.create_low_unit(&human_factory);
    marine.show(&marine);
    unit_t tank = human_factory.create_mid_unit(&human_factory);
    tank.show(&tank);

    factory_t alient_factory = create_alient_factory(200, 200);

    unit_t roach = alient_factory.create_low_unit(&alient_factory);
    roach.show(&roach);
    unit_t poison = alient_factory.create_mid_unit(&alient_factory);
    poison.show(&poison);

    marine.atk(&marine);
    roach.atk(&roach);
    tank.atk(&tank);
    poison.atk(&poison);
}
