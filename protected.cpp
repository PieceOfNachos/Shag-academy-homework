#include <iostream>
using namespace std;
class NPC {
public:
    void set_id(int x);
    int get_id();
private:
    int id;
protected:
    int ida;
};
void NPC::set_id(int x) {
    this->id = x;
}
int NPC::get_id() {
    return this->id;
}
class Human : protected NPC {
public:
    Human();
    int get_ida();
private:

};
class NIGGGER : protected Human {
public:
    NIGGGER();
    int get_ida();
};
Human::Human() {
    ida = 10;

}
NIGGGER::NIGGGER() {
    ida = 100;
}
int Human::get_ida() {
    return this->ida;
}
int NIGGGER::get_ida() {
    return this->ida;
}
int main()
{
    
    NPC Oleg;
    Oleg.set_id(6);
    cout<<Oleg.get_id()<<endl;
    Human niger;
    cout<<niger.get_ida() << endl;
    NIGGGER ZAYAC;
    cout << ZAYAC.get_ida() << endl;
    
}