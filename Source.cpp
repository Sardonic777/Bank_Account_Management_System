#include <iostream>
#include <istream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <conio.h>
#include <string>
#include "Intro.h"
using namespace std;


bool isNumeric(string name) {                                        // Global boolean expression
    for (int i = 0; i < name.length(); i++)
        if (isdigit(name[i]) == false)
            return false;                                         // returns false when one non-numeric value is found
    return true;
}

class General
{
private:
    long long balance = 10000000000, b, D_B = 0, d_b, a_do, am_do, payment, send_m, amount_mon;
    double Brate = 10480.00, Srate = 10540.00;
    string username, fav_color, receiver;
    char password[32], a;
    int i;
    string month;
    int year, date, age;
    string Name, Surname, Fathern, city, address, passport, mob_num, ex_mob_num;
    int count;
    string U, C, user, pass, col, Na, Su, Fa, mo, pa, mn, exmn, ci, add;
    char P[32];
    int y, d;
    string opt, opt1, ans, answ, opt2, opt3, opt4, anwse, anwser;
    string colortorecover;
    
public:
    void registration_process();
    void Showdate(int year, string month, int date);
    void login_process();
    void forgot();
    void account();
    double  Dollar_Buy(double d_a)
    {
        D_B = D_B + d_a;
        return D_B;
    }
    void  Dollar_Buy2(double d_a, double rate)
    {
        balance = balance - (d_a * rate);
        b = b - (d_a * rate);
    }
    double Dollar_Sell(double k)
    {
        D_B = D_B - k ;
        return D_B;
    }
    void Dollar_Sell2(double k, double r)
    {
        balance = balance + (k * r);
        b = b + (k * r);
    }
    void Ex_change();
    void Payment();
    void Transaction();
    void  Deposit();
};
void MAINFUNCTION()
{
    General User;
    string choice;
    cout << "같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같" << endl;
    cout << "같같같같같같같같같같같� ";
    HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(color, 10);
    cout << "Bank Account Management System";
    SetConsoleTextAttribute(color, 7);
    cout << " 같같같같같같같같같같같�" << endl;
    cout << "같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같" << endl << endl;
    cout << "같같같같같같같같같같같같                               같같같같같같같같같같같�" << endl;
    cout << "같같 ";
    SetConsoleTextAttribute(color, 12);
    cout << "[1] - Sign in ";
    SetConsoleTextAttribute(color, 7);
    cout << "같같�                               같같 ";
    SetConsoleTextAttribute(color, 14);
    cout << "[2] - Sign up ";
    SetConsoleTextAttribute(color, 7);
    cout << "같같" << endl;
    cout << "같같같같같같같같같같같같                               같같같같같같같같같같같�" << endl;

choose:
    SetConsoleTextAttribute(color, 15);
    cout << "\nEntrance method: ";
    SetConsoleTextAttribute(color, 11);
    cin >> choice;
    SetConsoleTextAttribute(color, 7);
    if (choice == "1")
    {
        User.login_process();
    }
    else if (choice == "2")
    {
        User.registration_process();
        User.login_process();
    }
    else
    {
        cout << "\n[1] - Sign in" << endl;
        cout << "[2] - Sign up" << endl;
        goto choose;
    }
}
int main()
{
    intro_window();
    MAINFUNCTION();
}

void General :: registration_process()
{
    system("cls");
    cout << "같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같" << endl;
    cout << "같같같같같같같같같같같같같같같� ";
    HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(color, 10);
    cout << "Registration ";
    SetConsoleTextAttribute(color, 7);
    cout << "같같같같같같같같같같같같같같같같�" << endl;
    cout << "같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같" << endl;
    SetConsoleTextAttribute(color, 15);
    cout << "Username: ";
    SetConsoleTextAttribute(color, 3);
    cin >> username;
    SetConsoleTextAttribute(color, 15);
    while (isNumeric(username))
    {                                               // cheking whether the input is consisted of only numbers or not 
        SetConsoleTextAttribute(color, 15);
        cout << "Please, write your name!" << endl; // if the input is consisted of only numbers then gives a chance to re-enter the username 
        cout << "Username: ";
        SetConsoleTextAttribute(color, 3);
        cin >> username;
        SetConsoleTextAttribute(color, 15);
    }
    cout << "Password: ";
    SetConsoleTextAttribute(color, 3);
    for (i = 0; ; )             // an infinite loop 
    {
        a = _getch();           // stores char typed a 
        if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9')) // check if a is  numeric or alphabet 
        {
            password[i] = a;        // to store a in pass 
            ++i;
            cout << "*";
        }
        if (a == '\b' && i >= 1) // if user typed backspace; i should be greater than 1 
        {
            cout << "\b \b";     // rub the character behind the cursor 
            --i;
        }
        if (a == '\r')        // if enter is pressed  
        {
            password[i] = '\0';  // null means end of string 
            break;           // break the loop 
        }
    }
    SetConsoleTextAttribute(color, 15);
    while (i < 6) // Check for minimum characters needed 
        {
            cout << "\nMinimum 6 characters needed. \nEnter again..." << endl; // password should consist at least 6 characters 
            _getch(); // to pause 
            
            cout << "Password: ";
            SetConsoleTextAttribute(color, 3);
            for (i = 0; ; )             // an infinite loop 
            {
                a = _getch();           // stores char typed a 
                if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9')) // check if a is  numeric or alphabet 
                {
                    password[i] = a;        // to store a in pass 
                    ++i;
                    cout << "*";
                }
                if (a == '\b' && i >= 1) // if user typed backspace; i should be greater than 1 
                {
                    cout << "\b \b";     // rub the character behind the cursor 
                    --i;
                }
                if (a == '\r')        // if enter is pressed  
                {
                    password[i] = '\0';  // null means end of string 
                    break;           // break the loop 
                }
            }

        }
    SetConsoleTextAttribute(color, 15);      
    cout << "\nPlease enter your favorite color: ";
    SetConsoleTextAttribute(color, 3);
    cin >> fav_color; // In case a user forgets his/her data then he/she will be able to see their data by entering their favourite color's name 
    SetConsoleTextAttribute(color, 7);
    cout << endl << endl;
    cout << "In case you forget your username or password, you can see your data by entering your favorite color" << endl;
    cout << "\nThe account has been successfully created!" << endl << endl << endl << endl << endl << endl << endl << endl;

    SetConsoleTextAttribute(color, 7);
    cout << "같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같" << endl; //-24
    cout << "같같같같같같같같같같같같 ";
    SetConsoleTextAttribute(color, 10);
    cout << "PLEASE PRESS ENTER TO CONTINUE ";
    SetConsoleTextAttribute(color, 7);
    cout << "같같같같같같같같같같같같" << endl;
    cout << "같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같" << endl;
    system("pause>0");
    system("cls");
    SetConsoleTextAttribute(color, 15);
    cout << "같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같" << endl;
    cout << "같같같같같같같같같같같같같같� ";
    SetConsoleTextAttribute(color, 10);
    cout << "Personal Details ";
    SetConsoleTextAttribute(color, 15);
    cout << "같같같같같같같같같같같같같같같�" << endl;
    cout << "같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같" << endl;
    cout << "First name : ";
    cin >> Name;
    while (isNumeric(Name))
    {
        cout << "Please, write your name!" << endl;
        cout << "First name : ";
        cin >> Name;
    }
    cout << "Surname: ";
    cin >> Surname;
    while (isNumeric(Surname))
    {
        cout << "Please, write your surname!" << endl;
        cout << "Surname: ";
        cin >> Surname;
    }
    cout << "Patronymic: ";
    cin >> ws;                                    // consume any white-space characters
    getline(cin, Fathern);
    while (isNumeric(Fathern))
    {
        cout << "Patronymic: ";
        cin >> ws;                                    // consume any white-space characters
        getline(cin, Fathern);
    }
    cout << "Please enter your birth date as required order " << endl;
    cout << "Year: ";
    cin >> year;
    while (year < 1900 || year > 2020)
    {
        cout << "Please, enter the year you were born in" << endl;
        cout << "Year: ";
        cin >> year;
    }
m:
    cout << "Month: ";
    cin >> month;
    if (month == "1" || month == "01" || month == "January" || month == "JANUARY") {
        month = "January";
        if (year % 400 == 0) {
            cout << "Date: ";
            cin >> date;
            while (date < 1 || date>29)
            {
                cout << "Invalid..." << endl;
                cout << "Try again!" << endl;
                cout << "Date: ";
                cin >> date;
            }
        }
        else if (year % 4 == 0 && year % 100 != 0)
        {
            cout << "Date: ";
            cin >> date;
            while (date < 1 || date>29)
            {
                cout << "Invalid...\nTry again!" << endl;
                cout << "Date: ";
                cin >> date;
            }
        }
        else
        {
            cout << "Date: ";
            cin >> date;
            while (date < 1 || date >= 29) {
                cout << "The " << year << " isn't a leap year!\n" << "Invalid..." << endl;
                cout << "Date: ";
                cin >> date;
            }
        }
    }
    else if (month == "2" || month == "02" || month == "February" || month == "FEBRUARY") {
        month = "February";
        cout << "Date: ";
        cin >> date;
        while (date < 1 || date > 31)
        {
            cout << "Invalid...\nTry again!" << endl;
            cout << "Date: ";
            cin >> date;
        }
    }
    else if (month == "3" || month == "03" || month == "March" || month == "MARCH") {
        month = "March";
        cout << "Date: ";
        cin >> date;
        while (date < 1 || date>31)
        {
            cout << "Invalid...\nTry again!" << endl;
            cout << "Date: ";
            cin >> date;
        }
    }
    else if (month == "4" || month == "04" || month == "April" || month == "APRIL") {
        month = "April";
        cout << "Date: ";
        cin >> date;
        while (date < 1 || date >= 31)
        {
            cout << "Invalid...\nTry again!" << endl;
            cout << "Date: ";
            cin >> date;
        }
    }
    else if (month == "5" || month == "05" || month == "May" || month == "MAY") {
        month = "May";
        cout << "Date: ";
        cin >> date;
        while (date < 1 || date>31)
        {
            cout << "Invalid...\nTry again!" << endl;
            cout << "Date: ";
            cin >> date;
        }
    }
    else if (month == "6" || month == "06" || month == "June" || month == "JUNE") {
        month = "June";
        cout << "Date: ";
        cin >> date;
        while (date < 1 || date >= 31)
        {
            cout << "Invalid...\nTry again!" << endl;
            cout << "Date: ";
            cin >> date;
        }
    }
    else if (month == "7" || month == "07" || month == "July" || month == "JULE") {
        month = "July";
        cout << "Date: ";
        cin >> date;
        while (date < 1 || date>31)
        {
            cout << "Invalid...\nTry again!" << endl;
            cout << "Date: ";
            cin >> date;
        }
    }
    else if (month == "8" || month == "08" || month == "August" || month == "AUGUST") {
        month = "August";
        cout << "Date: ";
        cin >> date;
        while (date < 1 || date>31) {
            cout << "Invalid...\nTry again!" << endl;
            cout << "Date: ";
            cin >> date;
        }
    }
    else if (month == "9" || month == "09" || month == "September" || month == "SEPTEMBER") {
        month = "September";
        cout << "Date: ";
        cin >> date;
        while (date < 1 || date >= 31)
        {
            cout << "Invalid...\nTry again!" << endl;
            cout << "Date: ";
            cin >> date;
        }
    }
    else if (month == "10" || month == "October" || month == "OCTOBER") {
        month = "October";
        cout << "Date: ";
        cin >> date;
        while (date < 1 || date>31)
        {
            cout << "Invalid...\nTry again!" << endl;
            cout << "Date: ";
            cin >> date;
        }
    }
    else if (month == "11" || month == "November" || month == "NOVEMBER") {
        month = "November";
        cout << "Date: ";
        cin >> date;
        while (date < 1 || date >= 31)
        {
            cout << "Invalid...\nTry again!" << endl;
            cout << "Date: ";
            cin >> date;
        }
    }
    else if (month == "12" || month == "December" || month == "DECEMBER") {
        month = "December";
        cout << "Date: ";
        cin >> date;
        while (date < 1 || date>31)
        {
            cout << "Invalid...\nTry again!" << endl;
            cout << "Date: ";
            cin >> date;
        }
    }
    else {
        cout << "Invalid...\nTry again!" << endl;
        goto m;
    }
    cout << "Passport serial number: ";
    cin >> passport;
    while (passport.length() < 9)                               // Check for minimum characters needed
    {
        cout << "\nPassport series should be consisted of 9 characters. \nEnter again..." << endl; // password should consist at least 6 characters
        cout << "Passport serial number: ";
        cin >> passport;
    }
    cout << "Required form of entering mobile number: (99) 999-99-99" << endl;
    cout << "Mobile number: ";
    cin >> ws;                    // consume any white-space characters
    getline(cin, mob_num);
    cout << "Extra telephone number: ";
    cin >> ws;                    // consume any white-space characters
    getline(cin, ex_mob_num);
    cout << "Region or city of permanent residence: ";
    getline(cin, city);
    cout << "Address: ";
    cin >> ws;                                     // consume any white-space characters
    getline(cin, address);
    cout << endl << endl << endl << endl << endl;
    cout << "같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같" << endl;
    cout << "같같같같같같같같같같같 ";
    SetConsoleTextAttribute(color, 10);
    cout << "PLEASE PRESS ENTER TO CONTINUE ";
    SetConsoleTextAttribute(color, 15);
    cout << "같같같같같같같같같같같�" << endl;
    cout << "같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같" << endl;
    system("pause>0");
    system("cls");

    int size_arr = sizeof(password) / sizeof(char);
    string str = "";
    str = password;
    ofstream reg("database.txt", ios::app);
    reg << username << ' ' << str << ' ' << fav_color << ' ' << Name << ' ' << Surname << ' ' << Fathern << ' ' << year << ' ' << month << ' ' << date << ' ' << passport << ' ' << mob_num << ' ' << ex_mob_num << ' ' << city << ' ' << address << ' ' << balance << '  ' << D_B << endl;
    system("cls");
    MAINFUNCTION();


}
void General :: Showdate(int year, string month, int date) {
    HANDLE textcolor = GetStdHandle(STD_OUTPUT_HANDLE);
    switch (date) {       
        SetConsoleTextAttribute(textcolor, 15);
        SetConsoleTextAttribute(textcolor, 11);
    case 1: 
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Was born on the";
        SetConsoleTextAttribute(textcolor, 11);
        cout << " first ";
        SetConsoleTextAttribute(textcolor, 15);
        cout << "of ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << month;
        SetConsoleTextAttribute(textcolor, 15);
        cout << " in ";
        SetConsoleTextAttribute(textcolor, 11);
        cout<< year << endl;
        SetConsoleTextAttribute(textcolor, 15);
        break;
    case 2:
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Was born on the";
        SetConsoleTextAttribute(textcolor, 11);
        cout << " second ";
        SetConsoleTextAttribute(textcolor, 15);
        cout << "of ";       
        SetConsoleTextAttribute(textcolor, 11);
        cout << month;
        SetConsoleTextAttribute(textcolor, 15);
        cout << " in ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << year << endl;
        SetConsoleTextAttribute(textcolor, 15);
        break;
    case 3: 
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Was born on the";
        SetConsoleTextAttribute(textcolor, 11);
        cout << " third ";
        SetConsoleTextAttribute(textcolor, 15);
        cout << "of ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << month;
        SetConsoleTextAttribute(textcolor, 15);
        cout << " in ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << year << endl;
        SetConsoleTextAttribute(textcolor, 15);
        break;
    case 4: 
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Was born on the";
        SetConsoleTextAttribute(textcolor, 11);
        cout << " fourth ";
        SetConsoleTextAttribute(textcolor, 15);
        cout << "of ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << month;
        SetConsoleTextAttribute(textcolor, 15);
        cout << " in ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << year << endl;
        SetConsoleTextAttribute(textcolor, 15);
        break;
    case 5:
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Was born on the";
        SetConsoleTextAttribute(textcolor, 11);
        cout << " fifth ";
        SetConsoleTextAttribute(textcolor, 15);
        cout << "of ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << month;
        SetConsoleTextAttribute(textcolor, 15);
        cout << " in ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << year << endl;
        SetConsoleTextAttribute(textcolor, 15);
        break;
    case 6:
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Was born on the";
        SetConsoleTextAttribute(textcolor, 11);
        cout << " sixth ";
        SetConsoleTextAttribute(textcolor, 15);
        cout << "of ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << month;
        SetConsoleTextAttribute(textcolor, 15);
        cout << " in ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << year << endl;
        SetConsoleTextAttribute(textcolor, 15);
        break;
    case 7:
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Was born on the";
        SetConsoleTextAttribute(textcolor, 11);
        cout << " seventh ";
        SetConsoleTextAttribute(textcolor, 15);
        cout << "of ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << month;
        SetConsoleTextAttribute(textcolor, 15);
        cout << " in ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << year << endl;
        SetConsoleTextAttribute(textcolor, 15);
        break;
    case 8:
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Was born on the";
        SetConsoleTextAttribute(textcolor, 11);
        cout << " eighth ";
        SetConsoleTextAttribute(textcolor, 15);
        cout << "of ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << month;
        SetConsoleTextAttribute(textcolor, 15);
        cout << " in ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << year << endl;
        SetConsoleTextAttribute(textcolor, 15);
        break;
    case 9:
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Was born on the";
        SetConsoleTextAttribute(textcolor, 11);
        cout << " ninth ";
        SetConsoleTextAttribute(textcolor, 15);
        cout << "of ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << month;
        SetConsoleTextAttribute(textcolor, 15);
        cout << " in ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << year << endl;
        SetConsoleTextAttribute(textcolor, 15);
        break;
    case 10:
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Was born on the";
        SetConsoleTextAttribute(textcolor, 11);
        cout << " tenth ";
        SetConsoleTextAttribute(textcolor, 15);
        cout << "of ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << month;
        SetConsoleTextAttribute(textcolor, 15);
        cout << " in ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << year << endl;
        SetConsoleTextAttribute(textcolor, 15);
        break;
    case 11:
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Was born on the";
        SetConsoleTextAttribute(textcolor, 11);
        cout << " eleventh ";
        SetConsoleTextAttribute(textcolor, 15);
        cout << "of ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << month;
        SetConsoleTextAttribute(textcolor, 15);
        cout << " in ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << year << endl;
        SetConsoleTextAttribute(textcolor, 15);
        break;
    case 12: 
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Was born on the";
        SetConsoleTextAttribute(textcolor, 11);
        cout << " twelfth ";
        SetConsoleTextAttribute(textcolor, 15);
        cout << "of ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << month;
        SetConsoleTextAttribute(textcolor, 15);
        cout << " in ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << year << endl;
        SetConsoleTextAttribute(textcolor, 15);
        break;
    case 13:
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Was born on the";
        SetConsoleTextAttribute(textcolor, 11);
        cout << " thirteenth ";
        SetConsoleTextAttribute(textcolor, 15);
        cout << "of ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << month;
        SetConsoleTextAttribute(textcolor, 15);
        cout << " in ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << year << endl;
        SetConsoleTextAttribute(textcolor, 15);
        break;
    case 14:
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Was born on the";
        SetConsoleTextAttribute(textcolor, 11);
        cout << " fourteenth ";
        SetConsoleTextAttribute(textcolor, 15);
        cout << "of ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << month;
        SetConsoleTextAttribute(textcolor, 15);
        cout << " in ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << year << endl;
        SetConsoleTextAttribute(textcolor, 15);
        break;
    case 15:
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Was born on the";
        SetConsoleTextAttribute(textcolor, 11);
        cout << " fifteenth ";
        SetConsoleTextAttribute(textcolor, 15);
        cout << "of ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << month;
        SetConsoleTextAttribute(textcolor, 15);
        cout << " in ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << year << endl;
        SetConsoleTextAttribute(textcolor, 15);
        break;
    case 16:
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Was born on the";
        SetConsoleTextAttribute(textcolor, 11);
        cout << " sixteenth ";
        SetConsoleTextAttribute(textcolor, 15);
        cout << "of ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << month;
        SetConsoleTextAttribute(textcolor, 15);
        cout << " in ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << year << endl;
        SetConsoleTextAttribute(textcolor, 15);
        break;
    case 17:
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Was born on the";
        SetConsoleTextAttribute(textcolor, 11);
        cout << " seventeenth ";
        SetConsoleTextAttribute(textcolor, 15);
        cout << "of ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << month;
        SetConsoleTextAttribute(textcolor, 15);
        cout << " in ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << year << endl;
        SetConsoleTextAttribute(textcolor, 15);
        break;
    case 18:
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Was born on the";
        SetConsoleTextAttribute(textcolor, 11);
        cout << " eighteenth ";
        SetConsoleTextAttribute(textcolor, 15);
        cout << "of ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << month;
        SetConsoleTextAttribute(textcolor, 15);
        cout << " in ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << year << endl;
        SetConsoleTextAttribute(textcolor, 15);
        break;
    case 19:
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Was born on the";
        SetConsoleTextAttribute(textcolor, 11);
        cout << " nineteenth ";
        SetConsoleTextAttribute(textcolor, 15);
        cout << "of ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << month;
        SetConsoleTextAttribute(textcolor, 15);
        cout << " in ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << year << endl;
        SetConsoleTextAttribute(textcolor, 15);
        break;
    case 20:
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Was born on the";
        SetConsoleTextAttribute(textcolor, 11);
        cout << " twentieth ";
        SetConsoleTextAttribute(textcolor, 15);
        cout << "of ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << month;
        SetConsoleTextAttribute(textcolor, 15);
        cout << " in ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << year << endl;
        SetConsoleTextAttribute(textcolor, 15);
        break;
    case 21:
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Was born on the";
        SetConsoleTextAttribute(textcolor, 11);
        cout << " twenty-first ";
        SetConsoleTextAttribute(textcolor, 15);
        cout << "of ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << month;
        SetConsoleTextAttribute(textcolor, 15);
        cout << " in ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << year << endl;
        SetConsoleTextAttribute(textcolor, 15);
        break;
    case 22:
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Was born on the";
        SetConsoleTextAttribute(textcolor, 11);
        cout << " twenty-second ";
        SetConsoleTextAttribute(textcolor, 15);
        cout << "of ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << month;
        SetConsoleTextAttribute(textcolor, 15);
        cout << " in ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << year << endl;
        SetConsoleTextAttribute(textcolor, 15);
        break;
    case 23:
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Was born on the";
        SetConsoleTextAttribute(textcolor, 11);
        cout << " twenty-third ";
        SetConsoleTextAttribute(textcolor, 15);
        cout << "of ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << month;
        SetConsoleTextAttribute(textcolor, 15);
        cout << " in ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << year << endl;
        SetConsoleTextAttribute(textcolor, 15);
        break;
    case 24:
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Was born on the";
        SetConsoleTextAttribute(textcolor, 11);
        cout << " twenty-fourth ";
        SetConsoleTextAttribute(textcolor, 15);
        cout << "of ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << month;
        SetConsoleTextAttribute(textcolor, 15);
        cout << " in ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << year << endl;
        SetConsoleTextAttribute(textcolor, 15);
        break;
    case 25:
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Was born on the";
        SetConsoleTextAttribute(textcolor, 11);
        cout << " twenty-fifth ";
        SetConsoleTextAttribute(textcolor, 15);
        cout << "of ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << month;
        SetConsoleTextAttribute(textcolor, 15);
        cout << " in ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << year << endl;
        SetConsoleTextAttribute(textcolor, 15);
        break;
    case 26:
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Was born on the";
        SetConsoleTextAttribute(textcolor, 11);
        cout << " twenty-sixth ";
        SetConsoleTextAttribute(textcolor, 15);
        cout << "of ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << month;
        SetConsoleTextAttribute(textcolor, 15);
        cout << " in ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << year << endl;
        SetConsoleTextAttribute(textcolor, 15);
        break;
    case 27:
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Was born on the";
        SetConsoleTextAttribute(textcolor, 11);
        cout << " twenty-seventh ";
        SetConsoleTextAttribute(textcolor, 15);
        cout << "of ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << month;
        SetConsoleTextAttribute(textcolor, 15);
        cout << " in ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << year << endl;
        SetConsoleTextAttribute(textcolor, 15);
        break;
    case 28:
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Was born on the";
        SetConsoleTextAttribute(textcolor, 11);
        cout << " twenty-eighth ";
        SetConsoleTextAttribute(textcolor, 15);
        cout << "of ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << month;
        SetConsoleTextAttribute(textcolor, 15);
        cout << " in ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << year << endl;
        SetConsoleTextAttribute(textcolor, 15);
        break;
    case 29:
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Was born on the";
        SetConsoleTextAttribute(textcolor, 11);
        cout << " twenty-ninth ";
        SetConsoleTextAttribute(textcolor, 15);
        cout << "of ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << month;
        SetConsoleTextAttribute(textcolor, 15);
        cout << " in ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << year << endl;
        SetConsoleTextAttribute(textcolor, 15);
        break;
    case 30:
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Was born on the";
        SetConsoleTextAttribute(textcolor, 11);
        cout << " thirtieth ";
        SetConsoleTextAttribute(textcolor, 15);
        cout << "of ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << month;
        SetConsoleTextAttribute(textcolor, 15);
        cout << " in ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << year << endl;
        SetConsoleTextAttribute(textcolor, 15);
        break;
    case 31:
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Was born on the";
        SetConsoleTextAttribute(textcolor, 11);
        cout << " thirty-first ";
        SetConsoleTextAttribute(textcolor, 15);
        cout << "of ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << month;
        SetConsoleTextAttribute(textcolor, 15);
        cout << " in ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << year << endl;
        SetConsoleTextAttribute(textcolor, 15);
        break;
    }
    if (month == "1" || month == "01" || month == "January") {
        age = 2021 - year;
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Age: ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << age << endl;
        SetConsoleTextAttribute(textcolor, 15);
    }
    else if (month == "2" || month == "02" || month == "February") {
        age = 2021 - year;
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Age: ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << age << endl;
        SetConsoleTextAttribute(textcolor, 15);
    }
    else if (month == "3" || month == "03" || month == "March") {
        age = 2021 - year;
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Age: ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << age << endl;
        SetConsoleTextAttribute(textcolor, 15);
    }
    else if (month == "4" || month == "04" || month == "April") {
        age = 2021 - year;
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Age: ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << age << endl;
        SetConsoleTextAttribute(textcolor, 15);
    }
    else if (month == "5" || month == "05" || month == "May") {
        if (date >= 1 || date >= 8) {
            age = 2021 - year;
            SetConsoleTextAttribute(textcolor, 15);
            cout << "Age: ";
            SetConsoleTextAttribute(textcolor, 11);
            cout << age << endl;
            SetConsoleTextAttribute(textcolor, 15);
        }
        else
        {
            age = 2020 - year;
            SetConsoleTextAttribute(textcolor, 15);
            cout << "Age: ";
            SetConsoleTextAttribute(textcolor, 11);
            cout << age << endl;
            SetConsoleTextAttribute(textcolor, 15);
        }
    }
    else if (month == "6" || month == "06" || month == "June") {
        age = 2020 - year;
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Age: ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << age << endl;
        SetConsoleTextAttribute(textcolor, 15);
    }
    else if (month == "7" || month == "07" || month == "July") {
        age = 2020 - year;
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Age: ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << age << endl;
        SetConsoleTextAttribute(textcolor, 15);
    }
    else if (month == "8" || month == "08" || month == "August") {
        age = 2020 - year;
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Age: ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << age << endl;
        SetConsoleTextAttribute(textcolor, 15);
    }
    else if (month == "9" || month == "09" || month == "September") {
        age = 2020 - year;
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Age: ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << age << endl;
        SetConsoleTextAttribute(textcolor, 15);
    }
    else if (month == "10" || month == "October") {
        age = 2020 - year;
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Age: ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << age << endl;
        SetConsoleTextAttribute(textcolor, 15);
    }
    else if (month == "11" || month == "November") {
        age = 2020 - year;
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Age: ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << age << endl;
        SetConsoleTextAttribute(textcolor, 15);
    }
    else if (month == "12" || month == "December") {
        age = 2020 - year;
        SetConsoleTextAttribute(textcolor, 15);
        cout << "Age: ";
        SetConsoleTextAttribute(textcolor, 11);
        cout << age << endl;
        SetConsoleTextAttribute(textcolor, 15);
    }
}
void General :: login_process()
{
    HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
    system("cls");
    SetConsoleTextAttribute(color, 15);
    cout << "같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같" << endl;
    cout << "같같같같같같같같같같같같같같같같같 ";
    SetConsoleTextAttribute(color, 10);
    cout << "Log in ";
    SetConsoleTextAttribute(color, 15);
    cout << "같같같같같같같같같같같같같같같같같같" << endl;
    cout << "같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같" << endl;
    cout << "Username: ";
    SetConsoleTextAttribute(color, 3);
    cin >> U;
    SetConsoleTextAttribute(color, 15);
    cout << "\nPassword: ";
    SetConsoleTextAttribute(color, 3);
    int n = 0;
    char s;          // a Temp char
    for (n = 0; ; ) // an infinite loop
    {
        s = _getch(); // stores char typed a
        if ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z') || (s >= '0' && s <= '9')) // check if a is  numeric or alphabet
        {
            P[n] = s; // to store a in pass
            ++n;
            cout << "*";
        }
        if (s == '\b' && n >= 1) // if user typed backspace; i should be greater than 1
        {
            cout << "\b \b"; // rub the character behind the cursor
            --n;
        }
        if (s == '\r') // if enter is pressed 
        {
            P[n] = '\0';  // null means end of string
            break; // break the loop
        }
    }
    int size_arr = sizeof(P) / sizeof(char);
    string strp = "";
    strp = P;

    SetConsoleTextAttribute(color, 15);
    ifstream input("database.txt");
    while (input >> user >> pass >> col >> Na >> Su >> Fa >> y >> mo >> d >> pa >> mn >> exmn >> ci >> add>>b)
    {
        if (U == user && strp == pass)

        {
            count = 1;
        }
        else if (U != user && strp == pass)

        {
            count = 2;
        }
        else if (U == user && strp != pass)

        {
            count = 3;
        }
        else
        {
            count = 4;
        }
    }
    input.close();
    if (count == 1)
    {
        cout << endl;
        cout << "같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같" << endl;
        cout << "같같같같같같같같같같같� ";
        SetConsoleTextAttribute(color, 10);
        cout << "PLEASE PRESS ENTER TO CONTINUE ";
        SetConsoleTextAttribute(color, 15); 
        cout << "같같같같같같같같같같같�" << endl;
        cout << "같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같" << endl;
        system("pause>0");
        system("cls");

        SetConsoleTextAttribute(color, 15);
        cout << "같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같" << endl;
        SetConsoleTextAttribute(color, 10);
        cout << "                          " << Na << " " << Su << " " << Fa << endl;
        SetConsoleTextAttribute(color, 15);
        cout << "같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같" << endl;
        SetConsoleTextAttribute(color, 15);
        Showdate(y, mo, d);
        cout << "Permanent living region/city: ";
        SetConsoleTextAttribute(color, 11);
        cout << ci << endl;
        SetConsoleTextAttribute(color, 15);
        cout << "Address: ";
        SetConsoleTextAttribute(color, 11);
        cout << add << endl;
        SetConsoleTextAttribute(color, 15);
        cout << "Passport series: ";
        SetConsoleTextAttribute(color, 11);
        cout << pa << endl;
        SetConsoleTextAttribute(color, 15);
        cout << "Mobile number: ";
        SetConsoleTextAttribute(color, 11);
        cout << mn << endl;
        SetConsoleTextAttribute(color, 15);
        cout << "Extra telephone number: ";
        SetConsoleTextAttribute(color, 11);
        cout << exmn << endl;
        SetConsoleTextAttribute(color, 15);
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같" << endl;
        cout << "같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같" << endl;
        cin.get();
        cin.get();
        account();
    }
    else if (count == 2)
    {
    al:        
        cout << "\nWrong username!" << endl;
        cout << "[0] To go back" << endl;
        cout << "[1] To see your username" << endl;
        cin >> opt;
        if (opt == "0")
        { 
            system("cls");
            MAINFUNCTION();
        }
        else if (opt == "1")
        {
        label:
            cout << "What is your favorite color?" << endl;
            cin >> colortorecover;
            if (col == colortorecover)
            {
                cout << "Your username : " << user << endl;
                cout << "Press any key to log in" << endl;
                _getch();
                login_process();

            }
            else
            {
            ch:
                cout << "\nWrong!" << endl;  // if the name of color is NOT the same as the user's favourite color then give a chance to  re-try and to go back
                cout << "Press 1 to try again" << endl;
                cout << "Press 2 to go back" << endl;
                cin >> ans;
                if (ans == "1")
                {
                    goto label;
                }
                else if (ans == "2")
                {
                    system("cls");
                    MAINFUNCTION();;
                }
                else 
                {
                    cout << "\nYou are required to press either 1 or 2 " << endl;
                    goto ch;
                }
            }
        }
        else
        { 
            cout << "\nInvalid...\nTry again!" << endl;
            goto al;
        }
    }
    else if (count == 3)
    {
    ac:
        cout << "\nWrong password!" << endl;
        cout << "[0]  To go back" << endl;
        cout << "[1]  To see your password" << endl;
        cin >> opt1;

     if (opt1 == "1")
        {
       que:
            cout << "What is your favorite color?" << endl;
            cin >> colortorecover;
            if (colortorecover == col)
            {
                cout << "Your password : " << pass << endl;
                cout << "Press any key to log in" << endl;
                _getch();
                login_process();
            }
       else
            {
            cha:
                cout << "\nWrong!" << endl;  // if the name of color is NOT the same as the user's favourite color then give a chance to  re-try and to go back
                cout << "[1]  To try again" << endl;
                cout << "[2]  To go back" << endl;
                cin >> answ;
                if (answ == "1")
                {
                    goto que;
                }
                else if (answ == "2")
                {
                    system("cls");
                    MAINFUNCTION();;
                }
                else
                {
                    cout << "\nYou are required to press either 1 or 2 " << endl;
                    goto cha;
                }
            }
        }
     else if (opt1 == "0")
       {
           system("cls");
           MAINFUNCTION();
       }
     else
     {
         goto ac;
     }
    }
    else
    {
        cout << "\nLOGIN ERROR\nPlease check your username and password\n";
        MAINFUNCTION();
    }
}
void General :: Ex_change()
{
    HANDLE ctext = GetStdHandle(STD_OUTPUT_HANDLE);
    system("cls");
coi:
    SetConsoleTextAttribute(ctext, 12);
    cout << "[1] ";
    SetConsoleTextAttribute(ctext, 10);
    cout << " Buy dollar" << endl;
    SetConsoleTextAttribute(ctext, 12);
    cout << "[2] ";
    SetConsoleTextAttribute(ctext, 10);
    cout << " Sell dollar" << endl;
    SetConsoleTextAttribute(ctext, 12);
    cout << "[0] ";
    SetConsoleTextAttribute(ctext, 10);
    cout << " Go back to menu" << endl;
    cin >> opt4;
    SetConsoleTextAttribute(ctext, 15);
    while (opt4 != "0" && opt4 != "1" && opt4 != "2")
    {
        SetConsoleTextAttribute(ctext, 12);
        cout << "[1] ";
        SetConsoleTextAttribute(ctext, 10);
        cout << " Buy dollar" << endl;
        SetConsoleTextAttribute(ctext, 12);
        cout << "[2] ";
        SetConsoleTextAttribute(ctext, 10);
        cout << " Sell dollar" << endl;
        cin >> opt4;
    }
    if (opt4 == "1")
    {
    co:
        cout << "Rate: 1$ = 10480.00 UZS";
        SetConsoleTextAttribute(ctext, 12);
        cout << "\n[1] ";
        SetConsoleTextAttribute(ctext, 10);
        cout << " To buy currency" << endl;
        SetConsoleTextAttribute(ctext, 12);
        cout << "[2] ";
        SetConsoleTextAttribute(ctext, 10);
        cout << " To go back" << endl;
        cin >> anwse;
        SetConsoleTextAttribute(ctext, 15);
        if (anwse == "1")
        {
            cout << "How much dollar would you like to buy? " << endl;
            SetConsoleTextAttribute(ctext, 10);
            cout << "$ ";
            cin >> a_do;
            SetConsoleTextAttribute(ctext, 15);
            long double mul = a_do * Brate;
            if (mul > balance)
            {
                cout << "Sorry, you can't afford to buy that amount..." << endl;
                cout << "Your balance: " << b << " UZS" << endl;
                _getch();
                goto co;
            }
            else
            {
                SetConsoleTextAttribute(ctext, 10);
                cout << "$ " << a_do;
                SetConsoleTextAttribute(ctext, 15);
                cout << " has been bought successfully!" << endl;
                cout << "Your foreign currency balance: $" << Dollar_Buy(a_do);
                Dollar_Buy2(a_do, Brate);
                account();
            }
        }
        else if (anwse == "2")
        {
            goto coi;
        }
        else
        {
            while (anwse != "1" && anwse != "2")
            {
                cout << "Rate: 1$ = 10480.00 UZS";
                SetConsoleTextAttribute(ctext, 12);
                cout << "[1] ";
                SetConsoleTextAttribute(ctext, 10);
                cout << " To buy currency" << endl;
                SetConsoleTextAttribute(ctext, 12);
                cout << "[2] ";
                SetConsoleTextAttribute(ctext, 10);
                cout << " To go back";
                cin >> anwse;
            }
        }
    }
    else if (opt4 == "2")
    {
    oc:
        cout << "Rate: 1$ = 10540.00 UZS" << endl;
        SetConsoleTextAttribute(ctext, 12);
        cout << "[1] ";
        SetConsoleTextAttribute(ctext, 10);
        cout << " To sell currency" << endl;
        SetConsoleTextAttribute(ctext, 12);
        cout << "[2] ";
        SetConsoleTextAttribute(ctext, 10);
        cout << " To go back" << endl;
        cin >> anwser;
        if (anwser == "1")
        {
            cout << "How much dollar would you like to sell?" << endl;
            SetConsoleTextAttribute(ctext, 10);
            cout << "$ ";
            cin >> am_do;
            SetConsoleTextAttribute(ctext, 15);
            long double mul1 = am_do * Srate;
            if (am_do > D_B)
            {
                cout << "Sorry, you don't that amount of dollar in your account..." << endl;
                cout << "Your foreign currency balance: $ " << D_B << endl;
                _getch();
                goto oc;
            }
            else
            {
                SetConsoleTextAttribute(ctext, 10);
                cout << "$ " << am_do;
                SetConsoleTextAttribute(ctext, 15);
                cout << " has been sold successfully!" << endl;
                cout << "Your foreign currency balance: $" << Dollar_Sell(am_do);
                Dollar_Sell2(am_do, Srate);
                account();
            }
        }
        else if (anwser == "2")
        {
            goto coi;
        }
        else
        {
            while (anwser != "1" && anwser != "2")
            {
                cout << "Rate: 1$ = 10540.00 UZS" << endl;
                SetConsoleTextAttribute(ctext, 12);
                cout << "[1] ";
                SetConsoleTextAttribute(ctext, 10);
                cout << " To sell currency" << endl;
                SetConsoleTextAttribute(ctext, 12);
                cout << "[2] ";
                SetConsoleTextAttribute(ctext, 10);
                cout << " To go back" << endl;
                cin >> anwser;
            }
        }
    }
    else if (opt4 == "0")
    {
    system("cls");
    account();
     }

}
void General :: Payment()
{
    cout << "How much money you want to spend?" << endl;        // user enters the amount of money he/she wants to spend
    cin >> payment;
    if (payment > b) // if the amount of expenditure is bigger than balance, then show the following to express that he/she can't afford 
    {
        cout << "You can not afford to pay" << endl;
        cout << "Your current balance : " << b  << " UZS"<< endl;
        account();
    }
    else {  // if the amount of expenditure is NOT bigger than balance => 
        cout << endl << payment << " UZS has been deducted from your account" << endl;
        b = b - payment;
        cout << "Your current balance : " << b << endl;
        account();
    }
}
void General :: Transaction()
{

    if (balance > 0) 
    {
        cout << "Please enter the receiver's username : ";
        cin >> receiver;
       while (isNumeric(receiver)) {
            cout << "\nPlease, enter existing username!" << endl;
            cout << "The receiver's username : ";
            cin >> receiver;
        }
      while  (receiver == user)
        {
            cout << "\nSorry, you cannot transfer money to yourself" << endl;
            cout << "Try again!" << endl;
            cout << "The receiver's username : ";
            cin >> receiver;
        }
      if (receiver != user) 
      {
            cout << "Please enter the sum of money you want to send : ";
            cin >> send_m;
            if (b > send_m) {
                cout << "The transaction operation has been successfully done!" << endl;
                cout << "The user " << receiver << " received " << send_m << " UZS" << endl;
                b = b - send_m;
                cout << "Your current balance :  " << b << " UZS" << endl;
                _getch();
                account();
            }
            else {
                cout << "The transaction operation failed " << endl;
                cout << "Your current balance : " << b  << " UZS"<< endl;
                _getch();
                account();
            }
        }

    }
    else
    {
        cout << "Sorry, you do not have sufficient amount of money to transfer..." << endl;
        cout << "Balance : " << b << " UZS" << endl;
        _getch();
        account();
    }
}
void General :: Deposit()
{
    cout << "How much money would you like to deposit? " << endl;
    cin >> amount_mon;
    b = b + amount_mon;
    cout << "Balance: " << b << " UZS" << endl;
    account();
}

void General :: account()
{
    system("cls");
    HANDLE colortext = GetStdHandle(STD_OUTPUT_HANDLE);
    cout << "같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같" << endl;
    cout << "                 Welcome " << user << " to your private account!                 " << endl;
    cout << "같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같" << endl;
operations:
    SetConsoleTextAttribute(colortext, 12);
    cout << "[1] ";
    SetConsoleTextAttribute(colortext, 15);
    cout << " Balance" << endl;
    SetConsoleTextAttribute(colortext, 12);
    cout << "[2] ";
    SetConsoleTextAttribute(colortext, 15);
    cout << " Ex-change currency" << endl;
    SetConsoleTextAttribute(colortext, 12);
    cout << "[3] ";
    SetConsoleTextAttribute(colortext, 15);
    cout << " Payment " << endl;
    SetConsoleTextAttribute(colortext, 12);
    cout << "[4] ";
    SetConsoleTextAttribute(colortext, 15);
    cout << " Transaction" << endl;
    SetConsoleTextAttribute(colortext, 12);
    cout << "[5] ";
    SetConsoleTextAttribute(colortext, 15);
    cout << " Deposit" << endl;
    SetConsoleTextAttribute(colortext, 12);
    cout << "[6] ";
    SetConsoleTextAttribute(colortext, 15);
    cout << " Log out" << endl;
    SetConsoleTextAttribute(colortext, 12);
    cin >> opt2;
    SetConsoleTextAttribute(colortext, 15);
    if (opt2 == "1")
    {
        SetConsoleTextAttribute(colortext, 15);
        cout << "Balance: ";
        SetConsoleTextAttribute(colortext, 11);
        cout << b << " UZS" << endl;
        SetConsoleTextAttribute(colortext, 15);
        cout << "Foreign currency balance: ";
        SetConsoleTextAttribute(colortext, 11);
        cout << D_B << " $" << endl;
        _getch();
        goto operations;
    }
    else if (opt2 == "2")
    {
        Ex_change();
        goto operations;
    }
    else if (opt2 == "3")
    {
        Payment();
        goto operations;
    }
    else if (opt2 == "4")
    {
        Transaction();
        goto operations;
    }
    else if (opt2 == "5")
    {
        Deposit();
        goto operations;
    }
    else if (opt2 == "6")
    {
        system("cls");
        MAINFUNCTION();
    }
    else
    {
        system("cls");
        goto operations;
    }
}
