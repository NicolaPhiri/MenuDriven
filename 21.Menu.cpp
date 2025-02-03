#include <iostream>
using namespace std;
void showMenu()
{
    cout<<"***CALCULATOR***"<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Division"<<endl;
    cout<<"4.Multiplication"<<endl;
    cout<<"5.Exit"<<endl;
    cout<<"*********************"<<endl;
}
int main()
{
    int option;
    double number1, number2;
    double sum, difference, product, quotient;
    do{
        showMenu();
        cout<<"Please pick an option:";
        cin>>option;
        system("cls");
        switch(option)
        {
        case 1: cout<<"Enter number 1:"<<"\n";
            cin>>number1;
            cout<<"Enter number 2:";
            cin>>number2;
            sum=number1+number2;
            cout<<"The sum is"<<" " <<sum<<"\n";
            break;

        case 2: cout<<"Enter number 1:"<<"\n";
            cin>>number1;
            cout<<"Enter number 2:";
            cin>>number2;
            difference=number1-number2;
            cout<<"The difference is"<<" "<<difference<<"\n";
            break;

        case 3: cout<<"Enter number 1:"<<"\n";
            cin>>number1;
            cout<<"Enter number 2:"<<"\n";
            cin>>number2;
            quotient=number1/number2;
            cout<<"The quotient is"<<" "<<quotient<<"\n";
            break;

        case 4: cout<<"Enter number 1:"<<"\n";
            cin>>number1;
            cout<<"Enter number 2:"<<"\n";
            cin>>number2;
            product=number1*number2;
            cout<<"The product is"<<" "<<product<<"\n";
            break;
        case 5:
            cout<<"You have now exited the program.";
            break;
        }
    }while(option!=5);
    return 0;
}