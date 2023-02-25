#include "property_unit.h"




void change_variable(int* _var){
    printf("%p \n", _var);
    *_var -= 20;
    printf("%d \n", *_var);
}

//void get_health(int _health){
//    _health -= 20;
//}

void get_health(int *_health){
    *_health -= 20;
}

void get_exp(int *_exp){
    *_exp += 20;
}

void get_exp_weapon(int *_exp_weapon){
    *_exp_weapon += 30;
}

void get_like_counter(int *_like_counter){
    *_like_counter += 10;
}

void get_smart(int *_smart){
    *_smart -= 50;
}

void get_mood(int *_mood){
    *_mood += 20;
}
void get_arm_protection(int *_arm_protection){
    *_arm_protection -= 20;
}
void get_arm_protection_condition(int *_arm_protection_condition){
    *_arm_protection_condition -= 20;