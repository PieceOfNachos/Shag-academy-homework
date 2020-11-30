//this is classwork 30.11.2020 made by Temur and Vladimir
#include<iostream>
#include <windows.h>
using namespace std;
int main(){
	int strength = 2;
	int agility = 2;
	int intellect = 10;
	int charisma = 5;
	int luckness = 5;
	int playerChoise; // choise what player will do to get discount
	cout<<"You found a magic cave. \nThere is legendary warrior. \nYou can buy there the ultimate stuff!"<<endl;
	Sleep(2000);
	cout<<"You can try to get some discount."<<endl;
	Sleep(2000);
	cout<<"Choose what you will do."<<endl;
	Sleep(2000);
	cout<<"1 - try to bluff him"<<endl;
	Sleep(1000);
	cout<<"2 - flattery"<<endl;
	Sleep(1000);
	cout<<"3 - conviction"<<endl;
	Sleep(1000);
	cout<<"4 - trick him"<<endl;
	cin>>playerChoise;	
	switch(playerChoise)
	{
	case 1:
		if(strength>=5 && charisma>=5){
			cout<<"You bluffed him for granted, but you was in jail for 20 years :("<<endl;	
		}else{
			cout<<"You didnt bluff and was tricked"<<endl;	
		}
		break;
	case 2:
		if(luckness>=5 && charisma>=5 && intellect>=6){
				cout<<"You flattered him for 20% discount"<<endl;	
			}else{
				cout<<"You didnt flatter"<<endl;	
			}
		break;
	case 3:
		if(agility>=7 && charisma>=5 && intellect>=6){
			cout<<"You convictioned him for 50% discount"<<endl;	
		}else{
			cout<<"You didnt conviction"<<endl;	
		}
		break;
	case 4:
		if(strength>=5 && agility>=10 && intellect>=8){
			cout<<"You tricked him for granted"<<endl;	
		}else{
			cout<<"You didnt tricked and arrived to jail"<<endl;	
		}
		break;
	}
	
	return 0;
}
