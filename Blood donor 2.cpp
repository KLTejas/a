#include<stdio.h>
#include<iostream>
#include<fstream>
#include<conio.h>
#include<iomanip>
#include<string.h>

using namespace std;

int n=0;
class donor
{
	public:
	char name[20];
	char phno[15];
	char city[15];
	long int pincode;
	char bgp[3];
	int pin;
	
	void readdata();
	void displaydata();
	void dispall();
	void bgdispall();
	
	char * getphno()
    {	
      return phno;
    }
    int getpin()
    {
		return pin;
    }
	char * getgp()
	{
		return bgp;
	}
	long int getpincode()
	{
		return pincode;
	}

	
};

  





void donor::dispall()
{
	const char separator    = ' ';

    cout << left << setw(18) << setfill(separator) <<name;
    cout << left << setw(20) << setfill(separator) <<bgp;
    cout << left << setw(18) << setfill(separator) <<phno;
    cout << left << setw(20) << setfill(separator) <<city;
    cout << left << setw(15) << setfill(separator) <<pincode;	
    cout << left << setw(10) << setfill(separator) <<pin;
}

void donor::bgdispall()
{
	const char separator    = ' ';

    cout << left << setw(18) << setfill(separator) <<name;
    cout << left << setw(20) << setfill(separator) <<bgp;
    cout << left << setw(18) << setfill(separator) <<phno;
    cout << left << setw(20) << setfill(separator) <<city;
    cout << left << setw(15) << setfill(separator) <<pincode;	
}

void donor::readdata()
   {
   	system("cls");
   	int i,p=0,c1;
   	char c,y='a';
   	char garbage[20];
    gets(garbage);
	cout<<"\t\t\t\t\t\t\t\tEnter Your Name ::";
	gets(name);
	cout<<"\t\t\t\t\t\t\t\tEnter your Blood Group(Ex- b+,a-,ab+,..) ::";
	gets(bgp);
    cout<<"\t\t\t\t\t\t\t\tEnter your Phone Number ::";
	gets(phno);
	cout<<"\t\t\t\t\t\t\t\tEnter your city ::";
	gets(city);
    cout<<"\t\t\t\t\t\t\t\tEnter your Pin code ::";
	cin>>pincode;
    do
    {
    	p=0;
    	cout<<"\t\t\t\t\t\t\t\tEnter the Pin you want to set(Ex-1234) ::  ";
	    for(i=0;i<4;i++)
   	      {
   	      	c=getch();
   	      	cout<<"*";
   	      	c1=c-'0';
   	      	p=p*10+c1;   	      	
		  }
			 cout<<"\n\t\t\t\t\t\t\t\tThe pin you entered is "<<p;
			 cout<<"\n\t\t\t\t\t\t\t\tPress y to confirm.. ";
			 y=getch();
			 cout<<"\n";
			 
	}while(y!='y' && y!='Y');
	pin=p;
			 
			 
}

int main()
{
	donor d;
    fstream fout,fin,afile,ofile;
    int ch=0,n,i;
    int ch1,p=0,c1,pd=6060,f=0;
    int ch2,p2,flag2,c2,ch3,fg3=0,fg4=0;
    char c,ph2[15],gb[20],ci;
    char name3[20],bg3[5],ph3[15],gb3[20];
    long int pinc3;
    char separator=' ';
    
   while(ch!=4) 
   {
   	system("cls");
   	cout<<"\t\t\t\t\t\t\t\t=============================================\n";
   	cout<<"\t\t\t\t\t\t\t\t|                                           |\n";
    cout<<"\t\t\t\t\t\t\t\t|~~~~~~~~~~~~~~~~~~~MENU~~~~~~~~~~~~~~~~~~~~|\n";
    cout<<"\t\t\t\t\t\t\t\t|1.Admin                                    |\n";
    cout<<"\t\t\t\t\t\t\t\t|2.Donor                                    |\n";
    cout<<"\t\t\t\t\t\t\t\t|3.Receiver                                 |\n";
    cout<<"\t\t\t\t\t\t\t\t|4.Exit                                     |\n";
    cout<<"\t\t\t\t\t\t\t\t|                                           |\n";
    cout<<"\t\t\t\t\t\t\t\t=============================================\n\n";
    cout<<"\t\t\t\t\t\t\t\tEnter your choice  ";
    cin>>ch;
    
    switch(ch)
 {  
 
   case 0: break;
   
   case 1:
   	    
   	      system("cls");
   	      cout<<"\t\t\t\t\t\t\t\tPlease enter the admin password...    ";
   	      for(i=0;i<4;i++)
   	      {
   	      	c=getch();
   	      	cout<<"*";
   	      	c1=c-'0';
   	      	p=p*10+c1;   	      	
			 }
		if(p==pd)
		{
		 ch1=0;
		 while(ch1!=3)
		 {
			 	p=0;
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t\t\tWELCOME ADMIN !!";
    		cout<<"\n\t\t\t\t\t\t\t\t************ADMIN MENU****************";
    		cout<<"\n\n\t\t\t\t\t\t\t\t1.Display all records";
    		cout<<"\n\t\t\t\t\t\t\t\t2.Add a Donor";
    		cout<<"\n\t\t\t\t\t\t\t\t3.Main Menu";
    		cout<<"\n\n\t\t\t\t\t\t\t\tEnter your choice  ";
    		cin>>ch1;
    
            switch(ch1)
            {  
			
			case 1:
			system("cls");
          cout << left << setw(18) << setfill(separator) <<"\t\t\t\tNAME";
    	  cout << left << setw(23) << setfill(separator) <<"BLOOD GROUP";
    	  cout << left << setw(18) << setfill(separator) <<"PHONE NUMBER";
    	  cout << left << setw(20) << setfill(separator) <<"CITY";
    	  cout << left << setw(15) << setfill(separator) <<"PINCODE";
    	  cout << left << setw(10) << setfill(separator) <<"PIN";
    	  cout << endl;
    
	      cout<<"\t\t\t\t--------------------------------------------------------------------------------------------------\n";
	      cout<<"\t\t\t\t--------------------------------------------------------------------------------------------------\n";

	       fin.open("donor2.txt",ios::in);
	        while(fin.read((char*)&d,sizeof(donor)))
	       {
	       	cout<<"\n\n\t\t\t\t";
	        d.dispall();
	       }
	       
	        fin.close();
	        cout<<"\n\n\t\t\t\tPress any key to go back to Admin menu..";
	        getch();
		  break;
		  
		case 2: fout.open("donor2.txt",ios::out|ios::app);
                d.readdata();
                fout.write((char*)&d,sizeof(donor));
                fout.close();  
		     break; 
	  
		
	      
	        
	    case 3: break;
	    
	    default: cout<<"\n\t\t\t\t\t\t\t\tEnter a valid choice.... ";
	              cout<<"\n\t\t\t\t\t\t\t\tPress any key to enter choice again ";
				  getch();
	        }
	    }
	   }
	else
		{
			cout<<"\n\n\t\t\t\t\t\t\t\tThe entered password "<<p<<" is wrong..";
			cout<<"\n\t\t\t\t\t\t\t\tPress any key to go back to main menu.....";
			p=0;
			getch();
			
		}
 
	break;
			
			
			
			
			
			
			           
           
   case 2: ch2=0;
		 while(ch2!=3)
		 {
			 p=0;
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t\t\tWELCOME DONOR !!";
    		cout<<"\n\t\t\t\t\t\t\t\t************DONOR Menu****************";
    		cout<<"\n\n\t\t\t\t\t\t\t\t1.Register First time";
    		cout<<"\n\t\t\t\t\t\t\t\t2.Delete";
    		cout<<"\n\t\t\t\t\t\t\t\t3.Main Menu";
    		cout<<"\n\n\t\t\t\t\t\t\t\tEnter your choice  ";
    		cin>>ch2;
    
            switch(ch2)
            {  
			
			case 1:
                    fout.open("donor2.txt",ios::out|ios::app);
                    d.readdata();
                    fout.write((char*)&d,sizeof(donor));
                    fout.close();  
		       break;
			   
			case 2: 
			        system("cls");
				    gets(gb);
			        cout<<"\n\t\t\t\t\t\t\t\tEnter your Ph no:  ";
                    gets(ph2);
                    cout<<"\t\t\t\t\t\t\t\tEnter your Pin:   ";
                    for(i=0;i<4;i++)
   	                {
   	                   	ci=getch();
   	      	            cout<<"*";
   	      	            c2=ci-'0';
   	      	            p2=p2*10+c2;   	      	
			        }
                    
                    
	                afile.open("donor2.txt",ios::in);
                    ofile.open("Temp.txt",ios::out);
                    while(afile.read((char *)&d,sizeof(donor)))
	                {
		               	if (p2==d.getpin() && strcmpi(ph2,d.getphno())==0)
			           {
			            flag2=1;
                        cout<<"\n\t\t\t\t\t\t\t\t The record is succuessfully deleted from the file\n\t\t\t\t\t\t\t\t Press any key to continue.";
                        getch();
                        
			           }
			           else
			          {
	                   ofile.write((char *)&d,sizeof(donor));
		            	}
		            }
	                if(flag2==0)
	              	 {
					   cout<<"\n\t\t\t\t\t\t\t\t Wrong phone number or pin entered\n\t\t\t\t\t\t\t\t Press any key to continue ";
	              	   getch();
	                 }	   
	              	
		            afile.close();
		            ofile.close();
                    remove("donor2.txt");
                    rename("Temp.txt", "donor2.txt");
                break;
       
	    case 3: break;
	    
	    default: cout<<"\n\t\t\t\t\t\t\t\tEnter a valid choice.... ";
	              cout<<"\n\t\t\t\t\t\t\t\tPress any key to enter choice again ";
				  getch();
	        }
	    }
		break;        
    
	        
   
   
   
   
   
   case 3: 
           ch3=0;
		 system("cls");
			cout<<"\n\n\t\t\t\t\t\t\t\tWELCOME Receiver !!";
			gets(gb3);
			cout<<"\n\n\t\t\t\t\t\t\t\tEnter your Name:-  ";
			gets(name3);
			cout<<"\t\t\t\t\t\t\t\tEnter your phone number:-  ";
			gets(ph3);
			cout<<"\t\t\t\t\t\t\t\tEnter The blood group you want to search(Ex- b+,a-,ab+,..)::  ";
			gets(bg3);
		 while(ch3!=3)
		 {
			system("cls");
			cout<<"\t\t\t\t\t\t\t\tWelome "<<name3;			
    		cout<<"\n\t\t\t\t\t\t\t\t************RECEIVER Menu****************";
    		cout<<"\n\n\t\t\t\t\t\t\t\t1.Search records based on only Blood Group";
    		cout<<"\n\t\t\t\t\t\t\t\t2.Search records based on Blood Group and pincode";
    		cout<<"\n\t\t\t\t\t\t\t\t3.Main Menu";
    		cout<<"\n\n\t\t\t\t\t\t\t\tEnter your choice  ";
    		cin>>ch3;
    
            switch(ch3)
            {  
			
			case 1: 
			         fin.open("donor2.txt",ios::in);
			         while(fin.read((char*)&d,sizeof(donor)))
			         {
				      if(strcmpi(bg3,d.getgp())==0)
				       {
					     fg3=1;
					     break;
				       }
			         }
					 fin.close();
			
			          if(fg3==0)
			          {
			          	cout<<"\n\t\t\t\t\t\t\t\tNo Record found with such Blood Group!!";
			            cout<<"\n\t\t\t\t\t\t\t\tPress any key to continue ... ";
			            getch();
			          }
			          else
			          {
			          		system("cls");
          cout << left << setw(18) << setfill(separator) <<"\t\t\t\tNAME";
    	  cout << left << setw(25) << setfill(separator) <<"BLOOD GROUP";
    	  cout << left << setw(19) << setfill(separator) <<"PHONE NUMBER";
    	  cout << left << setw(20) << setfill(separator) <<"CITY";
    	  cout << left << setw(15) << setfill(separator) <<"PINCODE";
    	  
    	  cout << endl;
    
	      cout<<"\t\t\t\t--------------------------------------------------------------------------------------------------\n";
	      cout<<"\t\t\t\t--------------------------------------------------------------------------------------------------\n";

			          	fin.open("donor2.txt",ios::in);
			         while(fin.read((char*)&d,sizeof(donor)))
			         {
				      if(strcmpi(bg3,d.getgp())==0)
				       {
				       	cout<<"\n\n\t\t\t\t";
				       	d.bgdispall();
				       }
			         }
			         cout<<"\n\t\t\t\tPress any key to continue ... ";
			            getch();
					 fin.close();
			          	
					  }
				break;	  
        
        case 2:
        	   cout<<"\n\t\t\t\t\t\t\t\tEnter the pincode you want to search in:  ";
        	   cin>>pinc3;
        	   fin.open("donor2.txt",ios::in);
			         while(fin.read((char*)&d,sizeof(donor)))
			         {
				      if(strcmpi(bg3,d.getgp())==0 && pinc3==d.getpincode())
				       {
					     fg4=1;
					     break;
				       }
			         }
					 fin.close();
			
			          if(fg4==0)
			          {
					    cout<<"\n\t\t\t\t\t\t\t\tNo Record found with such Blood Group!!";
			            cout<<"\n\t\t\t\t\t\t\t\tPress any key to continue ... ";
			            getch();
			          }
			          else
			          {
			          		system("cls");
          cout << left << setw(18) << setfill(separator) <<"\t\t\t\tNAME";
    	  cout << left << setw(25) << setfill(separator) <<"BLOOD GROUP";
    	  cout << left << setw(19) << setfill(separator) <<"PHONE NUMBER";
    	  cout << left << setw(20) << setfill(separator) <<"CITY";
    	  cout << left << setw(15) << setfill(separator) <<"PINCODE";
    	 
    	  cout << endl;
    
	      cout<<"\t\t\t\t--------------------------------------------------------------------------------------------------\n";
	      cout<<"\t\t\t\t--------------------------------------------------------------------------------------------------\n";

			          	fin.open("donor2.txt",ios::in);
			         while(fin.read((char*)&d,sizeof(donor)))
			         {
				      if(strcmpi(bg3,d.getgp())==0 && pinc3==d.getpincode())
				       {
				       	cout<<"\n\n\t\t\t\t";
				       	d.bgdispall();
				       }
			         }
			         cout<<"\n\t\t\t\tPress any key to continue ... ";
			            getch();
					 fin.close();
			          	
					  }
				break;
		
				
		case 3: break;
	    
	    default: cout<<"\n\t\t\t\t\t\t\t\tEnter a valid choice.... ";
	             cout<<"\n\t\t\t\t\t\t\t\tPress any key to enter choice again ";
				  getch();
	        }
	    }
		break; 	
				
				
				
				
				
	
    case 4: cout<<"\n\t\t\t\t\t\t\t\t.................THANK YOU....................";
            exit(0);
			break;
	

   default: cout<<"\t\t\t\t\t\t\t\tEnter a valid choice ";
            cout<<"\n\t\t\t\t\t\t\t\tPress any key to enter choice again ";
				  getch();
 }
}
}