#include <iostream>
#include <string>

using namespace std;

void go() {
    cout << "go" << endl;
}
void jump() {
    cout << "jump" << endl;
}
void fall() {
    cout << "fall" << endl;
}
void damage(int& namingRememberFunction, int& hp) {
    if (namingRememberFunction <= -10) {
        cout << "You died" << endl;
        hp = 0;
    }
    else if (namingRememberFunction > -9 && namingRememberFunction <= -3) {
        hp = hp - namingRememberFunction;
    }
}
void abbility(int& namingRememberFunction) {
    if(namingRememberFunction >= 10) {
        cout << "Its too high to jump" << endl;
    }
}
void action(int& naming, int& namingRememberFunction, int& hp) {
    if (namingRememberFunction == naming) {
        go();
        naming = namingRememberFunction;
    }
    else if (namingRememberFunction > naming) {
        jump();
        naming = namingRememberFunction;
        abbility(namingRememberFunction);
    }
    else if(namingRememberFunction < naming){
        
        fall();
        
        naming = namingRememberFunction;
        damage(namingRememberFunction, hp);
    }
}

int main() {
    bool stop = true;
    int health = 10;
    int level = 0, next_level;
    int &naming = level;
    int &namingRememberFunction = next_level;
    int &hp = health;
    //bool jump = true;

    do {
        cin >> namingRememberFunction;
        action(naming, namingRememberFunction, hp);
        //level = next_level;

    } while (health > 0);
}