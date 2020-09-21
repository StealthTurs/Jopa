#include "Header.h"
void DataInitialization() {
	ofstream _buf("Buffer.txt");
	if (!_buf)
		cout << "Ошибка создания буферного файла" << endl;
	_buf.close();
}
void DataEntry() {
	string _surnameF, _surnameI, _surnameO, _DOBDay, _DOBMonth, _DOBYear, Fak, Kaf, Group;
	int _gender, _YearOfReceipt, RecordBook, n;
	cout << "Введите колличество данных: ";
	cin >> n;
	ofstream record("buffer.txt", ios::app);
	if (record) {
		record << n << endl;
		for (int i = 0; i < n; i++) {
			cout << "Выберите пол 1-Мужской, 0-Женский: ";
			cin >> _gender;
			cout << "Введите фамилию: ";
			cin >> _surnameF;
			cout << "Введите имя: ";
			cin >> _surnameI;
			cout << "Введите отчество: ";
			cin >> _surnameO;
			cout << "Введите день рождения: ";
			cin >> _DOBDay;
			cout << "Введите месяц рождения: ";
			cin >> _DOBMonth;
			cout << "Введите год рождения: ";
			cin >> _DOBYear;
			cout << "Введите номер зачетной книжки студента: ";
			cin >> RecordBook;
			cout << "Введите наименование факультета: ";
			cin >> Fak;
			cout << "Введите наименование кафедры: ";
			cin >> Kaf;
			cout << "Введите номер группы: ";
			cin >> Group;
			cout << "Введите год поступления: ";
			cin >> _YearOfReceipt;
			record << _gender << endl;
			record << _surnameF << endl;
			record << _surnameI << endl;
			record << _surnameO << endl;
			record << _DOBDay << endl;
			record << _DOBMonth << endl;
			record << _DOBYear << endl;
			record << RecordBook << endl;
			record << Fak << endl;
			record << Kaf << endl;
			record << Group << endl;

			if (i < n - 1)
				record << _YearOfReceipt << endl;
			else
				record << _YearOfReceipt;
			cout << "______________________________________" << endl;

		}
	}
	else
		cout << "Ошибка открытия файла!" << endl;
	record.close();
}
void DataReading(string fileName) {
	ifstream reading(fileName);
	ofstream record("Buffer.txt", ios::out);
	if (reading) {
		if (record) {
			string _surnameF, _surnameI, _surnameO, _DOBDay, _DOBMonth, _DOBYear, Fak, Kaf, Group;
			int _gender, _YearOfReceipt, RecordBook, n;
			reading >> n;
			record << n << endl;
			for (int i = 0; i < n; i++) {
				reading >> _gender;
				reading >> _surnameF;
				reading >> _surnameI;
				reading >> _surnameO;
				reading >> _DOBDay;
				reading >> _DOBMonth;
				reading >> _DOBYear;
				reading >> RecordBook;
				reading >> Fak;
				reading >> Kaf;
				reading >> Group;
				reading >> _YearOfReceipt;
				record << _gender << endl;
				record << _surnameF << endl;
				record << _surnameI << endl;
				record << _surnameO << endl;
				record << _DOBDay << endl;
				record << _DOBMonth << endl;
				record << _DOBYear << endl;
				record << RecordBook << endl;
				record << Fak << endl;
				record << Kaf << endl;
				record << Group << endl;
				if (i < n - 1)
					record << _YearOfReceipt << endl;
				else
					record << _YearOfReceipt;
			}
			cout << "Данные считаны!" << endl;

		}
		else
			cout << "Ошибка открытия буфера" << endl;
	}
	else
		cout << "Ошибка открытия файла!" << endl;
	reading.close();
	record.close();
}
void Print() {
	ifstream reading("Buffer.txt");
	if (reading) {
		string _surnameF, _surnameI, _surnameO, _DOBDay, _DOBMonth, _DOBYear, Fak, Kaf, Group;
		int _gender, _YearOfReceipt, RecordBook, n;
		reading >> n;
		cout << "Количесство данных: " << n << endl << endl;
		for (int i = 0; i < n; i++) {
			cout << "Данные №" << i + 1 << endl;
			reading >> _gender;
			cout << "Пол(1-Муж.;0-Жен.): " << _gender << endl;
			reading >> _surnameF;
			reading >> _surnameI;
			reading >> _surnameO;
			cout << "Ф.И.О: " << _surnameF << " " << _surnameI << " " << _surnameO << endl;
			reading >> _DOBDay;
			reading >> _DOBMonth;
			reading >> _DOBYear;
			cout << "Дата рождения: " << _DOBDay << "." << _DOBMonth << "." << _DOBYear << endl;
			reading >> RecordBook;
			cout << "Зачетная книжка: " << RecordBook << endl;
			reading >> Fak;
			cout << "Факультет: " << Fak << endl;
			reading >> Kaf;
			cout << "Кафедра: " << Kaf << endl;
			reading >> Group;
			cout << "Группа: " << Group << endl;
			reading >> _YearOfReceipt;
			cout << "Год поступления: " << _YearOfReceipt << endl;
			cout << "__________________________________________" << endl;

		}
	}
	else
		cout << "Ошибка чтения файла!" << endl;
	reading.close();

}
bool DataCleaning() {
	bool clear = false;
	fstream _buf("Buffer.txt", ios::out);
	fstream reading("DivisionBoy.txt", ios::out);
	fstream reading_("DivisionGirl.txt", ios::out);
	fstream read("Division.txt", ios::out);
	fstream re("Kol-vo Marks(preobpazovana).txt", ios::out);
	fstream _rea("Kol-vo Marks.txt", ios::out);
	fstream _r("Povirka.txt", ios::out);
	if (!_buf)
		cout << "Ошибка открытия буферного файла!" << endl;
	_buf.clear();
	if (_buf.peek() == EOF)
		clear = true;
	else
		clear = false;
	_buf.close();
	reading.close();
	reading_.close();
	read.close();
	re.close();
	_rea.close();
	_r.close();
	remove("DivisionGirl.txt");
	remove("DivisionBoy.txt");
	remove("Division.txt");
	remove("Kol-vo Marks(preobpazovana).txt");
	remove("Kol-vo Marks.txt");
	remove("Povirka.txt");
	return clear;
}
void DataChange() {
	Copy();
	ifstream reading("Buffer_.txt");
	ofstream record("Buffer.txt", ios::out);
	if (reading) {
		if (record) {
			string _surnameF, _surnameI, _surnameO, _DOBDay, _DOBMonth, _DOBYear, Fak, Kaf, Group;
			int _gender, _YearOfReceipt, RecordBook, n, _n;
			reading >> n;
			cout << "Выберите номер изменяемого элемента (от 1 до" << n << "): ";
			cin >> _n;
			_n--;
			system("cls");
			record << n << endl;
			if (_n >= 0 && _n < n) {
				for (int i = 0; i < n; i++) {
					if (i != _n) {
						reading >> _gender;
						record << _gender << endl;
						reading >> _surnameF;
						record << _surnameF << endl;
						reading >> _surnameI;
						record << _surnameI << endl;
						reading >> _surnameO;
						record << _surnameO << endl;
						reading >> _DOBDay;
						record << _DOBDay << endl;
						reading >> _DOBMonth;
						record << _DOBMonth << endl;
						reading >> _DOBYear;
						record << _DOBYear << endl;
						reading >> RecordBook;
						record << RecordBook << endl;
						reading >> Fak;
						record << Fak << endl;
						reading >> Kaf;
						record << Kaf << endl;
						reading >> Group;
						record << Group << endl;
						reading >> _YearOfReceipt;
						if (i < n - 1)
							record << _YearOfReceipt << endl;
						else
							record << _YearOfReceipt;
					}
					else {
						cout << "Выберите пол 1-Мужской, 0-Женский: ";
						cin >> _gender;
						record << _gender << endl;
						cout << "Введите фамилию: ";
						cin >> _surnameF;
						record << _surnameF << endl;
						cout << "Введите имя: ";
						cin >> _surnameI;
						record << _surnameI << endl;
						cout << "Введите отчество: ";
						cin >> _surnameO;
						record << _surnameO << endl;
						cout << "Введите день рождения: ";
						cin >> _DOBDay;
						record << _DOBDay << endl;
						cout << "Введите месяц рождения: ";
						cin >> _DOBMonth;
						record << _DOBMonth << endl;
						cout << "Введите год рождения: ";
						cin >> _DOBYear;
						record << _DOBYear << endl;
						cout << "Введите номер зачетной книжки: ";
						cin >> RecordBook;
						record << RecordBook << endl;
						cout << "Введите наименование факультета: ";
						cin >> Fak;
						record << Fak << endl;
						cout << "Введите наименование кафедры: ";
						cin >> Kaf;
						record << Kaf << endl;
						cout << "Введите номер группы: ";
						cin >> Group;
						record << Group << endl;
						cout << "Введите год поступления: ";
						cin >> _YearOfReceipt;
						if (i < n - 1)
							record << _YearOfReceipt << endl;
						else
							record << _YearOfReceipt;
						reading >> _gender;
						reading >> _surnameF;
						reading >> _surnameI;
						reading >> _surnameO;
						reading >> _DOBDay;
						reading >> _DOBMonth;
						reading >> _DOBYear;
						reading >> RecordBook;
						reading >> Fak;
						reading >> Kaf;
						reading >> Group;
						reading >> _YearOfReceipt;
					}
				}
				cout << "Данные изменены!" << endl;
			}
			else
				cout << "Номер введен не верно!" << endl;
		}
		else
			cout << "Ошибка открытия файла!" << endl;
	}
	else
		cout << "Ошибка открытия буферного файла!" << endl;
	record.close();
	reading.close();
	remove("Buffer_.txt");
}
void Copy() {
	ifstream reading("Buffer.txt");
	ofstream record("Buffer_.txt", ios::out);
	if (reading) {
		if (record) {
			string _surnameF, _surnameI, _surnameO, _DOBDay, _DOBMonth, _DOBYear, Fak, Kaf, Group;
			int _gender, _YearOfReceipt, RecordBook, n;
			reading >> n;
			record << n << endl;
			for (int i = 0; i < n; i++) {
				reading >> _gender;
				record << _gender << endl;
				reading >> _surnameF;
				record << _surnameF << endl;
				reading >> _surnameI;
				record << _surnameI << endl;
				reading >> _surnameO;
				record << _surnameO << endl;
				reading >> _DOBDay;
				record << _DOBDay << endl;
				reading >> _DOBMonth;
				record << _DOBMonth << endl;
				reading >> _DOBYear;
				record << _DOBYear << endl;
				reading >> RecordBook;
				record << RecordBook << endl;
				reading >> Fak;
				record << Fak << endl;
				reading >> Kaf;
				record << Kaf << endl;
				reading >> Group;
				record << Group << endl;
				reading >> _YearOfReceipt;
				if (i < n - 1)
					record << _YearOfReceipt << endl;
				else
					record << _YearOfReceipt;
			}
		}
		else
			cout << "Ошибка открытия файла!" << endl;
	}
	else
		cout << "Ошибка открытия буферного файла!" << endl;
	record.close();
	reading.close();
}
int AmountOfData() {
	ifstream _buf("Buffer.txt");
	int n;
	if (_buf) {
		_buf >> n;
	}
	else
		cout << "ошибка открытия буфферного файла!" << endl;
	_buf.close();
	return n;
}
void DeleteData() {
	Copy();
	ifstream reading("Buffer_.txt");
	ofstream record("Buffer.txt", ios::out);
	if (reading) {
		if (record) {
			string _surnameF, _surnameI, _surnameO, _DOBDay, _DOBMonth, _DOBYear, Fak, Kaf, Group;
			int _gender, _YearOfReceipt, RecordBook, n, _n;
			reading >> n;
			int b = n - 1;
			cout << "Выберете номер изменяемого элемента (от 1 до " << n << "): ";
			cin >> _n;
			_n--;
			system("cls");
			record << b << endl;
			if (_n >= 0 && _n < n) {
				for (int i = 0; i < n; i++) {
					if (i != _n) {
						reading >> _gender;
						record << _gender << endl;
						reading >> _surnameF;
						record << _surnameF << endl;
						reading >> _surnameI;
						record << _surnameI << endl;
						reading >> _surnameO;
						record << _surnameO << endl;
						reading >> _DOBDay;
						record << _DOBDay << endl;
						reading >> _DOBMonth;
						record << _DOBMonth << endl;
						reading >> _DOBYear;
						record << _DOBYear << endl;
						reading >> RecordBook;
						record << RecordBook << endl;
						reading >> Fak;
						record << Fak << endl;
						reading >> Kaf;
						record << Kaf << endl;
						reading >> Group;
						record << Group << endl;
						reading >> _YearOfReceipt;
						if (i < n - 1)
							record << _YearOfReceipt << endl;
						else
							record << _YearOfReceipt;
					}
					else {
						reading >> _gender;
						reading >> _surnameF;
						reading >> _surnameI;
						reading >> _surnameO;
						reading >> _DOBDay;
						reading >> _DOBMonth;
						reading >> _DOBYear;
						reading >> RecordBook;
						reading >> Fak;
						reading >> Kaf;
						reading >> Group;
						reading >> _YearOfReceipt;
					}
				}
				cout << "Данные удалены!" << endl;
			}
			else
				cout << "Номер введен не верно!" << endl;
		}
		else
			cout << "Ошибка открытия файла!" << endl;
	}
	else
		cout << "Ошибка отрытия буферного файла!" << endl;
	record.close();
	reading.close();
	remove("Buffer_.txt");
}
void AddData() {
	string _surnameF, _surnameI, _surnameO, _DOBDay, _DOBMonth, _DOBYear, Fak, Kaf, Group;
	int _gender, _YearOfReceipt, RecordBook;
	int n = AmountOfData() + 1;
	ofstream record("Buffer.txt", ios::app);
	ofstream record_("Buffer.txt", ios::out | ios::in);
	if (record_) {
		record_ << n << endl;
	}
	else
		cout << "Ошибка открытия буферного файла!" << endl;
	if (record) {
		record << endl;
		cout << "Выберите пол 1-Мужской, 2-Женский: ";
		cin >> _gender;
		cout << "Введите фамилию: ";
		cin >> _surnameF;
		cout << "Введите имя: ";
		cin >> _surnameI;
		cout << "Введите отчество: ";
		cin >> _surnameO;
		cout << "Введите день рождения: ";
		cin >> _DOBDay;
		cout << "Введите месяц рождения: ";
		cin >> _DOBMonth;
		cout << "Введите год рождения: ";
		cin >> _DOBYear;
		cout << "Введите номер зачетной книжки: ";
		cin >> RecordBook;
		cout << "Введите наименование факультета: ";
		cin >> Fak;
		cout << "Введите наименование кафедры: ";
		cin >> Kaf;
		cout << "Введите номер группы: ";
		cin >> Group;
		cout << "Введите год поступления: ";
		cin >> _YearOfReceipt;
		record << _gender << endl;
		record << _surnameF << endl;
		record << _surnameI << endl;
		record << _surnameO << endl;
		record << _DOBDay << endl;
		record << _DOBMonth << endl;
		record << _DOBYear << endl;
		record << RecordBook;
		record << Fak;
		record << Kaf;
		record << Group;
		record << _YearOfReceipt;
	}
	else
		cout << "Ошибка открытия файла!" << endl;
	record.close();
	record_.close();
}
void SaveData(string fileName) {
	ifstream reading("Buffer.txt");
	ofstream record(fileName, ios::out);
	if (reading) {
		if (record) {
			string _surnameF, _surnameI, _surnameO, _DOBDay, _DOBMonth, _DOBYear, Fak, Kaf, Group;
			int _gender, _YearOfReceipt, RecordBook, n;
			reading >> n;
			record << n << endl;
			for (int i = 0; i < n; i++) {
				reading >> _gender;
				record << _gender << endl;
				reading >> _surnameF;
				record << _surnameF << endl;
				reading >> _surnameI;
				record << _surnameI << endl;
				reading >> _surnameO;
				record << _surnameO << endl;
				reading >> _DOBDay;
				record << _DOBDay << endl;
				reading >> _DOBMonth;
				record << _DOBMonth << endl;
				reading >> _DOBYear;
				record << _DOBYear << endl;
				reading >> RecordBook;
				record << RecordBook << endl;
				reading >> Fak;
				record << Fak << endl;
				reading >> Kaf;
				record << Kaf << endl;
				reading >> Group;
				record << Group << endl;
				reading >> _YearOfReceipt;
				if (i < n - 1)
					record << _YearOfReceipt << endl;
				else
					record << _YearOfReceipt;

			}
			cout << "Данные сохранены в файле " << fileName << endl;
		}
		else
			cout << "Ошибка открытия буферного файла!" << endl;
	}
	else
		cout << "Ошибка открытия файла" << endl;
	record.close();
	reading.close();

}
void CopyBoy(int _BOY) {
	ifstream reading("DivisionBoy_.txt");
	ofstream record("DivisionBoy.txt", ios::out);
	if (reading) {
		if (record) {
			string _surnameF, _surnameI, _surnameO, _DOBDay, _DOBMonth, _DOBYear, Fak, Kaf, Group;
			int _gender, _YearOfReceipt, RecordBook;
			int n = _BOY;
			record << n << endl;
			for (int i = 0; i < n; i++) {
				reading >> _gender;
				record << _gender << endl;
				reading >> _surnameF;
				record << _surnameF << endl;
				reading >> _surnameI;
				record << _surnameI << endl;
				reading >> _surnameO;
				record << _surnameO << endl;
				reading >> _DOBDay;
				record << _DOBDay << endl;
				reading >> _DOBMonth;
				record << _DOBMonth << endl;
				reading >> _DOBYear;
				record << _DOBYear << endl;
				reading >> RecordBook;
				record << RecordBook << endl;
				reading >> Fak;
				record << Fak << endl;
				reading >> Kaf;
				record << Kaf << endl;
				reading >> Group;
				record << Group << endl;
				reading >> _YearOfReceipt;
				if (i < n - 1)
					record << _YearOfReceipt << endl;
				else
					record << _YearOfReceipt;
			}
		}
		else
			cout << "Ошибка открытия файла!" << endl;
	}
	else
		cout << "Ошибка открытия буферного файла!" << endl;
	record.close();
	reading.close();

}
void CopyGirl(int _GIRL) {
	ifstream reading("DivisionGirl_.txt");
	ofstream record("DivisionGirl.txt", ios::out);
	if (reading) {
		if (record) {
			string _surnameF, _surnameI, _surnameO, _DOBDay, _DOBMonth, _DOBYear, Fak, Kaf, Group;
			int _gender, _YearOfReceipt, RecordBook;
			int n = _GIRL;
			record << n << endl;
			for (int i = 0; i < n; i++) {
				reading >> _gender;
				record << _gender << endl;
				reading >> _surnameF;
				record << _surnameF << endl;
				reading >> _surnameI;
				record << _surnameI << endl;
				reading >> _surnameO;
				record << _surnameO << endl;
				reading >> _DOBDay;
				record << _DOBDay << endl;
				reading >> _DOBMonth;
				record << _DOBMonth << endl;
				reading >> _DOBYear;
				record << _DOBYear << endl;
				reading >> RecordBook;
				record << RecordBook << endl;
				reading >> Fak;
				record << Fak << endl;
				reading >> Kaf;
				record << Kaf << endl;
				reading >> Group;
				record << Group << endl;
				reading >> _YearOfReceipt;
				if (i < n - 1)
					record << _YearOfReceipt << endl;
				else
					record << _YearOfReceipt;
			}
		}
		else
			cout << "Ошибка открытия файла!" << endl;
	}
	else
		cout << "Ошибка открытия буферного файла!" << endl;
	record.close();
	reading.close();

}
void DivisionGender() {
	ifstream reading("Buffer.txt");
	ofstream record("DivisionBoy_.txt", ios::out | ios::end);
	ofstream record_("DivisionGirl_.txt", ios::out | ios::end);
	if (reading) {
		if (record) {
			string _surnameF, _surnameI, _surnameO, _DOBDay, _DOBMonth, _DOBYear, Fak, Kaf, Group;
			int _gender, _YearOfReceipt, RecordBook, n;
			int _BOY = 0, _GIRL = 0;
			reading >> n;
			for (int i = 0; i < n; i++) {
				reading >> _gender;
				if (_gender != 1) {
					_GIRL++;
					record_ << _gender << endl;
					reading >> _surnameF;
					record_ << _surnameF << endl;
					reading >> _surnameI;
					record_ << _surnameI << endl;
					reading >> _surnameO;
					record_ << _surnameO << endl;
					reading >> _DOBDay;
					record_ << _DOBDay << endl;
					reading >> _DOBMonth;
					record_ << _DOBMonth << endl;
					reading >> _DOBYear;
					record_ << _DOBYear << endl;
					reading >> RecordBook;
					record_ << RecordBook << endl;
					reading >> Fak;
					record_ << Fak << endl;
					reading >> Kaf;
					record_ << Kaf << endl;
					reading >> Group;
					record_ << Group << endl;
					reading >> _YearOfReceipt;
					if (i < n - 1)
						record_ << _YearOfReceipt << endl;
					else
						record_ << _YearOfReceipt;

				}
				else {
					_BOY++;
					record << _gender << endl;
					reading >> _surnameF;
					record << _surnameF << endl;
					reading >> _surnameI;
					record << _surnameI << endl;
					reading >> _surnameO;
					record << _surnameO << endl;
					reading >> _DOBDay;
					record << _DOBDay << endl;
					reading >> _DOBMonth;
					record << _DOBMonth << endl;
					reading >> _DOBYear;
					record << _DOBYear << endl;
					reading >> RecordBook;
					record << RecordBook << endl;
					reading >> Fak;
					record << Fak << endl;
					reading >> Kaf;
					record << Kaf << endl;
					reading >> Group;
					record << Group << endl;
					reading >> _YearOfReceipt;
					if (i < n - 1)
						record << _YearOfReceipt << endl;
					else
						record << _YearOfReceipt;


				}
			}
			cout << "Количество девушек: " << _GIRL << endl;
			cout << "Количество юношей: " << _BOY << endl;
			CopyBoy(_BOY);
			CopyGirl(_GIRL);
			cout << "Деление завершено!" << endl;

		}
		else
			cout << "Ошибка открытия файла!" << endl;
	}
	else
		cout << "Ошибка открытия буферного файла!" << endl;

	record.close();
	reading.close();
	record_.close();
	remove("DivisionGirl_.txt");
	remove("DivisionBoy_.txt");
}
void PrintDivision() {
	ifstream reading("DivisionBoy.txt");
	ifstream reading_("DivisionGirl.txt");
	if (reading) {
		string _surnameF, _surnameI, _surnameO, _DOBDay, _DOBMonth, _DOBYear, Fak, Kaf, Group;
		int _gender, _YearOfReceipt, RecordBook;
		int n, gen;
		cout << "Список мальчиков(1) или девочек(0) Вы хотите увидеть? > ";
		cin >> gen;
		system("cls");
		if (gen != 0) {
			cout << "Список мальчиков(1) " << endl;
			reading >> n;
			cout << "Количесство данных: " << n << endl << endl;
			for (int i = 0; i < n; i++) {
				cout << "Данные №" << i + 1 << endl;
				reading >> _gender;
				cout << "Пол(1-Муж.;0-Жен.): " << _gender << endl;
				reading >> _surnameF;
				reading >> _surnameI;
				reading >> _surnameO;
				cout << "Ф.И.О: " << _surnameF << " " << _surnameI << " " << _surnameO << endl;
				reading >> _DOBDay;
				reading >> _DOBMonth;
				reading >> _DOBYear;
				cout << "Дата рождения: " << _DOBDay << "." << _DOBMonth << "." << _DOBYear << endl;
				reading >> RecordBook;
				cout << "Номер зачетной книжки: " << RecordBook << endl;
				reading >> Fak;
				cout << "Факультет: " << Fak << endl;
				reading >> Kaf;
				cout << "Кафедра: " << Kaf << endl;
				reading >> Group;
				cout << "Группа: " << Group << endl;
				reading >> _YearOfReceipt;
				cout << "Год поступления: " << _YearOfReceipt << endl;
				cout << "__________________________________________" << endl;
			}
		}
		else {
			cout << "Список девочек(0) " << endl;
			reading_ >> n;
			cout << "Количесство данных: " << n << endl << endl;
			for (int i = 0; i < n; i++) {
				cout << "Данные №" << i + 1 << endl;
				reading_ >> _gender;
				cout << "Пол(1-Муж.;0-Жен.): " << _gender << endl;
				reading_ >> _surnameF;
				reading_ >> _surnameI;
				reading_ >> _surnameO;
				cout << "Ф.И.О: " << _surnameF << " " << _surnameI << " " << _surnameO << endl;
				reading_ >> _DOBDay;
				reading_ >> _DOBMonth;
				reading_ >> _DOBYear;
				cout << "Дата рождения: " << _DOBDay << "." << _DOBMonth << "." << _DOBYear << endl;
				reading_ >> RecordBook;
				cout << "Номер зачетной книжки: " << RecordBook << endl;
				reading_ >> Fak;
				cout << "Факультет: " << Fak << endl;
				reading_ >> Kaf;
				cout << "Кафедра: " << Kaf << endl;
				reading_ >> Group;
				cout << "Группа: " << Group << endl;
				reading_ >> _YearOfReceipt;
				cout << "Год поступления: " << _YearOfReceipt << endl;
				cout << "__________________________________________" << endl;
			}
		}
	}
	else
		cout << "Ошибка чтения файла!" << endl;
	reading.close();
	reading_.close();
}
void RecordsBooks() {
	ifstream reading("Buffer.txt");
	ofstream record("RecordsBooks.txt", ios::out | ios::end);
	string _surnameF, _surnameI, _surnameO, _DOBDay, _DOBMonth, _DOBYear, Fak, Kaf, Group;
	int _gender, _YearOfReceipt, RecordBook, n;
	if (reading) {
		if (record) {
			reading >> n;
			record << n << endl;
			for (int i = 0; i < n; i++) {
				reading >> _gender;
				reading >> _surnameF;
				reading >> _surnameI;
				reading >> _surnameO;
				reading >> _DOBDay;
				reading >> _DOBMonth;
				reading >> _DOBYear;
				reading >> RecordBook;
				reading >> Fak;
				reading >> Kaf;
				reading >> Group;
				reading >> _YearOfReceipt;
				record << RecordBook << endl;
				record << _surnameF << endl;
				record << _surnameI << endl;
				if (i < n - 1)
					record << _surnameO << endl;
				else
					record << _surnameO;

			}
		}
		else
			cout << "Ошибка открытия файла!" << endl;
	}
	else
		cout << "Ошибка открытия буферного файла!" << endl;
	reading.close();
	record.close();
}
void Marks() {
	RecordsBooks();
	ifstream reading("RecordsBooks.txt");
	ofstream record("Marks.txt", ios::out | ios::end);
	if (reading) {
		if (record) {
			string _surnameF, _surnameI, _surnameO, Lesson;
			int RecordBook, _RecordBook;
			int n;
			int  _marks, session, kol;
			reading >> n;
			record << n << endl;
			for (int i = 0; i < n; i++) {
				reading >> RecordBook;
				record << RecordBook << endl;
				reading >> _surnameF;
				record << _surnameF << endl;
				reading >> _surnameI;
				record << _surnameI << endl;
				reading >> _surnameO;
				record << _surnameO << endl;
				cout << "Введите количество предметов: ";
				cin >> kol;
				record << kol << endl;
				for (int j = 0; j < kol; j++) {
					cout << "Введите название предмета: ";
					cin >> Lesson;
					record << Lesson << endl;
					for (int g = 0; g < 9; g++) {
						cout << "Введите оценку за " << g + 1 << "-ую сессию: ";
						cin >> _marks;
						record << _marks << endl;
					}
				}
				cout << "______________________________________" << endl;
			}
		}
		else
			cout << "Ошибка открытия файла!" << endl;
	}
	else
		cout << "Ошибка отрытия буферного файла!" << endl;
	reading.close();
	record.close();
}
void PrintMarks() {
	ifstream reading("Marks.txt");
	if (reading) {
		string _surnameF, _surnameI, _surnameO, Lesson;
		int RecordBook, _RecordBook;
		int n;
		int  _marks, session, kol;
		reading >> n;

		for (int i = 0; i < n; i++) {
			reading >> RecordBook;
			cout << "Номер зачетной книжки: " << RecordBook << endl;
			reading >> _surnameF;
			reading >> _surnameI;
			reading >> _surnameO;
			cout << "Ф.И.О: " << _surnameF << " " << _surnameI << " " << _surnameO << endl;
			reading >> kol;
			for (int j = 0; j < kol; j++) {
				cout << endl;
				reading >> Lesson;
				cout << "Название предмета: " << Lesson << endl;
				for (int g = 0; g < 9; g++) {
					reading >> _marks;
					cout << "Оценк за " << g + 1 << "-ую сессию: " << _marks << endl;


				}
			}
			cout << "____________________________________" << endl;
		}
	}
	else
		cout << "Ошибка отрытия буферного файла!" << endl;
	reading.close();
}
void Povirka() {
	ifstream reading("Kol-vo Marks(preobpazovana).txt");
	ifstream _reading("Povirka1.txt");
	ofstream record("Povirka1.txt", ios::out | ios::beg);
	ofstream _record("Povirka.txt", ios::out | ios::beg);
	int g = 0;
	if (reading) {
		if (record) {
			int n, RecordBook, _RecordBook = 0, sum, t = 0;
			string _surnameF, _surnameI, _surnameO;
			g = 0;
			reading >> n;
			for (int i = 0; i < n; i++) {
				reading >> RecordBook;
				//cout << "Chek RecordBook > " << RecordBook << endl;
				reading >> _surnameF;
				reading >> _surnameI;
				reading >> _surnameO;
				reading >> sum;
				if (sum > g) {
					g = sum;
					record << RecordBook << endl;
					//cout << "Chek RecordBook(if) > " << RecordBook << endl;
					t++;
				}
			}
			_record << t << endl;
			for (int j = 0; j < t; j++) {
				_reading >> _RecordBook;
				//cout << "Chek _RecordBook > " << _RecordBook << endl;
				_record << _RecordBook << endl;
				//cout << "Chek _RecordBook(posle _record) > " << _RecordBook << endl;
			}
		}
		else
			cout << "Ошибка открытия файла!" << endl;
	}
	else
		cout << "Ошибка отрытия буферного файла!" << endl;
	reading.close();
	_reading.close();
	record.close();
	_record.close();
	remove("Povirka1.txt");
}
void SlojenieSumMarks() {
	ifstream reading("Kol-vo Marks.txt");
	ofstream record("Kol-vo Marks(preobpazovana).txt", ios::out | ios::end);
	if (reading) {
		if (record) {
			int n, RecordBook, kol, sum, g;
			string _surnameF, _surnameI, _surnameO;
			reading >> n;
			record << n << endl;
			for (int i = 0; i < n; i++) {
				reading >> RecordBook;
				record << RecordBook << endl;
				reading >> _surnameF;
				record << _surnameF << endl;
				reading >> _surnameI;
				record << _surnameI << endl;
				reading >> _surnameO;
				record << _surnameO << endl;
				reading >> kol;
				g = 0;
				//cout << "test g(na vhode) = " << g << endl;
				for (int j = 0; j < kol; j++) {
					reading >> sum;
					g += sum;
					//cout << "test g(na vihode) = " << g << endl;
				}
				record << g << endl;
			}
		}
		else
			cout << "Ошибка открытия файла!" << endl;
	}
	else
		cout << "Ошибка отрытия буферного файла!" << endl;
	Povirka();
	reading.close();
	record.close();
}
void ChekMarks() {
	ifstream reading("Marks.txt");
	ofstream record("Kol-vo Marks.txt", ios::out | ios::end);
	if (reading) {
		if (record) {
			string _surnameF, _surnameI, _surnameO, Lesson;
			int RecordBook;
			int n;
			int  _marks, session, kol;
			int sum;
			reading >> n;
			record << n << endl;
			for (int i = 0; i < n; i++) {
				reading >> RecordBook;
				record << RecordBook << endl;
				reading >> _surnameF;
				record << _surnameF << endl;
				reading >> _surnameI;
				record << _surnameI << endl;
				reading >> _surnameO;
				record << _surnameO << endl;
				reading >> kol;
				record << kol << endl;
				for (int j = 0; j < kol; j++) {
					reading >> Lesson;
					sum = 0;
					for (int g = 0; g < 9; g++) {
						reading >> _marks;
						sum += _marks;
					}
					record << sum << endl;
				}
			}
		}
		else 
			cout << "Ошибка открытия файла!" << endl;
	}
	else
		cout << "Ошибка отрытия буферного файла!" << endl;
	SlojenieSumMarks();
	reading.close();
	record.close();
}
void Vivod() {
	ifstream reading("Povirka.txt");
	ifstream _reading("Buffer.txt");
	if (reading) {
		if (_reading) {
			string _surnameF, _surnameI, _surnameO, _DOBDay, _DOBMonth, _DOBYear, Fak, Kaf, Group;
			int _gender, _YearOfReceipt, RecordBook, _RecordBook, n, n1;
			reading >> n1;
			for (int i = 0; i < n1; i++) {
				reading >> _RecordBook;
				cout << "test _RecordBook >" << _RecordBook << endl;
			}
			_reading >> n;
			for (int j = 0; j < n; j++) {
				_reading >> _gender;
				_reading >> _surnameF;
				_reading >> _surnameI;
				_reading >> _surnameO;
				_reading >> _DOBDay;
				_reading >> _DOBMonth;
				_reading >> _DOBYear;
				_reading >> RecordBook;
				//cout << "test RecordBook >" << RecordBook << endl;
				if (_RecordBook == RecordBook) {
					cout << "Пол(1-Муж.;0-Жен.): " << _gender << endl;
					cout << "Ф.И.О: " << _surnameF << " " << _surnameI << " " << _surnameO << endl;
					cout << "Дата рождения: " << _DOBDay << "." << _DOBMonth << "." << _DOBYear << endl;
					cout << "Зачетная книжка: " << RecordBook << endl;
					_reading >> Fak;
					cout << "Факультет: " << Fak << endl;
					_reading >> Kaf;
					cout << "Кафедра: " << Kaf << endl;
					_reading >> Group;
					cout << "Группа: " << Group << endl;
					_reading >> _YearOfReceipt;
					cout << "Год поступления: " << _YearOfReceipt << endl;
					cout << "__________________________________________" << endl;
				}
				else {
					_reading >> Fak;
					_reading >> Kaf;
					_reading >> Group;
					_reading >> _YearOfReceipt;
				}
				
			}
		}
		else
			 cout << "Ошибка отрытия буферного файла!" << endl;
	}
	else
		cout << "Ошибка открытия файла!" << endl;
	reading.close();
	_reading.close();
}
void _Povirka() {
	ifstream reading("Kol-vo Marks(preobpazovana).txt");
	ifstream _reading("Povirka_1.txt");
	ofstream record("Povirka_1.txt", ios::out | ios::beg);
	ofstream _record("OPovirkaO.txt", ios::out | ios::beg);
	
	if (reading) {
		if (record) {
			int n, RecordBook, _RecordBook = 0, sum, t = 0;
			string _surnameF, _surnameI, _surnameO;
			int g = 10000000000;
			reading >> n;
			for (int i = 0; i < n; i++) {
				reading >> RecordBook;
				cout << "Chek RecordBook > " << RecordBook << endl;
				reading >> _surnameF;
				reading >> _surnameI;
				reading >> _surnameO;
				reading >> sum;
				if (g > sum) {
					g = sum;
					record << RecordBook << endl;
					cout << "Chek RecordBook(if) > " << RecordBook << endl;
					t++;
				}
			}
			_record << t << endl;
			for (int j = 0; j < t; j++) {
				_reading >> _RecordBook;
				cout << "Chek _RecordBook > " << _RecordBook << endl;
				_record << _RecordBook << endl;
				cout << "Chek _RecordBook(posle _record) > " << _RecordBook << endl;
			}
		}
		else
			cout << "Ошибка открытия файла!" << endl;
	}
	else
		cout << "Ошибка отрытия буферного файла!" << endl;
	reading.close();
	_reading.close();
	record.close();
	_record.close();
	//remove("Povirka_1.txt");
}
void _Vivod() {
	ifstream reading("OPovirkaO.txt");
	ifstream _reading("Buffer.txt");
	if (reading) {
		if (_reading) {
			string _surnameF, _surnameI, _surnameO, _DOBDay, _DOBMonth, _DOBYear, Fak, Kaf, Group;
			int _gender = 0, _YearOfReceipt = 0, RecordBook = 0, _RecordBook = 0, n = 0, n1 = 0;
			reading >> n1;
			for (int i = 0; i < n1; i++) {
				reading >> _RecordBook;
				cout << "test _RecordBook >" << _RecordBook << endl;
			}
			_reading >> n;
			for (int j = 0; j < n; j++) {
				_reading >> _gender;
				_reading >> _surnameF;
				_reading >> _surnameI;
				_reading >> _surnameO;
				_reading >> _DOBDay;
				_reading >> _DOBMonth;
				_reading >> _DOBYear;
				_reading >> RecordBook;
				cout << "test RecordBook >" << RecordBook << endl;
				if (_RecordBook == RecordBook) {
					cout << "Пол(1-Муж.;0-Жен.): " << _gender << endl;
					cout << "Ф.И.О: " << _surnameF << " " << _surnameI << " " << _surnameO << endl;
					cout << "Дата рождения: " << _DOBDay << "." << _DOBMonth << "." << _DOBYear << endl;
					cout << "Зачетная книжка: " << RecordBook << endl;
					_reading >> Fak;
					cout << "Факультет: " << Fak << endl;
					_reading >> Kaf;
					cout << "Кафедра: " << Kaf << endl;
					_reading >> Group;
					cout << "Группа: " << Group << endl;
					_reading >> _YearOfReceipt;
					cout << "Год поступления: " << _YearOfReceipt << endl;
					cout << "__________________________________________" << endl;
				}
				else {
					_reading >> Fak;
					_reading >> Kaf;
					_reading >> Group;
					_reading >> _YearOfReceipt;
				}

			}
		}
		else
			cout << "Ошибка отрытия буферного файла!" << endl;
	}
	else
		cout << "Ошибка открытия файла!" << endl;
	reading.close();
	_reading.close();
}