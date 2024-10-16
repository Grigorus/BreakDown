#include <iostream>
#include <windows.h>

// �������, ������� ���������, ���� �� ������ ���������� ������ "S" � "F"
bool checkExitCondition() {
    // �������� ��������� ������
    short sKeyState = GetAsyncKeyState('S');  // ��������� ������� "S"
    short fKeyState = GetAsyncKeyState('F');  // ��������� ������� "F"

    // ���������, ���� �� ������ ��� �������
    return (sKeyState & 0x8000) && (fKeyState & 0x8000);
}

int main() {
    std::cout << "��������� ������ ������. ������� 'S' � 'F' ������������ ��� ������." << std::endl;

    // ����������� ���� ���������� ������
    while (true) {
        // ��������� ������� ������
        if (checkExitCondition()) {
            std::cout << "������ ������� 'S' � 'F'. ��������� ��������� ������." << std::endl;
            break;
        }

        // ���� ��������� ����� ����� ��������� ��������� (�����������)
        Sleep(100);  // ���������� <windows.h> ��� ������������� ������� Sleep, ���� ����������

        // �������������� �������� ����� ���� ��������� �����

        // ������ ������ �������� ��������� ���������
        std::cout << "��������� ��������..." << std::endl;
    }

    return 0;
}