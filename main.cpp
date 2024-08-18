/*
3. �������������� ������
��� ����� �������
���������� ��������� ���������� ��������������� ������� � �������� �������� ��� ���. ��� ���������� ������� (x � y) ������ ���� 
������������� �������.
������� ������ � ����������, ������������ ������ �������. ����� � ����������� �� ������� ������������ ������ ���������. ��� ����� 
���� ��� �������, ��� � ������� ��������� ��������. ��������� ���������� � ����������� �����. ��� ���� ����� ���� ��� ������, ��� ������.

���������� � ���� ��������� ������� ��������:
� �������� ���� �������� � ������� add;
� ��������� ���� �������� � ������� subtract;
� ��������� ������� �� ������ � ������� scale;
� ���������� ����� ������� � ������� length;
� ������������ ������� � ������� normalize.

������ � ������������
��� ������ ������� ����������� ����������� ���� if (operation == "add"). ��� ��� � ������������� ��������� ������� ��� ������ 
��������.
*/

#include <iostream>
#include <cmath>

using namespace std;

struct math_vector{
    double x;
    double y;
};

void adding_vectors(){
    cout << "������� ���������� ������� ������� (x y): ";
    math_vector first_vector;
    cin >> first_vector.x >> first_vector.y;
    cout << "������� ���������� ������� ������� (x y): ";
    math_vector second_vector;
    cin >> second_vector.x >> second_vector.y;
    
    math_vector res_vec;
    res_vec.x = first_vector.x + second_vector.x;
    res_vec.y = first_vector.y + second_vector.y;
    cout << "�������� ������ ����� ���������� (" << res_vec.x <<", " << res_vec.y << ")" << endl;
}

void subtraction_vectors(){
    cout << "������� ���������� ������� ������� (x y): ";
    math_vector first_vector;
    cin >> first_vector.x >> first_vector.y;
    cout << "������� ���������� ������� ������� (x y): ";
    math_vector second_vector;
    cin >> second_vector.x >> second_vector.y;

    math_vector res_vec;
    res_vec.x = first_vector.x - second_vector.x;
    res_vec.y = first_vector.y - second_vector.y;
    cout << "�������� ������ ����� ���������� (" << res_vec.x <<", " << res_vec.y << ")" << endl;
}

void multiplying_vector_scalar(){
    cout << "������� ���������� ������� (x y): ";
    math_vector vector;
    cin >> vector.x >> vector.y;

    cout << "������� �������� �����: ";
    double scale;
    cin >> scale;

    math_vector res_vec;
    res_vec.x = vector.x * scale;
    res_vec.y = vector.y * scale;
    cout << "�������� ������ ����� ���������� (" << res_vec.x <<", " << res_vec.y << ")" << endl;
}

void length_vector(){
    cout << "������� ���������� ������� (x y): ";
    math_vector vector;
    cin >> vector.x >> vector.y;
    double length = sqrt(vector.x * vector.x + vector.y*vector.y);
    cout << "����� ������� �����: " << length << endl;
}

void normalize_vector(){
    cout << "������� ���������� ������� (x y): ";
    math_vector vector;
    cin >> vector.x >> vector.y;
    double length = sqrt(vector.x * vector.x + vector.y*vector.y);
    math_vector res_vec;
    res_vec.x = vector.x * (1/length);
    res_vec.y = vector.y * (1/length);
    cout << "������ ����� ������������ ����� ���������� (" << res_vec.x <<", " << res_vec.y << ")" << endl;

}

int main(){
    setlocale(LC_ALL, "Russian");
    cout << "������� �������� �������:" << endl;
    cout << "�������� ���� �������� � ������� add"<< endl;
    cout << "��������� ���� �������� � ������� subtract"<< endl;
    cout << "��������� ������� �� ������ � ������� scale"<< endl;
    cout << "���������� ����� ������� � ������� length"<< endl;
    cout << "������������ ������� � ������� normalize"<< endl;

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
        cout << "�������� �������";
    }
}