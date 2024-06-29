

#include <iostream>
using namespace std;

int main()
{
    int specialization, statis, user_choice, number_of_patient = 0,  i = 1,u=1,r=1;
    string name;

    string a_name_statis[21][6];
    string b_name_statis[21][6];
    string r_name[6];
    string u_name[6];
    cout << "Enter your choice : \n";
    cout << "1) Add new patient\n";
    cout << "2) Print all patients\n";
    cout << "3) Get next patient\n";
    cout << "4) Exist\n";
    while (true) {

        cin >> user_choice;
        if (user_choice == 1) {
            cout << "Enter specialization , name , statis\n";
            cin >> specialization >> name >> statis;
            if (number_of_patient == 5)
                cout << "Sorry,we can not add more patients for this specialization\n";

            for (int i = 1;i <= 20;i++) {
                if (specialization == i) {
                    number_of_patient++;

                    if (statis == 0) {
                        a_name_statis[i][number_of_patient] = name + "   regular";
                        r_name[number_of_patient] = name;
                    }
                    else {

                        b_name_statis[i][number_of_patient] = name + "   urgent";
                        u_name[number_of_patient] = name;


                    }
                }
            }
        }

        else if (user_choice == 2) {
            cout << "There are " << number_of_patient << " patients in specialization " << specialization << "\n";
            for (int i = 1;i <= number_of_patient;i++) {
                if (b_name_statis[specialization][i].empty())
                    continue;
                cout << b_name_statis[specialization][i] << "\n";
            }for (int i = 1;i <= number_of_patient;i++) {
                if (a_name_statis[specialization][i].empty())
                    continue;
                cout << a_name_statis[specialization][i] << "\n";
            }
        }

        else if (user_choice == 3) {
            if (number_of_patient == 0)
                cout << "No patient at the moment,Have rest Dr \n";

            else if (u < 6) {
                    if (!u_name[u].empty()) {
                        cout << u_name[u] << ",please go with the Dr\n";
                        u++;
                    }
                    else 
                        u++;
            }

            else if (r < 6) {
                    if (!r_name[r].empty()) {
                        cout << r_name[r] << ",please go with the Dr\n";
                        r++;
                    }
                    else 
                        r++;
            }
            else
                number_of_patient = 0;
        }
        else
            break;
    }
}

      

    




