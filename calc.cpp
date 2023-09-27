#include <iostream>


using namespace std;


int main(){

    double answer{}, num1{}, num2{};
    string line_break (30,'=');
    char  sign{};
    char decision{};


    cout << line_break << endl;
    cout << "Welcome To My Calculator App\n";
    cout << line_break << endl << endl;
    
    repeat:
    cout << "Enter First Number: ";
    cin >> num1;

    cout << "Enter First Number: ";
    cin >> sign;

    cout << "Enter First Number: ";
    cin >> num2;

    switch(sign){
        case '+':
            answer = num1 + num2;

            cout << line_break << endl;
            cout << "Your answer is: " << answer << endl;
            cout << line_break << endl;

            retry:
            cout << "Would u like to perform another operation (Y/n)? ";
            
            if (decision == 'Y'){
                cout << endl << endl;
                goto repeat;
            }
                
            else if (decision == 'n'){
                cout << "Thank you !!!\n";
                break;
            }
            else{
                cout << "Incorrect input !!!\n\n";
                goto retry;
            }
            break;
        case '-':
            answer = num1 - num2;
            
            cout << line_break << endl;
            cout << "Your answer is: " << answer << endl;
            cout << line_break << endl;

            retry:
            cout << "Would u like to perform another operation (Y/n)? ";

            if (decision == 'Y'){
                cout << endl << endl;
                goto repeat;
            }
                
            else if (decision == 'n'){
                cout << "Thank you !!!\n";
                break;
            }
            else{
                cout << "Incorrect input !!!\n\n";
                goto retry;
            }
            break;

        case '*':
            answer = num1 * num2;

            cout << line_break << endl;
            cout << "Your answer is: " << answer << endl;
            cout << line_break << endl;

            retry:
            cout << "Would u like to perform another operation (Y/n)? ";

            if (decision == 'Y'){
                cout << endl << endl;
                goto repeat;
            }
                
            else if (decision == 'n'){
                cout << "Thank you !!!\n";
                break;
            }
            else{
                cout << "Incorrect input !!!\n\n";
                goto retry;
            }
            break;

        case '/':
            answer = num1 / num2;


            cout << line_break << endl;
            cout << "Your answer is: " << answer << endl;
            cout << line_break << endl;

            retry:
            cout << "Would u like to perform another operation (Y/n)? ";
            if (decision == 'Y'){
                cout << endl << endl;
                goto repeat;
            }
                
            else if (decision == 'n'){
                cout << "Thank you !!!\n";
                break;
            }
            else{
                cout << "Incorrect input !!!\n\n";
                goto retry;
            }
            break;

        default:
            cout << "Incorrect operation, please retry !!!\n\n";
            goto repeat;
            break;

    }

    



    return 0;
}