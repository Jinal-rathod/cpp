#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define RESET "\033[0m"
#define GREEN "\033[32m"
#define RED "\033[31m"

struct Question
{
    string question;
    string options[4];
    char correctAnswer;
};

void playQuiz(const vector<Question> &quiz)
{
    int score = 0;
    char answer;
    for (const auto &q : quiz)
    {
        cout << q.question << endl;
        for (int i = 0; i < 4; i++)
        {
            cout << char('A' + i) << ". " << q.options[i] << endl;
        }
        cout << "Your answer: ";
        cin >> answer;
        answer = toupper(answer);

        if (answer == q.correctAnswer)
        {
            cout << GREEN << "Correct!" << endl;
            score++;
        }
        else
        {
            cout << RED << "Wrong! The correct answer was " << q.correctAnswer << endl;
        }
        cout << RESET << "-----------------------------" << endl;
    }
    cout << "Your final score: " << score << "/" << quiz.size() << endl;
}
int main()
{
    vector<Question> quiz;
    int choice;
    cout << "Choose quiz mode:\n1. Add your own questions\n2. Play with predefined questions" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        int numQuestions;
        cout << "How many questions do you want to add? ";
        cin >> numQuestions;
        cin.ignore();

        for (int i = 0; i < numQuestions; i++)
        {
            Question q;
            cout << "Enter question " << (i + 1) << ": ";
            getline(cin, q.question);
            for (int j = 0; j < 4; j++)
            {
                cout << "Option " << char('A' + j) << ": ";
                getline(cin, q.options[j]);
            }
            cout << "Enter the correct option (A, B, C, or D): ";
            cin >> q.correctAnswer;
            q.correctAnswer = toupper(q.correctAnswer);
            cin.ignore();
            quiz.push_back(q);
        }
        playQuiz(quiz);
        break;
    }

    case 2:
    {
        quiz = {
            {" What year was C++ created?", {"1969", "1975", "1985", "1989"}, 'C'},
            {"Who invented C++?", {"Guido van Rossum", "Bjarne Sroustrup", "John Carmack", "Mark Zuckerburg"}, 'B'},
            {"Which is the largest planet?", {"Jupiter", "Earth", "Mars", "Venus"}, 'A'}};
        playQuiz(quiz);
        break;
    }

    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}