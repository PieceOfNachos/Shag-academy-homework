
#include <iostream>
#include <fstream>
using namespace std;
class quest {
public:
    quest(string name, int id, int quest_stage);
    //~quest();
    void set_stage(int x);
    int get_stage();
    int get_id();
    string get_name();
private:
    string name;
    int id;
    int quest_stage;
};
quest::quest( string name, int id, int quest_stage = 0):
    quest_stage(quest_stage),
    name(name),
    id(id)
{
}
int quest::get_id() {
    return this->id;
}
string quest::get_name() {
    return this->name;
}
//quest::~quest() {
//    delete quest_stage;
 //   *quest_stage = 0;
//}
void quest::set_stage(int x) {
    this->quest_stage = x;
}
int quest::get_stage() {
    return this->quest_stage;
}
void save(int stage, string name, int id) {
    ofstream file_out("C:\\NIGR\\save_Dricklabrus.txt");
    file_out << stage <<" "<< name <<" "<< id<<endl;
    file_out.close();
    char buf[50];
    ifstream file_in("save_Dricklabrus.txt");
    file_in.getline(buf, 50, ';');
    cout << buf << endl;
}
void new_game() {
    cout<<"Вы играете" <<endl;
}
void start(int stage, string name, int id) {
    int start = true;
    int chose;
    while (start) {
        cout << "Welcome to the Legend of Dricklabrus" << endl;
        cout << "press 1 to start the new game" << endl;
        cout << "press 2 to save and exit" << endl;
        cout << "press 3 to exit" << endl;
        cout << "press 4 to load save" << endl;
        cin >> chose;
        if (chose == 1) {
            new_game();
        }
        else if (chose == 2) {
            save(stage, name, id);
            start = false;
        }
        else if (chose == 3) {
            start = false;
        }
        else if(chose == 4){
            char buf[50];
            ifstream file_in("save_Dricklabrus.txt");
            file_in.getline(buf, 50, ';');
            cout << buf << endl;
            if (buf[15] == 1) {
                quest old_gods_power("old_gods_power", 1);
            }
        }
    }
}
int main()
{
    setlocale(0, "RU");
    quest old_gods_power("old_gods_power", 1);
    start(old_gods_power.get_stage(), old_gods_power.get_name(), old_gods_power.get_id());
    
    
}
