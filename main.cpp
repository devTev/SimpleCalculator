#include <iostream>
#include "Operation.h"

using namespace std;

int main()
{
    cout << "Welcome to SimpleCalculator by frostythedev!" << endl;
    cout << "How many numbers will you be entering?" << endl;
    int numbers;
    cin >> numbers;

    int reals[numbers];

    char operation;

    if(numbers > 0){
        cout << "\nWhat operation would you be doing?" <<
        "\n(+) Addition" <<
        "\n(-) Subtraction" <<
        "\n(*) Multi" <<
        "\n(/) Division" << endl;

        cin >> operation;
        //cout << "The operation inputed is: " << operation << endl;

        if(operation == '+' || operation == '-' || operation == '/'
           || operation == '*'){

           int counter = 0;
            do{
                cout << "Please enter the " << (counter+1) << "s number:" << endl;
                cin >> reals[counter];

                counter++;
                // reals[counter] = cin;
            }while(counter < numbers);

            int result = reals[0];
            for(int i = 1; i < numbers; i++){
                if(operation == '+'){
                    result+= reals[i];

                }else if(operation == '-'){
                    result-= reals[i];

                }else if(operation == '*'){
                    result*= reals[i];

                }else if(operation == '/'){
                    result/= reals[i];
                }
            }

            cout << "The result is: " << result << endl;
        }else{
            cout << "You entered an invalid operation, please try again!";
        }
    }else{
     cout << "You must enter a positive integer to continue!" << endl;
    }
    return 0;
}
