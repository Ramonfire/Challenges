/*
* author : Omar Zaida
* 
* Copyright :  we dont do that here, free to all 
*09/01/2023 started the course
*
*/

#include <iostream>// the good ol iostream
#include<climits>// mins max and others
#include<cfloat> // mins max and others
#include<vector> // vectors
#include<iomanip>//manipulate the input output format
#include<cctype>//c style strings functions
#include<cstring>//character base function
#include<string>
#include<cmath>
#include"Movies.h"

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

void BehaviourOfPlusPlusI(); 

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

void S15Challenge();

void S16Challenge();

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
/***********************************Globale variables for the S6 challenges****************************************/
const double smallRoomFee{ 25.0 };
const double largeRoomFee{ 35.0 };
const double tax{ 0.06 };
const int validityInDays{ 30 };



/**************************************** main funtion : will be running most tests for the entire course ******************************************/
int main()
{
  
    S14Challenge();
    

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
//just thoughts i had .
void BehaviourOfPlusPlusI() {
    int i = 0;

    /* let's start with i = 0 ;
     *we'll try to predict the behaviour of adding i++ to ++i and ++i to ++i, in the course Mr Mitropoulous said it could be unpredictable,.
     *in c++ the ++i incrementation is executed immediatly anything happens , though the i++ retains it's value until the end of the operation;
     */
    cout << "for : i++ + ++i" << endl;
    cout << i++ + ++i << endl;//the expect result here would be 1 + 1,++i increments the value BEFORE the operation ,i retains the  value of 1 then  incerements itself
    cout << "value of i " << i << endl;
    i = 0;
    cout << "for : ++i + ++i" << endl;
    cout << ++i + ++i << endl; //the expected value is 2+2 =4 Before the addition , i is incremented TWICE making it s value 2. adding i to itself will give us 4;
    cout << "value of i " << i << endl;
    i = 0;

    i = 0;
    cout << "for : i++ + i++" << endl;
    cout << i++ + i++ << endl; // the expected value is 0+ 0 = 0; i remains 0 until after the operation; i is incremented twice after the operation is done
    cout << "value of i " << i << endl;


    cout << "for : ++i + i++" << endl;
    cout << ++i + i++ << endl;//the expected value is 1+1 = 2; inceremented the i before the operation then added it to itself and finally incremented it after the operation is done
    cout << "value of i " << i << endl;




    /*From this first test ,let's suppose that for addition:
    * The pre-increment: ++variable would possible mean DO IT NOW BEFORE ANYTHING ELSE, meaning the value of the variable will change before the operation begins "smtg + ++i + smtg ";
    *the post-increment  :variable++ would possibly  mean DO IT AFTER YOU FINISHED THIS OPERATION, mean the variable would use it's  value until the operation ends then increments itself
    * this would be verified in the next tests
    */

    cout << "===================================================================================================" << endl;
    /********************************************************************************************************************************/

    //we established before the ++i is executed BEFORE THE OPERATION
    // let's try it with some multiplication
    // let's see if the compiler prioritizes ++i or multiplication
    i = 1;
    cout << "********for i * || + ++i++ ****** " << endl;
    // if u were to execute this , the results would be 4
    cout << "-for i  + ++i : ";
    cout << i + ++i << endl;
    cout << "value of i : " << i << endl;
    //let's see the other way around
    i = 1;
    cout << "-for ++i + i   : ";
    cout << ++i + i << endl;
    cout << "value of i : " << i << endl;
    //the result is also 4

    //expected result should be 4
    i = 1;
    cout << "-for ++i *  i  : ";
    cout << ++i * i << endl;
    cout << "value of i : " << i << endl;
    //execution result is 4
    i = 1;
    //expected result should be 4
    cout << "-for i  * ++i : ";
    cout << i * ++i << endl;
    cout << "value of i : " << i << endl;
    //execution result is 4
    //we can now safely say that ++i is exectued before the execution of the entire operation.
    //we can test it on a big range of operation , the result would be the same.




    /******************************************************************************************************************************/
    //for i ++ 
    // we supposed i++ is executed after the operation finished.
    // the result should be 2
    i = 1;
    cout << "for i  + i++  : ";
    cout << i + i++ << endl;// execution result is indeed 2
    cout << "value of i : " << i << endl;
    //expected results should be 2
    i = 1;
    cout << "for i++ + i   : ";
    cout << i++ + i << endl;// execution result is indeed 2
    cout << "value of i : " << i << endl;
    // verified that i++ is executed after the operation


    /*
     * To conclude : 
     * ++variable is excuted before the entire operation;
     *varibale++ is excuted after then end of the operation
     *
    */
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
             for (int j = i-1; j >= 0; j--) {
                 cout << input.at(j);
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
     //void pointers have no type therefore can store any kind of adress >:)
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
    
 }

 //Section 15 : inheritance
 void S15Challenge() {}

 //Section 16 : Polymorphism
 void S16Challenge() {}

 //Section 17 :Smart pointers
 void S17Challenge() {}

 //Section 18 :Exception hadnling
 void S18Challenge() {}

 //Section 19 :i/o - Streams
 void S19Challenge() {}

 //Section 20 :STL
 void S20Challenge() {}

 //Section 21 :Lambda Expressions
 void S21Challenge() {}

 //Section 23 : Enumerations
 void S23Challenge() {}


  