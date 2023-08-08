#include<iostream>
#include<fstream>//Header file for file input output
using namespace std;

class registration;//Forward declaration
void mainMenu();//Function prototype

class Details//class-01
{
private:
    static string name, gender;
    static int phoneNo;
    int age;
    string add;
    static int cId;
    char arr[100];

public:
    //Friend functions and friend class
    friend void information(Details obj1);
    friend void Bill(Details obj2,registration obj4);
    friend class ticket;
};

int Details::cId;
string Details::name;
string Details::gender;
int Details::phoneNo;

class Management//class-02
{
public:
    Management()//constructor
    {
        mainMenu();
    }
};

void information(Details obj1)
{
    cout<<"\nEnter the customer ID : ";
    cin>>obj1.cId;

    cin.ignore();
    cout<<"\nEnter the name : ";
    getline(cin,obj1.name);

    cout<<"\nEnter your phone number: ";
    cin>>obj1.phoneNo;

    cout<<"\nEnter the age : ";
    cin>>obj1.age;

    cin.ignore();
    cout<<"\nEnter the Address : ";
    getline(cin,obj1.add);

    cout<<"\nGender : ";
    getline(cin,obj1.gender);

    cout<<"\nYour details are saved with us!!!\n"<<endl;
}

class registration//class-03
{
private:
    static int choice;
    int choice1;
    static float charges;
    //Friend function
    friend void Bill(Details obj2,registration obj4);

public:
    //Member function
    void flights()
    {
        string flightN[]= {"Dubai","Canada","UK","USA"};
        cout<<"\nWelcome to the Airlines!\n"<<endl;

        for(int a=0; a<4; a++)
        {
            cout<<"Press "<<(a+1)<<" for Flight to "<<flightN[a]<<endl;
        }
        cout<<"\nEnter your choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1:
        {
            cout<<"\n\t\t\t\t____________Welcome to Dubai Emirates___________\n"<<endl;
            cout<<"Your comfort is our priority.Enjoy the journey!\n"<<endl;
            cout<<"Following are the flights \n"<<endl;
            cout<<"1.DUB - 498 :"<<endl;
            cout<<"\n\t   Date -> 06-08-2023  Time ->  8:00AM  Duration -> 10hrs Cost -> Rs.14000\n"<<endl;
            cout<<"2.DUB - 658 :"<<endl;
            cout<<"\n\t   Date -> 07-08-2023  Time ->  9:00AM  Duration -> 11hrs Cost -> Rs.15000\n"<<endl;
            cout<<"3.DUB - 498 :"<<endl;
            cout<<"\n\t   Date -> 08-08-2023  Time -> 10:00AM  Duration -> 12hrs Cost -> Rs.17000\n"<<endl;
            cout<<"\nSelect the flight you want to book :";
            cin>>choice1;
            if(choice1==1)
            {
                charges=14000;
                cout<<"\nYou have successfully  booked the flight DUB - 498\n"<<endl;
                cout<<"You can go back to menu and take the ticket\n"<<endl;
            }
            else if(choice1==2)
            {
                charges=15000;
                cout<<"\nYou have successfully  booked the flight DUB - 658\n"<<endl;
                cout<<"You can go back to menu and take the ticket\n"<<endl;
            }
            else if(choice1==3)
            {
                charges=17000;
                cout<<"\nYou have successfully  booked the flight DUB - 498\n"<<endl;
                cout<<"You can go back to menu and take the ticket\n"<<endl;
            }
            else
            {
                cout<<"\nInvalid input , Shifting to the previous menu\n"<<endl;
                flights();
            }
            mainMenu();
        }

        case 2:
        {
            cout<<"\n\t\t\t\t___________Welcome to Canadian Airlines__________\n"<<endl;
            cout<<"Your comfort is our priority.Enjoy the journey!\n"<<endl;
            cout<<"Following are the flights \n"<<endl;
            cout<<"1.CA - 198 :"<<endl;
            cout<<"\n\t   Date -> 06-08-2023  Time ->  8:00AM  Duration -> 10hrs Cost -> Rs.34000\n"<<endl;
            cout<<"2.CA - 158 :"<<endl;
            cout<<"\n\t   Date -> 07-08-2023  Time ->  9:00AM  Duration -> 13hrs Cost -> Rs.25000\n"<<endl;
            cout<<"3.CA - 298 :"<<endl;
            cout<<"\n\t   Date -> 09-08-2023  Time -> 11:00AM  Duration -> 17hrs Cost -> Rs.23000\n"<<endl;
            cout<<"\nSelect the flight you want to book :";
            cin>>choice1;
            if(choice1==1)
            {
                charges=34000;
                cout<<"\nYou have successfully  booked the flight CA - 198\n"<<endl;
                cout<<"You can go back to menu and take the ticket\n"<<endl;
            }
            else if(choice1==2)
            {
                charges=25000;
                cout<<"\nYou have successfully  booked the flight CA - 158\n"<<endl;
                cout<<"You can go back to menu and take the ticket\n"<<endl;
            }
            else if(choice1==3)
            {
                charges=23000;
                cout<<"\nYou have successfully  booked the flight CA - 298\n"<<endl;
                cout<<"You can go back to menu and take the ticket\n"<<endl;
            }
            else
            {
                cout<<"\nInvalid input , Shifting to the previous menu\n"<<endl;
                flights();
            }
            mainMenu();
        }

        case 3:
        {
            cout<<"\n\t\t\t\t__________________Welcome to UK Airways________________\n"<<endl;
            cout<<"Your comfort is our priority.Enjoy the journey!\n"<<endl;
            cout<<"Following are the flights \n"<<endl;
            cout<<"1.UK - 398 :"<<endl;
            cout<<"\n\t   Date -> 06-08-2023  Time -> 7:00AM  Duration -> 08hrs Cost -> Rs.33000\n"<<endl;
            cout<<"2.UK - 358 :"<<endl;
            cout<<"\n\t   Date -> 08-08-2023  Time -> 6:00AM  Duration -> 12hrs Cost -> Rs.27000\n"<<endl;
            cout<<"3.UK - 368 :"<<endl;
            cout<<"\n\t   Date -> 10-08-2023  Time -> 9:00AM  Duration -> 14hrs Cost -> Rs.23000\n"<<endl;

            cout<<"\nSelect the flight you want to book :";
            cin>>choice1;
            if(choice1==1)
            {
                charges=33000;
                cout<<"\nYou have successfully  booked the flight UK - 398\n"<<endl;
                cout<<"\nYou can go back to menu and take the ticket\n"<<endl;
            }
            else if(choice1==2)
            {
                charges=27000;
                cout<<"\nYou have successfully  booked the flight UK - 358\n"<<endl;
                cout<<"\nYou can go back to menu and take the ticket\n"<<endl;
            }
            else if(choice1==3)
            {
                charges=23000;
                cout<<"\nYou have successfully  booked the flight UK - 368\n"<<endl;
                cout<<"\nYou can go back to menu and take the ticket\n"<<endl;
            }
            else
            {
                cout<<"\nInvalid input , Shifting to the previous menu\n"<<endl;
                flights();
            }
            mainMenu();
        }

        case 4:
        {
            cout<<"\n\t\t\t\t___________Welcome to Us Airlines__________\n"<<endl;
            cout<<"Your comfort is our priority.Enjoy the journey!\n"<<endl;
            cout<<"Following are the flights \n"<<endl;
            cout<<"1.US - 598 :"<<endl;
            cout<<"\n\t   Date -> 06-08-2023  Time -> 8:00AM  Duration -> 10hrs Cost -> Rs.17000\n"<<endl;
            cout<<"2.US - 558 :"<<endl;
            cout<<"\n\t   Date -> 09-08-2023  Time -> 9:00AM  Duration -> 13hrs Cost -> Rs.28000\n"<<endl;
            cout<<"3.US - 568 :"<<endl;
            cout<<"\n\t   Date -> 12-08-2023  Time -> 7:00AM  Duration -> 16hrs Cost -> Rs.22000\n"<<endl;

            cout<<"\nSelect the flight you want to book :";
            cin>>choice1;
            if(choice1==1)
            {
                charges=17000;
                cout<<"\nYou have successfully  booked the flight US - 598\n"<<endl;
                cout<<"You can go back to menu and take the ticket\n"<<endl;
            }
            else if(choice1==2)
            {
                charges=28000;
                cout<<"\nYou have successfully  booked the flight US - 558\n"<<endl;
                cout<<"You can go back to menu and take the ticket\n"<<endl;
            }
            else if(choice1==3)
            {
                charges=22000;
                cout<<"\nYou have successfully  booked the flight US - 568\n"<<endl;
                cout<<"You can go back to menu and take the ticket\n"<<endl;
            }
            else
            {
                cout<<"\nInvalid input , Shifting to the previous menu\n"<<endl;
                flights();
            }
            mainMenu();
        }

        default:
        {
            cout<<"\nInvalid input,Shifting you to the main menu"<<endl;
            mainMenu();
            break;
        }
        }
    }
};

float registration::charges;
int registration::choice;

class ticket//class-04
{
public:
    //Member function
    void dispBill()
    {
        Details obj3;
        ifstream ifs("records.txt");//open a file named records.txt and adding the customers information
        {
            if(!ifs)
            {
                cout<<"File error!"<<endl;//check if the file exist or not
            }
            while(!ifs.eof())
            {
                ifs.getline(obj3.arr,100);
                cout<<obj3.arr<<endl;
            }
        }
        ifs.close();//file close
    }
};

void Bill(Details obj2,registration obj4)
{

    string destination="";
    ofstream outf("records.txt",ios::app);//write the customers information on the records.txt file
    {
        outf<<"\n\t\t\t\t___________________XYZ Airlines__________________"<<endl;
        outf<<"\n\t\t\t\t______________________Ticket_____________________"<<endl;
        outf<<"\n\t\t\t\t_________________________________________________"<<endl;

        outf<<"\n\t\t\t\t Customer ID    :"<<obj2.cId<<endl;
        outf<<"\n\t\t\t\t Customer Name  :"<<obj2.name<<endl;
        outf<<"\n\t\t\t\t Customer Gender:"<<obj2.gender<<endl;
        outf<<"\n\t\t\t\t Customer Phone :0"<<obj2.phoneNo<<endl;
        outf<<"\n\t\t\t\t________________Description________________"<<endl<<endl;
        if(obj4.choice==1)
        {
            destination="Dubai";
        }
        else if(obj4.choice==2)
        {
            destination="Canada";
        }
        else if(obj4.choice==3)
        {
            destination="UK";
        }
        else if(obj4.choice==4)
        {
            destination="USA";
        }
        outf<<"\t\t\t\t\tDestination : "<<destination<<endl;
        outf<<"\n\t\t\t\t\tFlight cost : Rs."<<obj4.charges<<endl<<endl<<endl;
        outf<<"\t\t\t\t_____________________________________________________"<<endl;
    }
    outf.close();//close file
}

void mainMenu()
{
    int lchoice;
    cout<<"\t\t\t\t\t           XYZ Airlines \n"<<endl;
    cout<<"\t\t\t\t\t____________Main Menu___________"<<endl;
    cout<<"\t\t\t\t_________________________________________________"<< endl;
    cout<<"\t\t\t\t\t\t\t"<<endl;
    cout<<"\t\t\t\t|\t Press 1 to add the Customer Details  \t|"<<endl;
    cout<<"\t\t\t\t|\t Press 2 for Flight Registration      \t|"<<endl;
    cout<<"\t\t\t\t|\t Press 3 for Ticket and Charges       \t|"<<endl;
    cout<<"\t\t\t\t|\t Press 4 to Exit                      \t|"<<endl;
    cout<<"\t\t\t\t_________________________________________________"<<endl;
    cout<<"Enter the choice : ";
    cin>>lchoice;

    Details d;
    registration r;
    ticket t;
    switch(lchoice)
    {
    case 1:
    {
        cout<<"\n\t\t\t\t___________Adding the Customer details___________\n"<<endl;
        information(d);
        mainMenu();
        break;
    }

    case 2:
    {
        cout<<"\n\t\t\t\t_________Book a flight using this system_________\n"<<endl;
        r.flights();
        break;
    }

    case 3:
    {
        cout<<"\t\t\t\t_________________GET YOUR TICKET_________________\n"<<endl;
        Bill(d,r);
        cout<<"Your ticket is printed,you can collect it \n"<<endl;
        t.dispBill();
        mainMenu();
        break;
    }

    case 4:
    {
        cout<<"\n\t\t\t\t\t________Thank you________"<<endl;
        exit(1);
    }

    default :
    {
        cout<<"\nInvalid input.Please try again!\n"<<endl;
        mainMenu();
        break;
    }
    }
}

int main()
{
    Management obj;//calling default constructor

    Details obj1,obj2;

    information(obj1);

    registration obj4;

    Bill(obj2,obj4);
    return 0;
}

