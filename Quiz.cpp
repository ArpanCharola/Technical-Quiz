#include<iostream>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
 using namespace std;
 class student
 {
 private:
     char name[20],roll[20];
     int marks,random;
 public:
    void getdata()
    {
        cout<<"Enter Name:";
        gets(name);
        cout<<"Enter Roll No: ";
        gets(roll);
        cout<<"\n";
    }
      void cpp()
{
    char choice;
    marks=0;

    int i=0,arr[9];
    while(i<10)
    {
        back:
    random=rand()%10;
    for(int j=0;j<=9;j++)
    {
        if(random==arr[j])
           {
            goto back;
           }
    }
    arr[i]=random;
    switch(random)
    {
        case 0:
    cout<<i+1<<")What is the correct syntax to print \Hello world\ in C++"<<endl;
    cout<<"a.print(\"Hello World\");"<<endl;
    cout<<"b.printf(\"Hello World\");"<<endl;
    cout<<"c.cout<<\"Hello World\";"<<endl;
    cout<<"d.console.log(\"Hello World\");"<<endl;
    cout<<"\n";
    choice=getch();
    if(choice=='c'||choice=='C')
    {
        marks++;
        cout<<"Your answer is correct"<<endl;
        cout<<"\n";
    }
    else
        cout<<"Your answer is wrong"<<endl;
        cout<<"\n";
        break;

    case 1:
    cout<<i+1<<")Identify the correct extension for user-defined header file in C++."<<endl;
    cout<<"a.   .cpp"<<endl;
    cout<<"b.   .py;"<<endl;
    cout<<"c.   .c"<<endl;
    cout<<"d.   .c++;"<<endl;
    cout<<"\n";
    choice=getch();
    if(choice=='a'||choice=='A')
    {
        marks++;
        cout<<"Your answer is correct"<<endl;
        cout<<"\n";
    }
    else
        cout<<"Your answer is wrong"<<endl;
        cout<<"\n";
        break;

    case 2:
    cout<<i+1<<")Identify the incorrect type of constructor."<<endl;
    cout<<"a.Default Constructor;"<<endl;
    cout<<"b.Parameterized Constructor;"<<endl;
    cout<<"c.Friend Constructor"<<endl;
    cout<<"d.Copy Constructor;"<<endl;
    cout<<"\n";
    choice=getch();
    if(choice=='c'||choice=='C')
    {
        marks++;
        cout<<"Your answer is correct"<<endl;
        cout<<"\n";
    }
    else
        cout<<"Your answer is wrong"<<endl;
        cout<<"\n";
        break;

        case 3:
    cout<<i+1<<")Which of the following data type is supported in C++ but not in C?"<<endl;
    cout<<"a.long"<<endl;
    cout<<"b.float;"<<endl;
    cout<<"c.double"<<endl;
    cout<<"d.bool;"<<endl;
    choice=getch();
    if(choice=='d'||choice=='D')
    {
        marks++;
        cout<<"Your answer is correct"<<endl;
        cout<<"\n";
    }
    else
        cout<<"Your answer is wrong"<<endl;
        cout<<"\n";
        break;

    case 4:
    cout<<i+1<<")Identify the correct syntax of arrays in C++"<<endl;
    cout<<"a.   int arr;"<<endl;
    cout<<"b.int arr[10];"<<endl;
    cout<<"c.arr{10};"<<endl;
    cout<<"d.arr[10];"<<endl;
    cout<<"\n";
    choice=getch();
    if(choice=='b'||choice=='B')
    {
        marks++;
        cout<<"Your answer is correct"<<endl;
        cout<<"\n";
    }
    else
        cout<<"Your answer is wrong"<<endl;
        cout<<"\n";
        break;

    case 5:
    cout<<i+1<<")Which of the following is address of operator?"<<endl;
    cout<<"a.   &"<<endl;
    cout<<"b.   *"<<endl;
    cout<<"c.   %"<<endl;
    cout<<"d.   ~"<<endl;
    cout<<"\n";
    choice=getch();
    if(choice=='a'||choice=='A')
    {
        marks++;
        cout<<"Your answer is correct"<<endl;
        cout<<"\n";
    }
    else
        cout<<"Your answer is wrong"<<endl;
        cout<<"\n";
        break;

    case 6:
    cout<<i+1<<")goto can be classified into which category?"<<endl;
    cout<<"a.Function"<<endl;
    cout<<"b.Label"<<endl;
    cout<<"c.Operator"<<endl;
    cout<<"d.Variable"<<endl;
    cout<<"\n";
    choice=getch();
    if(choice=='b'||choice=='B')
    {
        marks++;
        cout<<"Your answer is correct"<<endl;
        cout<<"\n";
    }
    else
        cout<<"Your answer is wrong"<<endl;
        cout<<"\n";
        break;

    case 7:
    cout<<i+1<<")By which of the following operators can be if-else statement replaced?"<<endl;
    cout<<"a.Logical Operator"<<endl;
    cout<<"b.Arithmetic Operator"<<endl;
    cout<<"c.Bitwise Operator"<<endl;
    cout<<"d.Ternary Operator"<<endl;
    cout<<"\n";
    choice=getch();
    if(choice=='d'||choice=='D')
    {
        marks++;
        cout<<"Your answer is correct"<<endl;
        cout<<"\n";
    }
    else
        cout<<"Your answer is wrong"<<endl;
        cout<<"\n";
        break;

    case 8:
    cout<<i+1<<")Choose the correct option which is mandatory in a function."<<endl;
    cout<<"a.function_name"<<endl;
    cout<<"b.return_type"<<endl;
    cout<<"c.parameters"<<endl;
    cout<<"d.All of the above"<<endl;
    cout<<"\n";
    choice=getch();
    if(choice=='a'||choice=='A')
    {
        marks++;
        cout<<"Your answer is correct"<<endl;
        cout<<"\n";
    }
    else
        cout<<"Your answer is wrong"<<endl;
        cout<<"\n";
        break;

    case 9:
    cout<<i+1<<")Under which pillar of OOPS does class and sub class come?"<<endl;
    cout<<"a.Encapsulation"<<endl;
    cout<<"b.Abstraction"<<endl;
    cout<<"c.Polymorphism"<<endl;
    cout<<"d.Inheritance"<<endl;
    cout<<"\n";
    choice=getch();
    if(choice=='d'||choice=='D')
    {
        marks++;
        cout<<"Your answer is correct"<<endl;
        cout<<"\n";
    }
    else
        cout<<"Your answer is wrong"<<endl;
        cout<<"\n";
        break;
    }
     i++;
    }
}
    void c()
{
    char choice;
    marks=0;

    int i=0,arr[9];
    while(i<10)
    {
        back:
    random=rand()%10;
    for(int j=0;j<=9;j++)
    {
        if(random==arr[j])
           {
            goto back;
           }
    }
    arr[i]=random;
    switch(random)
    {
        case 0:
    cout<<i+1<<")When fopen() is not able to open a file, it returns"<<endl;
    cout<<"a.EOF"<<endl;
    cout<<"b.NULL"<<endl;
    cout<<"c.RUNTIME ERROR"<<endl;
    cout<<"d.COMPILER DEPENDENT"<<endl;
    cout<<"\n";
    choice=getch();
    if(choice=='b'||choice=='B')
    {
        marks++;
        cout<<"Your answer is correct"<<endl;
        cout<<"\n";
    }
    else
        cout<<"Your answer is wrong"<<endl;
        cout<<"\n";
        break;

    case 1:
    cout<<i+1<<")C is a____________"<<endl;
    cout<<"a. Procedural computer programming language "<<endl;
    cout<<"b. Multi-paradigm computer programming language   "<<endl;
    cout<<"c. General purpose computer programming language "<<endl;
    cout<<"d. All of the above"<<endl;
    cout<<"\n";
    choice=getch();
    if(choice=='d'||choice=='D')
    {
        marks++;
        cout<<"Your answer is correct"<<endl;
        cout<<"\n";
    }
    else
        cout<<"Your answer is wrong"<<endl;
        cout<<"\n";
        break;

    case 2:
    cout<<i+1<<")C language was influenced by "<<endl;
    cout<<"a. FORTRAN"<<endl;
    cout<<"b. ALGOL-68"<<endl;
    cout<<"c. Assembly language"<<endl;
    cout<<"d. All of the above"<<endl;
    cout<<"\n";
    choice=getch();
    if(choice=='d'||choice=='D')
    {
        marks++;
        cout<<"Your answer is correct"<<endl;
        cout<<"\n";
    }
    else
        cout<<"Your answer is wrong"<<endl;
        cout<<"\n";
        break;

        case 3:
    cout<<i+1<<")Who is the father of C language?"<<endl;
    cout<<"a.Bjarne Stroustrup"<<endl;
    cout<<"b.Dennis Ritchie"<<endl;
    cout<<"c.Dr.E.D.Codd"<<endl;
    cout<<"d.James A.Gosling"<<endl;
    choice=getch();
    if(choice=='b'||choice=='B')
    {
        marks++;
        cout<<"Your answer is correct"<<endl;
        cout<<"\n";
    }
    else
        cout<<"Your answer is wrong"<<endl;
        cout<<"\n";
        break;

    case 4:
    cout<<i+1<<")C programs are converted to machine level language with the help of "<<endl;
    cout<<"a. compiler"<<endl;
    cout<<"b. assembly language"<<endl;
    cout<<"c. operating system"<<endl;
    cout<<"d. an editor "<<endl;
    cout<<"\n";
    choice=getch();
    if(choice=='a'||choice=='A')
    {
        marks++;
        cout<<"Your answer is correct"<<endl;
        cout<<"\n";
    }
    else
        cout<<"Your answer is wrong"<<endl;
        cout<<"\n";
        break;

    case 5:
    cout<<i+1<<")Which of the following is address of operator?"<<endl;
    cout<<"a.   &"<<endl;
    cout<<"b.   *"<<endl;
    cout<<"c.   %"<<endl;
    cout<<"d.   ~"<<endl;
    cout<<"\n";
    choice=getch();
    if(choice=='a'||choice=='A')
    {
        marks++;
        cout<<"Your answer is correct"<<endl;
        cout<<"\n";
    }
    else
        cout<<"Your answer is wrong"<<endl;
        cout<<"\n";
        break;

    case 6:
    cout<<i+1<<")goto can be classified into which category?"<<endl;
    cout<<"a.Function"<<endl;
    cout<<"b.Label"<<endl;
    cout<<"c.Operator"<<endl;
    cout<<"d.Variable"<<endl;
    cout<<"\n";
    choice=getch();
    if(choice=='b'||choice=='B')
    {
        marks++;
        cout<<"Your answer is correct"<<endl;
        cout<<"\n";
    }
    else
        cout<<"Your answer is wrong"<<endl;
        cout<<"\n";
        break;

    case 7:
    cout<<i+1<<")String concatenation means"<<endl;
    cout<<"a.Extracting a substring out of a string."<<endl;
    cout<<"b.Comparing the two strings to define the larger one."<<endl;
    cout<<"c.Combining two strings."<<endl;
    cout<<"d.Partitioning the string into two strings."<<endl;
    cout<<"\n";
    choice=getch();
    if(choice=='d'||choice=='D')
    {
        marks++;
        cout<<"Your answer is correct"<<endl;
        cout<<"\n";
    }
    else
        cout<<"Your answer is wrong"<<endl;
        cout<<"\n";
        break;

    case 8:
    cout<<i+1<<")Every C program ____"<<endl;
    cout<<"a.must contain one printf function"<<endl;
    cout<<"b.must have atleast one library"<<endl;
    cout<<"c.must have main function"<<endl;
    cout<<"d.Both b and c"<<endl;
    cout<<"\n";
    choice=getch();
    if(choice=='d'||choice=='D')
    {
        marks++;
        cout<<"Your answer is correct"<<endl;
        cout<<"\n";
    }
    else
        cout<<"Your answer is wrong"<<endl;
        cout<<"\n";
        break;

    case 9:
    cout<<i+1<<")The Format Identifier %u is used for"<<endl;
    cout<<"a.integer"<<endl;
    cout<<"b.unsigned integer"<<endl;
    cout<<"c.float"<<endl;
    cout<<"d.None of the above"<<endl;
    cout<<"\n";
    choice=getch();
    if(choice=='b'||choice=='B')
    {
        marks++;
        cout<<"Your answer is correct"<<endl;
        cout<<"\n";
    }
    else
        cout<<"Your answer is wrong"<<endl;
        cout<<"\n";
        break;
    }
     i++;
    }
}
    void py()
{
        char choice;
    marks=0;

    int i=0,arr[9];
    while(i<10)
    {
        back:
    random=rand()%10;
    for(int j=0;j<=9;j++)
    {
        if(random==arr[j])
           {
            goto back;
           }
    }
    arr[i]=random;
    switch(random)
    {
        case 0:
    cout<<i+1<<")Python is an"<<endl;
    cout<<"a.interpreted, high-level, general-purpose programming language"<<endl;
    cout<<"b.object-oriented programming language"<<endl;
    cout<<"c.procedural, functional, structured, and reflective programming language"<<endl;
    cout<<"d.All of the above"<<endl;
    cout<<"\n";
    choice=getch();
    if(choice=='d'||choice=='D')
    {
        marks++;
        cout<<"Your answer is correct"<<endl;
        cout<<"\n";
    }
    else
        cout<<"Your answer is wrong"<<endl;
        cout<<"Correct answer is D"<<endl;
        cout<<"\n";
        break;

    case 1:
    cout<<i+1<<")Python is designed by"<<endl;
    cout<<"a. Guido Van Rossum"<<endl;
    cout<<"b. James Gosling"<<endl;
    cout<<"c. Dennis Ritchie"<<endl;
    cout<<"d. Tim Berners-Lee"<<endl;
    cout<<"\n";
    choice=getch();
    if(choice=='a'||choice=='A')
    {
        marks++;
        cout<<"Your answer is correct"<<endl;
        cout<<"\n";
    }
    else
        cout<<"Your answer is wrong"<<endl;
        cout<<"Right answer is A"<<endl;
        cout<<"\n";
        break;

    case 2:
    cout<<i+1<<")Python first appeared in"<<endl;
    cout<<"a.March 1990"<<endl;
    cout<<"b.February 1991"<<endl;
    cout<<"c.September 1993"<<endl;
    cout<<"d.December 1987"<<endl;
    cout<<"\n";
    choice=getch();
    if(choice=='b'||choice=='B')
    {
        marks++;
        cout<<"Your answer is correct"<<endl;
        cout<<"\n";
    }
    else
        cout<<"Your answer is wrong"<<endl;
        cout<<"Correct answer is B"<<endl;
        cout<<"\n";
        break;

        case 3:
    cout<<i+1<<")Python filename extensions is/are "<<endl;
    cout<<"a.   .pyi"<<endl;
    cout<<"b.   .pyd and .pyc"<<endl;
    cout<<"c.   .py"<<endl;
    cout<<"d.All of the above"<<endl;
    choice=getch();
    if(choice=='d'||choice=='D')
    {
        marks++;
        cout<<"Your answer is correct"<<endl;
        cout<<"\n";
    }
    else
        cout<<"Your answer is wrong"<<endl;
        cout<<"Correct answer is D"<<endl;
        cout<<"\n";
        break;

    case 4:
    cout<<i+1<<")Python is used for"<<endl;
    cout<<"a.web development (server-side) and software development"<<endl;
    cout<<"b.mathematics and system scripting"<<endl;
    cout<<"c.Both of the above"<<endl;
    cout<<"d.None of the above"<<endl;
    cout<<"\n";
    choice=getch();
    if(choice=='c'||choice=='C')
    {
        marks++;
        cout<<"Your answer is correct"<<endl;
        cout<<"\n";
    }
    else
        cout<<"Your answer is wrong"<<endl;
        cout<<"Correct answer is C"<<endl;
        cout<<"\n";
        break;

    case 5:
    cout<<i+1<<")Which of the following is considered as comment in Python ?"<<endl;
    cout<<"a.<<this is a comment"<<endl;
    cout<<"b./*this is a comment*/"<<endl;
    cout<<"c.//this is a comment"<<endl;
    cout<<"d.# this is a comment"<<endl;
    cout<<"\n";
    choice=getch();
    if(choice=='d'||choice=='D')
    {
        marks++;
        cout<<"Your answer is correct"<<endl;
        cout<<"\n";
    }
    else
        cout<<"Your answer is wrong"<<endl;
        cout<<"Correct answer is D"<<endl;
        cout<<"\n";
        break;

    case 6:
    cout<<i+1<<")How do you create a variable with the floating number 2.8?"<<endl;
    cout<<"a.x = 2.8"<<endl;
    cout<<"b.x = float(2.8)"<<endl;
    cout<<"c.Both of them are correct"<<endl;
    cout<<"d.None of them are correct"<<endl;
    cout<<"\n";
    choice=getch();
    if(choice=='c'||choice=='C')
    {
        marks++;
        cout<<"Your answer is correct"<<endl;
        cout<<"\n";
    }
    else
        cout<<"Your answer is wrong"<<endl;
        cout<<"\n";
        break;

    case 7:
    cout<<i+1<<")What is the correct way to create a function in Python?"<<endl;
    cout<<"a.create myFunction()\:"<<endl;
    cout<<"b.function myfunction():"<<endl;
    cout<<"c.def myFunction():"<<endl;
    cout<<"d.None of the above"<<endl;
    cout<<"\n";
    choice=getch();
    if(choice=='c'||choice=='C')
    {
        marks++;
        cout<<"Your answer is correct"<<endl;
        cout<<"\n";
    }
    else
        cout<<"Your answer is wrong"<<endl;
        cout<<"\n";
        break;

    case 8:
    cout<<i+1<<")Which method can be used to return a string in upper case letters?"<<endl;
    cout<<"a.upper()"<<endl;
    cout<<"b.toUpperCase()"<<endl;
    cout<<"c.uppercase()"<<endl;
    cout<<"d.upperCase()"<<endl;
    cout<<"\n";
    choice=getch();
    if(choice=='a'||choice=='A')
    {
        marks++;
        cout<<"Your answer is correct"<<endl;
        cout<<"\n";
    }
    else
        cout<<"Your answer is wrong"<<endl;
        cout<<"\n";
        break;

    case 9:
    cout<<i+1<<")Which of these collections defines a LIST?"<<endl;
    cout<<"a.{\"name\": \"apple\", \"color\": \"green\"}"<<endl;
    cout<<"b.{\"apple\", \"banana\", \"cherry\"}"<<endl;
    cout<<"c.\[\"apple\", \"banana\", \"cherry\"]"<<endl;
    cout<<"d.(\"apple\", \"banana\", \"cherry\")"<<endl;
    cout<<"\n";
    choice=getch();
    if(choice=='c'||choice=='C')
    {
        marks++;
        cout<<"Your answer is correct"<<endl;
        cout<<"\n";
    }
    else
        cout<<"Your answer is wrong"<<endl;
        cout<<"\n";
        break;
    }
     i++;
    }
}
void result()
{
    int per=0;
    cout<<"\n\n\t\tStudent Name: "<<name<<endl;
    cout<<"\t\tRoll No: "<<roll<<endl;
    cout<<"\t\tMarks: "<<marks<<" out of 10"<<endl;
    per=100*marks/10;
    cout<<"\t\tPercentage: "<<per<<"%"<<endl;
    if(per>=50){
        cout<<"\t\tStatus:Pass"<<endl;
        cout<<"\t\tCongratulations,You are amazing!"<<endl;
    }
    else{
        cout<<"\t\tStatus:Fail"<<endl;
        cout<<"\t\tYou must work on your skills!"<<endl;
        cout<<"\t\tBetter luck next time"<<endl;
    }
}
};

int main()
 {

         char select;
        cout<<"\n\n\t\t*******************************"<<endl;
        cout<<"                         WELCOME TO QUIZ     "<<endl;
        cout<<"\t\t*******************************\n"<<endl;
        cout<<"\t\tLess than 50% will be Fail so choose wisely\n"<<endl;
        cout<<"\t\tSelect the subject in which you want to give quiz\n"<<endl;
        cout<<"\t\t1)C"<<endl;
        cout<<"\t\t2)C++"<<endl;
        cout<<"\t\t3)PYTHON"<<endl;
        select=getch();
        system("CLS");
        student s1,s2,s3;
        switch(select)
        {
        case '1':
            cout<<"\t\tC QUIZ"<<endl;
            s1.getdata();
            s1.c();
            system("CLS");
            s1.result();
            break;

        case '2':
            cout<<"\t\tC++ QUIZ"<<endl;
            s2.getdata();
            s2.cpp();
            system("CLS");
            s2.result();
            break;

        case '3':
            cout<<"\t\tPYTHON QUIZ"<<endl;
             s3.getdata();
            s3.py();
             system("CLS");
            s3.result();
            break;

        default:
            cout<<"Invalid input"<<endl;
            break;
        }
    return 0;
 }









