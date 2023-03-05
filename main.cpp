#include <iostream>
#include <stdio.h>
#include <string.h>
#include "property_unit.h"
#include "min_max.h"


int main(){
    int arr[3];
    arr[0] = 3;
    arr[1] = -1;
    arr[2] = 999;

    int result = get_max_from_array(&arr[0], 3);
    printf("result = %d\n\n", result);

    Unit_game pl3;

    pl3.health = 100;
    pl3.experience = 50;
    pl3.smart = 1;

    foo_improve(&pl3);
    printf("health: %d\n", pl3.health);
    printf("experience: %d\n", pl3.experience);
    printf("smart: %d\n", pl3.smart);

    void init_array(int *_array, int _size);//dottle_health
    //dottle_experience
    //dottle_experience_weapon
    //dottle_like_counter
    //dottle_smart
    //dottle_mood
    //armor_protection
    //dottle_arm_hook_condition
    //dottle_arm_hook_damage;
    //muhad_health
    //muhad_experience
    //muhad_experience_weapon
    //muhad_like_counter
    //muhad_smart
    //muhad_miid
    //muhad_arm_protection
    //muhad_arm_hook_condition
    //muhad_arm_hook_damage

    //=========================
    const int arr_sum_muhad_size = 7;
    int arr_sum_muhad[arr_sum_muhad_size];

    init_array(&arr_sum_muhad[0], 7);

    Unit_game dottle; //Объект с характеристиками игрока Dottle

    dottle.health = 100;
    dottle.experience = 0;
    dottle.experience_weapon = 0;
    dottle.like_counter = 43;
    dottle.smart = 0;
    dottle.mood = 56;
    dottle.armor_protection = 47;


    //---------------------------------------------------------

    Unit_game muhad; //Объект с характеристиками игрока muhad

    muhad.health = 40;
    muhad.experience = -1;
    muhad.experience_weapon = -5;
    muhad.like_counter = -6;
    muhad.smart = -100;
    muhad.mood = 0;
    muhad.armor_protection = 100;
    //---------------------------------------------------------

    get_health(&dottle.health); //здоровье игрока
    printf("D health %d\n", dottle.health);

    get_exp(&dottle.experience); //опыт игрока
    printf("%d\n", dottle.experience);

    get_exp_weapon(&dottle.experience_weapon); //опыт владения оружием (неважно каким)
    printf("%d\n", dottle.experience_weapon);

    get_like_counter(&dottle.like_counter); //оценка зрителей
    printf("%d\n", dottle.like_counter);

    get_smart(&dottle.smart); //ум (можно деградировать, если каждый раз выступать с одним и тем же игроком)
    printf("%d\n", dottle.smart);

    get_mood(&dottle.mood); //личная харизма(оценка зрителей + 4)
    printf("%d\n", dottle.mood);

    get_arm_protection(&dottle.armor_protection); //бронезащита (только отнимать значения)
    printf("%d\n", dottle.armor_protection);


    int dottle_arm_hook_condition = 100;    //--- оружие: arm_hook, состояние оружия на данный момент (может быть и сломано)
    get_arm_protection(&dottle_arm_hook_condition);
    printf("%d\n", dottle_arm_hook_condition);

    //урон, которое наносит оружие (урон оружия = состояние оружия * вес (значимость урона) урона)
    //int dottle_arm_hook_damage = 80;

    float dottle_arm_hook_power = 0.8; //вес (значимость урона), урона ---> const

    //float dottle.arm_hook_power = (float)dottle_arm_hook_damage/dottle_arm_hook_condition;
    //printf("%f \n", dottle_arm_hook_power); //урон, которое наносит оружие (урон оружия = состояние оружия * вес (значимость) урона)
    int dottle_arm_hook_damage = dottle_arm_hook_condition*dottle_arm_hook_power;
    printf("%d \n", dottle_arm_hook_damage);

    int muhad_arm_hook_power = 100;

    get_health(&dottle.health);
    printf("%d \n", dottle.health);

    get_health(&muhad.health); //Здоровье Мухада
    printf("%d\n", muhad.health);

    get_exp(&muhad.experience); //Опыт
    printf("%d\n", muhad.experience);

    get_exp_weapon(&muhad.experience_weapon);
    printf("%d\n",muhad.experience_weapon);

    get_smart(&muhad.smart); //Ум (Точнее его отсутствие)
    printf("%d\n", muhad.smart);

    get_mood(&muhad.mood); //Харизма
    printf("muhad_mood %d\n", muhad.mood);

    get_arm_protection(&muhad.armor_protection); //Броня
    printf("%d\n", muhad.armor_protection);

    get_like_counter(&muhad.like_counter); //Оценка зрителей
    printf("%d\n",muhad.like_counter);

    int muhad_arm_hook_condition = 100; //Доделать                     |
    get_arm_protection_condition(&muhad_arm_hook_condition); //       \|/
    printf("%d\n", muhad_arm_hook_condition);

    int muhad_arm_hook_damage = muhad_arm_hook_condition*muhad_arm_hook_power;
    printf("%d\n", muhad_arm_hook_damage);

    printf("arr_sum_muhad[3] %d: \n", arr_sum_muhad[3]);
    get_result_arr(&arr_sum_muhad[0], arr_sum_muhad_size, muhad.health, muhad.experience, muhad.experience_weapon, muhad.smart, muhad.mood);
    printf("arr_sum_muhad[3] %d: \n", arr_sum_muhad[3]);
    printf("arr_sum_muhad[6] %d: \n", arr_sum_muhad[8]);
    arr_summ(&arr_sum_muhad[0], arr_sum_muhad_size);
    printf("arr_sum_muhad[6] %d: \n", arr_sum_muhad[8]);
    int res = arr_summ(&arr_sum_muhad[0], arr_sum_muhad_size);
    printf("res %d: \n", res);


    return 0;
}
