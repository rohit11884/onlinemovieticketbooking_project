#include<iostream>
using namespace std;
class ticket
{
    int a,b,age[100];
    int amt[100],sum=0,sum2;
    public:
    void intro()
    {
        cout<<"\n\t\t\t-------------------------------------";
        cout<<"\n\t\t\t MOVIE TICKET BOOKING SYSTEM";
        cout<<"\n\t\t\t-------------------------------------";
        cout<<"\n\t\t\t WELCOME CUSTOMERS";
        cout<<"\n\t\t\t-------------------------------------";
        cout<<"\n\t\t\t-------------------------------------";
    }
    void self()
    {
        cout<<"\n\n\t\t\t MOVIES NAMES ARE: ";
        cout<<"\n\t\t\t-------------------------------------";
        cout<<"\n\n\t\t\t 1.AVENGERS:INFINITY WAR";
        
        cout<<"\n\t\t\t-------------------------------------";
        cout<<"\n\n\t\t\t 2.AVATAR:WAY OF WATER";
        
        cout<<"\n\t\t\t-------------------------------------";
        cout<<"\n\n\t\t\t 3.JOHN WICK 4";
       
        cout<<"\n\t\t\t-------------------------------------";
        cout<<"\n\n\t\t\t 4.TENET";
        
        cout<<"\n\t\t\t-------------------------------------";
        cout<<"\n\t\t\t-------------------------------------";
        cout<<"\n\n\t\t\t ENTER YOUR CHOICE : ";
        cin>>a;
    for(int i=0;i<=0;i++)
    {
        switch(a)
        {
            case 1:
            cout<<"\n\n\t\t\t MOVIE NAME IS AVENGERS:INFINITY WAR ";
            cout<<"\n\n\t\t\t MOVIE TIMING IS 12:30 ";
            cout<<"\n\n\t\t\t PG-13";
            cout<<"\n\n\t\t\t DURATION 128 MINUTES";
            break;
            case 2:
            cout<<"\n\n\t\t\t MOVIE NAME IS AVATAR:WAY OF WATER  ";
            cout<<"\n\n\t\t\t MOVIE TIMING IS 13:30 ";
            cout<<"\n\n\t\t\t PG-13";
            cout<<"\n\n\t\t\t DURATION 134 MINUTES";
            break;
            case 3:
            cout<<"\n\n\t\t\t MOVIE NAME IS JOHN WICK 4  ";
            cout<<"\n\n\t\t\t MOVIE TIMING IS 14:30 ";
            cout<<"\n\n\t\t\t PG-13";
            cout<<"\n\n\t\t\t DURATION 165 MINUTES";
            break;
            case 4:
            cout<<"\n\n\t\t\t MOVIE NAME IS TENET  ";
            cout<<"\n\n\t\t\t MOVIE TIMING IS 16:30 ";
            cout<<"\n\n\t\t\t PG-13";
            cout<<"\n\n\t\t\t DURATION 110 MINUTES";
            break;
            default:
            cout<<"n\n\t\t\t INVALID(N/A)";
            break;
            
            
        }
        
    }
    }
    void payment()
    {
        cout<<"\n\n\t\t\t ========================================";
        cout<<"\n\n\t\t\t ENTER THE NUMBER OF MEMBERS: ";
        cin>>b;
        for(int i=1;i<=b;i++)
        {
            cout<<"ENTER THE AGE OF PERSON "<<i<<" :";
            cin>>age[i];
        }
        cout<<"\n==============================================\n";
        cout<<"RATE OF TICKET AS PER AGE GROUP";
        for(int i=1;i<=b;i++)
        {
            if(age[i]>=10 && age[i]<=17 )
            {
                cout<<"\n\n 10-17(AGE) win 10% DISCOUNT";
                amt[i]=180;
                cout<<"\nRATE OF TICKET FOR "<<age[i]<<" year will be rupees "<<amt[i];
            }
            else if(age[i]>=18 && age[i]<=100)
            {
                cout<<"\n\n ABOVE 18 PRICE IS FIXED";
                amt[i]=200;
                cout<<"\nRATE OF TICKET FOR "<<age[i]<<" year will be rupees "<<amt[i];

            }
            else
            {
                cout<<"BELOW AGE OF 10 ARE NOT ALLOWED";
                amt[i]=0;
        
            }
            sum+=amt[i];
        }
        cout<<"\n\n==========================================\n";
        cout<<"\n\n TOTAL PRICE OF MOVIE TICKETS ARE :"<<sum;



    }
    void details()
    {
        int m;
        char st[100];
        cout<<"\n\n\t\t\t ========================================";
        cout<<"\n\n\t\t\t ENTER YOUR PHONE NUMBER : ";
        cin>>m;
        cout<<"\n\n\t\t\t ENTER YOUR EMAIL ID : ";
        cin>>st;
        cout<<"\n\n\t\t\t ========================================";
        cout<<"\n\n\t\t\t YOUR E-TICKET HAS BEEN SENT TO YOUR EMAIL AND PHONE : ";
        cout<<"\n\n\t\t\t ========================================";
    }
    
    void exit()
    {
        char x;
        int y;
        cout<<"\n\n\t\t-----------------------------------------";
        cout<<"\n\n\t\t-----------------------------------------";
        cout<<"\n\n\t\t YOUR TICKET IS SUCCESFULLY BOOKED";
        cout<<"\n\n\t\t THANKS FOR VISITING";
        cout<<"\n\n\t\t-----------------------------------------";
        cout<<"\n\n\t\t-----------------------------------------\n";
        cout<<"\n\n\t\t WOULD YOU LIKE TO CANCEL YOUR TICKETS\n";
        cout<<"\n\n\t\t TYPE Y FOR YES AND N FOR NO: ";
        cin>>x;
        if(x=='N' || x=='n')
        {
        cout<<"\n\n\t\t------THANK YOU FOR VISITING------\n";
        }
        else
       {
        cout<<"\n\n\t\t YOUR TICKETS ARE CANCELLED\n";
        cout<<"\n\n\t\t------THANK YOU FOR VISITING------";
       }
       cout<<"\n\n\t\t SHAMEE K. SHARMA"<<endl;
       cout<<"\n\n\t\t ROHIT KUMAR"<<endl;

       cin>>y;
        
    }
    

};

int main()
{
    ticket t;
    t.intro();
    t.self();
    t.payment();
    t.details();
    t.exit();

}
