#pragma once
#include<algorithm>
#include<vector>
#include<iostream>

// ���� = �T�ȉ�
auto condition = [](int x) {
    return (x <= 5);
};

std::vector<int> v = { 1, 2, 3, 4, 5 };
// �S�Ă��T�ȉ����H
bool a = std::all_of(v.begin(), v.end(), condition);  
// �P�ł��T�ȉ��̗v�f�����邩�H
bool b = std::any_of(v.begin(), v.end(), condition);   
// �S�Ă��U�ȏ�(�T�ȉ��ł͂Ȃ�)���H
bool c = std::none_of(v.begin(), v.end(), condition);   

void ShowALG(bool _a)
{
    std::cout << std::string(_a ? "true" : "false") << std::endl;
};