#include<iostream>
int main()
{
    using namespace std;
    cout<<"MENU"<<endl<<endl<<"1: Deep Fried Wonton    Rs.295/-"<<endl<<"2: Prawn Crackers       Rs.195/-"<<endl<<"3: Shrimp Balls         Rs.395/-"<<endl<<"4: Asparagus Salad      Rs.350/-"<<endl<<"5: Lobster Salad        Rs.950/-"<<endl;
    cout<<"6: Shrimp Spring Rolls  Rs.295/-"<<endl<<"7: Prawn Salad          Rs.495/-"<<endl<<"8: Kim Chi              Rs.350/-"<<endl<<"9: Spring Rolls         Rs.250/-"<<endl<<"10: EXIT"<<endl;
    int n=0;
    int d,sum=0;
    while(n!=10)
    {
        cout<<"PLEASE PLACE YOUR ORDER BY SELECTING A NUMBER"<<endl;
       cin>>n;
       switch(n)
        {
         case 1:
                 cout<<"TYPE NUMBER OF PIECES YOU WANT"<<endl;
                 cin>>d;
                 d=d*295;
                 break;
         case 2:
                 cout<<"TYPE NUMBER OF PIECES YOU WANT"<<endl;
                 cin>>d;
                 d=d*195;
                 break;
         case 3:
                 cout<<"TYPE NUMBER OF PIECES YOU WANT"<<endl;
                 cin>>d;
                 d=d*395;
                 break;
         case 4:
                 cout<<"TYPE NUMBER OF PIECES YOU WANT"<<endl;
                 cin>>d;
                 d=d*350;
                 break;
         case 5:
                 cout<<"TYPE NUMBER OF PIECES YOU WANT"<<endl;
                 cin>>d;
                 d=d*950;
                 break;
         case 6:
                 cout<<"TYPE NUMBER OF PIECES YOU WANT"<<endl;
                 cin>>d;
                 d=d*295;
                 break;
         case 7:
                 cout<<"TYPE NUMBER OF PIECES YOU WANT"<<endl;
                 cin>>d;
                 d=d*495;
                 break;
         case 8:
                 cout<<"TYPE NUMBER OF PIECES YOU WANT"<<endl;
                 cin>>d;
                 d=d*350;
                 break;
         case 9:
                 cout<<"TYPE NUMBER OF PIECES YOU WANT"<<endl;
                 cin>>d;
                 d=d*250;
                 break;
         case 10:
                 break;
       }
       if(n!=10)
        sum=sum+d;
    }
    cout<<"your bill is "<<sum<<"Rs.";
    return 0;
    }

