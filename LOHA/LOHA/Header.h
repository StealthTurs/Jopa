#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;
void DataInitialization();//������������� ������
void DataEntry();//���� ������ �������
void DataReading(string fileName);//������ ������
void Print();//����� ������
bool DataCleaning();//�������� ������
void DataChange();//��������� ������
void Copy();//����������� ������
int AmountOfData();//���������� ������
void DeleteData();//�������� ������
void AddData();//���������� ������
void SaveData(string fileName);//���������� ������
void DivisionGender();//������� �� �����
void CopyBoy(int _BOY);//�������� ������ � ���������
void CopyGirl(int _GIRL);//�������� ������ � ���������
void PrintDivision();//����� ����������������� ������ �� �����
void RecordsBooks();// ������
void Marks();
void PrintMarks();
void SlojenieSumMarks();
void ChekMarks();
void Povirka();
void _Povirka();
void Vivod();
void _Vivod();
