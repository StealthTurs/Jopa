#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;
void DataInitialization();//инициализаци€ данных
void DataEntry();//ввод данных вручную
void DataReading(string fileName);//чтение данных
void Print();//¬ывод ланных
bool DataCleaning();//отчистка данных
void DataChange();//изменение данных
void Copy();//копирование данных
int AmountOfData();//количество данных
void DeleteData();//удаление данных
void AddData();//добавление данных
void SaveData(string fileName);//сохранение данных
void DivisionGender();//ƒеление по полам
void CopyBoy(int _BOY);//подгонка данных к стандарту
void CopyGirl(int _GIRL);//подгонка данных к стандарту
void PrintDivision();//¬ывод рассортированного списка по полам
void RecordsBooks();// оценки
void Marks();
void PrintMarks();
void SlojenieSumMarks();
void ChekMarks();