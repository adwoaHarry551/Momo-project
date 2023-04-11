#include <iostream>

using namespace std;
int main() {
	int counter,option;
	float amount, balance=1000.00;
	string ref, phone, pin, main_pin= "0000";
	char confirm;
	
	cout<<"********** Welcome to Harriet Momo System ************"
		"\nSELECT OPTION 1 - 3\n"
		"1. Transfer\n"
		"2. Check Balnce\n"
		"3. Reset Pin\n"
		"4. Exit\n"
	;cin>>option;
	
	switch(option){
		
		case 1:
			cout<<"Enter number :";cin>>phone;
			cout<<"Enter amount :";cin>>amount;
			cout<<"Enter reference : ";cin>>ref;
			cout<<"Verify Pin to send $"<<amount<<" to "<<phone<<": ";
			cin>>pin;
			if(pin!=main_pin){
				cout <<"Wrong Pin,try again";
			
				if(counter==3){
					cout<<"Too many attemps";
					return 0;
				}
			}else{
				cout<<"Amount of "<<amount<<" sent to "<<phone<<" with reference "<<ref<<endl;
				cout<<"Current Balance is "<<amount-balance;
				
			}
			
		break;
		case 2:
		cout<<"Verify Pin: ";
			cin>>pin;
			if(pin!=main_pin){
				cout <<"Wrong Pin,try again";
			
				if(counter==3){
					cout<<"Too many attemps";
					return 0;
				}
			}else{
					cout<<"Account balance is $"<<balance;
				
			}
			
				
		break;
		case 3:
			cout<<"Reset pin\n "
			"Enter [Y || N] to confirm :"
			;cin>>confirm;
			if(confirm=='Y'||confirm=='y'){
				cout<<"Enter new Pin: ";cin>>pin;
				
				cout<<"Pin reset succesful to  "<<pin;
				return 0;
			}else if(confirm=='N'||confirm=='n'){
				cout<<"Canceled!!";
			}else{
				cout<<"Wrong Input";
		
		case 4:
			cout << "Program Exited..." << endl;
    		break;

			}
			
			
		
		default:
			cout<<"Invalid Option";
		break; 
	}
			
	return 0;
}
