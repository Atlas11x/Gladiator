#ifndef PROPERTY_UNIT_H
#define PROPERTY_UNIT_H
#include <stdio.h>

struct Unit_game{
    int health;
    int experience;
    int experience_weapon;
    int like_counter;
    int smart;
    int mood;
    int armor_protection;
};

void change_variable(int *_var);
void get_health(int *_health);
void get_exp(int *_exp);
void get_exp_weapon(int *_exp_weapon);
void get_like_counter(int *_like_counter);
void get_smart(int *_smart);
void get_mood(int *_mood);
void get_arm_protection(int *_arm_protection);
void get_arm_protection_condition(int *_arm_protection_condition);

#endif // PROPERTY_UNIT_H
