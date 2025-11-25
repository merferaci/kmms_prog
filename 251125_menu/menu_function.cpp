#include "menu_functions.hpp"

#include <iostream>
#include <cstdlib>

const PY::MenuItem* PY::show_menu(const MenuItem* current){
    if (current->title) {
        std::cout << current->title << std::endl;
    }
    std::cout << "Обучайка приветствует тебя, мой юный ученик!" << std::endl;
    
    for (int i = 1; i < current->children_count; i++){
        std::cout << current->children[i]->title << std::endl;
    }
    std::cout << current->children[0]->title << std::endl;
    std::cout << "Обучайка > ";
    
    int user_input;
    std::cin >> user_input;
    std::cout << std::endl;
    
    return current->children[user_input];
}

const PY::MenuItem* PY::exit(const MenuItem* current){
    std::exit(0);
}

const PY::MenuItem* PY::study_algebra(const MenuItem* current){
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const PY::MenuItem* PY::study_mat_analusis(const MenuItem* current){
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const PY::MenuItem* PY::study_go_back(const MenuItem* current){
    std::cout << current->title << std::endl << std::endl;
    return current->parent->parent;
}

const PY::MenuItem* PY::algebra_summ(const MenuItem* current){
    std::cout << "Сложение - это основа математики!" << std::endl;
    std::cout << "a + b = c" << std::endl;
    std::cout << "Пример: 2 + 3 = 5" << std::endl << std::endl;
    return current->parent;
}

const PY::MenuItem* PY::algebra_substract(const MenuItem* current){
    std::cout << "Вычитание - обратная операция сложению!" << std::endl;
    std::cout << "a - b = c" << std::endl;
    std::cout << "Пример: 5 - 3 = 2" << std::endl << std::endl;
    return current->parent;
}

const PY::MenuItem* PY::algebra_multiply(const MenuItem* current){
    std::cout << "Умножение - это многократное сложение!" << std::endl;
    std::cout << "a × b = c" << std::endl;
    std::cout << "Пример: 2 × 3 = 6" << std::endl << std::endl;
    return current->parent;
}

const PY::MenuItem* PY::algebra_divide(const MenuItem* current){
    std::cout << "Деление - обратная операция умножению!" << std::endl;
    std::cout << "a ÷ b = c" << std::endl;
    std::cout << "Пример: 6 ÷ 3 = 2" << std::endl << std::endl;
    return current->parent;
}

const PY::MenuItem* PY::algebra_go_back(const MenuItem* current){
    std::cout << "Возвращаемся к выбору предмета..." << std::endl << std::endl;
    return current->parent->parent;
}

const PY::MenuItem* PY::mat_analusis_dif(const MenuItem* current){
    std::cout << "Дифференциальное исчисление - изучение производных!" << std::endl;
    std::cout << "f'(x) = lim(h→0) [f(x+h) - f(x)]/h" << std::endl << std::endl;
    return current->parent;
}

const PY::MenuItem* PY::mat_analusis_int(const MenuItem* current){
    std::cout << "Интегральное исчисление - изучение интегралов!" << std::endl;
    std::cout << "∫f(x)dx = F(x) + C" << std::endl << std::endl;
    return current->parent;
}

const PY::MenuItem* PY::mat_analysis_go_back(const MenuItem* current){
    std::cout << "Возвращаемся к выбору предмета..." << std::endl << std::endl;
    return current->parent->parent;
}
