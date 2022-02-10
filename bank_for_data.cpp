#include <stdio.h>

class Money{
	public :
	char user_name[400];
	char user_surname[400];
	int card_password; // to get money from card
	int case_operation; // to put money into card
	int card_number;
	int card_balance;
	int last_balance;
	int taken_money;
	int transfer_iban;
	int repose_money;
	int bill_number;
	int bill_amount;
};


int main()
{
	char chr;
	do
	{
	Money Mon;
    	
    int operation;
	printf("\t\t\t\t\t-->WELCOME TO LOOKER BANK<--\t\t\t\t\t\n");
	
	printf("Enter your name : ");
	scanf(" %s",&Mon.user_name);
	
	printf("Enter your surname : ");
	scanf(" %s",&Mon.user_surname);
	
	printf("Enter your card number please : ");
	scanf("%d",&Mon.card_number);
	
	printf("Enter your card password please : ");
	scanf("%d",&Mon.card_password);
	printf("\n\n");
	
	printf("\t\t\t1 - MONEY TRANSACTION");
	printf("\t\t\t2 - PAY BILL\n\n");
	printf("\t\t\t3 - MORE SERVICES");
	printf("\t\t\t4 - CHANGE PASSWORD");
	
	printf("\n\nChose operation to a number : ");
	scanf("%d",&operation);
	
	switch(operation)
	{
		case 1 :
			printf("\nEnter your card balance : ");
			scanf("%d",&Mon.card_balance);
			
			printf("\n1 - WITHDRAWAL");
			printf("\n2 - MONEY TRANSFER ");
			printf("\n3 - MONEY REPOSE ");
			printf("\n4 - MY ARREARS");	
			
			printf("\n\nChose operation to a number : ");
			scanf("%d",&Mon.case_operation);
			
			if(Mon.case_operation==1)
			{
				
				printf("How much cash you want ? ");
				scanf("%d",&Mon.taken_money);
				
				printf("\n\n");
				
				Mon.last_balance = (Mon.card_balance - Mon.taken_money);
				
				printf("\nName and Surname : %s and %s",Mon.user_name,Mon.user_surname);
				printf("\nCard number : %d",Mon.card_number);
				printf("\nOperation: Get Money");
				printf("\nAmount : %d TL",Mon.taken_money);
				printf("\nAvailable Balance : %d",Mon.last_balance);
				printf("\nATM Fee : 0.00");
				
				printf("\n\nThank you for choosing us. -LOOKER BANK.");
	
			}else if(Mon.case_operation==2)
			{
				printf("\nEnter iban number to transfer : ");
				scanf("%d",&Mon.transfer_iban);
				
				printf("Enter amount that you want to transfer : ");
				scanf("%d",&Mon.taken_money);
				
				Mon.last_balance = (Mon.card_balance - Mon.taken_money);
                
				printf("\nName and Surname : %s  %s",Mon.user_name,Mon.user_surname);
				printf("\nCard number : %d",Mon.card_number);
				printf("\nIban number : %d",Mon.transfer_iban);
				printf("\nOperation: Money Transfer ");
				printf("\nAmount : %d TL",Mon.taken_money);
				printf("\nAvailable Balance : %d",Mon.last_balance);
				printf("\nATM Fee : 0.00");
				
				printf("\n\nThank you for choosing us. -LOOKER BANK.");

			
			}else if(Mon.case_operation==3)
			{
				printf("Enter amount that you want to repose: ");
				scanf("%d",&Mon.repose_money);
				
				Mon.last_balance = (Mon.card_balance + Mon.repose_money);
				
				printf("\nCard number : %d",Mon.card_number);
				printf("\nOperation: Money Repose");
				printf("\nAmount : %d TL",Mon.repose_money);
				printf("\nAvailable Balance : %d",Mon.last_balance);
				printf("\nATM Fee : 0.00");
				
	       		printf("\n\nThank you for choosing us. -LOOKER BANK.");

				
			}else if(Mon.case_operation==4)
			{
				printf("\nYou have 10.000 TL debt to LOOKER TECH. COMPANY"); 
				printf("\nYou have 15.000 TL debt to LOOKER BANK for credit you take before.");
				printf("\nYou have 5.000 TL debt to BAHCESEHIR CYPRUS UNIVERSITY for education fee.");
				
			    printf("\n\nThank you for choosing us. -LOOKER BANK.");

			}
			break;
			
			case 2 :
			printf("Enter your card balance : ");
			scanf("%d",&Mon.card_balance);
			
			printf("\n1 - PHONE BILL");
			printf("\n2 - ELECTRIC BILL");
			printf("\n3 - WATER BILL");
			printf("\n4 - GAS BILL");
			
			printf("\n\nChoose the bill you want to pay : ");
			scanf("%d",&Mon.case_operation);
			
			if(Mon.case_operation==1)
			{
				printf("\n\nPlease enter your phone number : ");
				scanf("%d",&Mon.bill_number);
				
				int spoken_minute;
				printf("How much minute did you talked last month ? (between 0-200)");
				scanf("%d",&spoken_minute);
				
				if(spoken_minute<=200 && spoken_minute>=150)
				{
					Mon.bill_amount = 100;
						printf("\nYour phone bill is %d TL.",Mon.bill_amount);
				}else if(spoken_minute<=149 && spoken_minute>=100)
				{
					Mon.bill_amount = 75;
						printf("\nYour phone bill is %d TL.",Mon.bill_amount);
				}else if(spoken_minute<=99 && spoken_minute>=50)
				{
					Mon.bill_amount=50;
						printf("\nYour phone bill is %d TL.",Mon.bill_amount);
				}else if(spoken_minute<=49 && spoken_minute>=1)
				{
					Mon.bill_amount=25;
				        printf("\nYour phone bill is %d TL.",Mon.bill_amount);
				}
				
				Mon.last_balance = (Mon.card_balance - Mon.bill_amount);
				
				printf("\nName and Surname : %s  %s",Mon.user_name,Mon.user_surname);
				printf("\nCard number : %d",Mon.card_number);
				printf("\nOperation: Pay Phone Bill");
				printf("\nAmount : %d TL",Mon.bill_amount);
				printf("\nAvailable Balance : %d",Mon.last_balance);
				printf("\nATM Fee : 0.00");
				
				printf("\n\nThank you for choosing us. -LOOKER BANK.");
				
			}
			else if(Mon.case_operation==2)
			{
				printf("Please enter your electric meter number : ");
				scanf("%d",&Mon.bill_number);
				
				int spent_hour;
				
				printf("How much hours did you use electric last month ? (between 0-200) ");
				scanf("%d",&spent_hour);
				
				if(spent_hour<=200 && spent_hour>=150)
				{
					Mon.bill_amount = 100;
						printf("\nYour electric bill is %d TL.",Mon.bill_amount);
				}else if(spent_hour<=149 && spent_hour>=100)
				{
					Mon.bill_amount = 75;
						printf("\nYour electric bill is %d TL.",Mon.bill_amount);
				}else if(spent_hour<=99 && spent_hour>=50)
				{
					Mon.bill_amount=50;
						printf("\nYour electric bill is %d TL.",Mon.bill_amount);
				}else if(spent_hour<=49 && spent_hour>=1)
				{
					Mon.bill_amount=25;
				        printf("\nYour electric bill is %d TL.",Mon.bill_amount);
				}
				
				Mon.last_balance = (Mon.card_balance - Mon.bill_amount);
				
				printf("\nCard number : %d",Mon.card_number);
				printf("\nElectric meter number : %d",&Mon.bill_number);
				printf("\nOperation: Pay Electric Bill");
				printf("\nAmount : %d TL",Mon.bill_amount);
				printf("\nAvailable Balance : %d",Mon.last_balance);
				printf("\nATM Fee : 0.00");
				
				printf("\n\nThank you for choosing us. -LOOKER BANK.");
			}
			else if(Mon.case_operation==3)
			{
				printf("What is the number of your water meter ?");
				scanf("%d",&Mon.bill_number);
				
			    int used_litres;
				
				printf("How much litres water you used last month ?");
				scanf("%d",&used_litres);
				
				if(used_litres<=300 && used_litres>=250)
				{
					Mon.bill_amount = 200;
						printf("\nYour water bill is %d TL.",Mon.bill_amount);
				}else if(used_litres<=249 && used_litres>=200)
				{
					Mon.bill_amount = 150;
						printf("\nYour water bill is %d TL.",Mon.bill_amount);
				}else if(used_litres<=199 && used_litres>=150)
				{
					Mon.bill_amount=100;
						printf("\nYour water bill is %d TL.",Mon.bill_amount);
				}else if(used_litres<=149 && used_litres>=100)
				{
					Mon.bill_amount=75;
				        printf("\nYour water bill is %d TL.",Mon.bill_amount);
				}else if(used_litres<=99 && used_litres>=1)
				{
					Mon.bill_amount=50;
					printf("\nYour water bill is %d TL",Mon.bill_amount);
				}
				Mon.last_balance = (Mon.card_balance - Mon.bill_amount);
				
				printf("\nName and Surname : %s  %s",Mon.user_name,Mon.user_surname);
				printf("\nCard number : %d",Mon.card_number);
				printf("\nWater meter number : %d",&Mon.bill_number);
				printf("\nOperation: Pay Water Bill");
				printf("\nAmount : %d TL",Mon.bill_amount);
				printf("\nAvailable Balance : %d",Mon.last_balance);
				printf("\nATM Fee : 0.00");
				
				printf("\n\nThank you for choosing us. -LOOKER BANK.");
				
			}
			else if(Mon.case_operation==4)
			{
				printf("What is the number of your gas meter ?");
				scanf("%d",&Mon.bill_number);
				
			    int gas_index;
				
				printf("How much index gas you used last month ?");
				scanf("%d",&gas_index);
				
				if(gas_index<=300 && gas_index>=250)
				{
					Mon.bill_amount = 200;
						printf("\nYour gas bill is %d TL.",Mon.bill_amount);
				}else if(gas_index<=249 && gas_index>=200)
				{
					Mon.bill_amount = 150;
						printf("\nYour gas bill is %d TL.",Mon.bill_amount);
				}else if(gas_index<=199 && gas_index>=150)
				{
					Mon.bill_amount=100;
						printf("\nYour gas bill is %d TL.",Mon.bill_amount);
				}else if(gas_index<=149 && gas_index>=100)
				{
					Mon.bill_amount=75;
				        printf("\nYour gas bill is %d TL.",Mon.bill_amount);
				}else if(gas_index<=99 && gas_index>=1)
				{
					Mon.bill_amount=50;
					printf("\nYour water gas is %d TL",Mon.bill_amount);
				}
				Mon.last_balance = (Mon.card_balance - Mon.bill_amount);
				
				printf("\nName and Surname : %s  %s",Mon.user_name,Mon.user_surname);
				printf("\nCard number : %d",Mon.card_number);
				printf("\nGas meter number : %d",&Mon.bill_number);
				printf("\nOperation: Pay Gas Bill");
				printf("\nAmount : %d TL",Mon.bill_amount);
				printf("\nAvailable Balance : %d",Mon.last_balance);
				printf("\nATM Fee : 0.00");
				
				printf("\n\nThank you for choosing us. -LOOKER BANK.");
			}
			break;
			case 3 : 
			
			printf("Enter your card balance : ");
			scanf("%d",&Mon.card_balance);
			
			printf("\n1 - MY EXPENSES");
			printf("\n2 - CONTACT US");
			
			printf("\n\nChoose the service : ");
			scanf("%d",&Mon.case_operation);
			
			if(Mon.case_operation==1)
			{
				printf("\n1 - Yesterday"
				"\n2 - Before 1 Week"
				"\n3 - Before 1 Month"
				"\nWhich date you want to reach and show expenses : ");
				int expense_case;
			    scanf("%d",&expense_case);
		
		    	switch(expense_case)
				{
					case 1 :
						printf("\n\n-20 TL at Gloria Jeans Coffees"
						"\n-35 TL at Avenue Cinema"
						"\n-50 TL at Califorian Restaurant");
						
						Mon.last_balance = (Mon.card_balance - 105);
						
				printf("\nName and Surname : %s  %s",Mon.user_name,Mon.user_surname);
				printf("\n\nCard number : %d",Mon.card_number);
				printf("\nOperation: Expense");
				printf("\nYesterday Total Amount : 105 TL");
				printf("\nAvailable Balance : %d",Mon.card_balance);
				printf("\nATM Fee : 0.00");
				printf("\n\nThank you for choosing us. -LOOKER BANK.");
					break;
						
					case 2 : 
					printf(
					    "\n\n-20 TL at Gloria Jeans Coffees"
						"\n-35 TL at Avenue Cinema"
						"\n-50 TL at Califorian Restaurant"
						"\n-25 TL at Bau Cyprus Cafe"
						"\n-100 TL at K-Pet Gas Station"
						"\n-70 TL at El Sabor Restaurant"
						);
						
						Mon.last_balance = (Mon.card_balance - 300);

				
				printf("\nName and Surname : %s  %s",Mon.user_name,Mon.user_surname);
				printf("\n\nCard number : %d",Mon.card_number);
				printf("\nOperation: Expense");
				printf("\n1 Week Total Amount : 300 TL");
				printf("\nAvailable Balance : %d",Mon.card_balance);
				printf("\nATM Fee : 0.00");
				printf("\n\nThank you for choosing us. -LOOKER BANK.");
					break;

					case 3 :
						printf("\n\n-20 TL at Gloria Jeans Coffees"
						"\n-35 TL at Avenue Cinema"
						"\n-50 TL at Califorian Restaurant"
						"\n-25 TL at Bau Cyprus Cafe"
						"\n-100 TL at K-Pet Gas Station"
						"\n-70 TL at El Sabor Restaurant"
						"\n-30 TL at Cafe Pascucci"
						"\n-65 TL at LC Waikiki"
						"\n-350 TL at Adidas");
						
					    Mon.last_balance = (Mon.card_balance - 745);
				
				printf("\nName and Surname : %s  %s",Mon.user_name,Mon.user_surname);
				printf("\n\nCard number : %d",Mon.card_number);
				printf("\nOperation: Expense");
				printf("\n1 Month Total Amount : 745 TL");
				printf("\nAvailable Balance : %d",Mon.card_balance);
				printf("\nATM Fee : 0.00");
				printf("\n\nThank you for choosing us. -LOOKER BANK.");
					break;			
				 } 
				
			}
			else if(Mon.case_operation==2)
				{
					printf("\n E-Mail Adress : lookerbank@info.com.");
					printf("\n Phone numbers : +391 567 768,\t+391 834 459.");
					printf("\n Fax : +391 456 341.");
					printf("\n Instagram : lookerbank.");
					printf("\n Facebook : Looker Bank.");
					printf("\nAdress : Dereboyu Street / 14. Loan / Opposite of Segafredo Coffees.");
				}
			break;
			case 4 :
				int temp;
				int old_password;
				int new_password;
				printf("\nEnter your new password : ");
				scanf("%d",&new_password);

				temp = Mon.card_password;
				Mon.card_password = new_password;
				old_password = temp;
				
				printf("\nYour old password was %d.",old_password);
				printf("\nYour new password is %d.",Mon.card_password);
				
			break;
			}
			printf("\n\nDo you want to do another operation ? (if yes press y, if no press n) ");
			scanf(" %c",&chr);
		}while(chr!='n');
		
		printf("Program over.");

		return 0;
	}	
	

