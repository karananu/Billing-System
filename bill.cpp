#include<iostream>
using namespace std;

int main(){
    int TotalBill(void);
    int totalBill=TotalBill();
    cout<<"Your total bill is"<<totalBill<<endl;
    cout<<"Thank you for your order"<<endl;
    
}
int TotalBill(){
    char s;
    char items;
    char vegItem;
    char nonvegItem;
    int billamount=0;
    char selectagain;

    cout<<"-------------------Welcome to Billing System for Restaurant"<<endl;
    cout<<"Please follow belwo instruction"<<endl;

    cout<<"Step1 : Please press s to start your order"<<endl;
    cout<<" Step 2: You can order both veg and non-veg Item"<<endl;
    cout<<"Step 3: Please press  v for veg item "<<endl;
    cout<<"Step 4: Please press n for nonveg item"<<endl;
    cout<<"Step 5 : You will get final bill after your order"<<endl;
    start:
    cin>>s;

    if(s=='c' || s=='C'){
    items:
        cout<<"Please select your choice"<<endl;
        cout<<"A. Veg Item \n B.Non-Veg item "<<endl;
        cin>>items;
        
        if(items=='a' || items=='A'){
            vegItemList:
            cout<<"Please select 1,2,3,4,5 as per your choice"<<endl;
            cout<<"1.Paneer:Price:RS- 250"<<endl;
            cout<<"2.Burger:Price:RS- 50"<<endl;
            cout<<"3.Pizza:Price:RS-100"<<endl;
            cout<<"4.Chowmein:Price:RS- 150"<<endl;
            cout<<"5.Veg Roll:Price:RS- 100"<<endl;
           
            cin>>vegItem;
            if(vegItem=='1'){
                 billamount=billamount+250;
            }
            else if(vegItem=='2'){
                billamount=billamount+50;
            }
            else if(vegItem=='3'){
                billamount=billamount+100;

            }
            else if(vegItem=='4'){
                billamount=billamount+150;

            }
            else if(vegItem=='5'){
                billamount=billamount+100;
            }
            else{
                cout<<"you have choosen a wrong value"<<endl;
               goto vegItemList;
            }
            cout<<"Do you want to add more items y or no"<<endl;
            cin>>selectagain;
            if(selectagain=='y'){
                goto items;
                
            }
            else{
                return billamount;
            }

        }else if(items=='b' || items=='B'){
          nonvegItemList:
         
         cout<<"Please select 1,2,3,4,5 as per your choice"<<endl;
            cout<<"1.Chicken:Price:RS- 350"<<endl;
            cout<<"2.Mutton:Price:RS- 150"<<endl;
            cout<<"3.Roll:Price:RS-80"<<endl;
            cout<<"4.Swarma Roll:Price:RS- 160"<<endl;
            cout<<"5.Chicken Lollypop:Price:RS- 170"<<endl;
           
            cin>>nonvegItem;
            if(nonvegItem=='1'){
                 billamount=billamount+350;
            }
            else if(nonvegItem=='2'){
                billamount=billamount+150;
            }
            else if(nonvegItem=='3'){
                billamount=billamount+80;

            }
            else if(nonvegItem=='4'){
                billamount=billamount+160;

            }
            else if(nonvegItem=='5'){
                billamount=billamount+170;
            }
            else{
                cout<<"you have choosen a wrong value"<<endl;
                goto nonvegItemList;
               
            }
            cout<<"Do you want to add more items y or no"<<endl;
            cin>>selectagain;
            if(selectagain=='y'){
                goto items;
            }
            else{
                return billamount;
            }

        }   
        else{
            cout<<"You have entered wrong value  please try again"<<endl;
            goto items;
          
        }
    }
    else{
        cout<<"You have enter wrong value, please press si"<<endl;
        goto start;
       
    }
    return billamount;

    }
    