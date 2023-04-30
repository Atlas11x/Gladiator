#include <iostream>
#include <stdio.h>
#include <string.h>
#include "property_unit.h"
#include "min_max.h"
#include "Arandom.h"


int main(){


    //=========================
    const int arr_sum_muhad_size = 7;
    int arr_sum_muhad[arr_sum_muhad_size];

    init_array(&arr_sum_muhad[0], 7);

    Unit_game dottle; //Объект с характеристиками игрока Dottle

    dottle.unit_name = "dottle";
    dottle.unit_file_name = "dottle.txt";
    get_health(&dottle.unit_health);
    get_exp(&dottle.unit_experience);
    get_exp_weapon(&dottle.unit_experience_weapon);
    get_like_counter(&dottle.unit_like_counter);
    get_smart(&dottle.unit_smart);
    get_mood(&dottle.unit_mood);
    get_arm_protection(&dottle.unit_armor_protection);
    dottle.writeFile();

    //dottle:
    //health: =========================
    //unit_experience: ====
    //...
//    foo()
//            for 0 ... unit_health{
//        printf("==");
//    }




    //---------------------------------------------------------
/*
    Unit_game muhad; //Объект с характеристиками игрока muhad

    muhad.health = 40;
    muhad.experience = -1;
    muhad.experience_weapon = -5;
    muhad.like_counter = -6;
    muhad.smart = -100;
    muhad.mood = 0;
    muhad.armor_protection = 100;
    */
    //---------------------------------------------------------

    /*
    get_health(&dottle.health); //здоровье игрока

    get_exp(&dottle.experience); //опыт игрока

    get_exp_weapon(&dottle.experience_weapon); //опыт владения оружием (неважно каким)

    get_like_counter(&dottle.like_counter); //оценка зрителей

    get_smart(&dottle.smart); //ум (можно деградировать, если каждый раз выступать с одним и тем же игроком)

    get_mood(&dottle.mood); //личная харизма(оценка зрителей + 4)

    get_arm_protection(&dottle.armor_protection); //бронезащита (только отнимать значения)


    int dottle_arm_hook_condition = 100;    //--- оружие: arm_hook, состояние оружия на данный момент (может быть и сломано)
    get_arm_protection(&dottle_arm_hook_condition);

    //урон, которое наносит оружие (урон оружия = состояние оружия * вес (значимость урона) урона)
    //int dottle_arm_hook_damage = 80;

    float dottle_arm_hook_power = 0.8; //вес (значимость урона), урона ---> const

    //float dottle.arm_hook_power = (float)dottle_arm_hook_damage/dottle_arm_hook_condition;
    //printf("%f \n", dottle_arm_hook_power); //урон, которое наносит оружие (урон оружия = состояние оружия * вес (значимость) урона)
    int dottle_arm_hook_damage = dottle_arm_hook_condition*dottle_arm_hook_power;

    int muhad_arm_hook_power = 100;

    get_health(&dottle.health);

    get_health(&muhad.health); //Здоровье Мухада

    get_exp(&muhad.experience); //Опыт

    get_exp_weapon(&muhad.experience_weapon);
    printf("%d\n",muhad.experience_weapon);

    get_smart(&muhad.smart); //Ум (Точнее его отсутствие)

    get_mood(&muhad.mood); //Харизма

    get_arm_protection(&muhad.armor_protection); //Броня

    get_like_counter(&muhad.like_counter); //Оценка зрителей

    int muhad_arm_hook_condition = 100; //Доделать                     |
    get_arm_protection_condition(&muhad_arm_hook_condition); //       \|/

    int muhad_arm_hook_damage = muhad_arm_hook_condition*muhad_arm_hook_power;

    get_result_arr(&arr_sum_muhad[0], arr_sum_muhad_size, muhad.health, muhad.experience, muhad.experience_weapon, muhad.smart, muhad.mood);
    arr_summ(&arr_sum_muhad[0], arr_sum_muhad_size);
    int res = arr_summ(&arr_sum_muhad[0], arr_sum_muhad_size);

*/
    return 0;
}
