#include <iostream>  //cin and cout
#include <string>   //string type variables
#include <fstream>  //file handling

void StartUp()
{
	system("cls");
	cout << "\n\t\t\t\t\t ########################## \n";
	cout << "\t\t\t\t\t --------------------------   \n";
	cout << "\t\t\t\t\t   WELCOME TO ABC Bakery      \n";
	cout << "\t\t\t\t\t --------------------------   \n";
	cout << "\t\t\t\t\t ##########################   \n\n\n\n";
	cout << "\t\t\t\t\t --------------------------   \n";
	cout << "\t\t\t\t\t        Main Menu             \n";
	cout << "\t\t\t\t\t --------------------------   \n\n";
	cout << "\t\t\t\t\t    a. Owner Login            \n\n";
	cout << "\t\t\t\t\t    b. Billing Interface      \n\n";
	cout << "\t\t\t\t\t    e. Exit                   \n\n";
}

int OwnerLogin()
{
	system("cls");
	cout << "\n\n\t\t\t ############################ ";
	cout << "\n\n\t\t\t    WELCOME back MR. DAVID    ";
	cout << "\n\n\t\t\t ############################ ";
	cout << "\n\n\t\t\t a. View Employee Details     ";
	cout << "\n\n\t\t\t b. Back to Main Menu         ";
	cout << "\n\n\t\t\t e. Exit                    \n";
}

void BillingInterface()
{
	system("cls");
	cout << "\n\t\t\t\t\t ########################## \n";
	cout << "\t\t\t\t\t --------------------------   \n";
	cout << "\t\t\t\t\t   WELCOME TO ABC Bakery      \n";
	cout << "\t\t\t\t\t --------------------------   \n";
	cout << "\t\t\t\t\t ##########################   \n\n\n\n";
} 

void ItemDisplay()
{
	cout << "\t\t------------------------------------------------------------------------------------------\n";
	cout << "\t\t------------------------------------------------------------------------------------------\n";
	cout << "\t\t                                      M E N U \n";
	cout << "\t\t------------------------------------------------------------------------------------------\n";
	cout << "\t\t\t  1. Bread/Rs.75.00        2. Beguettes/Rs.120.00        3. CupCake/Rs.60.00            \n";
	cout << "\t\t\t  4. Toast/Rs.50.00        5. Sandwich/Rs.60.00          6. Biscuts/Rs.100.00           \n";
	cout << "\t\t\t  7. Cookies/Rs.30.00      8. Croissant/Rs.45.00         9. Bagel/Rs.55.00              \n";
	cout << "\t\t\t 10. Cake/Rs.500.00       11. PanCake/Rs.120.00         12. Roll/Rs.50.00               \n";
	cout << "\t\t------------------------------------------------------------------------------------------\n";
	cout << "\t\t------------------------------------------------------------------------------------------\n";
}

float BillingSystem()
{
	system("cls");  //clean the screen/terminal 
	
billNew:  //jump stateent
	BillingInterface();
	
	string ItemList[12]={"Bread","Beguettes","CupCake","Toast","Sandwich","Biscuts",
					     "Cookies","Croissant","Bagel","Cake","PanCake","Roll"};
    string ItemList1[12];
 	float prices[12]={75.00,120.00,60.00,50.00,60.00,100.00,30.00,45.00,55.00,500.00,120.00,50.00};
 	int count=1,item=1,num=0;
 	float product[item],quantity[100];
	float qty,total=0.00,netTotal=00.00,cusPaid,balance;
	string ItemNum;
	
itemSelect:
	ItemDisplay();

inputItem:	 //jump stateent
	cout << "\n\t\t\t\t Enter Item Number : ";
	cin >> ItemNum; 
	
	if ((ItemNum == "0") ||(ItemNum == "1") || (ItemNum == "2") || (ItemNum == "3") || (ItemNum == "4") || (ItemNum == "5") || (ItemNum == "6") 
	    || (ItemNum == "7") || (ItemNum == "8") || (ItemNum == "9") || (ItemNum == "10") || (ItemNum == "11") || (ItemNum == "12"))
	{
		if (ItemNum == "1")
		{
			num=0;
		}
		else if (ItemNum == "2")
		{
			num = 1;
		}
		else if (ItemNum == "3")
		{
			num = 2;
		}
		else if (ItemNum == "4")
		{
			num = 3;
		}
		else if (ItemNum == "5")
		{
			num = 4;
		}
		else if (ItemNum == "6")
		{
			num = 5;
		}
		else if (ItemNum == "7")
		{
			num = 6;
		}
		else if (ItemNum == "8")
		{
			num = 7;
		}
		else if (ItemNum == "9")
		{
			num = 8;
		}
		else if (ItemNum == "10")
		{
			num = 9;
		}
		else if (ItemNum == "11")
		{
			num = 1;
		}
		else if (ItemNum == "12")
		{
			num = 11;
		}
		else
		{
			num = 0;
		}
		
		if (ItemNum != "0")
		{
	quantity:  //jump stateent
			cout << "\t\t\t\t Enter the Quantity  : ";
			cin >> qty;
			
			if (qty > 0)
			{
				quantity[item] = qty;
				product[item] = prices[num];
				ItemList1[item] = ItemList[num];
		
				netTotal = netTotal + total;
		
				item++;
		
				cout << "\t\t\t Enter Zero '0' to print the bill or add another Item... \n";
		
				goto inputItem;
			}
			else
			{
				cout << "\t\t\t\tPLEASE ENTER POSITIVE VALUE \n";
				goto quantity;
			}
		}
	
	cashPaid:  //jump stateent
		cout << "\n\n\t\t\tEnter the Cash Paid Amount ";
		cin >> cusPaid; 
		
		if (cusPaid <=0)
		{
			cout << "\n\n\t\t\tPLEASE ENTER POSITIVE VALUE ";
			goto cashPaid;
		}
			
		system("cls");
		
		BillingInterface();
		
		cout << "\n\n\t\t\t----------------------------------------------------" << endl;
		cout << "\t\t\t----------------------------------------------------    " << endl;
		cout << "\t\t\tItem Name\tQty\t  Unit price\t      Total             \n";
		cout << "\t\t\t----------------------------------------------------    " << endl;
		for ( int j=1; j<=(item-1); j++)
		{
			float total=product[j]*quantity[j];
			cout << "\t\t\t " << ItemList1[j] << "\t\t" << quantity[j] << "\t\t" << product[j]  << " \t\t" << total << endl <<endl;
			netTotal = netTotal + total;
		}
		balance = cusPaid - netTotal;
		cout << "\t\t\t----------------------------------------------------" << endl;
		cout << "\t\t\tTOTAL BILL                              " << "Rs.   " << netTotal << endl;
		cout << "\t\t\tPAID AMOUNT                             " << "Rs.   " << cusPaid << endl;
		cout << "\t\t\t----------------------------------------------------" << endl;
		cout << "\t\t\tBALANCE                                 " << "Rs.   " << balance << endl << endl;
		
		if (cusPaid < netTotal)
		{
			cout << "\n\n\t\t\tPAID AMOUNT IS NOT SUFFICIENT TO SETTLE THE BILL ";
			cout << "\n\t\t\tEnter the due Amount paid : ";
			cin >> cusPaid;
			
		cashpaid:  //jump stateent
			if (cusPaid <= 0)
			{
				cout << "\n\t\t\t\t PLEASE ENTER POSITIVE VALUE " << endl;
				
				cout << "\n\t\t\tEnter the due Amount paid : ";
				cin >> cusPaid;
				
				goto cashpaid;
			}
			else
			{
				//sdetw4arhyu5az864u
				if (cusPaid <= balance)
				{
					cout << "\n\t\t\t\t AMOUNT IS NOT SUFFICIENT TO SETTLE THE BILL " << endl;
				
					cout << "\n\t\t\tEnter the due Amount paid : ";
					cin >> cusPaid;
				
					goto cashpaid;
				}
			}
			
			cout << "\n\t\t\tAMOUNT DUE                         " << "Rs.  " << balance  << endl;
			cout << "\t\t\tAMOUNT PAID                        " << "Rs.  " << cusPaid  << endl;
			cout << "\t\t\tBALANCE                            " << "Rs.  " << balance + cusPaid  << endl << endl;
	}
		
		fstream bill;  
		bill.open ("Bill.txt", ios::out);
			
		bill << "\n\n\t\t\t----------------------------------------------------" << endl;
		bill << "\t\t\t----------------------------------------------------    " << endl;
		bill << "\t\t\tItem Name\tQty\t  Unit price\t      Total             \n";
		bill << "\t\t\t----------------------------------------------------    " << endl;
		for ( int j=1; j<=(item-1); j++)
		{
			float total=product[j]*quantity[j];
			bill << "\t\t\t " << ItemList1[j] << "\t\t" << quantity[j] << "\t\t" << product[j]  << " \t\t" << total << endl <<endl;
			netTotal = netTotal + total;
		}
		balance = cusPaid - netTotal;
		bill << "\t\t\t----------------------------------------------------" << endl;
		bill << "\t\t\tTOTAL BILL                              " << "Rs.   " << netTotal << endl;
		bill << "\t\t\tPAID AMOUNT                             " << "Rs.   " << cusPaid << endl;
		bill << "\t\t\t----------------------------------------------------" << endl;
		bill << "\t\t\tBALANCE                                 " << "Rs.   " << balance << endl << endl;
		
		cout << "\n\n\t\t\tEnter 'n' to Generate New Bill or Enter 'e' to Exit... \n\n";
		
	newORexit:  //jump stateent
		cout << "\t\t\t\t\t\t>> ";
		cin >> ItemNum;
		
		if (ItemNum=="n")
		{
			goto billNew;
		}
		else if (ItemNum=="e")
		{
			return 0;
		}
		else
		{
			cout << "\n\t\t\t\t PLEASE ENTER A VAILD LETTER " << endl << endl;
			goto newORexit;
		}
		
	}
	else 
	{
		system("cls");
		BillingInterface();
	
		cout << "\n\t\t\t\t        INVAILD INPUT.... PLEASE TRY AGAIN.... " << endl << endl;
		
		if ( count >=2 )
		{
			cout << "\n\t\t\t\t PLEASE ENTER NUMBER BETWEEN 1-12 AS THE OPTION " << endl << endl;
		}
		
		count++;
		
		goto itemSelect;
	}
}

//Employee class
/*class Employee {
   public:
      int empID;
      string empName;
      int empAge; 
      double salary;
};*/
struct Employee
{
	int empID;
 	string empName;
  	int empAge; 
   	double salary;
};

int StartUpUserInput()
{
	string userinput;
	string letter,empID;
	int count=1;
	
	Employee Employee1;
    Employee Employee2;
    Employee Employee3;
    Employee Employee4;
    Employee Employee5;

    Employee1.empID = 0001;
    Employee1.empName="CHETHI";
    Employee1.empAge = 25;
    Employee1.salary = 20000.00;

    Employee2.empID = 0002;
    Employee2.empName="SMITH";
    Employee2.empAge = 27;
    Employee2.salary = 25000.00;

    Employee3.empID = 0003;
    Employee3.empName="KEVIN";
    Employee3.empAge = 24;
    Employee3.salary = 20000.00;

    Employee4.empID = 0004;
    Employee4.empName="MAXS";
    Employee4.empAge = 25;
    Employee4.salary = 20000.00;

    Employee5.empID = 0005;
    Employee5.empName="NICK";
    Employee5.empAge = 28;
    Employee5.salary = 25000.00;
	
userInput:  //jump stateent
	cout << "\n\n\n\t\t\t\t\t    Select an option : ";
	cin >> userinput;
	
	if  ((userinput !="a") && (userinput !="b") && (userinput !="e")) 
	{
		system ("cls");
		StartUp();
		
		cout << "\n\t\t\t\t        INVAILD INPUT.... PLEASE TRY AGAIN.... " << endl << endl;
		
		if ( count >=2 )
		{
			cout << "\n\t\t\t\t PLEASE ENTER SIMPLE 'a' OR SIMPLE 'b' AS THE OPTION " << endl << endl;
		}
		
		count++;
		
		goto userInput;
	}
	
	if (userinput =="a")
	{
empDetails:  //jump stateent
		OwnerLogin();
		
		cout << "\n\n\t\t\t Enter your choise : ";
    	cin >> letter;
    
    userchoice:  //jump stateent
    	if (letter =="a")
    	{
    		system("cls");
    		
    		BillingInterface();
    		
    		cout << "\t\t\t\t----------------------------------------------------        " << endl;
    		cout << "\t\t\t\t----------------------------------------------------        " << endl;
    		cout << "\t\t\t\t          Current Employee ID's                             " << endl;;
    		cout << "\t\t\t\t----------------------------------------------------        " << endl;
    		cout << "\t\t\t\t      0001 , 0002, 0003, 0004, 0005                         " << endl;
    		cout << "\t\t\t\t----------------------------------------------------        " << endl;
    		
			cout << "\n\n\n\n\t\t\tEnter Employee ID : ";
 			cin >> empID;

	empIDInput:  //jump stateent
			if (empID !="0000")
 			{
				if (empID == "0001")
 				{
  					cout << "\n\n\t\t\tEmployee ID     : " << Employee1.empID << endl;
  					cout << "\n\n\t\t\tEmployee Name   : " << Employee1.empName << endl;
    				cout << "\n\t\t\tEmployee Age      : " << Employee1.empAge << endl;
     				cout << "\n\t\t\tEmployee Salary   : " << Employee1.salary << endl;
      			}
      			else if (empID == "0002")
      			{
      				cout << "\n\n\t\t\tEmployee ID   : " << Employee2.empID << endl;
      				cout << "\n\n\t\t\tEmployee Name   : " << Employee2.empName << endl;
       				cout << "\n\t\t\tEmployee Age    : " << Employee2.empAge << endl;
       				cout << "\n\t\t\tEmployee Salary : " << Employee2.salary << endl;
       			}
       			else if (empID == "0003")
       			{
       				cout << "\n\n\t\t\tEmployee ID     : " << Employee3.empID << endl;
       				cout << "\n\n\t\t\tEmployee Name   : " << Employee3.empName << endl;
        			cout << "\n\t\t\tEmployee Age      : " << Employee3.empAge << endl;
        			cout << "\n\t\t\tEmployee Salary   : " << Employee3.salary << endl;
       			}
       			else if (empID == "0004")
       			{
       				cout << "\n\n\t\t\tEmployee ID     : " << Employee4.empID << endl;
       				cout << "\n\n\t\t\tEmployee Name   : " << Employee4.empName << endl;
        			cout << "\n\t\t\tEmployee Age      : " << Employee4.empAge << endl;
        			cout << "\n\t\t\tEmployee Salary   : " << Employee4.salary << endl;
       			}
       			else if (empID == "0005")
       			{
       				cout << "\n\n\t\t\tEmployee ID     : " << Employee5.empID << endl;
       				cout << "\n\n\t\t\tEmployee Name   : " << Employee5.empName << endl;
        			cout << "\n\t\t\tEmployee Age      : " << Employee5.empAge << endl;
        			cout << "\n\t\t\tEmployee Salary   : " << Employee5.salary << endl;
       			}
       			else 
       			{
       				cout << "\n\t\t\t --!! INVAILD EMPLOYEE ID NUMBER !!-- \n";
       				
       				cout << "\n\n\n\n\t\t\tEnter Employee ID : ";
       				
 					cin >> empID;
 					
 					goto empIDInput;
   				}
   				cout << "\n\n\t\t\tEnter '0000' to Exit or Enter another Employee ID... : ";
   				cout << "\n\n\n\n\t\t\tEnter Employee ID : ";
       				
				cin >> empID;
 					
				goto empIDInput;
    		 }
    		 goto empDetails;
    		 system ("cls");
    	}
    	else if (letter == "b")
    	{
    		StartUp();
    		goto userInput;
    	}
    	else if (letter == "e")
    	{
    		return 0;
    	}
    	else
    	{
    		cout << "\n\t\t\t\t        INVAILD INPUT.... PLEASE TRY AGAIN.... " << endl << endl;
    		cout << "\n\t\t\t Enter your choise : ";
    		cin >> letter;
    		goto userchoice;
    	}
	}
	
	if (userinput =="b")
	{
		BillingSystem();
	}
}

int main()
{
	StartUp();
	StartUpUserInput();
}
