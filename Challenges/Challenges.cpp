/*
* author : Omar Zaida
* 
* Copyright :  we dont do that here, free to all 
*09/01/2023 started the course
*
*/


#include <iostream>// the good ol iostream

//data structures
#include<vector> // vectors
#include<deque>//deque
#include<list>
#include<forward_list>
#include<set>
#include<map>


//utilities
#include<climits>// mins max and others
#include<cfloat> // mins max and others
#include<iomanip>//manipulate the input output format
#include<cctype>//c style strings functions
#include<cstring>//character base function
#include<string>
#include<cmath>
#include<fstream>
#include<algorithm>
#include<sstream>

//My defined libraries/classes
#include"Movies.h"
#include"Mystring.h"
#include"Account.h"
#include"SavingsAccount.h"
#include"TrustAccount.h"
#include"CheckingAccount.h"
#include"AccountsUtility.h"
#include"Test.h"
#include"TestUtil.h"
#include"Song.h"




//definition for macros and typenames




//some of the used functions from std, to avoid writting std::foo
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::boolalpha;
using std::noboolalpha;
using std::fixed;
using std::setprecision;
using std::string;










void ReturnTypesInfo();


/********************************** methodes declaration for  challenges***************************/
void S4Challenge();

void S5Challenge();

void S6Challenge();

void S7Challenge();

void S8Challenge();

void S9Challenge();

void S10Challenge();

void Assignement1();

void S11Challenge();

void S12Challenge();

void S13Challenge();

void S14Challenge();

void S15_16Challenge();


void S17Challenge();

void S18Challenge();

void S19Challenge();

void S20Challenge();

void S21Challenge();


void S23Challenge();
/*******************************************************  methodes used by  the challenges*********************************************************************/
// S10
string Encrypt(string , string , string );
string Decrypt(string , string , string );
//S11
void Insert(vector<int>& collection);
void Print(const vector<int>& collection);
void Mean(const vector<int>& collection);
void Minimum(const vector<int>& collection);
void Maximum(const vector<int>& collection);
void Occurences(const vector<int>& collection);
void Quit();
//S12
int* applyall(const int* const arrayOne,size_t sizeOne,const int* const arrayTwo,size_t sizeTwo);
void printArray(int* array, int size);
//S13
void AddMovies(Movies& movies);
void ShowAllMovies(Movies& movies);
void FindMovie(Movies& movies);
void UpdateWatchCount(Movies& movies);
//S14
void DisplayCharString(Mystring& Mystring);
//S19
void S19Challenge1();
void S19Challenge2();
void S19Challenge3();
int findOccurencesOfWord(string& word, string& phrase);
int findOccurencesOfWordtoo(string& word, string& comparedword);
void S19Challenge4();
struct City {
    std::string name;
    long population;
    double cost;
};
struct Country {
    std::string name;
    std::vector<City> cities;
};
struct Tours {
    std::string title;
    std::vector<Country> countries;
};
//S20
void S20Challenge1();
void S20Challenge2();
void S20Challenge3();
void S20Challenge4();
//S20-1
template<typename T>
void displayVector(const vector<T>& vec);

template<typename T>
void displayDeque(const std::deque<T>& vec);

bool isPalindrome(const std::string& str);

//S20-2
void display_menu();
void play_current_song(const Song& song);
void display_playlist(const std::list<Song>& playlist, const Song& current_song);

//S20-3
void display_words(const std::map<std::string, int>& words);
void display_words(const std::map<std::string, std::set<int>>& words);
std::string clean_string(const std::string& s);
void part1();
void part2();
/***********************************Globale variables for the S6 challenges****************************************/
const double smallRoomFee{ 25.0 };
const double largeRoomFee{ 35.0 };
const double tax{ 0.06 };
const int validityInDays{ 30 };





/**************************************** main funtion : will be running most tests for the entire course ******************************************/
int main()
{
  
    S20Challenge();
  
    return 0;// just return whatever number you want , usually i run void main() but i m trying to follow the course to the letter xD
}




/* 
 *though methode are only talked about in later Sections , I opted to use them since it will permit me to review 
 *all the section challenges in a quick and fast way
 */
/****************************************methodes definitions*******************************************/
void ReturnTypesInfo(){
    cout << endl << "*********************************** DatTypes ********************** \n";

    cout << "-size of short : " << sizeof(short) << endl;
    cout << "  Min is: " << SHRT_MIN << " Max is: " << SHRT_MAX << endl;

    cout << "-size of int : " << sizeof(int) << endl;
    cout << "  Min is: " << INT_MIN << " Max is: " << INT_MAX << endl;

    cout << "-size of long : " << sizeof(long) << endl;
    cout << "  Min is: " << LONG_MIN << " Max is: " << LONG_MAX << endl;

    cout << "-size of float : " << sizeof(float) << endl;
    cout << "  Min is: " << FLT_MIN << " Max is: " << FLT_MAX << endl;

    cout << "-size of double : " << sizeof(double) << endl;
    cout << "  Min is: " << DBL_MIN << " Max is: " << DBL_MAX << endl;

    cout << "-size of char : " << sizeof(char) << endl;
    cout << "  Min is: " << CHAR_MIN << " Max is: " << CHAR_MAX << endl;

    cout << "-size of long long : " << sizeof(long long) << endl;
    cout << "  Min is: " << LLONG_MIN << " Max is: " << LLONG_MAX << endl;

    cout << "-size of long  double : " << sizeof(long double) << endl;
    cout << "  Min is: " << LDBL_MIN << " Max is: " << LDBL_MAX << endl;

    cout << "-size of string : " << sizeof(string) << endl;
}

//Section 4 challenge
 void S4Challenge() {
     int number;
     cout << "Insert your favorite number:\n";
     cin >> number;
     cout << "that's my favorite number too!:\n";
     cout << "no really!! :" << number << " is my favorite number ! " << std::endl;
}

 //S5:Structure of C++ program
 void  S5Challenge() {
     // no challenge , all exercices where on the course itself
     cout << "the section had no challenge"<<endl;
}

 //Section 6: Variables
 void S6Challenge() {
     cout << "Welcome to Frank's Room Cleaning Service" << endl;
     cout << "Small room cost 25$ to clean . Bigger rooms cost 30$ to clean";
     cout << endl << endl;
     int smallRoom=0, bigRoom=0;
     cout << "How many small rooms you want to be cleaned"<<endl;
     cin >> smallRoom ;
     cout << "How many large rooms you want to be cleaned" << endl;
     cin  >> bigRoom;
     cout << "\nnumber of small rooms is: " << smallRoom<<endl << "the number of the large rooms is: " << bigRoom<<endl;
     cout << "price per small room: " << smallRoom<<endl;
     cout << "price per large room: " << bigRoom<<endl;
     double cost = (smallRoom * smallRoomFee) + (bigRoom * largeRoomFee);
     cout << "Cost : " << cost <<endl;
     double costTax = cost * tax;
     cout << "Tax : " << costTax<<endl;
     cout << "======================================="<<endl ;
     cout << "Total estimate : " << cost + costTax<< endl;
     cout << "this estimate is valid for " <<validityInDays<<"days";
 }

 //Section 7 : Arrays and Vector
 void S7Challenge() {
     vector<int> vector1;
     vector<int> vector2;

     vector1.push_back(10);
     vector1.push_back(20);

     cout << "Vector 1 elements : " << vector1.at(0) << ", " << vector1.at(1)<<endl;



     vector2.push_back(100);
     vector2.push_back(200);

     cout << "Vector 1 elements : " << vector2.at(0) << ", " << vector2.at(1) << endl;


     vector<vector<int>> vector_2D;

     vector_2D.push_back(vector1);
     vector_2D.push_back(vector2);

     cout << "Vector 2d First row elements : " << vector_2D.at(0).at(0) << ", " << vector_2D.at(0).at(1) << endl;
     cout << "Vector 2d Second row elements : " << vector_2D.at(1).at(0) << ", " << vector_2D.at(1).at(1) << endl;

     vector1.at(0) = 1000;


     cout << "after the change of vector 1" << endl<< endl;
     cout << "Vector 2d First row elements : " << vector_2D.at(0).at(0) << ", " << vector_2D.at(0).at(1) << endl;
     cout << "Vector 2d Second row elements : " << vector_2D.at(1).at(0) << ", " << vector_2D.at(1).at(1) << endl;

     cout << "Vector 1 elements : " << vector1.at(0) << ", " << vector1.at(1) << endl;

     cout << "after execution we notice that the values are of vector 1 , did not parse into the 2d Vector" << endl;
 }

 //Section 8 : Statements and Operators
 void S8Challenge() {
     cout << boolalpha;

     const int  dollarCst{ 100 };

     const int quarterCst{ 25 };

     const int dimeCst{ 10 };

     const int nickelCst{ 5 };

     int numberOfCents{ 0 };
     cout << "using my own solution :" << endl;
     cout << "enter the number of cents you have : "<<endl;
     
     cin >> numberOfCents;

     int dollars =  numberOfCents / dollarCst;
     int quarters = (numberOfCents - (dollars * dollarCst))/quarterCst;
     int dimes = (numberOfCents - (dollars * dollarCst + quarters * quarterCst))/dimeCst;
     int nickels= (numberOfCents - (dollars * dollarCst + quarters * quarterCst+dimes*dimeCst))/nickelCst;
     int pennies = (numberOfCents - ((dollars * dollarCst) + (quarters * quarterCst) + (dimes * dimeCst) + (nickels * nickelCst)));
     cout << "You can provide change to this as follows : " << endl;
     cout << "dollars : "<< dollars << endl;
     cout << "quarters : "<< quarters << endl;
     cout << "dimes : "<< dimes << endl;
     cout << "nickels : "<< nickels << endl;
     cout << "pennies : "<< pennies << endl;
     cout << "====================================" << endl;
     cout << "using modulo : " << endl;
     int balance{ 0 };

     int dollarsM = numberOfCents / dollarCst;
     balance = numberOfCents % dollarCst;
     int quartersM = balance/ quarterCst;
     balance %= quarterCst;
     int dimesM = balance / dimeCst;
     balance %= dimeCst;
     int nickelsM = balance / nickelCst;
     balance %= nickelCst;
     int penniesM = balance;
     cout << "You can provide change to this as follows : " << endl;
     cout << "dollars : " << dollarsM << endl;
     cout << "quarters : " << quartersM << endl;
     cout << "dimes : " << dimesM << endl;
     cout << "nickels : " << nickelsM << endl;
     cout << "pennies : " << penniesM << endl;




     cout << noboolalpha;
 }

 //Section 9 : Program flow => if/else-?-switch/case-for-while-doWhile-?;
 void S9Challenge() {
     vector<int> collection{};
     char userInput{};
     int addednumber{};
     do {
         cout << "=========================================================" << endl;
         cout << " A to add an element \n P to print the list \n M to get the mean of the list \n S to find the min of the list\n F to find a number \n L to find the max of the list \n Q to quit \n your input :" << endl;
         cin >> userInput;
         switch (userInput)
         {
         case 'A':
         case 'a':
         {
             cout << "insert the element u want to add :" << endl;
             cin >> addednumber;
             collection.push_back(addednumber);
             cout << "added number: " << addednumber << endl;
             break;
         }

         case 'P':
         case 'p':
         {
             cout << "printing elements : " << endl;
             cout << "[";
             for (auto v : collection)
             {
                 cout << v << "\t";
             }
             cout << "]";
             if (collection.size()==0)
             {
                 cout << "-List is empty";
             }
             cout << endl;
             break;
         }

         case 'M':
         case 'm':
         {
             if (collection.size() == 0) {
                 cout << "cant calculate the mean of an empty list" << endl;
                 break;
             }
             int result{};
             for (auto v : collection)
             {
                 result += v;
             }
             cout << "the mean is : " << (double)result / collection.size() << endl;
             break;
         }
         case 'S':
         case 's':
         {

             if (collection.size() == 0) {
                 cout << "cant calculate find the minimum of an empty list" << endl;
                 break;
             }
             else
             {
                 int min = collection[0];

                 for (auto v : collection)
                 {
                     if (v < min)
                     {
                         min = v;
                     }
                 }
                 cout << "the minimum is : " << min << endl;
             }


             break;
         }
         case 'L':
         case 'l':
         {
             if (collection.size() == 0) {
                 cout << "cant find the maximum of an empty list" << endl;
                 break;
             }
             else
             {
                 int max{ collection[0] };
                 for (auto v : collection)
                 {
                     if (v > max)
                     {
                         max = v;
                     }
                 }
                 cout << "the maximum is : " << max << endl;
                 break;
             }

         }
         case 'F':
         case 'f':
         {  if (collection.size() == 0) {
             cout << "cant find an elements occurences in an empty list" << endl;
             break;
         }
         else
         {
             int numberWW{};
             int occurences{ 0 };
             cout << "what number you want to find? " << endl;
             cin >> numberWW;
             for (auto v : collection)
             {
                 if (v ==numberWW)
                 {
                     occurences++;
                 }
             }
             cout << "the number of occurences of "<< numberWW <<" is : " << occurences<<"times" << endl;
             break;
         }}
         case 'q':
         case 'Q':
         {
             cout << "Goodbye" << endl;
             break;
         }
         default:
             break;
         }

     } while (userInput != 'Q' && userInput != 'q');
 }

 //Section 10 : characters and strings
 void S10Challenge(){
     string alphabet{ "lmnopqrstuvwxyzABCDEFGHIJKLabcdefghijkMNOPQRSTUVWXYZ " };
     string cypher = { "ijklmnopqrstuvwxfghKLMNOPQRSTUVWXYZAyzabcdeBCDEFGHIJ_" };
     string userInput{""};
     string choice{};

     

     do
     {
        
         cout << " E : encrypt a text  " << endl << " D : decrypt a text" << endl<< " Q : QUIT" << endl;
         cin >> choice;
         cin.clear();
         cin.ignore();

         switch (choice.at(0))
         {
         case 'E':
         case 'e':
         {
             cout << "we will cypher your text, Input something :" << endl;
             getline(cin, userInput);

             string encrypted = Encrypt(userInput, alphabet, cypher);

             cout << encrypted << endl;
             break;
         }
         case 'D':
         case 'd':
         {
             cout << "we will Decrypt your text, Input something :" << endl;
             getline(cin, userInput);

             string encrypted = Decrypt(userInput, alphabet, cypher);

             cout << encrypted << endl;
             break;
         }
         case 'Q':
         case 'q':
         {
             cout << "goodBye" << endl;
             break;
         }
         default:
             break;
         }
     } while (choice.at(0)!='q' && choice.at(0) !='Q');
     
  
 }

 string Encrypt(string input, string alphabet, string cypher) {
     string result{};
     for (char c :input)
     {
         if (alphabet.find(c)==string::npos)
         {
             cout << "character isnt present in the table" << endl;
             break;
         }
        result+=cypher.at( alphabet.find(c));
     }

     return result;
 }

 string Decrypt(string input, string alphabet, string cypher) {
     string result{};
     for (char c : input)
     {
         if (cypher.find(c) == string::npos)
         {
             cout << "character isnt present in the cypher" << endl;
             break;
         }
         result += alphabet.at(cypher.find(c));
     }

     return result;
 }

 void Assignement1() {
     string input{};
     cout << "input a string"<<endl;
     getline(cin, input);
     cout << "your pyramid : " << endl << endl << endl;

     for (size_t i = 0; i < input.length(); i++)
     {
         //priting left space 
             for (size_t space= 0;space<= input.length()-i;space++)
             {
                 cout << " ";
             }
         //priting the word 1 letter then 2 letters, then 3  until lenght-1
         for (size_t j = 0; j <= i;j++) {
             cout << input.at(j);
        } 
         //mirroring the print
         if (i != 0) {
             for (size_t j = i; j > 0; j--) {
                 cout << input.at(j-1);
             }
         }
         cout << endl;
     }
 }



 //Section 11 : methodes/functions
 void S11Challenge() {
     vector<int> collection{};
     char userInput{};
     int addednumber{};
     do {
         cout << "=========================================================" << endl;
         cout << " A to add an element \n P to print the list \n M to get the mean of the list \n S to find the min of the list\n F to find a number \n L to find the max of the list \n Q to quit \n your input :" << endl;
         cin >> userInput;
         switch (userInput)
         {
         case 'A':
         case 'a':
         {
             Insert(collection);
             break;
         }

         case 'P':
         case 'p':
         {
             Print(collection);
             break;
         }

         case 'M':
         case 'm':
         {
             if (collection.size() == 0) {
                 cout << "cant calculate the mean of an empty list" << endl;
                 break;
             }
             Mean(collection);
             break;
         }
         case 'S':
         case 's':
         {

             if (collection.size() == 0) {
                 cout << "cant calculate find the minimum of an empty list" << endl;
                 break;
             }
             Minimum(collection);
             break;
         }
         case 'L':
         case 'l':
         {
             if (collection.size() == 0) {
                 cout << "cant find the maximum of an empty list" << endl;
                 break;
             }
             Maximum(collection);
             break;

         }
         case 'F':
         case 'f':
         {  
             if (collection.size() == 0) {
             cout << "cant find an elements occurences in an empty list" << endl;
             break;
         }
         Occurences(collection);
            
             break;
         }
         case 'q':
         case 'Q':
         {
             Quit();
             break;
         }
         default:
             break;
         }

     } while (userInput != 'Q' && userInput != 'q');
 }


 void Insert(vector<int>& collection) {
     int value;
     cout << "insert the element you want to add :" << endl;
     cin >> value;
     collection.push_back(value);
     cout << "added number: " << value << endl;
 }
 void Print(const vector<int>& collection) {
     cout << "printing elements : " << endl;
     cout << "[";
     for (auto v : collection)
     {
         cout << v << "\t";
     }
     cout << "]";
     if (collection.size() == 0)
     {
         cout << "-List is empty";
     }
     cout << endl;
 }
 void Mean(const vector<int>& collection) {
     int result{};
     for (auto v : collection)
     {
         result += v;
     }
     cout << "the mean is : " << (double)result / collection.size() << endl;
 }
 void Minimum(const vector<int>& collection) {

     int min = collection[0];

     for (auto v : collection)
     {
         if (v < min)
         {
             min = v;
         }
     }
     cout << "the minimum is : " << min << endl;
 }
 void Maximum(const vector<int>& collection) {
     int max{ collection[0] };
     for (auto v : collection)
     {
         if (v > max)
         {
             max = v;
         }
     }
     cout << "the maximum is : " << max << endl;
 }
 void Occurences(const vector<int>& collection) {
     int numberWW{};
     int occurences{ 0 };
     cout << "what number you want to find? " << endl;
     cin >> numberWW;
     for (auto v : collection)
     {
         if (v == numberWW)
         {
             occurences++;
         }
     }
     cout << "the number of occurences of " << numberWW << " is : " << occurences << "times" << endl;
 }
 void Quit() {
     cout << "Goodbye" << endl;
 }


 //Section 12 : Pointers
 void S12Challenge() {
     //void pointers have no type therefore can store any types. (Universal pointer)
     void* voidPtr{ nullptr };
     cout << "size of my computer pointers is : " << sizeof(voidPtr) << endl;
     cout << "My adress is :" << voidPtr << endl;
     delete voidPtr;

     //static arrays for testing purposes .
     int array1[5]{ 1,2,3,4,5 };
     int array2[10]{ 1,2,3,4,5,6,7,8,9,10 };

     int* newArray{};
     newArray = applyall(array1, 5, array2, 10);
     cout << " array One is : " << endl;
     printArray(array1, 5);
     cout << " array Two is : " << endl;
     printArray(array2, 10);
     cout << " the resulting array  is : " << endl;
     printArray(newArray, 50);

     delete [] newArray;

 }


 int* applyall(const int* arrayOne, size_t sizeOne, const int* arrayTwo, size_t sizeTwo) {
     int* newArrayPointer{nullptr};
     size_t finalSize{ sizeOne * sizeTwo };

     newArrayPointer = new int[finalSize];
     int position = 0;
     for (size_t i = 0; i < sizeTwo; i++)
     {
         for (size_t j = 0; j < sizeOne; j++)
         {
             *(newArrayPointer + position) = arrayOne[j] * arrayTwo[i];
             position++;
         }
         
     }
     return newArrayPointer;
 }
 void printArray(int* array, int size) {
     for (int  i = 0; i < size; i++)
     {
         cout << "\t" << *(array + i);
         if ((i+1) % 5 == 0)
         {
             cout << endl;
         }
      
     }
   
     cout << endl;

 }

 
 //Section 13 :OOP
 void S13Challenge() {
     char userInput{};
     Movies HomeCinema;
     
     do
     {
         cout << "Q to Quit\nA to Add a movie\nD to diplay all your current movies\nF to find a movie in your list\nU to update the watch count of a movie" << endl;
         cin >> userInput;
         cin.clear();
         cin.ignore();
         switch (userInput)
         {
         case 'a':
         case'A':
         {
             AddMovies(HomeCinema);
             break;
         }
         case 'F':
         case'f':
         {
             FindMovie(HomeCinema);
             break;
         }
         case 'D':
         case'd':
         {
             ShowAllMovies(HomeCinema);
             break;
         }
         case 'U':
         case'u':
         {
             UpdateWatchCount(HomeCinema);
             break;
         }






         case'q' :
         case'Q' :
         {
             cout << "GoodBye" << endl;
             break;
         }
         default:
             break;
         }

     } while (userInput!='q' && userInput!='Q');
 }


 void AddMovies(Movies &movies ) {
     string name{}; Rating rating{R}; long watchCount{};
     cout<<"Name of the movie : "<<endl;
     cin >> name;
     cout<<"Rating of the movie R ,PG ,PG13 or G : "<<endl;
     string ratingInput{};
     cin >> ratingInput;
     if (ratingInput =="R")
     {
         rating = R;
     }
     else if (ratingInput =="PG")
     {
         rating = PG;
     } 
     else if (ratingInput =="PG13")
     {
         rating = PG_13;
     }
     else if (ratingInput =="G")
     {
         rating = G;
     } 
     else
     {
         rating = R;
         cout << "Unhandled inputs : Default rating is R" << endl;
     }
     
     cout<<"watch count of the movie : "<<endl;
     cin >> watchCount;
     if (movies.AddMovie(name,rating,watchCount))
     {
         cout << "Added succesfully" << endl;
     }
 }
 void ShowAllMovies(Movies &movies) {
     if (movies.NumberOfMovies()==0)
     {
         cout << "Empty List" << endl;
         return;
     }
     cout << "Showing all movies" << endl;
     movies.ShowAllMovies();
 }
 void FindMovie(Movies& movies) {
     string name{}; 
     cout << "Name of the movie  to fetch: " << endl;
     cin >> name;

     if (movies.NumberOfMovies() == 0)
     {
         cout << "Can't fetch in an Empty List" << endl;
         return;
     }
     movies.FindMovie(name);
 }
 void UpdateWatchCount(Movies& movies) {
     string name{};
     cout << "Name of the movie to Update : " << endl;
     cin >> name;
     if (movies.NumberOfMovies() == 0)
     {
         cout << "Can't fetch in an Empty List" << endl;
         return;
     }

     if (movies.AddWatchCount(name))
     {
         cout << "watch Count Updated" << endl;
     }
 }





 //Section 14 :Operator overloading
 void S14Challenge() {
     char* input{};
     input = new char[6]{ 'H','e','l','l','o' };

    

     Mystring test{input};
     delete[] input;
     //copy
     Mystring copy{ test };
     copy = test;
     DisplayCharString(copy);
     
     Mystring moved{std::move( test) };
     DisplayCharString(moved);
     test <= moved;
     DisplayCharString(test);
    ++test;

    cout << boolalpha;

    cout << (test == test)<<endl;
    cout << (test != test) << endl;
    cout << (test < test) << endl;
    cout << (test > test) << endl;

    Mystring concat = (test * 3);

    DisplayCharString(concat);
    copy *= 2;
    DisplayCharString(copy);
    cout << noboolalpha;

    Mystring alpha = copy + concat;

    alpha += copy;

    DisplayCharString(alpha);
     

     
 }


 void DisplayCharString(Mystring& Mystring) {
     for (size_t i = 0; i <Mystring.getlength(); i++)
     {
         cout << Mystring.MyString()[i];
     }
     cout << endl;
 }

 //Section 15 : inheritance//Section 16 : Polymorphism
 void S15_16Challenge() {

     vector<Account *> accounts;

     Account* account1 = new CheckingAccount("testChecking", 100);
     Account* account2 = new SavingsAccount("testSaving", 100,5.0);
     Account* account3 = new TrustAccount("testTrust", 100,20.0);



     accounts.push_back(account1);
     accounts.push_back(account2);
     accounts.push_back(account3);
 
     SavingsAccount saving = SavingsAccount("savingAccount", 20, 20);
     SavingsAccount trust = TrustAccount("TrustAccount", 10, 10);
     CheckingAccount checking = CheckingAccount("checkingAccount", 5);

     cout << saving << endl;
     cout << trust << endl;
     cout << checking << endl;

     cout << "===============================================" << endl;
     Display(accounts);
     cout << "===============================================" << endl;
     MassDeposit(accounts, 10);
     cout << "===============================================" << endl;
     Display(accounts);
     cout << "===============================================" << endl;
     MassWithdraw(accounts, 110);
     cout << "===============================================" << endl;
     Display(accounts);
     
     delete  account1; 
     delete  account2; 
     delete  account3;
 }

 

 //Section 17 :Smart pointers
 void S17Challenge() {
     std::unique_ptr<vector<std::shared_ptr<Test>>> vecPtr;
     vecPtr = make();
     cout << "How many elements u want to insert";
     int num{};
     cin >> num;
     cin.clear();
     cin.ignore();
     fill(*vecPtr, num);
     cout << "Your vector is : ";

     DisplayPtrVector(*vecPtr);

 }

 //Section 18 :Exception hadnling, i know i had so many unhandeled exception in the other section but i m following the course.
 // now that we are doing exception handling i can finally work in handeling all them exception , especially them NullPointerException >:(
 void S18Challenge() {
     cout << "testing both exception we implemented" << endl;
     char input{};
     do
     {
         cout << "chose and exception to test : F for funds exception , B for balance Exception,Q to quit the test" << endl;

         cin >> input;
         cin.clear();
         cin.ignore();
         switch (input)
         {
         case 'f':
         case'F':
         {
             try{
             Account* testFunds = new SavingsAccount("test", 0, 0);
             testFunds->Withdraw(200);
             cout << "Done" << endl;
             }
             catch (std::exception& ex) {
                 cout << ex.what()<<endl;
                 cout << endl;
             }
             break;
         } 
         case 'B':
         case'b':
         {
             try {
                 Account* testBalance = new SavingsAccount("test", -2, 0);
                 cout << "Done" << endl;
             }
             catch (std::exception& ex) {
                 cout << ex.what() << endl;
                 cout << endl;
             }
             break;
             break;
         }
         case 'Q':
         case'q':
         {
             Quit();
             break;
         }
         default:
             break;
         }

     } while (input!='q' && input!='Q');
    
 }

 //Section 19 :i/o - Streams
 void S19Challenge() {
     cout << "This section had many challenge ," << endl;
     char input{};
     do
     {
         cout << "chose from 1 to 4 to see one or Q to quit" << endl;

         cin >> input;
         cin.clear();
         cin.ignore();
         switch (input)
         {
         case '1':
         {
             S19Challenge1();
             break;
         }
         case '2':
         {
             S19Challenge2();
             break;
         }
         case '3':
         {
             S19Challenge3();
             break;
         }case '4':
         {
             S19Challenge4();
             break;
         }

         case 'Q':
         case'q':
         {
             Quit();
             break;
         }
         default:
             break;
         }

     } while (input != 'q' && input != 'Q');
     
      
    
    
 }

 void S19Challenge1() {


    
     Tours tours
     { "Tour Ticket Prices from Morocco",
         {
             {
                 "Colombia", {
                     { "Bogota", 8778000, 400.98 },
                     { "Cali", 2401000, 424.12 },
                     { "Medellin", 2464000, 350.98 },
                     { "Cartagena", 972000, 345.34 }
                 },
             },
             {
                 "Brazil", {
                     { "Rio De Janiero", 13500000, 567.45 },
                     { "Sao Paulo", 11310000, 975.45 },
                     { "Salvador", 18234000, 855.99 }
                 },
             },
             {
                 "Chile", {
                     { "Valdivia", 260000, 569.12 },
                     { "Santiago", 7040000, 520.00 }
             },
         },
             { "Argentina", {
                 { "Buenos Aires", 3010000, 723.77 }
             }
         },
     }
     };


     const int field1size{ 10 };
     const int field2size{ 20 };
     const int field3size{ 15 };
     const int field4size{ 15 };

     std::cout <<std::setw(((field1size + field2size + field3size + field4size) -tours.title.length())/2)<<""<<tours.title << std::endl;//trying to find the location where i can put my title .We substract my desired mesurement form the lenght to try and figure how much space we will leave

    



     cout<<std::setw(field1size) << std::left << "Country" 
         << std::setw(field2size)<<std::left<<"City" 
         << std::setw(field3size) << std::right <<"Population" 
         << std::setw(field4size) << std::right <<"Cost" << endl;
     cout << std::setw(field1size+field2size+field3size+field4size)<<std::setfill('-')<<""<<endl;
       
     
     cout << std::setfill(' ') << endl;
     for (auto &country : tours.countries) {     
         for (auto &city : country.cities) {    
             if (city.name==country.cities.at(0).name)
             {
                 std::cout << std::setw(field1size) << std::left << country.name;
                 std::cout << std::setw(field2size) << std::left << city.name;
             }
             else {
                 std::cout << std::setw(field1size) << std::left << "";
                 std::cout << std::setw(field2size) << std::left << city.name;
             }


            
             cout  << std::setw(field3size) << std::right << setprecision(9) << city.population
                  << std::setw(field4size) << std::right << setprecision(2)<<std::fixed << city.cost
                     << std::endl;
         }

         cout << std::setw(field1size + field2size + field3size + field4size) << std::setfill('-') << "" << endl;


         cout << std::setfill(' ') << endl;
     }

     std::cout << std::endl << std::endl;




     cout<<std::resetiosflags(std::ios::boolalpha);
     cout << std::resetiosflags(std::ios::showbase);
     cout << std::resetiosflags(std::ios::showpos);
     cout << std::resetiosflags(std::ios::basefield);
     cout<< setprecision(6);
     
 }
 void S19Challenge2() {
     std::fstream file{ "responses.txt",std::ios::in };
     string line{};
     string correctAnswer{};
     string name{};
     string answer{};
     int counter{};
     int index{};
     int studentCounter{};
     double totalScore{};

     if (!file.is_open())
     {
         std::cerr << "error finding the file" << endl;
         return;
         
     }

     getline(file, correctAnswer);

     cout << std::setw(10) << std::left << "name"
         << std::setw(10) << "answers" << std::setw(10) << "grades" << endl;
     cout << std::setfill('-');
     cout << std::setw(30) << "";
     cout << std::setfill(' ')<<endl;
     while (!file.eof())
     {
         getline(file, name);
         getline(file, answer);
         studentCounter++;
         for (char a : answer)
         {
             if (a == correctAnswer.at(index))
             {
                 counter++;
             }
             index++;
         }
         cout << std::setw(10) << std::left << name
             << std::setw(10) << answer  << counter  << endl;

         totalScore += static_cast<double>(counter) ;
         index = 0;
         counter = 0;
     }
     cout << std::setfill('-');
     cout << std::setw(30) << "";
     cout << std::setfill(' ') << endl;
     if (totalScore!=0)
     {
         cout << std::setw(10) << std::left << "Average Score"
             << std::setw(10) << "" <<setprecision(1)<<std::fixed<< totalScore / studentCounter << "/" << correctAnswer.length() << endl;
     }
     else
     {
         cout << std::setw(10) << std::left << "Average Score"
             << std::setw(10) << "" << 0 << "/" << correctAnswer.length() << endl;
     }
  

     file.close();
 }
 void S19Challenge3() {
     std::fstream file{ "play.txt",std::ios::in };
     string line{};
     int occurenceCount{};
     string wordToLookFor{};

     cout << "what word do you want to look for" << endl;
     cin >> wordToLookFor;

     if (!file)
     {
         std::cerr << "could not open file, Path possible invalid"<<endl;
     }

     while (!file.eof())
     {
         //file >> line; for only picking one word

         getline(file, line);
         occurenceCount+=findOccurencesOfWord(wordToLookFor, line);
     }

     cout << "number of occurence of the word "<<wordToLookFor<<" is :" <<occurenceCount << endl;
     file.close();
 }
 //find number of occurences of a world within a phrase
 int findOccurencesOfWord(string &word,string &phrase){
     int index{};
     int occurences{};

     for (char p : phrase)
     {
         if (p == word.at(index))
         {
             index++;
         }
         else
         {
             index = 0;
         }

         if (index == word.length())
         {
             occurences++;
             index = 0;
         }

     }

     return occurences;;
 }
 //find number of occurences of a world  in an other word. this solution matches the one presented in the class
 int findOccurencesOfWordtoo(string& word, string& comparedword) {
     if (comparedword.find(word) == string::npos)
     {
         return 0;
     }
     else return 1;
 }

 void S19Challenge4() {
   
     std::fstream file{ "Romeo x Juliet.txt",  std::ios::in };//can only write
     std::fstream copy{ "copy.txt",std::ios::app };
     int index{};


     if (!file.is_open())
     {
         std::cerr << "Error opening or finding the file" << endl;
         return;
     } 
     if (!copy.is_open())
     {
         std::cerr << "Error opening or finding the file" << endl;
         return;
     }

     string line{};
     string temp{};
     while (!file.eof())
     {
         ++index;
         getline(file, line);
         copy <<std::setw(10)<<std::left <<index<< line << endl;

         line.clear();
     }
     cout << "done copying from  Romeo x Juliet.txt to copy.txt" <<endl;
     file.close();
     copy.close();
 }



 //Section 20 :STL
 void S20Challenge() {

     cout << "This section had many challenge ," << endl;
     char input{};
     do
     {
         cout << "chose from 1 to 4 to see one or Q to quit" << endl;

         cin >> input;
         cin.clear();
         cin.ignore();
         switch (input)
         {
         case '1':
         {
             S20Challenge1();
             break;
         }
         case '2':
         {
             S20Challenge2();
             break;
         }
         case '3':
         {
             S20Challenge3();
             break;
         }case '4':
         {
             S20Challenge4();
             break;
         }

         case 'Q':
         case'q':
         {
             Quit();
             break;
         }
         default:
             break;
         }

     } while (input != 'q' && input != 'Q');

 }

 //S20-1
 void S20Challenge1() {

     std::vector<string> testStrings{"a","aa","AaaA","test","A toyota's a toyota","A Santa at Nasa","ana","bob","palindrome"};
    

     std::for_each(testStrings.begin(), testStrings.end(), [](string x) {

         cout << x<<" is ";
         cout << (isPalindrome(x)?"" : "not ");
         cout << "a palindrome" << endl;
         });

 }
 bool isPalindrome(const std::string& str) {
     std::deque<char> myString;
     bool isPalindrome{ true };

     std::copy_if(str.begin(), str.end(), std::back_inserter(myString),
         [](char x) {
             return isalpha(x);
         });

     std::for_each(myString.begin(), myString.end(), [](char& x) {
         x = tolower(x);
         });

     while (!myString.empty())
     {
         if (*myString.begin() != *(myString.end() - 1)) {
             isPalindrome = false;
         }

         myString.pop_back();
         if (myString.begin() != myString.end())//incase we have an odd number of letters , we must assure that we dont pop and empty deque , that would cause an error
             myString.pop_front();
     }

     return isPalindrome;
 }

 template<typename T>
 void displayVector(const vector<T>& vec) {
     int index{};
     for (auto& element : vec)
     {
         cout << std::setw(10) << element;
         index++;

         if (index == 5)
         {
             cout << endl;
             index = 0;
         }
     }
     cout << endl;

 }

 template<typename T>
 void displayDeque(const std::deque<T>& vec) {
     int index{};
     for (auto& element : vec)
     {
         cout << std::setw(10) << element;
         index++;

         if (index == 5)
         {
             cout << endl;
             index = 0;
         }
     }
     cout << endl;

 }

 //S20-2
 void S20Challenge2() {
     std::list<Song> playlist{
           {"God's Plan",        "Drake",                     5},
           {"Never Be The Same", "Camila Cabello",            5},
           {"Pray For Me",       "The Weekend and K. Lamar",  4},
           {"The Middle",        "Zedd, Maren Morris & Grey", 5},
           {"Wait",              "Maroone 5",                 4},
           {"Whatever It Takes", "Imagine Dragons",           3}
     };

     std::list<Song>::iterator current_song = playlist.begin();
     char userInput;

     do
     {
         display_menu();
         cin >> userInput;
         switch (userInput)
         {
         case'F':
         case'f': {
             current_song = playlist.begin();
             play_current_song(*current_song);
             break;
         }
         case'n':
         case'N': {

            ++current_song;

             if (current_song == playlist.end())
             {
                 current_song = playlist.begin();
             }
            
             play_current_song(*current_song);
             break;
         }
         case'p':
         case'P': {
             if (current_song ==playlist.begin())
             {
                 current_song = playlist.end();
                
             }
             
             current_song--;
             play_current_song(*current_song);
             break;
         }
         case'A':
         case'a': {
             string name{};
             string artist{};
             int rating{};
             string rt{};
     
             cout << "state the name of the song" << endl;
             getline(cin, name);
             cout << "state the artist  of the song" << endl;
             getline(cin, artist);
             cout << "state the rating of the song( 1 to 5)" << endl;

             while (true) {
                 cin >> rt;
                 cin.clear();
                 cin.ignore();
                 std::stringstream my_string(rt);
                 if (my_string >>rating)
                 {
                     if (rating<=5 && rating>=1)
                     {
                         break;
                     }
                    
                 }
                 cout << "invalid value, please insert an integer between 1 and 5" << endl;
             }

             playlist.emplace(current_song,name, artist, rating);
             break;
         }
         case'l':
         case'L': {
             display_playlist(playlist,*current_song);
             break;
         }
         case'Q':
         case'q': {
             std::cout << "Thanks for listening!" << std::endl;
             break;
         }
         default:
             break;
         }
     } while (userInput != 'q' && userInput!='Q');
   

     
 }

 void display_menu() {
     std::cout << "\nF - Play First Song" << std::endl;
     std::cout << "N - Play Next song" << std::endl;
     std::cout << "P - Play Previous song" << std::endl;
     std::cout << "A - Add and play a new Song at current location" << std::endl;
     std::cout << "L - List the current playlist" << std::endl;
     std::cout << "===============================================" << std::endl;
     std::cout << "Enter a selection (Q to quit): ";
 }
 void play_current_song(const Song& song) {
     std::cout << "Playing : " << song.get_name() <<" By "<< song.get_artist() << std::endl<< std::endl<< std::endl<< std::endl;
 }
 void display_playlist(const std::list<Song>& playlist, const Song& current_song) {
     cout << "Your playlist : " << endl;
        
     std::for_each(playlist.begin(), playlist.end(), [](Song song) {
         cout << song << endl;
         });
     cout << "currently playing " << current_song.get_name() << " By " << current_song.get_artist() << std::endl<< std::endl<< std::endl<< std::endl;
 }


 //S20-3
 void S20Challenge3() {
     part1();
     part2();
 }


 void display_words(const std::map<std::string, int>& words) {
     std::cout << std::setw(12) << std::left << "\nWord"
         << std::setw(7) << std::right << "Count" << std::endl;
     std::cout << "===================" << std::endl;
     for (auto pair : words)
         std::cout << std::setw(12) << std::left << pair.first
         << std::setw(7) << std::right << pair.second << std::endl;
 }
 void display_words(const std::map<std::string, std::set<int>>& words)
 {
     std::cout << std::setw(12) << std::left << "\nWord"
         << "Occurrences" << std::endl;
     std::cout << "=====================================================================" << std::endl;
     for (auto pair : words) {
         std::cout << std::setw(12) << std::left << pair.first
             << std::left << "[ ";
         for (auto i : pair.second)
             std::cout << i << " ";
         std::cout << "]" << std::endl;
     }
 }


 std::string clean_string(const std::string& s) {
     std::string result;
     for (char c : s) {
         if (c == '.' || c == ',' || c == ';' || c == ':')
             continue;
         else
             result += c;
     }
     return result;
 }

 /* Part1 process the file and builds a map of words and the 
  number of times they occur in the file*/

 void part1() {
     std::map<std::string, int> words;
     std::string line;
     std::string word;
     std::fstream file{ "words.txt",std::ios::in };
     if (!file.is_open()) {

         std::cerr << "Error opening input file" << std::endl;
         return;
     }
    
     while (!file.eof())
     {
         getline(file, line);
         clean_string(line);
         std::stringstream ss{ line };
         
         while (!ss.eof())
         {

             ss >> word;
             
             auto it = words.find(word);

             if (it==words.end())
             {
                 words.insert(std::make_pair(word, 1));
                 //words[word] = 1; simpler synthax
             }
             else {
                 it->second++;
             }

         }
        
     }
     file.close();
     display_words(words);
 }

 /* Part2 process the file and builds a map of words and a 
  set of line numbers in which the word appears*/
 void part2() {
     std::map<std::string, std::set<int>> words;
     std::string line;
     std::string word;
     std::fstream file{ "words.txt",std::ios::in };
     if (!file.is_open()) {

         std::cerr << "Error opening input file" << std::endl;
         return;


     }
     int lineIndex{};
     while (!file.eof())
     {
         ++lineIndex;
         getline(file, line);
         clean_string(line);
         std::stringstream ss{ line };

         while (!ss.eof())
         {

             ss >> word;

             auto it = words.find(word);

             if (it == words.end())
             {
                 std::set<int> tobeInserted{ lineIndex };
                
                 words.insert(std::make_pair(word, tobeInserted));
                 
             }
             else
             {
                 it->second.emplace(lineIndex);
             }
            

         }
        

     }

     file.close();
     display_words(words);
 }


 //S20-4
 void S20Challenge4() {}




 //Section 21 :Lambda Expressions
 void S21Challenge() {}

 //Section 23 : Enumerations
 void S23Challenge() {}


  