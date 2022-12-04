#pragma once
#include <iostream>
#include <string>

int answer = 0;
int score = 0;

class Question {
private:
    std::string question_text;
    std::string answer_1;
    std::string answer_2;
    std::string answer_3;
    std::string answer_4;
    int correct_answer = 0;
    int question_score = 0;
public:
    void SetValues(
        std::string, std::string,
        std::string, std::string,
        std::string, int, int);
    void AskQuestion();
};
//Установка значений
void Question::SetValues(
    std::string qt, std::string a1,
    std::string a2, std::string a3,
    std::string a4, int ca, int qs) {
    question_text = qt;
    answer_1 = a1;
    answer_2 = a2;
    answer_3 = a3;
    answer_4 = a4;
    correct_answer = ca;
    question_score = qs;
}
//Отображение вопросов
void Question::AskQuestion() {
    std::cout << "\n";
    std::cout << question_text << "\n"
        << "\t1)" << answer_1
        << "  2)" << answer_2
        << "  3)" << answer_3
        << "  4)" << answer_4
        << "\n";
    std::cout << "Ваш ответ: ";
    std::cin >> answer;

    if (answer == correct_answer) {
        std::cout << "\nПравильно!\n"
            << "Очков: +" << question_score << "\n";
        score = score + question_score;
    }
    else {
        std::cout << "\nНеправильно!\n" << "Очков: +0" << "\n"
            << "Правильный ответ = " << correct_answer << ".\n\n";
    }
}
