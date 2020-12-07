#include <iostream>
using namespace std;
int main()
{
	int firstDressPrice = 10800;
	int secondDressPrice = 12980;
	int thirdDressPrice = 21959;
	float discount1;
	float discount2;
	float discount3;
	cout << "Prise for all assortiment: \n1 - " << firstDressPrice << "\n" << "2 - " << secondDressPrice << "\n" << "3 - " << thirdDressPrice << endl;
	cin>>discount1;
	cin>>discount2;
	cin>>discount3;
	if(discount1 == 0.0){
		cout<<"there is no discount"<<endl;
	}
	
	cout<<firstDressPrice - firstDressPrice * discount1<<endl;
	
	if(discount2 == 0.0){
		cout<<"there is no discount"<<endl;
	}

	cout<<secondDressPrice - secondDressPrice * discount2<<endl; 

	if(discount3 == 0.0){
		cout<<"there is no discount"<<endl;
	}
	cout<<thirdDressPrice - thirdDressPrice * discount3<<endl;

	
	
	
	if(discount1 == 1){
		cout<<"error"<<endl;
	}
	
	
	
	if(discount2 == 1){
		cout<<"error"<<endl;
	}
	
	
	if(discount3 == 1){
		cout<<"error"<<endl;
	}
	
	
	
	/*else if(discount1 == 1 || discount2 == 1 || discount3 == 1){
		cout<<"error 404"<<endl;
	}*/
	
	
	/*for (int i = 1; i == 3; i=i+1) {
		cin >> discount;
		if(i == 1){
			cout << "for first dress discount is " << firstDressPrice * discount << endl;
		}
		else if (i == 2) {
			cout << "for first dress discount is " << secondDressPrice * discount  << endl;
		}
		else{
			cout << "for first dress discount is " << thirdDressPrice * discount << endl;
		}
		
	}*/


	return 0;
}

