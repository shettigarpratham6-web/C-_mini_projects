#include<iostream>
#include<string>
using namespace std;
int main()
{
    int num;
    cout<<"======== UNIT ========"<<endl;
    cout<<"1. Length Conversion........"<<endl;
    cout<<"2. Weight Conversion........"<<endl;
    cout<<"3. Temperature Conversion........"<<endl;
    cout<<"4. Currency Conversion........"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"======================="<<endl;

    cout<<"Enter your choice: ";
    cin>>num;
    
    switch(num)
    {
        case 1:
             cout<<"\n1. Length Conversion is Selected";
            
            break;
        case 2:
            cout<<"\n2. Weight Conversion is Selected";  
            
            break;
        case 3:
            cout<<"\n3. Temperature Conversion is Selected"; 
            
            break;
        case 4:
           cout<<"\n4. Currency Conversion is Selected";
           
            break;
        case 5:
           cout << "\nThank you for using Unit Converter!\n";
            
            break;
        default:
            cout<<"Invalid choice!"<<endl;
    }
    return 0;
}