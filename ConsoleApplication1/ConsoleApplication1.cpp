﻿#define _CRT_SECURE_NO_WARNINGS
#define _UNICODE
#include <windows.h>
#include <tchar.h>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    //1. Дана строка символов. Заменить в ней все пробелы на табуляцию

    _TCHAR str[] = _TEXT("Hello, welcome to our C++ course!");
    wcout << str << '\n';

    for (int i = 0; i < _tcslen(str); i++)
    {
        if (str[i] == ' ') {
            str[i] = '\t';
        }
    }

    wcout << "Result: " << str << '\n';


    //2. Дана строка символов. Определить количество букв, количество цифр и количество остальных символов, 
    // присутствующих в строке.

    /*_TCHAR str[] = _TEXT("He110, w-1c0me t0 0ur C++ c0urse!");
    // 8 numbers, 15 letters, 5 special symbols

    int numbers = 0, letters = 0, symbols = 0, space = 0;

    for (int i = 0; i < _tcslen(str); i++)
    {
        if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122) 
        {
            letters++;
        }
        if (str[i] >= 48 && str[i] <= 57) 
        {
            numbers++;
        }
        if (str[i] >= 33 && str[i] <= 47 || str[i] >= 58 && str[i] <= 64 || str[i] >= 91 && str[i] <= 96 || str[i] >= 123 && str[i] <= 126) 
        {
            symbols++;
        }
        if (str[i] == ' ')
        {
            space++;
        }
    }

    wcout << "Result: \n" << "letters: " << letters << "\n" << "numbers: " << numbers << "\n" << "symbols: " << symbols << "\n" << "space: " << space << "\n" << endl;
    */
    
    
    //3. Подсчитать кол-во слов в веденном предложении
    // 
    //_TCHAR str[100];
    //cout << "Enter a sentence: ";
    //wcin.getline(str, 100);
    //int space = 0;

    //for (int i = 0; i < _tcslen(str); i++)
    //{
    //    if (str[i] == ' ')
    //    {
    //        space++;
    //    }
    //}
    //
    //wcout << "Words: " << space + 1 << endl;

   
    //4. Написать функцию для подсчета гласных букв в тексте, введенном с клавиатуры

    //_TCHAR str[100];
    //cout << "Enter a sentence: ";
    //wcin.getline(str, 100);
    //int vowel = 0;
    //int vowels[16] = { 63, 161, 168, 169, 183, 184, 214, 215, 222, 224, 231, 232, 241, 242, 247, 248 };


    //for (int i = 0; i < _tcslen(str); i++)
    //{
    //    /*for (int j = 0; j < 16; j++)
    //    {
    //        if (str[i] == vowels[j]) {
    //            vowel++;
    //        }
    //    }*/

    //    if (str[i] == 160) {
    //        vowel++;
    //    }
    //}

  
    //cout << "Amount of vowels: " << vowel << endl;

    //5. Дана строка символов. Проверить, является ли эта строка палиндромом

    /*_TCHAR str[] = _TEXT("rats live on no evil star");
    wcout << str << '\n';
    int len = _tcslen(str)-1;
    int check = 0;

    for (int i = 0; i < _tcslen(str)/2; i++)
    {
        if (str[i] == str[len]) {
           check++;
        }
        --len;
    }

    if (check == len) {
        wcout << "yes! It`s a palindrome!" << '\n'; 
    }
    else {
        wcout << "no! It`s not a palindrome!" << '\n';
    }*/


    //6.Написать функцию, которая удаляет из строки символ с заданным номером

    //_TCHAR str[] = _TEXT("hello, everyone!");
    //wcout << str << '\n';
    //
    //int num;
    //wcout << "Enter number from 0 to " << _tcslen(str) - 1 << ": ";
    //wcin >> num;
    //int j = 0;
    //const int len = _tcslen(str);

    //_TCHAR *rez = new _TCHAR[len];

    //for (int i = 0; i < _tcslen(str); i++)
    //{

    //    if (j == len)
    //    {
    //        rez[j] = '/0';
    //    }
    //    else
    //    {
    //        if (i != num)
    //        {
    //            rez[j] = str[i];
    //            j++;
    //        }
    //        else
    //        {

    //        }
    //    }
    //}

    //wcout << "Result: " << rez << endl;
    //delete[] rez;


    //7. Написать функцию, которая удаляет из строки все вхождения в нее заданного символа

    //_TCHAR str[] = _TEXT("hello, everyone!");
    //wcout << str << '\n';
    //
    //_TCHAR ch;
    //wcout << "Enter a symbol:  ";
    //wcin >> ch;
    //int j = 0;
    //int len = 0;
    //for (int i = 0; i < _tcslen(str); i++)
    //{
    //    if (str[i] != str[ch])
    //    {
    //        len++;
    //    }
    //}

    //_TCHAR *rez = new _TCHAR[len+1];

    //for (int i = 0; i < _tcslen(str); i++)
    //{
    //    if (str[i] != ch)
    //    {
    //        if (j == len)
    //        {
    //            rez[j] = '/0';
    //        }
    //        else 
    //        {
    //            rez[j] = str[i];
    //            j++;
    //        }
    //    }
    //   
    //}

    //wcout << "Result: " << rez << endl;
    //delete[] rez;


    //8. Написать функцию, которая вставляет в строку в указанную позицию заданный символ

    //_TCHAR str[] = _TEXT("hello, everyone!");
    //wcout << str << '\n';
    //
    //_TCHAR ch;
    //int pos;
    //wcout << "Enter a symbol:  ";
    //wcin >> ch;
    //wcout << "Enter a position: ";
    //wcin >> pos;

    //int j = 0;
    //int len = _tcslen(str)+1;
    //
    //_TCHAR *rez = new _TCHAR[len];

    //for (int i = 0; i < _tcslen(str)+1; i++)
    //{

    //    if (j == len - 1)
    //    {
    //        rez[j] = '/0';
    //    }
    //    else
    //    {
    //        if (i != pos)
    //        {
    //            rez[j] = str[i];
    //            j++;
    //        }
    //        else 
    //        {
    //            //to change symbol
    //            rez[j] = ch;
    //            j++;

    //            //to add symbol
    //            rez[j + 1] = str[i];
    //            j++;
    //        }
    //    }
    //    
    //   
    //}

    //wcout << "Result: " << rez << endl;
    //delete[] rez;
}

