#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

const int numberOfCharacters = 70;
const char character = '*';

int main()
{
    cout << std::string(numberOfCharacters, character)<<endl;
    vector<char> vowels{'a', 'e', 'i', 'o', 'u'};

    cout << vowels[0] << endl;
    cout << vowels[4] << endl;

    //Initializes all 3 test scores to 0
    //vector<int> test_scores(3); 
    
    //Initializes all 3 test scores to 100
    //vector<int> test_scores(3, 100);
    
    //Initializes each test score to {100, 98, 89}
    vector<int> test_scores{100, 98, 89};

    /*
    cout << std::string(numberOfCharacters, character)<<endl;
    cout << "\nTest score using array syntax" << endl;
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;

    cout << std::string(numberOfCharacters, character)<<endl;
    cout << "\nTest score using vector syntax" << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << "There are " << test_scores.size() << " scores in the vector" << endl;

    cout << std::string(numberOfCharacters, character)<<endl;
    cout<< "\nEnter 3 test score" << endl;
    cin >> test_scores.at(2);
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);

    cout << std::string(numberOfCharacters, character)<<endl;
    cout << "\nUpdated test scores:" << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    

    cout << std::string(numberOfCharacters, character)<<endl;
    cout << "\nEnter a test score to add to the vector ";
    int score_to_add{ 0 };
    cin >> score_to_add;
    test_scores.push_back(score_to_add);
    
    cout << "Enter one more test score to add to the vector ";    
    score_to_add = 0;
    cin >> score_to_add;
    test_scores.push_back(score_to_add);

    cout << "\nTest scores are now: \n" << endl;
   
    for (auto score : test_scores) {
        cout << score << endl;
    }
    
    cout << "There are now " << test_scores.size() << " test scores" << endl;

    cout << std::string(numberOfCharacters, character)<<endl;

    cout << "This will cause an exception to happen" << test_scores.at(50)<<endl;
    */

    cout << std::string(numberOfCharacters, character) << endl;
    vector<vector<int>> movie_ratings{
        {1,2,3,4},
        {1,2,4,4},
        {1,3,4,5}
    };

    
    for (int i = 0; i < movie_ratings.size(); i++) {
        cout << "\nHere are the movie rating for reviewer " << i+1 << " using array syntax" << endl;
        for (int j = 0; j < movie_ratings[i].size(); j++) {
            cout << movie_ratings[i][j]<< " ";
        }
        cout << endl;
    }

    cout << std::string(numberOfCharacters, character) << endl;

    for (int i = 0; i < movie_ratings.size(); i++) {
        cout << "\nHere are the movie rating for reviewer " << i + 1 << " using vector syntax" << endl;
        for (int j = 0; j < movie_ratings[i].size(); j++) {
            cout << movie_ratings.at(i).at(j) << " ";
        }
        cout << endl;
    }
    
        
    return 0;
}