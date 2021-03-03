/*В этой программе создан класс weapon, описывающий поведение обыкновенного немагического оружия в игре.
Задание: создать класс magic_weapon, являющийся наследником класса weapon.*/

#include <iostream>
#include <ctime>
using namespace std;

class weapon {
public:
    weapon(int base_damage, int durability, int degradation, int cost, int weight); //все важные значения задаются в конструкторе
    int get_base_damage() const;
    int get_durability() const;
    int get_degradation() const;
    void set_cost(int new_cost);
    int get_cost() const;
    int get_weight() const;
    int hit(); //здесь высчитывается результирующая сила удара для данного оружия

private:
    int base_damage; //базовый урон
    int durability; //максимальная прочность
    int degradation; //степень износа оружия
    int cost; //цена
    int weight; //вес
    int name_weapon;
};

weapon::weapon(int base_damage = 10, int durability = 100, int degradation = 0, int cost = 250, int weight = 5) :
    //все важные величины имеют значения по умолчанию
    base_damage(base_damage),
    durability(durability),
    degradation(degradation),
    cost(cost),
    weight(weight)
    //список инициализации: значения аргументов присваиваются членам класса, позволяя оставить тело конструктора пустым
{

}

class magic {
public:
    magic(int mana_spend, int education_level, int cost_of_education, int level_of_magic);
    int get_mana_spend();
    int get_education_level();
    int get_level_of_magic();
    int get_cost_of_education();
    void set_cost_of_education(int x);

private:
    int mana_spend;
    int education_level;
    int cost_of_education;
    int level_of_magic;

};

magic::magic(int mana_spend = 10, int education_level = 1, int cost_of_education = 100, int level_of_magic = 1) :
    //все важные величины имеют значения по умолчанию
    mana_spend(mana_spend),
    education_level(education_level),
    cost_of_education(cost_of_education),
    level_of_magic(level_of_magic)
    //список инициализации: значения аргументов присваиваются членам класса, позволяя оставить тело конструктора пустым
{

}

int magic::get_mana_spend() {//функция-геттер для затрата маны
    return this->mana_spend;
}

int magic::get_education_level() {//функция-геттер для уровня образованности
    return this->education_level;
}

int magic::get_level_of_magic() { //функция-геттер для уровня магии
    return this->level_of_magic;
}

void magic::set_cost_of_education(int x) {
    this->cost_of_education = x;
}

int magic::get_cost_of_education() { //функция-геттер для цены на образования 
    return this->cost_of_education;
}

class war_magic : public magic {
    int magic_damage;
public:
    war_magic(int magic_damage);
    int get_magic_damage();
    int use_magic_for_battle();
};

class healing_magic : public magic {
    int heal_magic;
public:
    healing_magic(int heal_magic);
    int get_heal();
    int use_magic_to_heal();
};

war_magic::war_magic(int magic_damage = 10) :
    //все важные величины имеют значения по умолчанию
    magic_damage(magic_damage)
    //список инициализации: значения аргументов присваиваются членам класса, позволяя оставить тело конструктора пустым
{

}

healing_magic::healing_magic(int heal_magic = 10) :
    //все важные величины имеют значения по умолчанию
    heal_magic(heal_magic)
    //список инициализации: значения аргументов присваиваются членам класса, позволяя оставить тело конструктора пустым
{

}

int war_magic::get_magic_damage() { //функция-геттер для базового урона от магии
    return this->magic_damage;
}
int healing_magic::get_heal() { //функция-геттер для хилла
    return this->heal_magic;
}

int weapon::get_base_damage() const { //функция-геттер для базового урона
    return this->base_damage;
}

int weapon::get_durability() const { //функция-геттер для прочности
    return this->durability;
}

int weapon::get_degradation() const { //функция-геттер для степени износа
    return this->degradation;
}

void weapon::set_cost(int new_cost) { //функция-сеттер для цены
    this->cost = new_cost;
}

int weapon::get_cost() const { //функция-геттер для цены
    return this->cost;
}

int weapon::get_weight() const { //функция-геттер для веса
    return this->weight;
}

//все геттеры определены, как константные методы, что позволяет обезопасить члены класса от нежелательных изменений
void death(int player_hp, int enemy_hp) {
    if (player_hp < 0 && enemy_hp < 0) cout << "All die" << endl;
    else if (player_hp > 0 && enemy_hp < 0) cout << "You win" << endl;
    else if (enemy_hp > 0 && player_hp < 0) cout << "You die" << endl;
}

int weapon::hit() {
    srand(time(0));
    int random_effect = rand() % base_damage; //генерируем случайную величину в пределах от нуля до базового урона - 1
    int damage = this->base_damage - random_effect; //меняем урон: теперь он варьируется от нуля до изначального базового
    this->degradation++; //повышаем износ на единицу с каждым нанесенным ударом
    this->cost -= this->cost / durability; //уменьшаем цену соответственно изношенности оружия
    return damage; //возвращаем урон во внешнюю программу
}
int war_magic::use_magic_for_battle() {
    srand(time(0));
    int random_effect = rand() % magic_damage; //генерируем случайную величину в пределах от нуля до базового урона - 1
    int damage = this->magic_damage - random_effect; //меняем урон: теперь он варьируется от нуля до изначального базового

    return damage; //возвращаем урон во внешнюю программу
}
int healing_magic::use_magic_to_heal() {
    srand(time(0));
    int random_buff = rand() % heal_magic;
    int append_hp = this->heal_magic - random_buff;
    return append_hp; //возвращаем урон во внешнюю программу
}

int random() {
    return rand() % 10 + 1;
}
int main() {
    setlocale(0, "rus");
    weapon simple_iron_sword, players_BIG_sword(20); //создаем два объекта - два меча, себе и противнику
    weapon human_slayer(6, 100, 0, 0, 20), zhumernacht(50, 100, 0, 1000, 5);
    war_magic ice_crystals(10);
    healing_magic dragon_water_breath(10);
    int enemy_health = 1000, player_health = 100; //здоровье для протагониста и для противника
    while (enemy_health > 0 && player_health > 0) { //ни один из нас не покинет поле боя, пока жив другой...
        player_health = player_health - human_slayer.hit(); //противник наносит удар, уменьшается здоровье протагониста
        cin.get(); //программа ждет нажатия любой клавиши
        enemy_health = enemy_health - zhumernacht.hit(); //игрок бьет, уменьшается здоровье врага
        cout << "Enemy's health: " << enemy_health << endl;
        cout << "My health: " << player_health << endl;
        if (random() == 10) {
            player_health = player_health - ice_crystals.use_magic_for_battle();
            cout << "В вас попали магией" << endl;
        }
        else if (random() == 1) {
            enemy_health += dragon_water_breath.use_magic_to_heal();
            cout << "Босс исцелился" << endl;
        }
        death(player_health, enemy_health);
    }

    cout << "Simple sword condition: " << human_slayer.get_durability() - human_slayer.get_degradation() << endl;
    cout << "Player BIG sword condition: " << zhumernacht.get_durability() - zhumernacht.get_degradation() << endl;

    return 0;
}