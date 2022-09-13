#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char first_name[10];
    char last_name[10];
    int age,night;
    char room,size,k,q,t,T,Q,K,B,b,C,c,X,x,G,g;
    float cost;
    cout<<fixed<<setprecision(2);
    cout<<"Enter your first name: ";
    cin>>first_name;
    cout<<"\nEnter your last name: ";
    cin>>last_name;
    cout<<"\nEnter your age: ";
    cin>>age;
    if(age<18)
    {
        cout<<"\nSorry your underage to book reservation!";
    }
    else
    {
        cout<<"what size of bed you prefer? (k=king,q=queen, t=twin): ";
        cin>>size;
        if(size=='k' || size=='K')
        {
            cout<<"Great choice for choosing king size bed!";
        }
        else if(size=='q' || size=='Q')
        {
            cout<<"Great choice for choosing queen size bed!";
        }
        else if(size=='t' || size=='T')
        {
            cout<<"Great choice for choose twin bed!";
        }
        cout<<"\nHow many nights is the reservation for? ";
        cin>>night;
        cout<<"Last question- what room type do you prefer? \nwe have \n B - Beach \n C - city view \n X - Balcony view \n G - Garden view \nSo whats your preferance?";
        cin>>room;
        if(room=='B' || room=='b')
        {
            if(size=='k' || size=='K')
            {
                cost=(100*night)+25*night+10*night;
                cout<<first_name<<",Your reservation for king sized bed with Beach view for "<<night<<" night is booked with cost after tax "<<cost+(cost*0.05);
            }
            else
            {
                cost=(100*night)+25*night;
                cout<<first_name<<",your reservation with beach view for ";
                if(size=='q' || size=='Q')
                {
                    cout<<"queen size bed for "<<night<<" night is booked with cost after tax "<<cost+(cost*0.05);
                }
                if(size=='t' || size=='T')
                {
                   cout<<"Twin size bed for "<<night<<" night is booked with cost after tax "<<cost+(cost*0.05); 
                }
            }
        }
        else
        {
           if(size=='k' || size=='K')
            {
                cost=(100*night)+10*night;
                cout<<first_name<<",Your reservation for king sized bed with ";
                if(room=='c' || room=='C')
                {
                    cout<<"city view for "<<night<<" night is booked with cost after tax "<<cost+(cost*0.05);
                }
                else if(room=='x' || room=='X')
                {
                   cout<<"Balcony view for "<<night<<" night is booked with cost after tax "<<cost+(cost*0.050); 
                }
                else if(room=='g' || room=='G')
                {
                    cout<<"garden view for "<<night<<" night is booked with cost after tax "<<cost+(cost*0.050);
                }
            }
            else
            {
                cost=(100*night);
                cout<<first_name<<",Your reservation for ";
               if(size=='q' || size=='Q')
                {
                    cout<<"queen size bed ";
                      if(room=='c' || room=='C')
                   {
                      cout<<"with city view for "<<night<<" night is booked with cost after tax "<<cost+(cost*0.050);
                   }
                      else if(room=='x' || room=='X')
                   {
                      cout<<" with Balcony view for "<<night<<" night is booked with cost after tax "<<cost+(cost*0.05); 
                   }
                      else if(room=='g' || room=='G')
                   {
                      cout<<"with garden view for "<<night<<" night is booked with cost after tax "<<cost+(cost*0.05);
                   } 
                }
                if(size=='t' || size=='T')
                {
                   cout<<"Twin size bed ";
                 if(room=='c' || room=='C')
                   {
                      cout<<"with city view for "<<night<<" night is booked with cost after tax "<<cost+(cost*0.05);
                   }
                      else if(room=='x' || room=='X')
                   {
                      cout<<" with Balcony view for "<<night<<" night is booked with cost after tax "<<cost+(cost*0.05); 
                   }
                      else if(room=='g' || room=='G')
                   {
                      cout<<"with garden view for "<<night<<" night is booked with cost after tax "<<cost+(cost*0.05);
                   } 
                } 
            } 
        }

    }
    return 0;
}