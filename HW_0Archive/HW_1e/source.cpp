// Attached: HW_1(abcde)
// File: HW_1e.pdf
// =============================================================================
//
// Programmer: Kyle Yuen
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: HW_1e – Login Validation with File Input
// =============================================================================
// Description:
// The program reads an ID and password from a text file (`login.txt`) and 
// prompts the user to enter their credentials. It compares them to the stored 
// values and displays whether the login attempt was valid or invalid.
// =============================================================================

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function Prototypes
void getLogin(string &id, string &pw);
bool validateLogin(const string &id, const string &pw);
void showResult(bool isValid);


// ==== main ===================================================================
//
// Runs login input, file validation, and result output.
// =============================================================================
int main() {
    string id = "";
    string pw = "";
    bool isValid = false;

    getLogin(id, pw); // Get user input
    isValid = validateLogin(id, pw); // Validate against file
    showResult(isValid); // Display result

    return 0;

} // end of main()
// =============================================================================



// ==== getLogin ===============================================================
// Prompts user for ID and password.
// Input: values by reference
// Output: fills id and pw with user input
// =============================================================================
void getLogin(string &id, string &pw) {
    cout << "Enter your ID: ";
    cin >> id;

    cout << "Enter your PW: ";
    cin >> pw;
} // end of getLogin()
// =============================================================================




// ==== validateLogin ==========================================================
// Compares user input to stored ID and PW in login.txt.
// Input: id and pw (from user)
// Output: true if credentials match, false otherwise
// =============================================================================
bool validateLogin(const string &id, const string &pw) {
    ifstream inFile("login.txt");

    if (inFile.fail()){
        cout<<"Error opening the file.\n";
        return 0;
    }

    string fileID = "";
    string filePW = "";
    inFile >> fileID >> filePW;
    inFile.close();

    return (id == fileID && pw == filePW);
} // end of validateLogin()
// =============================================================================



// ==== showResult =============================================================
// Displays "Valid." or "Invalid" based on login success.
// Input: boolean result of validation
// Output: formatted message
// =============================================================================
void showResult(bool isValid) {
    if (isValid) {
        cout << "\nValid.\n";
    } else {
        cout << "\nInvalid.\n";
    }
} // end of showResult()
// =============================================================================



/* ================================== Output ===================================
Enter your ID: tommy
Enter your PW: 12345

Valid.
*/