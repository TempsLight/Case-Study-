#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <cstring>

using namespace std;

struct ClassStudent{
int BookId;
char Title[1000];
char Author[1000];
int CostOfBook;
};
const int books=1000;
int Array;
ClassStudent ClassStudentobj[books];

void Add_Book(){
if (Array<books){
    cout<<"------Enter the Details of the Book------"<<endl;
    cout<<"Enter Book Id: ";
    cin>>ClassStudentobj[Array].BookId;
    cout<<"Enter Book Title: ";
    cin>>ClassStudentobj[Array].Title;
    cout<<"Enter Name of Author: ";
    cin>>ClassStudentobj[Array]. Author;
    cout<<"Enter the Cost of Book: ";
    cin>>ClassStudentobj[Array].CostOfBook;
    Array++;
}
else {
    cout<<"No more Space in the system for Another Book"<<endl;
}
}

void Display_Books(){
for (int i=0; i < Array; i++)
    {
        cout<<"---Detail of all books in liabrary---"<<endl;
        cout<<"Book ID: "<<ClassStudentobj[1].BookId<<endl;
        cout<<"Book Title: "<<ClassStudentobj[i].Title<<endl;
        cout<<"Author Name: "<<ClassStudentobj[1].Author<<endl;
        cout<<"Cost of Book: "<<ClassStudentobj[1].CostOfBook<<endl;
    }
}

void Book_Author(){
    char Search_Book[1000];
    cout<<"Enter the Author: "<<endl;
    cin>>Search_Book;
    int i=0;
    while(i<Array){
        if(strcmp(Search_Book,ClassStudentobj[1].Author)==0);
        {
            cout<<endl;
            cout<<"Book ID: "<<ClassStudentobj[1].BookId<<endl;
            cout<<"Book Title: "<<ClassStudentobj[i].Title<<endl;
            cout<<"Author Name: "<<ClassStudentobj[1].Author<<endl;
            cout<<"Cost of Book: "<<ClassStudentobj[1].CostOfBook<<endl;
            i++;
        }
    }
}


int main()
{
    string username;
    string password;
    int loginattempt = 0;

    while (loginattempt < 3)
    {
        cout <<"LogIn First to Access the Library Management System"<<endl<<endl<<endl;
        cout << "USERNAME: ";
        cin >> username;
        cout << "PASSWORD: ";
        cin >> password;

    if (username == "1" && password == "1")
    {
    break;
    }
    else
    {
    cout << "Invalid login attempt. Please try again."<<endl;
    loginattempt++;
    }
    }
    if (loginattempt == 3)
    {
            cout << "Intruder Detected!";
            return 0;
    }
    system("cls");
    cout << "Welcome Librarian"<<endl<<endl<<endl;
    system("pause");


   int choice;
   char Input;
   do{system("cls");
       cout<<"=====Library Management System====="<<endl;
       cout<<"[1] Enter a Book" <<endl;
       cout<<"[2] Display all Records of Book"<<endl;
       cout<<"[3] Search Book by Authors Name"<<endl;
       cout<<"[4} Count Total Books in Library"<<endl;
       cout<<"[5] Exit"<<endl;
       cin>>choice;

       switch(choice)
       {
       case 1:
            system("cls");
            Add_Book();
            break;
       case 2:
           system("cls");
            Display_Books();
            break;
       case 3:
            system("cls");
            Book_Author();
            break;
       case 4:
            system("cls");
            cout<<"Total Number of Books in Library: "<<Array<<endl;
            break;
       case 5:
            system("cls");
            cout<<"Thank You For Using the System"<<endl<<endl;
            exit(0);
       default:
        cout<<"Invalid Choice Please Try Again"<<endl;
        cout<<"Do you want to Continue? (Y/N): ";
        cin>>Input;

       }

   } while (Input=='Y' || Input=='y');
}
