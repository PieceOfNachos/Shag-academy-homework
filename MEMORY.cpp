#include<iostream>
using namespace std;
int main(){
	setlocale(0,"rus");
	int cell;
	int i = 0;
	int Stop = 1;
	int memory;
	//int hp = 5;
	
	while(Stop != 0){
	std::cin>>cell;
	if (cell == memory) std::cout<<"та же высота"<<std::endl;
	else if(cell > 0 && cell<=10) std::cout<<"Прыгаем"<<std::endl;
	
	else if (cell < 0){
		 std::cout<<"спуск"<<std::endl;
		 //hp--;
	}
	else std::cout<<"не можем прыгать, высоко"<<std::endl;
	//else std::cout<<"Двигаемся дальше"<<std::endl; 
	if(cell<=-10 || memory>=10 && cell<=0){
		std::cout<<"вы умерли"<<std::endl; 
		break;
	}
	
	memory = cell;
	
		if(i>10){
		Stop--;
		std::cout<<"You won"<<std::endl;
	}
	i++;
	}

	return 0;
}
