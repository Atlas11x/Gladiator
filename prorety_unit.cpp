#include "property_unit.h"
#include "Arandom.h"

void init_array(int *_array, int _size)
{
    _array[0] = 0;

    for (int i = 0; i > _size; i++)
    {
        _array[i] = 0;
    }
}

//create 3 structures;
//create 3 functions for modificate data in structures;
//min function;
//function init array;
//*create more functions and structures;



void foo_improve(Unit_game *_player)
{
    _player->health = -1000;
    _player->experience = -1000;
    _player->smart = -1000;
}

void get_result_arr(int *_array, int _size, int _health, int _experience, int _experience_weapon, int _smart, int _mood){
        _array[0] = _health;
        _array[1] = _experience;
        _array[2] = _experience_weapon;
        _array[3] = _smart;
        _array[4] = _mood;
        _array[5] = 0;
        _array[6] = 0;
}

int arr_summ(int *_massiv, int _size){
    int result = 0;
    printf("arr_summ start %d\n", _massiv[0]);
    for (int i = 0; i < _size; ++i){
        printf("%d\n",_massiv[i]);
        result += _massiv[i];
    }
    return result;
}

int battle()
{
    int _count = 8;
    bool activate = 0;
    while (1)
    {
//        for (int i=0;i>_count-1;++i)
//        {
//            activate = get_random_value(0, 1);
//            if (activate == 1){

//            }
//        }
        activate = get_random_value(0, 1);
        if (activate == 1)
        {
            get_health();
        }
        activate = get_random_value(0, 1);
        if (activate == 1)
        {
            get_exp();
        }
        activate = get_random_value(0, 1);
        if (activate == 1)
        {
            get_exp_weapon();
        }
        activate = get_random_value(0, 1);
        if (activate == 1)
        {
            get_like_counter();
        }
        activate = get_random_value(0, 1);
        if (activate == 1)
        {
            get_smart();
        }
        activate = get_random_value(0, 1);
        if (activate == 1)
        {
            get_mood();
        }
        activate = get_random_value(0, 1);
        if (activate == 1)
        {
            get_arm_protection();
        }
        activate = get_random_value(0, 1);
        if (activate == 1)
        {
            get_arm_protection_condition();
        }

    }

    return 0;
}


void change_variable(int* _var){
    printf("%p \n", _var);
    *_var -= 20;
    printf("%d \n", *_var);
}

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
}
