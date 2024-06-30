

#include <iostream>
using namespace std;

int main()
{
    int specialization, statis, user_choice, number_of_patient = 0, i = 1, u = 0, r = 0,m=1;
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
            else if (statis == 0) {
                for (int i = 1;i <= 20;i++) {
                    if (specialization == i) {
                        r++;
                        a_name_statis[i][r] = name + "   regular";
                        r_name[r] = name;
                    }

                }

            }
            else if (statis == 1) {
                for (int i = 1;i <= 20;i++) {
                    if (specialization == i) {

                        u++;
                        b_name_statis[i][u] = name + "   urgent";
                        u_name[u] = name;

                    }
                }
            }

            number_of_patient = u + r;

        

    }

        else if (user_choice == 2) {
            cout << "There are " << number_of_patient << " patients in specialization " << specialization << "\n";
            for (int i = 1;i <= u;i++) {

                cout << b_name_statis[specialization][i] << "\n";
            }
            for (int i = 1;i <= r;i++) {
                
                cout << a_name_statis[specialization][i] << "\n";

            }
        }

        else if (user_choice == 3) {




            if (i <= u) {
                cout << u_name[i] << ",please go with the Dr\n";

                i++;
            }

            else if (m <= r) {
                cout << r_name[m] << ",please go with the Dr\n";
                m++;

            }
            else {
                cout << "No patient at the moment,Have rest Dr \n";
                break;

            }
        }


        else
            break;
    }
}








