#include <iostream>
using namespace std;

int main()
{
    int choice;
    string feedback;


        cout << "---Customer Support Menu---" << endl;
        cout << "1: Billing" << endl;
        cout << "2: Technical Support" << endl;
        cout << "3: Account Information" << endl;
        cout << "4: Feedback" << endl;
        cout << "5: Exit" << endl;
        cout << endl;

        cout << "Please select an option (1-5): ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Connecting to Billing Department..." << endl;
            cout<<""<<endl;
            cout<<"Welcome to Billing"<<endl;
            break;
            case 2:
                cout << "Connecting to Technical Support..." << endl;
            cout<<""<<endl;
            cout<<"Welcome to Technical Support"<<endl;
            break;
            case 3:
                cout << "Connecting to Account Information..." << endl;
            cout<<""<<endl;
            cout<<"Welcome to Account Information"<<endl;
            break;
            case 4:
                cout<<"Give us your feedback:"<<endl;
            cin>>feedback;
                cout << "Thank you for your feedback!" << endl;
            break;
            case 5:
                cout << "Thank you for using our service. Goodbye!" << endl;
            return 0;
            default:
                cout << "Invalid option! Please select a valid option (1-5)." << endl;
        }

    return 0;
}
