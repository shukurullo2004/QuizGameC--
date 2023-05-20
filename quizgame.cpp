#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string questions[] = {
        "1. What year was C++ created?: ",
        "2. Who invented C++?: ",
        "3. What is the predecessor of C++?: ",
        "4. Is the Earth flat? "
    };
    string options[][4] = {
        {"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
        {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D.Mark Zuckerberg"},
        {"A. C", "B. C+", "C. C--", "D. B++"},
        {"A. yes", "B. no", "C. sometimes", "D. what's Earth?"}
    };
    int size = sizeof(questions) / sizeof(questions[0]);
    char answerKey[] = {'C', 'B', 'A', 'B'};
    char guess;
    int score = 0; // Initialize score to 0

    cout << "\nTry to answer the following questions:" << endl;

    for (int i = 0; i < size; i++) {
        cout << "***************************************************" << endl;
        cout << questions[i] << endl;
        cout << "***************************************************" << endl;

        for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++) {
            cout << options[i][j] << endl;
        }

        cin >> guess;
        guess = toupper(guess);

        if (guess == answerKey[i]) {
            cout << "Correct :) Good job!" << endl;
            score++;
        } else {
            cout << "Wrong :(" << endl;
            cout << "Answer: " << answerKey[i] << endl;
        }
    }

    cout << "\n***************************************************" << endl;
    cout << "Number of questions: " << size << endl;
    cout << "Your score: " << (score / static_cast<double>(size)) * 100 << "%" << endl;
    cout << "Thanks for using Shukurullo's program :)" << endl;
    cout << "***************************************************\n" << endl;

    return 0;
}
