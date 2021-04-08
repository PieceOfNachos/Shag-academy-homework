#include <iostream>
using namespace std;

class present {
public:
protected:
};
class group {
public:
	
private:

};
//int counter;
//user* users = new user[counter];
class user {
public:
	void post();
	void getter_id();
	void enter_group();
	void set_users(string x_users) { this->users_name = x_users; };
	string get_users() { return this->users_name; };
	virtual void set_id(int x_id) { this->id = x_id; }
	virtual int get_id() { return this->id; }
private:
	string users_name;
	int id;
};
class post {
public:
	void set_id(int x_id) { this->id = x_id; }
	int get_id() { return this->id; }
	void set_data(int x_data) { this->data = x_data; }
	int get_data() { return this->data; }
	void set_post_name(string x_post_name) { this->post_name = x_post_name; }
	string get_post_name() { return this->post_name; }
private:
	int id;
	int data;
	string post_name;
};
void user::post() {

}
class admin : public user {
public:
	admin() {

		counter = 0;
		users = new user[counter];
	};
	~admin() {
		delete[]  users;
		users = 0;
	};
	void delete_user(user some_user);
	void add(user some_user);
	void open();
private:
	int counter;
	user *users;
};
void admin::open() {
	for (int i = 0; i < counter; i++)
		cout<<users[i].get_users()<<endl;
	cout<<endl;
};
void admin::add(user some_user) {
	counter++;
	user* temp = new user[counter];
	for (int i = 0; i < counter - 1; i++) temp[i] = users[i];
	temp[counter - 1] = some_user;
	delete[] users;
	users = temp;
	temp = 0;
}
void admin::delete_user(user some_user) {
	int search;
	user temp1;
	for (int i = 0; i < counter; i++) {
		if (users[i].get_users() == some_user.get_users()) {
			search = i;
			break;
		}
	}
	if (search != counter - 1) {
		for (int i = search; i < counter - 1; i++) {
			users[i] = users[i + 1];
		}
	}
	else {}
	counter--;
	user* temp = new user[counter];
	for (int i = 0; i < counter - 1; i++) temp[i] = users[i];
	temp[counter - 1] = users[counter - 1];
	delete[] users;
	users = temp;
	temp = 0;
}

int main()
{

}

