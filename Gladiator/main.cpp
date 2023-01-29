#include <iostream>
#include <stdio.h>


using namespace std;

//void get_health(int* _health){
//    printf("%p \n", _health);
//    *_health -= 20;
//    printf("%d \n", *_health);
//}

//int* _var = &var;

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
int main()
{

    int variable = 105;
    printf("variable address: %p \n", &variable);

    //указатель
    int *ptr_variable = &variable;

    //printf("variable address: %p \n", ptr_variable);
    //printf("variable : %d \n", *ptr_variable);

    //как достучаться до значения переменной?
    *ptr_variable = 234;

    //вот так указатель скажет адрес
    //ptr_variable

    //вот так значение
    //*ptr_variable

    int test1 = 11;
    int *ptr_test1 = &test1;
    printf("%p\n", &test1);
    test1 = 20;
    printf("%d\n", test1);
    *ptr_test1 = 50;
    printf("%d\n", test1);


    int test2 = 200;
    int *ptr_test2 = &test2;

    printf("%d\n", test2);

    *ptr_test2 = 100;
    printf("%d\n", test2);


    int test3 = 300;
    int *ptr_test3 = &test3;

    printf("%d\n",test3);

    *ptr_test3 = 500;

    printf("%d\n",test3);

    //change_variable(&variable);

    //printf("variable : %d \n", variable);
    //printf("ptr_variable : %p \n", ptr_variable);


    //======== 1.гладиатор - Dottle ===========================
    int array_sum_Dottle[7];

//    void get_total_score(massiv, helth, exp, smart, mood){

//    }

    //dottle_health
    //dottle_experience
    //dottle_experience_weapon
    //dottle_like_counter
    //dottle_smart
    //dottle_mood
    //armor_protection
    //dottle_arm_hook_condition
    //dottle_arm_hook_damage;

//=========================
    //здоровье игрока
    int dottle_health = 100;
    //printf("%p \n", &dottle_health);
    printf("%d\n", dottle_health);
    //get_health(dottle_health);
    get_health(&dottle_health);
    printf("%d\n", dottle_health);

    stack and heap

    //опыт игрока
    int dottle_experience = 0;
    printf("%d\n",dottle_experience);
    get_exp(&dottle_experience);
    printf("%d\n",dottle_experience);


    //опыт владения оружием (неважно каким)
    int dottle_experience_weapon = 0;
    printf("%d\n",dottle_experience_weapon);
    get_exp_weapon(&dottle_experience_weapon);
    printf("%d\n",dottle_experience_weapon);

    //оценка зрителей
    int dottle_like_counter = 0;
    printf("%d\n",dottle_like_counter);
    get_like_counter(&dottle_like_counter);
    printf("%d\n",dottle_like_counter);

    int muhad_like_counter = -1000;
    printf("%d\n",muhad_like_counter);
    get_like_counter(&muhad_like_counter);
    printf("%d\n",muhad_like_counter);
    get_like_counter(&muhad_like_counter);
    printf("%d\n",muhad_like_counter);

    //ум (можно деградировать, если каждый раз выступать с одним и тем же игроком)
    int dottle_smart = 50;
    get_smart(&dottle_smart);
    printf("%d\n", dottle_smart);
    //личная харизма(оценка зрителей + 4)


    int dottle_mood = 0;
    get_mood(&dottle_mood);
    printf("%d\n", dottle_mood);


    //бронезащита (только отнимать значения)
    int armor_protection = 100;
    
    //--- оружие
    //arm_hook
    //состояние оружия на данный момент (может быть и сломано)
    int dottle_arm_hook_condition = 100;

    //урон, которое наносит оружие (урон оружия = состояние оружия * вес (значимость урона) урона)
    //    int dottle_arm_hook_damage = 80;

    //вес (значимость урона) урона
    //---> const
    float dottle_arm_hook_power = 0.8;

    //    float dottle_arm_hook_power = (float)dottle_arm_hook_damage/dottle_arm_hook_condition;
    //    printf("%f \n", dottle_arm_hook_power);

    //урон, которое наносит оружие (урон оружия = состояние оружия * вес (значимость урона) урона)
    int dottle_arm_hook_damage = dottle_arm_hook_condition*dottle_arm_hook_power;
    //printf("%d \n", dottle_arm_hook_damage);

    //get_health(&dottle_health);
    //printf("%d \n", dottle_health);



    return 0;
}
