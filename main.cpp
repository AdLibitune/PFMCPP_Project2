#include <iostream>
using std::string;


template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 Interger               -> int
 Character              -> char
 Boolean                -> bool
 Floating Point         -> float
 Doable Floating Point  -> doulbe
 Void                   -> void 
 Wide Character         -> wchart_t



2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    //int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    //ignoreUnused(number); //passing each variable declared to the ignoreUnused() function

    int apple = 3, banana = 2, grape = 34;
    char doorLetter = 'b', grade = 'a', lastChar = 'z';
    bool lampIsOn = true, taskDone = false, blueSky = true;
    float houseTemperatureCg = 25.5f, carSpeedKmh = 83.25f, noteMiddleCFreq = 261.63f;
    double currencyEURUSD = 1.08504, ampAttackS = 0.053, successProbability = 0.9156;
    
    ignoreUnused(apple, banana, grape, doorLetter, grade, lastChar, lampIsOn, taskDone, blueSky, houseTemperatureCg, carSpeedKmh, noteMiddleCFreq, currencyEURUSD, ampAttackS, successProbability);
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
bool checkAllowedToDrinkAlcohol (bool adult, bool insideBar, bool openHours)
{
    ignoreUnused (adult, insideBar, openHours);
    return {};
}

/*
 2)
 */
bool boilWater (int waterTemperature, int boilingTemperature = 100)
{
    ignoreUnused (waterTemperature, boilingTemperature);
    return {};
}
/*
 3)
 */
int countParcelDelivered (int john, int max, int gabriel)
{
    ignoreUnused (john, max, gabriel);
    return {};
}
/*
 4)
 */
int countBuildingNeighbours (int floor0, int floor1, int floor2, int floor3 = 4)
{
    ignoreUnused (floor0, floor1, floor2, floor3);
    return {};
}
/*
 5)
 */
char getSecondLetterInAWord (string word, int position = 2)
{
    ignoreUnused (word, position);
    return {};
}
/*
 6)
 */
char getStudentGrade (double exercises, double behaviour, int attendance)
{
    ignoreUnused (exercises, behaviour, attendance);
    return {};
}
/*
 7)
 */
float getCountryGDPInTrillions (float privateConsumption, float grossPrivateInvestment, float governmentInvestment, float governmentSpending, float exports, float imports)
{
    ignoreUnused (privateConsumption, grossPrivateInvestment, governmentInvestment, governmentSpending, exports, imports);
    return {};
}
/*
 8)
 */
float calculateHouseholdPiggyBank (float juliaContribution, float johanContribution, float ramiContribution, float meContribution = 1055.25f)
{
    ignoreUnused (juliaContribution, johanContribution, ramiContribution, meContribution);
    return{};
}
/*
 9)
 */
double calculateFamilyWeightAverage (double juliaWeight, double johanWeight, double ramiWeight, double meWeight = 71.23)
{
    ignoreUnused (juliaWeight, johanWeight, ramiWeight, meWeight);
    return{};
}
/*
 10)
 */
double calculateScoreAverage (double test1, double test2, double test3 = 8.5)
{
    ignoreUnused (test1, test2, test3);
    return{};
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto canDrinkAlcohol = checkAllowedToDrinkAlcohol (true, true, true); 
    //2)
    auto boiledWater (102);
    //3)
    auto parcelsDelivered = countParcelDelivered (20, 23, 31);
    //4)
    auto neighboursNumb = countBuildingNeighbours (4, 5, 4);
    //5)
    auto letterNumb2 = getSecondLetterInAWord ("string");
    //6)
    auto alexGrade = getStudentGrade (6.51, 8.24, 52);
    //7)
    auto americaGDP = getCountryGDPInTrillions (10.3623f, 1.7638f, 1.1864f, 1.7883f, 1.7293f, 2.2287f);
    //8)
    auto smithFamilySavings = calculateHouseholdPiggyBank (1023.54f, 5132.11f, 4321.91f, 7112.56f);
    //9)
    auto smithFamilyAverageWeight = calculateFamilyWeightAverage (73.312, 20.561, 24.648, 71.934);
    //10)
    auto michaelScore = calculateScoreAverage (9.56, 8.45);
    
    ignoreUnused(carRented, canDrinkAlcohol, boiledWater, parcelsDelivered, neighboursNumb, letterNumb2, alexGrade, americaGDP, smithFamilySavings, smithFamilyAverageWeight, michaelScore);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
