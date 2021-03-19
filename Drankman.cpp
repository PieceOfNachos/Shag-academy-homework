#include <iostream>
using namespace std;

class NPC {
public:
    virtual void dialogue();
private:

};

class inventory {
public:
    inventory(string* items);
private:
    string* items = NULL;
};

inventory::inventory(string* items){
    *items(new string[40]);
    items[0] = "Клык собаки";
    items[1] = "Жаренная говядина";
    items[2] = "Амулет скорости";
    items[3] = "осколки дриклабруса";
    items[4] = "пустая бутылка" ;
    items[5] = "Сирофимовый меч";
    items[6] = "жаренные тараканы";
    items[7] = "Магия кражи";

}
class drunkard : public NPC {
public:
    void dialogue();
private:

};
void NPC::dialogue() {
    cout << "Привет путник ты здешний?" << endl;
    cout << "Пока, береги себя"<< endl;
}
void drunkard::dialogue() {
    int answer = 0;
    cout<<"Здарова братан, не хочешь выпить?"<<endl;
    cout<<"1 - Да, давай пропустим по рюмочке,\n сомневаюсь что, что то случиться..." <<endl;
    cout << "2 - Нет, я знаю вас, алкашей!" << endl;
    cout << "3 - Я много не выпью, но я согласен" << endl;
    cin >> answer;
    if (answer == 1) {
        cout << "Вы начали бухать..." << endl;
        cout << "Память покидает вас" << endl; \
            //inventory::remove_all;
        cout << "Вы проснулись в канаве" << endl;
        cout << "Оххх, черт, что произошло?Голова расскалывется,(смотрит в инвентарь)\nЧего!! Где мои вещи???!!!" << endl;
        cout << "(Смотрит налево, там лежит этот алкаш в отрубе)\nТЫ УКРАЛ МОИ ВЕЩИ??? ПРОСЫПАЙСЯ, НАС ОГРАБИЛИ!" << endl;
        cout << "Вы видите что алкаш очень крепко спит и вы уходите" << endl;
    }
    else if (answer == 2) {
        cout << "Ну и иди, это лучшее лекарство от всех болезней!" << endl;
        cout << "Вы ушли" << endl;
    }
    else if (answer == 3) {
        
        cout << "Вы выпили но не потеряли сознание и память" << endl;
        cout << "Ты мне уже как брат, спрашивай все шо хош, я отвечу!" << endl;
        /*это функция будет доделана в зависимости в какой части сюжета появится алкаш
        cout << "1 - 0" << endl;
        cin >> answer;
        Она не доделана*/

    }

    
}
int main()
{
    setlocale(0, "RU");
    drunkard meeting;
    meeting.dialogue();
}
