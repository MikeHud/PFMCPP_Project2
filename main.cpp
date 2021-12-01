#include <iostream>

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
 
 int
 float
 char 
 bool
 double 
 Unsigned int 
 string //what about this one? 
 
 
 
 
 
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
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int value = 1;
    int param = 9;

    float size = 0.3f;
    float volume = 0.22222f;
    float length = 0.27981f;

    bool toggleSwitch = false;
    bool pressButton = true;
    bool touchSense = true;

    double preciseValue = 0.445555;
    double accurateData = 0.3432552;
    double serialData = 0.00235252;

    unsigned int positiveValue = 3;
    unsigned int positiveNum = 2;
    unsigned int count = 1;


    ignoreUnused(number, value, param, size, volume, length, toggleSwitch, pressButton, touchSense, preciseValue, accurateData, serialData, positiveValue,positiveNum, count); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */

bool rentACar(int rentalDuration = 0, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
void soundOsc (int waveType = 1, double amplitude = 0.1) 
{
    ignoreUnused(waveType, amplitude);

}
/*
 2)
 */
double sumLR (double leftCh = 0, double rightCh = 0)
{
    ignoreUnused(leftCh, rightCh);
    return{};
}

/*
 3)
 */
int waveType (int waveSelSw = 0) 
{
    ignoreUnused(waveSelSw);
    return{};
}

/*
 4)
 */
double amplitudeEnv (double ampEnv = 0.1, double oscMixerOut = 0)
{
    ignoreUnused(ampEnv, oscMixerOut);
    return{};
}

/*
 5)
 */
bool selectParam (bool switchOne = false, bool switchTwo = false)
{
    ignoreUnused(switchOne, switchTwo);
    return{};
} 

/*
 6)
 */
float displaySelectedOscType (bool switchOne = false, int encoderSel = 0)
{
    ignoreUnused(switchOne, encoderSel);
    return{};
}

/*
 7)
 */
bool isSomethingConnected (bool inputOneSwitch = false, bool inputTwoSwitch = false)
{
    ignoreUnused(inputOneSwitch, inputTwoSwitch);
    return{};
}

/*
 8)
 */
int checkBatteryStatus (int batteryTemp = 0, int batteryCharge = 0, bool batteryCharging = true)
{
    ignoreUnused(batteryTemp, batteryCharge, batteryCharging);
    return{};
}

/*
 9)
 */
int detectInputType (float inputImpedance = 0, double inputAmplitue = 0.1)
{
    ignoreUnused(inputImpedance, inputAmplitue);
    return {};
}

/*
 10)
 */
int activateArp (bool isMidiInconnected = , int arpSelType = 0)
{
    ignoreUnused(isMidiInconnected, arpSelType);
    return {};
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
    soundOsc(1,0);

    //2)
    auto sumChannels = sumLR(0, 0);

    //3)
    auto wave = waveType(0);

    //4)
    auto envelopeOut = amplitudeEnv(0, 0);

    //5)
    auto userSelection = selectParam(false, false);
    
    //6)
    auto userDisplay = displaySelectedOscType(false, 0);

    //7)
    auto connectionStatus = isSomethingConnected(false, false);

    //8)
    auto batteryInfo = checkBatteryStatus(0, 0, false);
    
    //9)
    auto inputPreAmp = detectInputType(0, 0);
    
    //10)
    auto arp = activateArp(0, 0);
    
    ignoreUnused(carRented, sumChannels, wave, envelopeOut, userSelection, userDisplay, connectionStatus, batteryInfo, inputPreAmp, arp);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
