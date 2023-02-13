#include<iostream>
using namespace std;

int main(){

//"endl" is used to create a new line
    cout<< "The boy is a good bo, no doubt!" <<std::endl;
    cout<< "he likes Chike !" <<std::endl;
    return 0;
}

//One can do without the (namespace)
#include<iostream>
int main(){
//"\n" is used to create a new line
    std::cout<< "The boy is a good bo, no doubt! \n";
    std::cout<< "he likes Chike !!";
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    std::cout<< "The boy is a good bo, no doubt! \n";
    std::cout<< "he likes Chike !!";
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int myNum;
    myNum = 15;
    cout << myNum;
    return 0;
}


// it will overwrite the previous value:
#include<iostream>
using namespace std;
int main()
{
    
    int myNum = 15;  // myNum is 15
    myNum = 10;  // Now myNum is 10
    cout << myNum;  // Outputs 10
    return 0;
}

int myNum = 5;               // Integer (whole number)
float myFloatNum = 5.99;     // Floating point number
double myDoubleNum = 9.98;   // Floating point number
char myLetter = 'D';         // Character
bool myBoolean = true;       // Boolean
string myText = "Hello";     // String

int myNum = 5;               // Integer (whole number without decimals)
double myFloatNum = 5.99;    // Floating point number (with decimals)
char myLetter = 'D';         // Character
string myText = "Hello";     // String (text)
bool myBoolean = true;       // Boolean (true or false)

#include<iostream>
using namespace std;
int main()
{
    double x = 5.3;
    int y = 6;
    double sum = x + y;
    cout << sum;
    return 0;
}

//Declare Many Variables
#include<iostream>
using namespace std;
int main()
{
    int x = 5, y = 6, z = 50;
    cout << x + y + z;
    return 0;
}

//Declare Many Variables
#include<iostream>
using namespace std;
int main()
{
    int a = 65, b = 66, c = 67;
    cout << a << "\n";
    cout << b << "\n";
    cout << c;
    return 0;
}


//One Value to Multiple Variables
#include<iostream>
using namespace std;
int main()
{
    int x, y, z;
    x = y = z = 50;
    cout << x + y + z;
    return 0;
}

//Constant/unchangeable and read-only
#include<iostream>
using namespace std;
int main()
{
    const int myNum = 15;  // myNum will always be 15
    const int minutesPerHour = 60;
    const float PI = 3.14;
    double s = PI * minutesPerHour;
    cout << s;
    return 0;
}

//Creating a Simple Calculator
#include<iostream>
using namespace std;
int main()
{
    int x, y;
    int sum;
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sum = x + y;
    cout << "Sum is: " << sum;
    return 0;
}

// scientific number with an "e" indicate the power of 10:
#include<iostream>
using namespace std;
int main()
{
    float f1 = 35e3;
    double d1 = 12E4;
    cout << f1;
    cout << d1;
    return 0;
}

// scientific number with an "e" indicate the power of 10:
#include<iostream>
using namespace std;
int main()
{
    float f1 = 35e3;
    double d1 = 12E4;
    cout << f1 << "\n";
    cout << d1;
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun <<"\n";  // Outputs 1 (true)
    cout << isFishTasty;        // Outputs 0 (false)
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int sum1 = 100 + 50;        // 150 (100 + 50)
    double sum2 = sum1 + 250.50;      // 400.5 (150 + 250)
    double sum3 = sum2 + sum2;     // 800 (400 + 400)
    cout << sum1 <<"\n";
    cout << sum2 <<"\n";
    cout << sum3;
    return 0;
}
            //Arithmetic Operators*
// +	Addition	Adds together two values	            x + y
// -	Subtraction	Subtracts one value from another	    x - y	
// *	Multiplication	Multiplies two values	            x * y	
// /	Division	Divides one value by another	        x / y	
// %	Modulus	Returns the division remainder	            x % y	
// ++	Increment	Increases the value of a variable by 1	++x	
// --	Decrement	Decreases the value of a variable by 1	--x

#include<iostream>
using namespace std;
int main()
{
    cout<< 100 + 50;
    return 0;
}

            //Assignment Operators*
// =	x = 5	    same as x = 5	
// +=	x += 3	    same as x = x + 3	
// -=	x -= 3	    same as x = x - 3	
// *=	x *= 3	    same as x = x * 3	
// /=	x /= 3	    same as x = x / 3	
// %=	x %= 3	    same as x = x % 3	
// |=	x |= 3	    same as x = x | 3	
// &=	x &= 3	    same as x = x & 3	
// |=	x |= 3	    same as x = x | 3	
// ^=	x ^= 3	    same as x = x ^ 3	
// >>=	x >>= 3	    same as x = x >> 3	
// <<=	x <<= 3	    same as x = x << 3

#include<iostream>
using namespace std;
int main()
{
    int x;
    x = 5;
    cout<< (x += 3) << endl;
    cout<< (x -= 3) << endl;
    cout<< (x *= 3) << endl;
    cout<< (x /= 3) << endl;
    cout<< (x %= 3) << endl;
    cout<< (x &= 3) << endl;
    cout<< (x |= 3) << endl;
    cout<< (x ^= 3) << endl;
    cout<< (x >>= 3) << endl;
    cout<< (x <<= 3) << endl;

    return 0;
}

 //Comparison Operators*

// ==	Equal to                        x == y	
// !=	Not equal                       x != y	
// >	Greater than                    x > y	
// <	Less than                       x < y	
// >=	Greater than or equal to        x >= y	
// <=	Less than or equal to           x <= y

#include<iostream>
using namespace std;
int main()
{
    int x = 5;
    int y = 3;
    cout << (x > y); // returns 1 (true) because 5 is greater than 3
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int x = 5;
    int y = 3; 
// returns 1 (true) because 5 is greater than 3
// returns 0 (false) when it is not true
    cout << (x == y)<<"\n";
    cout << (x != y)<<"\n";
    cout << (x < y)<<"\n";
    cout << (x > y)<<"\n";
    cout << (x <= y)<<"\n";
    cout << (x >= y)<<"\n";
    return 0;
}

// String Concatenation
#include<iostream>
using namespace std;
int main()
{
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName + lastName;
    cout << fullName;
    return 0;
}

// String Concatenation
#include<iostream>
using namespace std;
int main()
{
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName + " " + lastName;
    cout << fullName;
    return 0;
}


// You can Concatenation with Append
#include<iostream>
using namespace std;
int main()
{
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName.append(lastName);
    cout << fullName;
    return 0;
}

// String Concatenation
#include<iostream>
using namespace std;
int main()
{
    string firstName = "John ";
    string lastName = "Doe"; 
    cout << firstName<< "\n";
    cout << lastName;
    return 0;
}


// Adding Numbers 
#include<iostream>
using namespace std;
int main()
{
 //number
 int x, y, z;
     x = 10;
     y = 20;
     z = x + y;      // z will be 30 (an integer)
     cout<< z;
    return 0;
}

// Adding  Strings
#include<iostream>
using namespace std;
int main()
{
      // string concatenation
    string x = "10";
    string y = "20";
    string z = x + y;   // z will be 1020 (a string)
    cout << z;
    return 0;
}

//C++ String Length --length() or size())
#include<iostream>
using namespace std;
int main()
{
    string txt, txt2;
    txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    txt2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length() <<endl;
    cout << "The length of the txt2 string is: " << txt2.length();
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    string txt, txt2;
    txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    txt2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.size() <<endl;
    cout << "The length of the txt2 string is: " << txt2.size();
    return 0;
}


// C++ Access Strings
#include<iostream>
using namespace std;
int main()
{
    string myString = "Hello";
    cout << myString[0] << endl;
    cout << myString[1] << endl;
    cout << myString[2] << endl;
    cout << myString[3] << endl;
    cout << myString[4];
// Outputs H e l l o
    return 0;
}

// C++ Change String Characters
#include<iostream>
using namespace std;
int main()
{
    string myString;
    myString = "Hello";
    myString[1] = 'a';
    myString[4] = 'a';
    cout << myString;
// Outputs Halla instead of Hello
    return 0;
}


// C++ Strings - Special Characters
#include<iostream>
using namespace std;
int main()
{
    string txt, txt1, txt2;
    txt = "We are the so-called \"Vikings\" from the north.";
    txt1 = "The character \\ is called backslash.";
    txt2 = "It\'s alright.";
    cout << txt << endl << txt1 << endl << txt2;
    return 0;
}

// C++ User Input Strings
#include<iostream>
using namespace std;
int main()
{
    string firstName;
    cout << "Type your first name: ";
    cin >> firstName; // get user input from the keyboard
    cout << "Your name is: " << firstName;
    // Type your first name: John
    // Your name is: John
    return 0;
}


// C++ User Input Strings using getline()
#include<iostream>
using namespace std;
int main()
{
    string fullName;
    cout << "Type your full name: ";
    getline (cin, fullName);
    cout << "Your name is: " << fullName;
    // Type your full name: John Doe
    // Your name is: John Doe
    return 0;
}

// C++ Strings Omitting Namespace
/*
You might see some C++ programs that runs without the standard namespace library.
The using namespace std line can be omitted and replaced with the std keyword, 
followed by the :: operator for string (and cout) objects:
*/
#include<iostream>
#include<string>

int main()
{
    std::string greeting = "Hello";
    std::cout << greeting;
    return 0;
}

// C++ Math-- max $ min
#include<iostream>
using namespace std;
int main()
{
    cout << max(5, 10)<< endl;
    cout << min(5, 10);
    return 0;
}

// C++ CMath-- Header
#include<iostream>
#include<cmath>

int main()
{
    std::cout << sqrt(64)<< "\n";
    std::cout << round(2.6) << "\n";
    std::cout << fabs(2.6) << "\n";
    std::cout << log(2) << "\n";
    std::cout << ceil(2.678);
    return 0;
}

// C++ CMath-- Header(alternatively)
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    cout << sqrt(64)<< "\n";
    cout << round(2.6) << "\n";
    cout << fabs(2.6) << "\n";
    cout << log(2) << "\n";
    cout << ceil(2.678);
    return 0;
}

// C++ Boolean Expressions

#include<iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = 9;
    cout << (x > y) << endl; // returns 1 (true), because 10 is higher than 9
    cout << (x == 10) << endl;  // returns 1 (true), because the value of x is equal to 10
    cout << (10 == 15);  // returns 0 (false), because 10 is not equal to 15

    return 0;
}

/*
C++ Boolean Expressions
Real Life Example
*/

#include<iostream>
using namespace std;

int main()
{
    int myAge = 25;
    int votingAge = 18;
    cout << (myAge >= votingAge); // returns 1 (true), meaning 25 year olds are allowed to vote!

    return 0;
}


//If statement
#include<iostream>
using namespace std;
int main() {
    int x = 20;
    int y = 18;
    if (x > y) {
        cout << "x is greater than y";
}
    return 0;
}

//If.. Else statement

#include<iostream>
using namespace std;
int main() {
    int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge) {
        cout << "Old enough to vote!";
    } 
    else
         cout << "Not old enough to vote.";
    return 0;
}

//If.. Else statement

#include<iostream>
using namespace std;
int main() {
    int time = 20;
if (time < 18) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
}
    return 0;
}

// Else If.. statement

#include<iostream>
using namespace std;

int main(){
int time = 22;

if (time < 10) {
  cout << "Good morning.";
} 
else if (time < 20) {
  cout << "Good day.";
} 
else {
  cout << "Good evening.";
}
    return 0;
}

// Short Hand If...Else
#include<iostream>
using namespace std;

int main(){
int time = 20;
string result = (time < 18) ? "Good day." : "Good evening.";
cout << result;
    return 0;
}

// C++ Switch Statements
#include<iostream>
using namespace std;
int main()
{
    int day = 4;
    switch (day){
        case 1:
        cout << "Monday";
        break;
        case 2:
        cout << "Tuesday";
        break;
        case 3:
        cout << "Wednesday";
        break;
        case 4:
        cout << "Thursday";
        break;
        case 5:
        cout << "Friday";
        break;
        case 6:
        cout << "Ssaturday";
        break;
        case 7:
        cout << "Sunday";
        break;
    }
    return 0;
}

// C++ Switch Statements- Default keyword
#include<iostream>
using namespace std;
int main()
{
    int day = 5;
    switch (day){
        case 6:
        cout<<"Today is saturday";
        break;

        case 7:
        cout<<"Today is sunday";
        break;

        default:
        cout<< "Looking forward to weekend!";
    }
    return 0;
}

// C++ while loop
#include<iostream>
using namespace std;

int main(){
int i;
i = 0;
while (i < 5) {
    cout<< i << "\n";
    ++i;
}

}

// C++ do/while loop
#include<iostream>
using namespace std;

int main(){
int i;
i = 0;
do {
cout<< i << "\n";
    ++i;
}
while (i < 5);

}

// C++ For Loop
/*
When you know exactly how many times you want to loop through a block of code,
use the for loop instead of a while loop:
*/
#include<iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++) {
  cout << i << "\n";
}
    return 0;
}

// Another example
#include<iostream>
using namespace std;
int main()
{
   for (int i = 0; i <= 10; i = i + 2) {
  cout << i << "\n";
}
    return 0;
}

// C++ Nested Loops
#include<iostream>
using namespace std;
int main()
{
  // Outer loop
for (int i = 1; i <= 2; ++i) {
  cout << "Outer: " << i << "\n"; // Executes 2 times

  // Inner loop
  for (int j = 1; j <= 3; ++j) {
    cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
  }
}
    return 0;
}

// Foreach Loop
#include<iostream>
using namespace std;
int main()
{
    int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i : myNumbers) {
  cout << i << "\n";
}
    return 0;
}

// C++ Break and Continue
// C++ Break
#include<iostream>
using namespace std;
int main()
{
for (int i = 0; i < 10; i++) {
  if (i == 6) {
    break;
  }
  cout << i << "\n";
}
    return 0;
}

// C++ Break and Continue
// C++ Continue
#include<iostream>
using namespace std;
int main()
{
for (int i = 0; i < 10; i++) {
  if (i == 5) {
    continue;
  }
  cout << i << "\n";
}
    return 0;
}

// C++ Break and Continue in while loop
// C++ Break
#include<iostream>
using namespace std;
int main()
{
int i = 0;
while (i < 10) {
  cout << i << "\n";
  i++;
  if (i == 4) {
    break;
  }
}
    return 0;
}

// C++ Break and Continue in while loop
// C++ Continue
#include<iostream>
using namespace std;
int main()
{
int i = 0;
while (i < 10) {
    if (i == 4) {
    i++;
    continue;
  }
  cout << i << "\n";
  i++;
}
    return 0;
}

//C++ Arrays [square brackets]
/*
string cars[4];
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
int myNum[3] = {10, 20, 30};
*/

#include<iostream>
using namespace std;
int main()
{
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cout << cars[2];
    return 0;
}

// Change an Array Element
#include<iostream>
using namespace std;
int main()
{
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cars[2] = "Benz";
cout << cars[2];
    return 0;
}

// C++ Arrays and Loops
// C++ Loop Through an Array
#include<iostream>
using namespace std;
int main()
{
string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
for (int i = 0; i < 5; i++) {
  cout << cars[i] << "\n";
}
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
for (int i = 0; i < 5; i++) {
  cout << i << "=" << cars[i] << "\n";
}
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i = 0; i < 5; i++) {
  cout << myNumbers[i] << "\n";
}
    return 0;
}

// The foreach Loop
/*
for (type variableName : arrayName) {
  // code block to be executed
}
*/

#include<iostream>
using namespace std;
int main()
{
int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i : myNumbers) {
  cout << i << "\n";
}
    return 0;
}

// C++ Omit Array Size
/*
string cars[] = {"Volvo", "BMW", "Ford"}; // Three arrays
same as 
string cars[3] = {"Volvo", "BMW", "Ford"}; // Also three arrays
*/

// Omit Elements on Declaration
#include<iostream>
using namespace std;
int main()
{
string cars[5];
cars[0] = "Volvo";
cars[1] = "BMW";
cout << cars[5];
    return 0;
}

// C++ Array Size
#include<iostream>
using namespace std;
int main()
{
int myNumbers[5] = {10, 20, 30, 40, 50};
cout << sizeof(myNumbers);
/*
You learned from the Data Types chapter that an int type is usually 4 bytes,
so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes.
*/
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int getArrayLength = sizeof(myNumbers) / sizeof(int);
    cout << getArrayLength;
    return 0;
}

// Loop Through an Array with sizeof()
#include<iostream>
using namespace std;
int main()
{
   //Instead of writing 
   int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i = 0; i < 5; i++) {
  cout << myNumbers[i] << "\n";
}
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
   //better to write 
   int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++) {
  cout << myNumbers[i] << "\n";
}
    return 0;
}

// you can also use the "for-each" loop:
#include<iostream>
using namespace std;
int main()
{
   //better to write 
   int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i : myNumbers) {
  cout << i << "\n";
}
    return 0;
}


// C++ Multi-Dimensional Arrays
/*
To declare a multi-dimensional array, define the variable type, 
specify the name of the array followed by square brackets which specify how many elements the main array has, 
followed by another set of square brackets which indicates how many elements the sub-arrays have:

        string letters[2][4];

        string letters[2][4] = {
            { "A", "B", "C", "D" },
            { "E", "F", "G", "H" }
        };

        string letters[2][2][2] = {
        {
            { "A", "B" },
            { "C", "D" }
        },
        {
            { "E", "F" },
            { "G", "H" }
        }
        };
*/

// Access the Elements of a Multi-Dimensional Array
/*This statement accesses the value of the element in the 
first row (0) and third column (2) of the letters array.*/
#include<iostream>
using namespace std;
int main()
{
    string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
    };

    cout << letters[0][2];  // Outputs "C"
    return 0;
}

// Practice/sample
#include<iostream>
using namespace std;

int main(){
    
    string names[2][2] = {
        {"dae", "get"},
        {"ryuei", "euukash"}
    };

    cout << names[1][1];

    return 0;

    }

#include<iostream>
using namespace std;
int main()
{
    string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
    };
    cout << letters[1][2] << endl;   // Outputs "G"
    cout << letters[0][1] << endl;    // Outputs "B"
    cout << letters[1][3] << endl;      // Outputs "H"
    cout << letters[0][0] << endl;      // Outputs "A"
    return 0;
}

// Change Elements in a Multi-Dimensional Array
#include<iostream>
using namespace std;
int main()
{
    string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};
letters[1][1] = "P";
letters[0][2] = "Q";
letters[1][3] = "R";

cout << letters[1][1] << endl;  // Now outputs "Z" instead of "A"
cout << letters[0][2] << endl;
cout << letters[1][3];
    return 0;
}


// Loop Through a Multi-Dimensional Array
#include<iostream>
using namespace std;
int main()
{

    string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};
for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 4; j++) 
 
    cout << letters[i][j] << "\n";
  }

    return 0;
}


// with comma
#include<iostream>
using namespace std;
int main()
{

    string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};
for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 4; j++) 
 
    cout << letters[i][j] << ", ";
  }

    return 0;
}


// with numberings
#include<iostream>
using namespace std;
int main()
{
    int k = 1;
    string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};
for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 4; j++) 
 
    cout << k++ << ". "<< letters[i][j] << "\n";
  }

    return 0;
}

// how to loop through a three-dimensional array:
#include<iostream>
using namespace std;
int main()
{
   string letters[2][2][2] = {
  {
    { "A", "B" },
    { "C", "D" }
  },
  {
    { "E", "F" },
    { "G", "H" }
  }
};

for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 2; j++) {
    for (int k = 0; k < 2; k++) {
      cout << letters[i][j][k] << "\n";
    }
  }
}
    return 0;
}


        // Practical use of Multidimentional array 

#include<iostream>
using namespace std;
int main(){

    // We put "1" to indicate there is a ship.
bool ships[4][4] = {
  { 0, 1, 1, 0 },
  { 0, 0, 0, 0 },
  { 0, 0, 1, 0 },
  { 0, 0, 1, 0 }
};

// Keep track of how many hits the player has and how many turns they have played in these variables
int hits = 0;
int numberOfTurns = 0;    

// Allow the player to keep going until they have hit all four ships
while (hits < 4) {
  int row, column;

  cout << "Selecting coordinates\n";    

  // Ask the player for a row
  cout << "Choose a row number between 0 and 3: ";
  cin >> row;  

   // Ask the player for a column
  cout << "Choose a column number between 0 and 3: ";
  cin >> column;

  // Check if a ship exists in those coordinates
  if (ships[row][column]) {
    // If the player hit a ship, remove it by setting the value to zero.
    ships[row][column] = 0;
 // Increase the hit counter
    hits++;

    // Tell the player that they have hit a ship and how many ships are left
    cout << "Hit! " << (4-hits) << " left.\n\n";
  } else {
    // Tell the player that they missed
    cout << "Miss\n\n";
  }

  // Count how many turns the player has taken
  numberOfTurns++;
}

cout << "Victory!\n";
cout << "You won in " << numberOfTurns << " turns";


    return 0;

}    
    


//C++ Structures (struct)

/*
C++ Structures
Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure.

Unlike an array, a structure can contain many different data types (int, string, bool, etc.).


Create a Structure:

            struct {             // Structure declaration
            int myNum;         // Member (int variable)
            string myString;   // Member (string variable)
            } myStructure;       // Structure variable

Access Structure Members
To access members of a structure, use the dot syntax (.):
*/


// Example
// Assign data to members of a structure and print it:

#include<iostream>
using namespace std;
int main(){

    // Create a structure variable called myStructure
struct {
  int myNum;
  string myString;
} myStructure;

// Assign values to members of myStructure
myStructure.myNum = 1;
myStructure.myString = "Hello World!";

// Print members of myStructure
cout << myStructure.myNum << "\n";
cout << myStructure.myString << "\n";
cout << myStructure.myNum << ". " << myStructure.myString;    
    
    return 0;
}
    
    
 // One Structure in Multiple Variables

 struct {
  int myNum;
  string myString;
} myStruct1, myStruct2, myStruct3; // Multiple structure variables separated with commas


//    Example
// Use one structure to represent two cars:

#include<iostream>
using namespace std;
int main(){
    struct {
        string brand;
        string model;
        int year;
    } myCar1, myCar2; // We can add variables by separating them with a comma here

// Put data into the first structure
myCar1.brand = "BMW";
myCar1.model = "X5";
myCar1.year = 1999;

// Put data into the second structure
myCar2.brand = "Ford";
myCar2.model = "Mustang";
myCar2.year = 1969;

// Print the structure members
cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

    return 0;
}

// named structures
/*
By giving a name to the structure, you can treat it as a data type. This means that you can create variables with this structure anywhere in the program at any time.

To create a named structure, put the name of the structure right after the struct keyword:

        struct myDataType { // This structure is named "myDataType"
        int myNum;
        string myString;
        };
To declare a variable that uses the structure, use the name of the structure as the data type of the variable:

            myDataType myVar;
*/

// Example
#include<iostream>
using namespace std;
// Declare a structure named "car"
struct car {
  string brand;
  string model;
  int year;
};

int main() {
  // Create a car structure and store it in myCar1;
  car myCar1;
  myCar1.brand = "BMW";
  myCar1.model = "X5";
  myCar1.year = 1999;

  // Create another car structure and store it in myCar2;
  car myCar2;
  myCar2.brand = "Ford";
  myCar2.model = "Mustang";
  myCar2.year = 1969;
 
  // Print the structure members
  cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
  cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
 
  return 0;
}

// Creating references (&)
/*
Creating References
A reference variable is a "reference" to an existing variable, and it is created with the & operator:

        string food = "Pizza";  // food variable
        string &meal = food;    // reference to food

Now, we can use either the variable name food or the reference name meal to refer to the food variable:

*/


//Examples
#include<iostream>
using namespace std;
int main(){
    string food = "Pizza";
    string &meal = food;

    cout << food << "\n";  // Outputs Pizza
    cout << meal << "\n";  // Outputs Pizza
    return 0;
}


#include<iostream>
using namespace std;
int main(){
    string name = "Oluwapelumi";
    string &nomenclature = name;

    cout << " I will like to call you by you " << nomenclature << endl;
    cout <<  " Do you bear " << name << " ? ";
    
    return 0;
}


// C++ Memory Address

/*
        Memory Address

In the example from the previous page, the & operator was used to create a reference variable. But it can also be used to get the memory address of a variable; which is the location of where the variable is stored on the computer.

When a variable is created in C++, a memory address is assigned to the variable. And when we assign a value to the variable, it is stored in this memory address.

To access it, use the & operator, and the result will represent where the variable is stored:
*/

// Example

#include<iostream>
using namespace std;
int main(){

    string food = "Pizza";

    cout << &food; // Outputs 0x6dfed4
    
    return 0;
}
// Note: The memory address is in hexadecimal form (0x..). Note that you may not get the same result in your program.


            //C++ Pointers


/*
A pointer however, is a variable that stores the memory address as its value.

A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator. The address of the variable you're working with is assigned to the pointer:
*/

//Examples 
// Pointers

#include<iostream>
using namespace std;
int main(){

    string food = "Pizza";  // A food variable of type string
string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

// Output the value of food (Pizza)
cout << food << "\n";

// Output the memory address of food (0x6dfed4)
cout << &food << "\n";

// Output the memory address of food with the pointer (0x6dfed4)
cout << ptr << "\n";

    return 0;
}
  /*
  Example explained
Create a pointer variable with the name ptr, that points to a string variable, by using the asterisk sign * (string* ptr). Note that the type of the pointer has to match the type of the variable you're working with.

Use the & operator to store the memory address of the variable called food, and assign it to the pointer.

Now, ptr holds the value of food's memory address.
  */




// C++ Dereference
/*
Get Memory Address and Value
In the example from the previous page, we used the pointer variable to get the memory address of a variable (used together with the & reference operator). However, you can also use the pointer to get the value of the variable, by using the * operator (the dereference operator):
*/
// Example
#include<iostream>
using namespace std;
int main()
{
    string food = "Pizza";  // Variable declaration
string* ptr = &food;    // Pointer declaration

// Reference: Output the memory address of food with the pointer (0x6dfed4)
cout << ptr << "\n";

// Dereference: Output the value of food with the pointer (Pizza)
cout << *ptr << "\n";

    return 0;
}

/*
Modify the Pointer Value
You can also change the pointer's value. But note that this will also change the value of the original variable:
*/

// Example
#include<iostream>
using namespace std;
int main(){
    
    string food = "Pizza";
string* ptr = &food;

// Output the value of food (Pizza)
cout << food << "\n";

// Output the memory address of food (0x6dfed4)
cout << &food << "\n";

// Access the memory address of food and output its value (Pizza)
cout << *ptr << "\n";

// Change the value of the pointer
*ptr = "Hamburger";

// Output the new value of the pointer (Hamburger)
cout << *ptr << "\n";

// Output the new value of the food variable (Hamburger)
cout << food << "\n";

    return 0;
}


//Modifying Pointers
#include<iostream>
using namespace std;
int main()
{
    
    string food = "Rice";
    string* ptr = &food;


    cout << food << endl;
        cout << ptr << endl;
                cout << *ptr;

    return 0;
}


/*
                C++ Functions

A function is a block of code which only runs when it is called.

You can pass data, known as parameters, into a function.

Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.
        Syntax:

        void myFunction() {
        // code to be executed
}

Example Explained
myFunction() - is the name of the function
void - means that the function does not have a return value. You will learn more about return values later in the next chapter
inside the function (the body), add code that defines what the function should do

*/

#include<iostream>
using namespace std;
  
    // Create a function
void myFunction() {
  cout << "I just got executed!";
}

int main() {
  myFunction(); // call the function
  return 0;
  // Outputs "I just got executed!"
}


// A function can be called multiple times:

//Example
void myFunction() {
  cout << "I just got executed!\n";
}

int main() {
  myFunction();
  myFunction();
  myFunction();
  return 0;
}

// I just got executed!
// I just got executed!
// I just got executed!





// function Paramaters
#include<iostream>
using namespace std;    

void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << " " <<secondNum << "\n";

  // Call the function, which will change the values of firstNum and secondNum
  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << " " << secondNum << "\n";

    return 0;
}



