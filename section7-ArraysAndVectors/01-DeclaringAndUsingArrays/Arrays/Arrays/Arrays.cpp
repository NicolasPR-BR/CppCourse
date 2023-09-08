#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    char vowels[]{'a', 'e', 'o', 'u'};
    // Arrays point to the first element in memory
    cout << "\nThe first vowels is: " << *vowels << endl; 
    // This means we can do some pointer arithmetic to access the last value
    cout << "The last vowel is: " << *(vowels + sizeof(char) * (sizeof(vowels) - 1));

     //cin>>vowels[5]; //Out of bounds err

    double hi_temps[]{ 90.1, 89.8, 77.5, 81.6 };
    cout << "\nThe first temperature is: " << *hi_temps<<endl;

    hi_temps[0] = 100.7;
    cout << "The first high temperature is: " << *hi_temps << endl;

    int test_scores[5]{};
    cout << "\nFirst score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;

    cout << "\n Enter 5 scores: ";
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];

    cout << "\nFirst score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;

    // Prints the location of the array in memory
    cout << "\nNotice what the value of the array name is: " << test_scores<<endl;
    cout << endl;
    return 0;
}