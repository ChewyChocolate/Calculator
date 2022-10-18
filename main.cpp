#include <iostream>

using namespace std;

int main()
{
    double num1, num2, result, anotherNum;
    char operation;
    string nextOperation;

    for (;;){

        cout << "Enter a Problem: ";
        cin >> num1 >> operation >> num2;


    switch (operation){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;

        default:
            cout << "Error!";
    }


    cout << result<<"\n\n" ;

    for(;;) {

    cout << "do you want to continue?yes or no?: ";
    cin >> nextOperation;
if (nextOperation == "yes"){
    cout << "Enter Another Operation and Number: ";
    cin >>operation >> anotherNum;

        switch (operation){
            case '+':
                result = result + anotherNum;
                break;
            case '-':
                result = result - anotherNum;
                break;
            case '*':
                result = result * anotherNum;
                break;
            case '/':
                result = result / anotherNum;
                break;
                }
            cout << result << "\n\n";

}else if (nextOperation == "no"){
    cout << "Thank YOu for Using Me :) \n\n";
    break;
}else {
    cout << "ERROR!";
}

    }
    }

    return 0;
}
