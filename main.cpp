#include <iostream>
#include<cstdlib>
using namespace std;
string item,help,kya,payment;
int price,quantity,number=0,numberoftimes=0,total=0,amount=0,x=1,y=1,counter=0;

void HELP(){

 cout<<"    PRESS :- "<<endl<<"    'MENU'  F0R MENU "<<endl<<"    'ORDER'  F0R PLACEING THE ORDER "<<endl<<"    'HELP'  F0R HELP "<<endl;
}
void MENU(){

cout<<endl<<"   HERES IT IS SIR :- "<<endl;
cout<<"   -------------------------------- MENU------------------------------------"<<endl;
cout<<"   |______ITEM______|____PRICE_______||______ITEM _____|______PRICE________|"<<endl;
cout<<"   |      BURGER    =    Rs 75/-     || CHIKEN WINGS   =    Rs 100/-       |"<<endl;
cout<<"   |    MOMOS(10ps) =    Rs 75/-     ||     PIZZA      =    Rs 100/-       |"<<endl;
cout<<"   |       COKE     =    Rs 35/-     ||   ICE CREAM    =    Rs 60/-        |"<<endl;
cout<<"   |      CHOWMINS  =    Rs 35/-     ||     SHAKE      =    Rs 60/-        |"<<endl;
cout<<"   |  FRENCH FRIES  =    Rs 75/-     ||     SOUP       =    Rs 100/-       |"<<endl;
cout<<"   |      TACOS     =    Rs 75/-     ||     WRAP       =    Rs 100/-       |"<<endl;
cout<<"   |GULAB JAMUN(2ps)=    Rs 75/-     ||      TEA       =    Rs 35/-        |"<<endl;
cout<<"   |      SALAD     =    Rs 35/-     ||  RAJ KACHORI   =    Rs 1O0/-       |"<<endl;
cout<<"   |   GARLIC BREAD =    Rs 75/-     ||    COFFEE      =    Rs 35/-        |"<<endl;
cout<<"   -------------------------------------------------------------------------"<<endl;

}
void ordering(){
cout<<"MAY I KNOW YOUR ORDER SIR"<<endl;
string item;
//int price;
//int quantity;
//cin>>item;
//for(int x;item=="NO";x++)
    do{
        cin>>item;
if((item=="BURGER") || (item=="MOMMOS") || (item=="GULABJAMUN") || (item=="FRENCHFRIES") || (item=="GARLICBREAD") || (item=="TACOS")){price=75;kya="PLATES";}
if( (item=="SALAD") || (item=="CHOWMINS")){price=35;kya="PLATES";}
if((item=="CHICKENWINGS") || (item=="PIZZA") || (item=="WRAP") || (item=="RAJKACHORI")){price=100;kya="PLATES";}
if((item=="TEA") || (item=="COFFEE") || (item=="COKE") || (item=="SHAKE")){price=30;kya="GLASSES";}
if((item=="SOUP")){price=100;kya="BOWLS";}
//if((item=="SHAKE") || (item=="ICECREAM") || (item=="TACOS")){price=60;}
if(item=="ICECREAM"){price=60;kya="SCOPES";}

//}while(item=="NO");

if(item=="NO")
{
    cout<<"NO PROBLEM SIR"<<endl;{
    cout<<"ARE YOU SUITABLE BY CASH/CREDIT  ";
    cin>>payment;
if((payment=="CASH") || (payment=="CREDIT")){
    if(payment=="CASH"){cout<<"NICE,SIR THANK YOU  FOR CHOSSING OUR CASH SYSTEM"<<endl; payment="CASH";};
    if(payment=="CREDIT"){cout<<"NICE,SIR THANK YOU  FOR CHOSSING OUR CREDIT SYSTEM"<<endl; payment="CREDIT";};


    }else{
    cout<<" WE DON'T HAVE THIS SYSTEM,SO WE ARE SETTING IT CASH  " <<endl;
    payment="CASH";
    };
    break;

}
}

cout<<"   OK  SIR, "<<item<<" OF Rs "<<price<<"/-"<<endl;
cout<<"   HOW MANY "<<kya<<" OF "<<item<<" SIR ? -> ";
cin>>quantity;
cout<<endl<<"   OK SIR, HERE'S THE TOTAL OF "<<quantity<<" "<<kya<<" OF "<<item<<" - Rs. "<<quantity*price<<"/-"<<endl<<"   ANYTHING ELSE SIR ?"<<endl;
x++;
cout<<endl<<"x--->"<<x;
y+=x;

amount=quantity*price;

}while(item!="NO");
}
void bill(){

cout<<endl<<"   HERES YOUR BILL SIR - "<<endl;
item=item;
    cout<<"     -----------------------------BILL--------------------------------"<<endl;
    cout<<"     | SNO. |       ITEM       |   PRICE   |  QUANTITY |   AMOUNT     |"<<endl;
    cout<<"     |----------------------------------------------------------------|"<<endl;

 //for(number;number==numberoftimes;number++) {

 //do{

 for(x;x==counter;x++) {
    cout<<"    | "<<x<<"  |  "<<  "                       "  <<item<<"  |   "<<price<<"/-    |  "<<quantity<<"     |     "<<quantity*price<<"/-        |"<<endl;
    counter++;
 }
 /*
number++;
total+=amount;
 }while(number==numberoftimes);
*/
    cout<<"     |----------------------------------------------------------------|"<<endl;

    cout<<"     |                                                                |"<<endl;
    cout<<"     |          "<<payment<<"                 --     "<<total<<"            |"<<endl;
    cout<<"     |                                                                |"<<endl;
    cout<<"     |----------------------------------------------------------------|"<<endl;
    cout<<"     |                                                                |"<<endl;
    cout<<"     |               FOR FEEDBACK , HAVE A LOOK TO                    |"<<endl;
    cout<<"     |    EMAIL- memememememmem@gmail.com      PH NO. 12345678999     |"<<endl;
    cout<<"     |                                                                |"<<endl;
    cout<<"     |----------------------------------------------------------------|"<<endl;


}
int main()
{
    //HEY
    cout<<"                                                                       <8th cpp>"<<endl;
    cout<< "                            WELCOME TO FOOD TOWN!" << endl<<"   WHAT CAN I DO FOR YOU ?"<<endl;
    HELP();
//MENU();
string stop;
int x=1;
//while(stop!="PLACE"){

//ordering();
//x++;
//}
//odering::bill;bill();

while(help!="THANKS"){
cout<<endl<<"    ENTER YOUR COMMAND"<<endl<<"    ";
cin>>help;
if((help=="MENU")|| (help=="ORDER") ||  (help=="BILL")  ||  (help=="HELP") || (help=="THANKS") )

{


if(help=="MENU"){MENU();};
if(help=="ORDER"){ordering();};
if(help=="BILL"){bill();};
if(help=="HELP"){HELP();};
if(help=="THANKS"){cout<<"    THANK YOU SIR PLEASE VISIT AGAIN :) :)"<<endl<<endl<<"    ";break;};



}else{
cout<<"    INVALID ACTION,PLEASE TRY AGAIN "<<endl;
};

}//while(help!="THANKS");

system("PAUSE");

cout<<endl<<"                                              A CODE BY - Vansh"<<endl<<endl<<"    ";
system("PAUSE");
return(0);
}
