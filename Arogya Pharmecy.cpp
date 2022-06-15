#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	  string username1,passwoad1,mu,mp;
	  void home();
		 do{
	
    cout<<"\n\t                                                                                         "<<endl;
    cout<<"\n\t-----------------------------------_ _ _ _AROGYA_ _ _ _ _ -------------------------------"<<endl;
    cout<<"\n\t_ _ __ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ PHARMACY_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ __ _"<<endl;
    cout<<"\n\t                      No 202, D.S.Senanayake Street, Kandy, Sri Lanka                    "<<endl;
    cout<<"\n\t                            TEL # 0812 500000 / 0814 000000								"<<endl;
    cout<<"\n\t........................................................................................."<<endl;
 
	

	  do
	     {
	   
         ifstream manegetmentlogin;
         
		 cout<<"\n\tPlease Enter Your User Name :";
	 	cin>>username1;
	 	
	 	cout<<"\n\tPlease Enter Your Password :"; 
	 	cin>>passwoad1; 
	 	
	 	manegetmentlogin.open("manegementlogin.txt");

     while(manegetmentlogin>>mu>>mp)
     
     { 
	 if(username1==mu && passwoad1==mp)
       {
		  void home();
		  home();
         system("cls");
         
         break;
    }
	 
}
	 if(username1!=mu || passwoad1!=mp)
	 {
	 
	 	cout<<"\n\tWrong Entry.."<<endl;
	 	cout<<"\n\tIncorrect User Name or Password.Please Check and Try Again...."<<endl;
	 	manegetmentlogin.close();
	 }
	}  while(username1 !=mu || passwoad1 !=mp);
   	 
 
	system("pause");
	system("cls");
	
} while(true);
	return 0;
}
 void home()
 
   {    
         int cashier(string name[30],string code[20],int price[20]);
	     string name[30],code[20];
			        
	         int price[20],tot[100];
            int x=0;
             
            string type="0";
     do{
	 
     system("cls");
     cout<<"\n\t..................................."<<endl;
     cout<<"\n\t1. Item Details"<<endl;
     cout<<"\n\t2. Cashier"<<endl;
     cout<<"\n\t3. View Sales Details"<<endl;
     cout<<"\n\t4. Manage Sales Summary"<<endl;
     cout<<"\n\t5. Logout"<<endl;
    
     cout<<"\n\t..................................."<<endl;
     cout<<"\n\tPlease Enter Option Number = ";
     cin>>type;
     
	
	if(type=="1")
	{
		void itemdetails();
		itemdetails();
	}
	
	if(type=="2")
	{
  	  void cashier(string name[30],string code[20],int price[20],int tot[100]);
	       cashier(name, code,price,tot);
	   }
	
	if(type=="3")
	{
		void viewsales(string name[30],string code[15],int price[15],int tot[100]);
		    viewsales(name,code,price,tot);
	}
	if(type=="4")
	{
		int salessummary();
	        salessummary();
	}
	
	 if(type=="5")
	 {
	 	void logout();
	    logout();
	 }
	
	
	
	system("pause");
 } while(type!="5");
}


 
void itemdetails()

     {      int item(string name[30],string code[15],int price[15]);
            void additem(string name[30],string code[15],int price[15],int& len);
            void updateitem(string name[30],string code[15],int len,int price[15]);
            void deleteitem(string name[30],string code[15],int price[15],int len);
		     
            int price[15]; 
            string name[30],code[15];
			    int x=0;    
	      string type="0";
             int len=0;
      do{
      	 system("cls");
      	 
      	 cout<<"\n\t..................................."<<endl;
      	 cout<<"\n\t1. Item Details"<<endl;
      	 cout<<"\n\t2. Add Items "<<endl;
      	 cout<<"\n\t3. Update Items "<<endl;
      	 cout<<"\n\t4. Delete Items "<<endl;
      	 cout<<"\n\t5. Main Menu "<<endl<<endl;
      	 
      	 cout<<"\n\tNOTE : Do You Want Update Items?..Frist View Item Details and Then Update"<<endl<<endl;
      	 cout<<"\n\t..................................."<<endl;
      	 cout<<"\n\tPlease Enter Option Number = ";
      	 cin>>type;
      	 
      	 
		
		if(type=="1")
		{
		    int item(string name[30],string code[15],int price[15]);
		   len=item(name,code,price);
		}
		
		if(type=="2")
		{
		    void additem(string name[30],string code[15],int price[15],int& len);
		     additem(name,code,price,len);
		}
		
		if(type=="3")
		{
			void updateitem(string name[30],string code[15],int len,int price[15]);
              updateitem(name,code,len,price);
		}
		if(type=="4")
		{
			void deleteitem(string name[30],string code[15],int price[15],int len);
			deleteitem(name,code,price,len );
		}
		
		system("pause");
	} while(type!="5");
	  }
 

 
 int item(string name[30],string code[15],int price[15])
 {
 	system("cls");
 
 	ifstream item;
 	int x =0;
 	
 	cout<<"                                                                           "<<endl<<endl;
 	cout<<"---------------------------------Medicines---------------------------------"<<endl<<endl;
 	cout<<"..........................................................................."<<endl;
 	cout<<left<<setw(15)<<"Item Code"<<setw(30)<<"Item Name"<<setw(12)<<"Price Rs."<<endl;
 	cout<<"..........................................................................."<<endl;
 	item.open("item.txt");
 		
 	    item>>code[x];
 		item>>name[x];
 		item>>price[x];
 		
 	while(item)
 	{
 		
 	cout<<left<<setw(20)<<code[x]<<setw(30)<<name[x]<<setw(12)<<price[x]<<endl;
 	x++;
 	
 	    item>>code[x];
 		item>>name[x];
 		item>>price[x];
 		
	 }
 	return x;
 	
 	
 	
 }
 

 
 
		 
void additem(string name[30],string code[15],int price[15],int& len)
{
	
	system("cls");
	
	cout<<"\n\t-------------Excample For Adding New Item-----------"<<endl<<endl;
	cout<<"\n\tItem Code = STG0001,RXL0001,GLY0001..."<<endl;
	cout<<"\n\tItem Name = Piriton tablet,Nervijen tablet,Hydrocortisone 10mg..."<<endl;
	cout<<"\n\tItem Price=200,3.56,12,..."<<endl;
    cout<<"\n\t..................................."<<endl;
			
	
		cout<<"\n\tEnter Item Code : ";
		cin>>code[len];
		cout<<"\n\tEnter Item Name : ";
		cin>>name[len];
		cout<<"\n\tEnter Item Price Rs: ";
		cin>>price[len];
	
			ofstream item;
		item.open("item.txt",ios::app);
		item<<left<<setw(20)<<code[len]<<setw(30)<<name[len]<<setw(12)<<price[len]<<endl;
		cout<<"\n\tItem is Successfully Added... Check Item Details and See New Items"<<endl;
		cout<<"\n\t.................................................................."<<endl;
		item.close();
		
	
   }

void updateitem(string name[30],string code[15],int len,int price[15])
	{
		
		 string icode;
     	ofstream item;
	
		
      cout<<"\n\tEnter Item Code for Update : ";
      cin>>icode;
      
      for(int x=0; x<len; x++)
      {
         if(code[x]==icode)
         { 
		    item.open("item.txt");
		   cout<<"\n\tItem Name : "<<name[x]<<endl;
           cout<<"\n\tCurrent Price Rs : "<<price[x]<<endl;
           cout<<"\n\tNew Price Rs : ";
           cin>>price[x];
           
           
       for(int x=0; x<len; x++)
       {	
       	  
           item<<left<<setw(20)<<code[x]<<setw(30)<<name[x]<<setw(12)<<price[x]<<endl;
        
        }
          cout<<"\n\tItem Updated Succsfully..."<<endl;
		  item.close();
          break; 
           } 
		     
      }  
        
		}	


	 
 		
 
void deleteitem(string name[30],string code[15],int price[15],int len)

{
	
	
		ofstream item;
		item.open("item.txt");

		string icode;
		
		cout<<"\n\tEnter Item Code : ";
		cin>>icode;

		for(int x=0; x<len; x++)
		{
			if(code[x]!=icode)
			{
				
			
				item<<left<<setw(20)<<code[x]<<setw(30)<<name[x]<<setw(12)<<price[x]<<endl;
				
			} else
			 cout<<"\n\tItem Deleted Succsfully..."<<endl;
		}
		  
	 item.close();	
		 
}



void cashier(string name[30],string code[15],int price[15],int tot[100])

{
	 bool found=false; 
	 string ans;
	 int counter=0;
	 int total=0;
	string billcode[10];
	int billquty[10];	
	string billname[10];
	int billprice[10];	
	int ind = 0;
	;
	
	system("cls");
	 string icode;
	 char choise = 'y';	
	 int  quin, pay, bala, product, T; 
	int x=0;

	
	ifstream item;
	item.open("item.txt");
	
            cout<<"                                                                       "<<endl<<endl;
            cout<<left<<setw(15)<<"Item Code"<<setw(30)<<"Item Name"<<setw(12)<<"Price Rs."<<endl;
            cout<<"......................................................................."<<endl<<endl;
    
	

		while(item>>code[x]>>name[x]>>price[x])
		{
	
		cout<<left<<setw(15)<<code[x]<<setw(30)<<name[x]<<setw(12)<<price[x]<<endl;
 		x++;
 	
		}
	
	do 
	{
	        cout<<"\n\tPlease Enter The Item Code : ";
            cin>>icode;
            counter++;
            for (int x=0; x<=15; x++)
            	{
           	        if(icode==code[x])
	                     { 
	                    	 billcode[ind]=icode; 
                            cout<<"\n\t    Item Name     : "<<name[x]<<endl;
                            billname[ind]=name[x];
    		                cout<<"\n\t    Quantity Item : ";
	                        cin>>quin;
	                        billquty[ind]=quin; 	
	                        billprice[ind]=price[x];
	                        ind++;
	                           tot[x]=(quin*price[x]);
	                           total = (total+tot[x]);	
	                        cout<<"\n\t    Total Price   : "<<tot[x]<<endl; 
                         }
					    	
                }
                
                
	        cout<<"\n\n Add another item (y/n) ? : ";
	        cin>>ans;
	        
	        if(ans == "y")
	        {
	        	found=false;
			}
			else if(ans == "n")
			{
				found=true;
			}
			else
			{
				cout<<"Invalid input, Please try again..";
			}
		

	} while (found == false);
	
	
	cout<<"\n\t    Total Price   : "<<total<<endl;
	cout<<"\n\t    Paid Value    = ";
							cin>>pay;
							bala=pay-total;
	
	cout<<"\n\t    Balance Is    = "<<bala<<endl;
	
	for (int x=0; x<=0; x++)
	{
	     
	        cout<<"\n\t                                                                                         "<<endl;
    		cout<<"\n\t-----------------------------------_ _ _ _AROGYA_ _ _ _ _ -------------------------------"<<endl;
    		cout<<"\n\t_ _ __ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ PHARMACY_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ __ _"<<endl;
    		cout<<"\n\t                      No 202, D.S.Senanayake Street, Kandy, Sri Lanka                    "<<endl;
    		cout<<"\n\t                            TEL # 0812 500000 / 0814 000000								"<<endl;
    		cout<<"\n\t-----------------------------------------------------------------------------------------"<<endl;
    		cout<<"\n\t          CASHIER:CHIRANTHA                                                              "<<endl;
    		cout<<"\n\t            UNIT : 1                                        INVOICE: 0000001             "<<endl;
    		cout<<"\n\t                                                                                         "<<endl;
    		cout<<"\n\t-----------------------------------------------------------------------------------------"<<endl;
    
	       	for (int x=0; x<ind; x++)
	      { cout<<"\n\t    Item Name     : "<<billname[x]<<endl;
    		cout<<"\n\t    Item Code     : "<<billcode[x]<<endl;
    	    		T = billprice[x]*billquty[x] ;
    		cout<<"\n\t     ("<<billprice[x]<< " * "<<billquty[x]<<")                                                   Rs. "<<T <<endl; 
	                
	        }
    		cout<<"\n\t-----------------------------------------------------------------------------------------"<<endl;
            cout<<"\n\t                 SUB TOTAL  =                                   Rs. "<<total<<endl;
           /* cout<<"\n\t                 Paid Value =                                   Rs. "<<pay;
	           
			cout<<"\n\t                                                                   ------                "<<endl;
	        cout<<"\n\t                 Balance    =                                   Rs. "<<bala<<endl; */
    		cout<<"\n\t-----------------------------------------------------------------------------------------"<<endl;
    		cout<<"\n\t                                 THANK YOU COME AGAIN!                                    "<<endl;
    		cout<<"\n\t    Dear Customer                                                                        "<<endl;
    		cout<<"\n\t  Please note that Pharmaceuticals and Sterile Medical devices will not be accepted as   "<<endl;
			cout<<"\n\t  return or exchange.                                                                    "<<endl;
			cout<<"\n\t  Hygienic and Sterility Conditions Cannot be guaranteed once healthcare products sold   "<<endl;
			cout<<"\n\t  to the customer.                                                                       "<<endl;
    		cout<<"\n\t-----------------------------------------------------------------------------------------"<<endl;
    		cout<<"\n\t-----------------------------------------------------------------------------------------"<<endl;
	
	     	ofstream sales;
        
        sales.open("sales.txt",ios::app);
		
		
		sales<<left<<setw(30)<<billname[x]<<setw(12)<<quin<<setw(12)<<T<<endl;
	    sales.close();
	    
			  
	}
	
 }
	     


void viewsales(string name[30],string code[15],int price[15],int tot[100])
{    
    system("cls");
    
     int x =0;
     ifstream sales; 
     int quin,bala;
     
        cout<<"\n\t----------------------------Sales Details----------------------------------------------"<<endl<<endl;
     	cout<<left<<setw(30)<<"Item Name"<<setw(20)<<"Quintity"<<setw(12)<<"Total Bill Rs."<<endl;
        cout<<"..........................................................................................."<<endl;
     
	 sales.open("sales.txt");
	while(sales)
	
	{
		sales>>name[x];
		sales>>quin;
		sales>>tot[x];
		
		
			cout<<left<<setw(30)<<name[x]<<setw(20)<<quin<<setw(12)<<tot[x]<<endl;
 
 	
	}
	   sales.close();
	  cout<<"......................................................................................."<<endl<<endl;
}


int salessummary()
 
{
	void inputData(string name[30], int income[12]); 
	void printData(string name[30], int income[12]);
	void total(int marks[12]);
	int menu();

	string names[30]={"January", "February", "March"};
	int incomes[12]={0}; 

	cout<<names[1]<<endl; 
	cout<<incomes[5]<<endl; 

	incomes[3]=60000; 

	
	int sel;
	do{ 
		sel = menu();

	switch(sel) 
	{
	case 1: inputData(names,incomes);
		break;
	case 2:printData(names,incomes);
		break;
	case 3:total(incomes);
		break;
	case 4:cout<<"\n\tThank you....."<<endl; 
		break;
	}
	system("pause");
}
    
	while(sel!=4); 
	system("pause");
    
	return 0;
}

void inputData(string name[30], int incomes[12])
{ 
     system("cls");
	cout<<"\n\t----------Input Name of Month and Incomes-----------"<<endl<<endl;
	cout<<"\n\tNOTE: You Can Input 12 Month and 12 Incomes Only...."<<endl;
	cout<<"\n\t...................................................."<<endl;
	for(int x=0; x<12; x++)
	{
		cout<<"\n\t Month Name : ";
		cin>>name[x];

		cout<<"\n\tIncome Rs : ";
		cin>>incomes[x];
	}
}

void printData(string name[30], int incomes[12])
{     
    system("cls");
	cout<<"\n\t----------Income List of Months--------"<<endl<<endl;
	
	             cout<<left<<setw(30)<<"Month Name"<<setw(15)<<"Income Rs."<<endl;
	cout<<"................................................................"<<endl;
	for(int x=0; x<12; x++)
	{
		cout<<x+1<<"). "<<left<<setw(30)<<name[x]<<setw(18)<<incomes[x]<<endl;
	}
	  
}

void total(int incomes[12])
{
	int tot=0;
	for(int x=0; x<12; x++)
	{
		tot=tot+incomes[x];
	}
cout<<"\n\t..................................."<<endl<<endl;
	cout<<"\n\tTotal Incomes: "<<tot<<endl;
    
}
int menu()
{
int sel;
	system("cls");
    cout<<"\n\tSystem Options"<<endl;
    cout<<"\n\t..................................."<<endl;
	cout<<"\n\t1.Input Data"<<endl;
	cout<<"\n\t2.Print Income List"<<endl;
	cout<<"\n\t3.Find Total Incomes"<<endl;
	cout<<"\n\t4.Exit "<<endl;
    cout<<"\n\t..................................."<<endl;

	cout<<"\n\tSelect The Option : ";
	cin>>sel;

		return sel;
       
}

void logout()
{
	cout<<"\n\t............ Double Press Enter To Logout..........."<<endl;
	cout<<"\n\t Thank You"<<endl;
	cout<<"\n\t..............................................................................."<<endl;
}



 
 
 
 
 
 
 
 
 
 
 
 
 
 
