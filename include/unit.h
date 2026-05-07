#ifndef __UNIT_H__
#define __UNIT_H__

typedef struct unit unit_t;

typedef void (*attack_fn)( unit_t *self );
typedef void (*show_fn)( unit_t *self );

struct unit {
    int atk_val;
    int defence;
    int health;
    int x;
    int y;
    attack_fn atk;
    show_fn show;
};

typedef struct
{
    int x;
    int y;
    attack_fn atk;
    show_fn show;
} unit_config_t;


unit_t create_low_unit(unit_config_t config);
unit_t create_mid_unit(unit_config_t config);
unit_t create_high_unit(unit_config_t config);

#endif // __UNIT_H__
