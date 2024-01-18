// Zayn Abbas
// Prof.Wang
// Intro to programming logic
// 01/18/24

#include <iostream>

int main()
{
    using namespace std;
    // I added this code because it bothered me that we werent using a measuring metric
    // this extra variable will store the metric from the user input
    string metric;

    cout << "What is the metric being used? (i.e inches, feet, meters)" << endl;
    cin >> metric;
    // initalize variables
    int width, length, floorArea;
    // takes and stores user input for length
    cout << "Enter floor length: " << endl;
    cin >> length;

    // takes and stores user input for width
    cout << "Enter floor width: " << endl;
    cin >> width;

    // calculates floor area using W * L = Area algorithm

    floorArea = length * width;

    // returns calculated area to the user

    cout << "The area of the floor is " << floorArea << " " << metric << "²." << endl;

    // eof
    return 0;
}