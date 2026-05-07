#include "unit.h"

unit_t create_low_unit(unit_config_t config)
{
	unit_t unit = {
		.atk_val = 5,
		.defence = 8,
		.health = 15,
		.x = config.x,
		.y = config.y,
		.atk = config.atk,
		.show = config.show,
	};
	return unit;
}

unit_t create_mid_unit(unit_config_t config)
{
	unit_t unit = {
		.atk_val = 10,
		.defence = 12,
		.health = 30,
		.x = config.x,
		.y = config.y,
		.atk = config.atk,
		.show = config.show,
	};
	return unit;
}

unit_t create_high_unit(unit_config_t config)
{
	unit_t unit = {
		.atk_val = 20,
		.defence = 30,
		.health = 200,
		.x = config.x,
		.y = config.y,
		.atk = config.atk,
		.show = config.show,
	};
	return unit;
}