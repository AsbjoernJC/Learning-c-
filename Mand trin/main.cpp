#include <iostream>

using namespace std;

int main()
{
    int steps = 5;
    for(int currentStep = 1;currentStep <= steps;currentStep++){

	         // Draw Head  ///////////////////////
        for(int i = 0;i < -5*(currentStep-steps);i++){        // Format - Leading spaces
            cout << (" ");                             // (This step # - total step #) * negative average asterisk length. Needed a decrementing expression.
	         } cout << ("  o  ******");

        for(int i = 5*(currentStep-1);i >= 1;i--){             // Format - Spacing between asterisks
            cout << (" ");                              // (currentStep-1) allows line 1(or 0) to place no spaces
	         } cout <<("*") << endl;
	         // End Head ////////////////////////


	         // Draw Torso ///////////////////////////
        for(int i = 0;i < -5*(currentStep-steps);i++){         // Format - Leading spaces
            cout << (" ");
	         } cout << (" /|\\ *     ");
        for(int i = 5*(currentStep-1);i >= 1;i--){              // Format - Spacing between asterisks
            cout << (" ");
	         } cout << ("*") << endl;
	         // End Torso ////////////////////


	         // Draw legs //////////////////////
	         for(int i = 0;i < -5*(currentStep-steps);i++){        // Format - Leading spaces
	            cout << (" ");
	         } cout << (" / \\ *");
	         for(int i = 0; i <=4; i++){
                cout << " ";
	         }

	         for(int i = 5*(currentStep-1);i >= 1;i--){              // Format - Spacing between asterisks
	            cout << (" ");
	         }
	         cout << ("*") << endl;
	         // End Legs ////////////////////
	      }

	      for(int bottomLength = 1; bottomLength <= (5*steps)+6;bottomLength++){   // Print bottom line
	         cout << ("*");
	      }
	      cout << ("*");
	      return 0;
}
