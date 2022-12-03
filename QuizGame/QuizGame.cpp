#include <iostream>
#include "Header.h"
int main() {
	setlocale(LC_ALL, "russian");

	std::cout << "\n\n\t\t\t\t<ИГРА ВИТОРИНА>"
		<< "\n";
	std::cout << "\nНажмите Enter что бы начать игру..."
		<< "\n";
	//Ожидание ввода
	std::cin.get();

	Question q1;
	Question q2;
	Question q3;
	Question q4;
	Question q5;

	//Число 3 правильный ответ
	q1.SetValues("Сколько дней в неделе?",
		"50", "6", "7", "9", 3, 10);
	q2.SetValues("2 + 2 ? ",
		"3", "10", "4", "-7", 3, 10);
	q3.SetValues("Луна это?",
		"Планета", "Астероид", "Спутник Земли", "Камень", 3, 10);
	q4.SetValues("Формула воды?",
		"HO", "CO2", "H2O", "CH", 3, 10);
	q5.SetValues("Чем дышат растения?",
		"Водород", "Гелий", "Кислород", "Метан", 3, 10);

	q1.AskQuestion();
	q2.AskQuestion();
	q3.AskQuestion();
	q4.AskQuestion();
	q5.AskQuestion();
	
	std::cout << "Всего очков = " << score << " из 50\n";

	if (score >= 40) {
		std::cout << "Поздравляем Вы выиграли!\n";
	}
	else {
		std::cout << "Вы проиграли! Повезет в следующий раз.\n";
	}

	return 0;
}