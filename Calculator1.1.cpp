#include <iostream>

using namespace std;

int main()
{
    double frstNum, num, result;
    char operation;
    int loopNum = 1;

	cout << "Enter how many time you want to calculate: ";
	cin >> loopNum;

    for (int loopCount = 1; loopCount < loopNum; loopCount++ ){

		if (loopCount == 1 ){
		
        cout << "Enter a Number: ";
        cin >> result;
}

		cout << "Enter Operation and Number: ";
          	cin >> 	operation >> num;
  	
    switch (operation){
        case '+':
            result = result + num;
            break;
        case '-':
            result = result - num;
            break;
        case '*':
            result = result * num;
            break;
        case '/':
            result = result / num;
            break;

        default:
            cout << "Error!";
        }
            
          	         
    }
	
	cout << result;
	
	return 0;
	}

   
	
