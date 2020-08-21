#include <iostream>


void printOptions(){

	std::cout << "please Enter options "<<std::endl;
	std::cout << " Press 1 to get show balance "<<std::endl;
	std::cout << " Press 2 to deposit "<<std::endl;
	std::cout << " Press 3 to widthdraw " <<std::endl;
	std::cout << " Press 4 to quit "<<std::endl;
	std::cout << "......................................................." <<std::endl;	

}


int main(){
	printOptions();
        int amount = 500;
	std:: cout << " Please enter options" <<std::endl;
	
	int options;
	do {
	std::cin >> options;
	  switch(options){
		case 1:
			std::cout << " Your balance is " << amount <<std::endl;
			break;
		case 2:
			std::cout << "Please enter amount you're depositing" <<std::endl;
			int amountToDeposit;
			std::cin >> amountToDeposit;
			amount += amountToDeposit;
			std::cout << " You have deposited " << amountToDeposit <<std::endl;
			break;
		case 3:
			std::cout << "Please enter amount to withdraw" <<std::endl;
			int amountToWithdraw;
			
			std::cin >> amountToWithdraw;
			if (amountToWithdraw > amount) {
				std::cout << " You have no such money in your account!" <<std::endl;
				
			}else{
				amount -= amountToWithdraw;
				std::cout << " You have successfully withdrawn" << amountToWithdraw <<std::endl;
			}
		case 4: 
			std::cout << " Bye " <<std::endl;	
			break;
	 }


	}
	while (options != 4);	

	return 0;
	

}
