/*
3. Математический вектор
Что нужно сделать
Реализуйте структуру двумерного математического вектора и основные операции над ним. Обе координаты вектора (x и y) должны быть 
вещественными числами.
Начиная работу с программой, пользователь вводит команду. Затем в зависимости от команды пользователь вводит аргументы. Это могут 
быть как векторы, так и обычные скалярные значения. Результат помещается в стандартный вывод. Это тоже может быть или вектор, или скаляр.

Реализуйте в виде отдельных функций операции:
• сложение двух векторов — команда add;
• вычитание двух векторов — команда subtract;
• умножение вектора на скаляр — команда scale;
• нахождение длины вектора — команда length;
• нормализация вектора — команда normalize.

Советы и рекомендации
Для выбора команды используйте конструкцию вида if (operation == "add"). Тут так и напрашиваются отдельные функции для каждой 
операции.
*/

#include <iostream>
#include <cmath>

using namespace std;

struct math_vector{
    double x;
    double y;
};

void adding_vectors(){
    cout << "Введите координаты первого вектора (x y): ";
    math_vector first_vector;
    cin >> first_vector.x >> first_vector.y;
    cout << "Введите координаты второго вектора (x y): ";
    math_vector second_vector;
    cin >> second_vector.x >> second_vector.y;
    
    math_vector res_vec;
    res_vec.x = first_vector.x + second_vector.x;
    res_vec.y = first_vector.y + second_vector.y;
    cout << "Итоговый вектор имеет координаты (" << res_vec.x <<", " << res_vec.y << ")" << endl;
}

void subtraction_vectors(){
    cout << "Введите координаты первого вектора (x y): ";
    math_vector first_vector;
    cin >> first_vector.x >> first_vector.y;
    cout << "Введите координаты второго вектора (x y): ";
    math_vector second_vector;
    cin >> second_vector.x >> second_vector.y;

    math_vector res_vec;
    res_vec.x = first_vector.x - second_vector.x;
    res_vec.y = first_vector.y - second_vector.y;
    cout << "Итоговый вектор имеет координаты (" << res_vec.x <<", " << res_vec.y << ")" << endl;
}

void multiplying_vector_scalar(){
    cout << "Введите координаты вектора (x y): ";
    math_vector vector;
    cin >> vector.x >> vector.y;

    cout << "Введите значение числа: ";
    double scale;
    cin >> scale;

    math_vector res_vec;
    res_vec.x = vector.x * scale;
    res_vec.y = vector.y * scale;
    cout << "Итоговый вектор имеет координаты (" << res_vec.x <<", " << res_vec.y << ")" << endl;
}

void length_vector(){
    cout << "Введите координаты вектора (x y): ";
    math_vector vector;
    cin >> vector.x >> vector.y;
    double length = sqrt(vector.x * vector.x + vector.y*vector.y);
    cout << "Длина вектора равна: " << length << endl;
}

void normalize_vector(){
    cout << "Введите координаты вектора (x y): ";
    math_vector vector;
    cin >> vector.x >> vector.y;
    double length = sqrt(vector.x * vector.x + vector.y*vector.y);
    math_vector res_vec;
    res_vec.x = vector.x * (1/length);
    res_vec.y = vector.y * (1/length);
    cout << "Вектор после нормализации имеет координаты (" << res_vec.x <<", " << res_vec.y << ")" << endl;

}

int main(){
    setlocale(LC_ALL, "Russian");
    cout << "Введите название комнады:" << endl;
    cout << "сложение двух векторов — команда add"<< endl;
    cout << "вычитание двух векторов — команда subtract"<< endl;
    cout << "умножение вектора на скаляр — команда scale"<< endl;
    cout << "нахождение длины вектора — команда length"<< endl;
    cout << "нормализация вектора — команда normalize"<< endl;

    string command;
    cin >> command;

    if (command == "add"){
        adding_vectors();
    }
    else if (command == "subtract"){
        subtraction_vectors();
    }
    else if (command == "scale"){
        multiplying_vector_scalar();
    }
    else if (command == "length"){
        length_vector();
    }
    else if (command == "normalize"){
        normalize_vector();
    }
    else {
        cout << "Неверная команда";
    }
}