#include <iostream>
#include <windows.h>
using namespace std;

// �������, ������� ���������, ���� �� ������ ���������� ������ "S" � "F"
bool checkExitCondition() {
    // �������� ��������� ������
    short sKeyState = GetAsyncKeyState('S');  // ��������� ������� "S"
    short fKeyState = GetAsyncKeyState('F');  // ��������� ������� "F"

    // ���������, ���� �� ������ ��� �������
    return (sKeyState & 0x8000) && (fKeyState & 0x8000);
}

int main() {
    setlocale(LC_ALL, "Rus");fff
    std:cout << "��������� ������ ������. ������� 'S' � 'F' ������������ ��� ������." << std::endl;

    // ����������� ���� ���������� ������
    while (true) {
        // ��������� ������� ������
        if (checkExitCondition()) {
            std::cout << "������ ������� 'S' � 'F'. ��������� ��������� ������." << std::endl;
            break;
        }

        // ���� ��������� ����� ����� ��������� ��������� (�����������)
        Sleep(1000);  // ���������� <windows.h> ��� ������������� ������� Sleep, ���� ����������

        // �������������� �������� ����� ���� ��������� �����

        // ������ ������ �������� ��������� ���������
        std::cout << "��������� ��������..." << std::endl;
    }

    return 0;
}