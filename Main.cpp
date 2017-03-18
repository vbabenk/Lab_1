#include <string.h>
#include <iostream>
using namespace std;
#pragma warning (disable:4996)

class Student
{
private:
	char*surname;
	char*name;
	char*patronymic;
	char*birthday;
	char*address;
	char*phone;
	char*faculty;
	char*course;
public:
	Student(char*cur_s, char*cur_n, char*cur_pat, char*cur_b, char*cur_a, char*cur_ph, char*cur_f, char*cur_c) :surname(cur_s), name(cur_n),
		patronymic(cur_pat), birthday(cur_b), address(cur_a), phone(cur_ph), faculty(cur_f), course(cur_c)
	{
		surname = new char[strlen(cur_s) + 1];
		strcpy(surname, cur_s);
		name = new char[strlen(cur_n) + 1];
		strcpy(name, cur_n);
		patronymic = new char[strlen(cur_pat) + 1];
		strcpy(patronymic, cur_pat);
		birthday = new char[strlen(cur_b) + 1];
		strcpy(birthday, cur_b);
		address = new char[strlen(cur_a) + 1];
		strcpy(address, cur_a);
		phone = new char[strlen(cur_ph) + 1];
		strcpy(phone, cur_ph);
		faculty = new char[strlen(cur_f) + 1];
		strcpy(faculty, cur_f);
		course = new char[strlen(cur_c) + 1];
		strcpy(course, cur_c);
	}
	~Student()
	{
		delete[] surname;
		delete[] name;
		delete[] patronymic;
		delete[] birthday;
		delete[] address;
		delete[] phone;
		delete[] faculty;
		delete[] course;
	}
	void set_surname(char*cur_s)
	{
		if (surname != NULL)
		{
			delete[] surname;
			surname = new char[strlen(cur_s) + 1];
			strcpy(surname, cur_s);
		}
		else
		{
			surname = new char[strlen(cur_s) + 1];
			strcpy(surname, cur_s);
		}
	}

	void set_name(char*cur_n)
	{
		if (name != NULL)
		{
			delete[] name;
			name = new char[strlen(cur_n) + 1];
			strcpy(name, cur_n);
		}
		else
		{
			name = new char[strlen(cur_n) + 1];
			strcpy(name, cur_n);
		}
	}

	void set_patronymic(char*cur_pat)
	{
		if (patronymic != NULL)
		{
			delete[] patronymic;
			patronymic = new char[strlen(cur_pat) + 1];
			strcpy(patronymic, cur_pat);
		}
		else
		{
			patronymic = new char[strlen(cur_pat) + 1];
			strcpy(patronymic, cur_pat);
		}
	}

	void set_birthday(char*cur_b)
	{
		if (birthday != NULL)
		{
			delete[] birthday;
			birthday = new char[strlen(cur_b) + 1];
			strcpy(birthday, cur_b);
		}
		else
		{
			birthday = new char[strlen(cur_b) + 1];
			strcpy(birthday, cur_b);
		}
	}

	void set_address(char*cur_a)
	{
		if (address != NULL)
		{
			delete[] address;
			address = new char[strlen(cur_a) + 1];
			strcpy(address, cur_a);
		}
		else
		{
			address = new char[strlen(cur_a) + 1];
			strcpy(address, cur_a);
		}
	}

	void set_phone(char*cur_ph)
	{
		if (phone != NULL)
		{
			delete[] phone;
			phone = new char[strlen(cur_ph) + 1];
			strcpy(phone, cur_ph);
		}
		else
		{
			phone = new char[strlen(cur_ph) + 1];
			strcpy(phone, cur_ph);
		}
	}

	void set_faculty(char*cur_f)
	{
		if (faculty != NULL)
		{
			delete[] faculty;
			faculty = new char[strlen(cur_f) + 1];
			strcpy(faculty, cur_f);
		}
		else
		{
			faculty = new char[strlen(cur_f) + 1];
			strcpy(faculty, cur_f);
		}
	}

	void set_course(char*cur_c)
	{
		if (course != NULL)
		{
			delete[] course;
			course = new char[strlen(cur_c) + 1];
			strcpy(course, cur_c);
		}
		else
		{
			course = new char[strlen(cur_c) + 1];
			strcpy(course, cur_c);
		}
	}
	char*get_surname()
	{
		cout << "Фамилия: ";
		return surname;
	}
	char*get_name()
	{
		cout << "Имя: ";
		return name;
	}
	char*get_patronymic()
	{
		cout << "Отчество: ";
		return patronymic;
	}
	char*get_birthday()
	{
		cout << "Дата рождения: ";
		return birthday;
	}
	char*get_address()
	{
		cout << "Адрес: ";
		return address;
	}
	char*get_phone()
	{
		cout << "Моб. телефон: ";
		return phone;
	}
	char*get_faculty()
	{
		cout << "Факультет: ";
		return faculty;
	}
	char*get_course()
	{
		cout << "Курс: ";
		return course;
	}
	void show()
	{
		cout << "Фамилия: " << surname << endl
			<< "Имя: " << name << endl
			<< "Отчество: " << patronymic << endl
			<< "Дата рождения: " << birthday << endl
			<< "Адрес: " << address << endl
			<< "Моб. телефон: " << phone << endl
			<< "Факультет: " << faculty << endl
			<< "Курс: " << course << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Student Babenko("Бабенко","Виталий","Олегович","31.12.1997","г. Вишневое, ул. Машиностроителей 15A, кв. 195","+380635656379","ФБМИ","Второй");
	Babenko.show();
	Babenko.set_surname("Басик");
	cout << Babenko.get_surname() << endl;
	return 0;
}