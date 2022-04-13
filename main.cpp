//
//  main.cpp
//  bank project data
//
//  Created by Pratham Bhatia on 08/04/22.
//

#include <iostream>
using namespace std;
class govs
{
    int choice;
    char name[30];
    long mob;
    float amount;
public:
    void govin()
    {
        cout<<"Welcome ! to the forum for the government organizations\nPlease select your desired choice for the bank to register yourself";
        cout<<"\nPress 1 for SBI\nPress 2 for PNB\nPress 3 for Canara bank";
        cout<<"\n==> ";
        cin>>choice;
    }
    void operationsgovs()
    {
        int press;
        char op;char op2;
        if (choice==1)
        {
            cout<<"Thank you for chosing SBI \nPress 1 to register your account";cout<<"==> ";cin>>press;
            if (press==1)
            {
                cout<<"Please select your account type\nPress S for savings account\nPress C for current account: ";cin>>op;
                if (op=='S')
                {
                    cout<<"You have registred yourself for Savings account in SBI\nPlease follow these steps to get yourself registered";
                    cout<<"\nEnter your name";cin>>name;cout<<"\nEnter your mobile number: ";cin>>mob;
                    cout<<"\nPress E for depositing the money in your Savings account: ";cin>>op2;
                    if (op2=='E')
                    {
                        cout<<"You atlease have to deposit Rs.1000 in your savings account to avoid any additional charges";cin>>amount;
                        if (amount==1000)
                        {
                            cout<<"Congratulations ! you have succesfully registered yourself into savings account";
                        }
                    }
                }
                else if (op=='C')
                {
                    cout<<"You have registred yourself for Current account in SBI\nPlease follow these steps to get yourself registered";
                    cout<<"\nEnter your name";cin>>name;cout<<"\nEnter your mobile number: ";cin>>mob;
                    cout<<"\nPress D for depositing the money in your Savings account: ";cin>>op2;
                    if (op2=='D')
                    {
                        cout<<"You atlease have to deposit Rs.1000 in your savings account to avoid any additional charges";cin>>amount;
                        if (amount==1000)
                        {
                            cout<<"Congratulations ! you have succesfully registered yourself into savings account";
                        }
                    }
                }
                
            }
        }
        else if (choice==2)
        {
            cout<<"Thank you for chosing PNB\nPress 1 to register your account";cin>>press;
            if (press==1)
            {
                cout<<"Please select your account type\nPress S for savings account\nPress C for current account: ";cin>>op;
                if (op=='S')
                {
                    cout<<"You have registred yourself for Savings account in SBI\nPlease follow these steps to get yourself registered";
                    cout<<"\nEnter your name";cin>>name;cout<<"\nEnter your mobile number: ";cin>>mob;
                    cout<<"\nPress E for depositing the money in your Savings account: ";cin>>op2;
                    if (op2=='E')
                    {
                        cout<<"You atlease have to deposit Rs.1000 in your savings account to avoid any additional charges";cin>>amount;
                        if (amount==1000)
                        {
                            cout<<"Congratulations ! you have succesfully registered yourself into savings account";
                        }
                    }
                }
                else if (op=='C')
                {
                    cout<<"You have registred yourself for Current account in SBI\nPlease follow these steps to get yourself registered";
                    cout<<"\nEnter your name";cin>>name;cout<<"\nEnter your mobile number: ";cin>>mob;
                    cout<<"\nPress D for depositing the money in your Savings account: ";cin>>op2;
                    if (op2=='D')
                    {
                        cout<<"You atlease have to deposit Rs.1000 in your savings account to avoid any additional charges";cin>>amount;
                        if (amount==1000)
                        {
                            cout<<"Congratulations ! you have succesfully registered yourself into savings account";
                        }
                    }
                }
            }
        }
       else if (choice==3)
       {
           cout<<"Thank you for chosing Canara Bank\nPress 1 to register your account";cin>>press;
           if (press==1)
           {
               cout<<"Please select your account type\nPress S for savings account\nPress C for current account: ";cin>>op;
               if (op=='S')
               {
                   cout<<"You have registred yourself for Savings account in Canara\nPlease follow these steps to get yourself registered";
                   cout<<"\nEnter your name";cin>>name;cout<<"\nEnter your mobile number: ";cin>>mob;
                   cout<<"\nPress E for depositing the money in your Savings account: ";cin>>op2;
                   if (op2=='E')
                   {
                       cout<<"You atlease have to deposit Rs.1000 in your savings account to avoid any additional charges";cin>>amount;
                       if (amount==1000)
                       {
                           cout<<"Congratulations ! you have succesfully registered yourself into savings account";
                       }
                   }
               }
               else if (op=='C')
               {
                   cout<<"You have registred yourself for Current account in Canara Bank\nPlease follow these steps to get yourself registered";
                   cout<<"\nEnter your name";cin>>name;cout<<"\nEnter your mobile number: ";cin>>mob;
                   cout<<"\nPress D for depositing the money in your Savings account: ";cin>>op2;
                   if (op2=='D')
                   {
                       cout<<"You atlease have to deposit Rs.1000 in your savings account to avoid any additional charges";cin>>amount;
                       if (amount==1000)
                       {
                           cout<<"Congratulations ! you have succesfully registered yourself into savings account";
                       }
                   }
               }
           }
       }
    }
    void outputgovs()
    {
        cout<<"\nYour name is : "<<name;
        cout<<"\nYour mobile number is : "<<mob;
        cout<<"\nYour balance is : "<<amount;
    }
};
class privte :public govs
{
    int choice;
    char name[30];
    long mob;
    float amount;
public:
    void inputpub()
    {
        cout<<"Welcome ! to the forum for the Private organizations\nPlease select your desired choice for the bank to register yourself";
        cout<<"\nPress 1 for HDFC Bank\nPress 2 for AXIS bank\nPress 3 for ICICI bank";
        cout<<"\n==> ";
        cin>>choice;
    }
    void operationpub()
    {
        int press;
        char op;char op2;
        if (choice==1)
        {
            cout<<"Thank you for chosing HDFC\nPress 1 to register your account";cout<<"==> ";cin>>press;
            if (press==1)
            {
                cout<<"Please select your account type\nPress S for savings account\nPress C for current account: ";
                cout<<"\n==>";
                cin>>op;
                if (op=='S')
                {
                    cout<<"You have registred yourself for Savings account in HDFC bank\nPlease follow these steps to get yourself registered";
                    cout<<"\nEnter your name: ";cin>>name;cout<<"\nEnter your mobile number: ";cin>>mob;
                    cout<<"\nPress E for depositing the money in your Savings account: ";
                    cout<<"\n==>";
                    cin>>op2;
                    if (op2=='E')
                    {
                        cout<<"You atlease have to deposit Rs.1000 in your savings account to avoid any additional charges";cin>>amount;
                        if (amount==1000)
                        {
                            cout<<"***Congratulations ! you have succesfully registered yourself into savings account***";
                        }
                    }
                }
                else if (op=='C')
                {
                    cout<<"You have registred yourself for Current account in HDCF bank\nPlease follow these steps to get yourself registered";
                    cout<<"\nEnter your name: ";cin>>name;cout<<"\nEnter your mobile number: ";cin>>mob;
                    cout<<"\nPress D for depositing the money in your Savings account: ";
                    cout<<"\n==>";
                    cin>>op2;
                    if (op2=='D')
                    {
                        cout<<"You atlease have to deposit Rs.1000 in your savings account to avoid any additional charges";cin>>amount;
                        if (amount==1000)
                        {
                            cout<<"***Congratulations ! you have succesfully registered yourself into savings account***";
                        }
                    }
                }
                
            }
        }
        else if (choice==2)
        {
            cout<<"Thank you for chosing AXIS bank\nPress 1 to register your account";
            cout<<"\n==>";
            cin>>press;
            if (press==1)
            {
                cout<<"Please select your account type\nPress S for savings account\nPress C for current account: ";cin>>op;
                if (op=='S')
                {
                    cout<<"You have registred yourself for Savings account in AXIS bank\nPlease follow these steps to get yourself registered";
                    cout<<"\nEnter your name: ";cin>>name;cout<<"\nEnter your mobile number: ";cin>>mob;
                    cout<<"\nPress E for depositing the money in your Savings account: ";
                    cout<<"\n==>";
                    cin>>op2;
                    if (op2=='E')
                    {
                        cout<<"You atlease have to deposit Rs.1000 in your savings account to avoid any additional charges";cin>>amount;
                        if (amount==1000)
                        {
                            cout<<"***Congratulations ! you have succesfully registered yourself into savings account***";
                        }
                    }
                }
                else if (op=='C')
                {
                    cout<<"You have registred yourself for Current account in AXIS bank\nPlease follow these steps to get yourself registered";
                    cout<<"\nEnter your name: ";cin>>name;cout<<"\nEnter your mobile number: ";cin>>mob;
                    cout<<"\nPress D for depositing the money in your Savings account: ";
                    cout<<"\n==>";
                    cin>>op2;
                    if (op2=='D')
                    {
                        cout<<"You atlease have to deposit Rs.1000 in your savings account to avoid any additional charges";cin>>amount;
                        if (amount==1000)
                        {
                            cout<<"***Congratulations ! you have succesfully registered yourself into savings account***";
                        }
                    }
                }
            }
        }
       else if (choice==3)
       {
           cout<<"Thank you for chosing ICICI Bank\nPress 1 to register your account";
           cout<<"\n==>";
           cin>>press;
           if (press==1)
           {
               cout<<"Please select your account type\nPress S for savings account\nPress C for current account: ";cin>>op;
               if (op=='S')
               {
                   cout<<"You have registred yourself for Savings account in ICICI Bank\nPlease follow these steps to get yourself registered";
                   cout<<"\nEnter your name: ";cin>>name;cout<<"\nEnter your mobile number: ";cin>>mob;
                   cout<<"\nPress E for depositing the money in your Savings account: ";
                   cout<<"\n==>";
                   cin>>op2;
                   if (op2=='E')
                   {
                       cout<<"You atlease have to deposit Rs.1000 in your savings account to avoid any additional charges";cin>>amount;
                       if (amount==1000)
                       {
                           cout<<"***Congratulations ! you have succesfully registered yourself into savings account***";
                       }
                   }
               }
               else if (op=='C')
               {
                   cout<<"You have registred yourself for Current account in ICICI Bank\nPlease follow these steps to get yourself registered";
                   cout<<"\nEnter your name: ";cin>>name;cout<<"\nEnter your mobile number: ";cin>>mob;
                   cout<<"\nPress D for depositing the money in your Savings account: ";
                   cout<<"\n==>";
                   cin>>op2;
                   if (op2=='D')
                   {
                       cout<<"You atlease have to deposit Rs.1000 in your savings account to avoid any additional charges";cin>>amount;
                       if (amount==1000)
                       {
                           cout<<"***Congratulations ! you have succesfully registered yourself into savings account***";
                       }
                   }
               }
           }
       }
    }
    void outputpriv()
    {
        cout<<"\nYour name is : "<<name;
        
        cout<<"\nYour mobile number is : "<<mob;
        cout<<"\nYour balance is : "<<amount;
    }
};
int main()
{
    int choice;
    cout<<"*******\t\t\tWELCOME!\t\t\t*******";
    cout<<"\nPlease select your desired organisation for registering yuour account";
    cout<<"\nPress 1 for registering your account in government organisation";
    cout<<"\nPress 2 for registering your account in Private organisation";
    cout<<"\nPress 3 for generating any query and request";
    cout<<"\n==> ";
    cin>>choice;
    switch (choice)
    {
        case 1:
            cout<<"THANK YOU FOR CHOSING GOVERNMENT ORTGANISATION";
            govs g;       //function is called
            g.govin();
            g.operationsgovs();
            g.outputgovs();
            break;
            
        case 2:
            cout<<"THANK YOU FOR CHOSING PRIVATE ORGANISATION";
            privte p;    // function is called
            p.inputpub();
            p.operationpub();
            p.outputpriv();
            break;
            
        case 3:
            {
                cout<<"Reqeuest has been generated !\n";
            }
            break;
    }
}
