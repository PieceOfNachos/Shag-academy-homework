#include <iostream>
using namespace std;

class Vova {
public:
	void ignor();
	void check_ignor();
	Vova(int x);
	~Vova();
private:
	int* trigger_ignor;


};

Vova::Vova(int x)
{
	trigger_ignor = new int(x);
}

void Vova::check_ignor() {
	if (*trigger_ignor > 8){
		ignor();
	}
	else {
		cout << "ВОва не зол" << endl;
	}
}
void Vova::ignor() {
	cout << "Вова игнорит вас" << endl;
}

Vova::~Vova() {
	delete trigger_ignor;
	*trigger_ignor = 0;
}

int main() {
	setlocale(0, "ru");
	Vova vlad(10);
	vlad.check_ignor();
	//delete trigger_ignor; 
	return 0;
}