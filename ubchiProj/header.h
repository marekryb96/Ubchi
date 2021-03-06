#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;
using namespace System;

string buffer_encrypted2;
string buffer_decrypted;
string key;
string text;
string part1;
string part2;
string part3;
string part4;
string encrypted;
string decrypted;
string heading;
string mess;
string visual;
string visual_d;

int control_k = 1;
int control_t = 1;
int control_dk = 1;
int control_dt = 1;
int size_tekst = 0;
int size_key = 0;
int key_words = 0;
int *nred_key;
int rows = 0;
int columns = 0;

int count_word(string &str)
{
	int quantity = 1;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == ' ')
		{
			quantity++;
		}
	}
	return quantity;
}

void remove_signs(string &str)
{
	string buffer = str;
	bool stop = 0;
	int result = 0;
	while (stop != 1)
	{
		for (int i = 0; i < str.size(); i++)
		{
			if (str.find(" ") != -1)
			{
				result = str.find(" ");
				str.erase(result, 1);
			}
			else if (str.find("!") != -1)
			{
				result = str.find("!");
				str.erase(result, 1);
			}
			else if (str.find("?") != -1)
			{
				result = str.find("?");
				str.erase(result, 1);
			}
			else if (str.find(",") != -1)
			{
				result = str.find(",");
				str.erase(result, 1);
			}
			else if (str.find(".") != -1)
			{
				result = str.find(".");
				str.erase(result, 1);
			}
			else if (str.find(":") != -1)
			{
				result = str.find(":");
				str.erase(result, 1);
			}
			else if (str.find(";") != -1)
			{
				result = str.find(";");
				str.erase(result, 1);
			}
			else if (str.find("(") != -1)
			{
				result = str.find("(");
				str.erase(result, 1);
			}
			else if (str.find(")") != -1)
			{
				result = str.find(")");
				str.erase(result, 1);
			}
			else if (str.find("]") != -1)
			{
				result = str.find("]");
				str.erase(result, 1);
			}
			else if (str.find("[") != -1)
			{
				result = str.find("[");
				str.erase(result, 1);
			}
			else if (str.find("�") != -1)
			{
				result = str.find("�");
				str.erase(result, 1);
			}
			else if (str.find("-") != -1)
			{
				result = str.find("-");
				str.erase(result, 1);
			}
			else if (str.find("�") != -1)
			{
				result = str.find("�");
				str.erase(result, 1);
			}
			else if (str.find("%") != -1)
			{
				result = str.find("%");
				str.erase(result, 1);
			}
			else if (str.find("*") != -1)
			{
				result = str.find("*");
				str.erase(result, 1);
			}
			else if (str.find("�") != -1)
			{
				result = str.find("�");
				str.erase(result, 1);
			}
			else if (str.find("�") != -1)
			{
				result = str.find("�");
				str.erase(result, 1);
			}
			else if (str.find("'") != -1)
			{
				result = str.find("'");
				str.erase(result, 1);
			}
			else if (str.find("\n") != -1)
			{
				result = str.find("\n");
				str.erase(result, 1);
			}
			else if (str.find("1") != -1)
			{
				result = str.find("1");
				str.erase(result, 1);
			}
			else if (str.find("2") != -1)
			{
				result = str.find("2");
				str.erase(result, 1);
			}
			else if (str.find("3") != -1)
			{
				result = str.find("3");
				str.erase(result, 1);
			}
			else if (str.find("4") != -1)
			{
				result = str.find("4");
				str.erase(result, 1);
			}
			else if (str.find("5") != -1)
			{
				result = str.find("5");
				str.erase(result, 1);
			}
			else if (str.find("6") != -1)
			{
				result = str.find("6");
				str.erase(result, 1);
			}
			else if (str.find("7") != -1)
			{
				result = str.find("7");
				str.erase(result, 1);
			}
			else if (str.find("8") != -1)
			{
				result = str.find("8");
				str.erase(result, 1);
			}
			else if (str.find("9") != -1)
			{
				result = str.find("9");
				str.erase(result, 1);
			}
			else if (str.find("0") != -1)
			{
				result = str.find("0");
				str.erase(result, 1);
			}
			else
			{
				stop = 1;
			}

		}
	}
}

void read_key()
{
	size_key = key.size();
	key_words = count_word(key);
	remove_signs(key);
	size_key = key.size();
	for (int i = 0; i < key.length(); i++)
	{
		key[i] = tolower(key[i]);
	}
}

void read_key_from_file()
{
	fstream file1;
	string data1;
	string buffer1;
	file1.open("key.txt", ios::in);
	while (file1.eof() != 1)
	{
		getline(file1, data1);
		data1 = data1 + buffer1;
	}
	for (int i = 0; i < data1.length(); i++)
	{
		data1[i] = tolower(data1[i]);
	}
	key = data1;
	size_key = key.size();
	key_words = count_word(key);
	remove_signs(key);
	size_key = key.size();
	file1.close();
}

void read_text_from_textbox()
{
	remove_signs(text);
	size_tekst = text.size();
	for (int i = 0; i < text.length(); i++)
	{
		text[i] = tolower(text[i]);
	}
}

void read_text_from_file()
{
	fstream plik;
	string data;
	string bufor;
	plik.open("in.txt", ios::in);
	while (plik.eof() != 1)
	{
		plik >> bufor;
		data = data + bufor;

	}
	for (int i = 0; i < data.length(); i++)
	{
		data[i] = tolower(data[i]);
	}
	remove_signs(data);
	size_tekst = data.size();
	text = data;
	plik.close();
}

void read_encrypted_text_from_file()
{
	fstream plik;
	string data;
	string bufor;
	plik.open("in_d.txt", ios::in);
	while (plik.eof() != 1)
	{
		plik >> bufor;
		data = data + bufor;

	}
	for (int i = 0; i < data.length(); i++)
	{
		data[i] = tolower(data[i]);
	}
	remove_signs(data);
	size_tekst = data.size();
	text = data;
	plik.close();
}

string random_letter(int quantity)
{
	string alfabet = "abcdefghijklmnopqrstuvwxyz";
	string random;
	random.clear();
	for (int i = 0; i < quantity; i++)
	{
		random = random + alfabet[rand() % 25];
	}
	return random;
}

int char_int_value(char x) {
    int value;
    switch (x) {
        case 'a': {
            value = 1;
            break;
        }
        case 'b': {
            value = 2;
            break;
        }
        case 'c': {
            value = 3;
            break;
        }
        case 'd': {
            value = 4;
            break;
        }
        case 'e': {
            value = 5;
            break;
        }
        case 'f': {
            value = 6;
            break;
        }
        case 'g': {
            value = 7;
            break;
        }
        case 'h': {
            value = 8;
            break;
        }
        case 'i': {
            value = 9;
            break;
        }
        case 'j': {
            value = 10;
            break;
        }
        case 'k': {
            value = 11;
            break;
        }
        case 'l': {
            value = 12;
            break;
        }
        case 'm': {
            value = 13;
            break;
        }
        case 'n': {
            value = 14;
            break;
        }
        case 'o': {
            value = 15;
            break;
        }
        case 'p': {
            value = 16;
            break;
        }
        case 'q': {
            value = 17;
            break;
        }
        case 'r': {
            value = 18;
            break;
        }
        case 's': {
            value = 19;
            break;
        }
        case 't': {
            value = 20;
            break;
        }
        case 'u': {
            value = 21;
            break;
        }
        case 'v': {
            value = 22;
            break;
        }
        case 'w': {
            value = 23;
            break;
        }
        case 'x': {
            value = 24;
            break;
        }
        case 'y': {
            value = 25;
            break;
        }
        case 'z': {
            value = 26;
            break;
        }
        default: {
            break;
        }
    }
    return value;
}

int *string_int_values(string key) {
	int klength = key.length();
	int *values = new int[klength];
	for (int i = 0; i < klength; i++) {
		values[i] = char_int_value(key[i]);
	}

	int *values_fixed = new int[klength];
	int counter = 1;
	for (int i = 0; i < klength; i++) {
		int min = 1000;
		int position = 1;
		for (int j = 0; j < klength; j++) {
			if (values[j] < min) {
				min = values[j];
				position = j;
			}
		}
		values_fixed[position] = counter;
		counter++;
		values[position] = 1000;
	}

	return values_fixed;
}

void number_key()
{
	nred_key = new int[key.length()];
	nred_key = string_int_values(key);
	for (int i = 0; i < key.size(); i++)
	{
		ostringstream ss;
		ss << nred_key[i];
		heading += ss.str();
		if (nred_key[i] < 10)
		{
			heading += "  ";
		}
		else
		{
			heading += " ";
		}

	}
}

void encryption()
{
	remove_signs(text);
	rows = ceil((size_tekst + key_words) / size_key);
	rows++;
	char **matrix1 = new char *[int(rows)];
	columns = key.size();
	int s = 0;

	for (int i = 0; i < rows; i++)
	{
		matrix1[i] = new char[columns];

		for (int j = 0; j < columns; j++)
		{
			if (s < text.size())
			{
				matrix1[i][j] = text[s];
				part1 = part1 + text[s] + "  ";
			}
			else
			{
				matrix1[i][j] = ' ';
			}
			s++;
		}
		part1 = part1 + "\n";

	}

	char **matrix2 = new char *[rows];
	for (int i = 0; i < rows; i++)
	{
		matrix2[i] = new char[columns];
	}

	int min = 1;
	int index = 0;
	string buffer_encrypted;
	buffer_encrypted.clear();

	for (int i = 0; i < key.size(); i++)
	{
		for (int j = 0; j < key.size(); j++)
		{
			if (nred_key[j] == min)
			{
				index = j;
			}
		}
		min++;

		for (int k = 0; k < rows; k++)
		{
			buffer_encrypted = buffer_encrypted + matrix1[k][index];
		}
	}
	string buffer;
	buffer.clear();
	buffer= random_letter(key_words);
	buffer_encrypted = buffer_encrypted + buffer;
	remove_signs(buffer_encrypted);
	int strind2 = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (strind2 < buffer_encrypted.size())
			{
				matrix2[i][j] = buffer_encrypted[strind2];
				buffer_encrypted2 = buffer_encrypted2 + buffer_encrypted[strind2];
				part2 = part2 + buffer_encrypted[strind2] + "  ";
			}
			else
			{
				matrix2[i][j] = ' ';
			}
			strind2++;
		}
		part2 = part2 + "\n";
	}


	int min2 = 1;
	for (int i = 0; i < key.size(); i++)
	{
		for (int j = 0; j < key.size(); j++)
		{
			if (nred_key[j] == min2)
			{
				index = j;
			}
		}


		min2++;
		for (int k = 0; k < rows; k++)
		{
			if (matrix2[k][index] != ' ')
			{
				encrypted = encrypted + matrix2[k][index];
			}
		}


	}
	int strind3 = 0;
	for (int i = 0; i < encrypted.size() + 1; i++)
	{

		if (i != 0 && i % 6 == 0)
		{
			encrypted.insert(strind3 - 1, " ");
		}
		strind3++;
	}

	for (int i = 0; i < rows; i++)
		delete[] matrix1[i];
	delete[] matrix1;

	for (int i = 0; i < rows; i++)
		delete[] matrix2[i];
	delete[] matrix2;

	visual = "SZYFROWANIE\n\nETAP 1\n" + heading + "\n" + part1 + "\n" + "ETAP 2\n" + heading + "\n" + part2 + "\n" + "TEKST ZASZYFROWANY\n" + encrypted;
}

void decryption()
{
	string encrypt;
	int bezp = 0;
	encrypt.clear();
	encrypt = text;
	columns = key.size();
	rows = floor(size_tekst / size_key);
	rows++;
	int buf = rows;
	int real_size = encrypt.size();
	int app_size = columns * rows;
	int diff_size = app_size - real_size;

	char **matrix3 = new char *[rows];
	for (int i = 0; i < rows; i++)
	{
		matrix3[i] = new char[columns];
	}

	for (int i = columns - diff_size; i<columns; i++)
	{
		matrix3[rows - 1][i] = ' ';
	}

	int ind = 0;
	int minimum = 1;
	int strind = 0;
	string tempb;
	tempb.clear();

	for (int i = 0; i < key.size(); i++)
	{
		for (int j = 0; j < key.size(); j++)
		{
			if (nred_key[j] == minimum)
			{
				ind = j;
			}
		}

		minimum++;

		for (int k = 0; k < rows; k++)
		{
			if (matrix3[k][ind] != ' ')
			{
				matrix3[k][ind] = encrypt[strind];

				if (strind<encrypt.size())
				{
					strind++;
				}
			}
		}

	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			part3 = part3 + matrix3[i][j] + "  ";
			tempb += matrix3[i][j];
		}
		part3 = part3 + '\n';
	}
	remove_signs(tempb);
	int k1=tempb.size();
	int pp = tempb.size() - key_words;
	tempb.erase(pp, key_words);
	int k2 = tempb.size();
	string ks = tempb;

	int shift = diff_size+key_words;

	char **matrix4 = new char *[rows + 1];
	for (int i = 0; i < rows; i++)
	{
		matrix4[i] = new char[columns + 1];
	}

	rows = floor(tempb.size() / size_key);
	rows++;
	real_size = tempb.size();
	app_size = columns * rows;
	diff_size = app_size - real_size;


	for (int i = columns - diff_size; i<columns; i++)
	{
		matrix4[rows - 1][i] = ' ';
	}


	int ind1 = 0;
	int minimum2 = 1;
	int strind1 = 0;

	for (int i = 0; i < key.size(); i++)
	{
		for (int j = 0; j < key.size(); j++)
		{
			if (nred_key[j] == minimum2)
			{
				ind1 = j;
			}
		}
		minimum2++;
		for (int k = 0; k < rows; k++)
		{
			if (matrix4[k][ind1] != ' ')
			{
				matrix4[k][ind1] = tempb[strind1];
				if (strind1 < tempb.size())
				{
					strind1++;
				}
			}
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			decrypted = decrypted + matrix4[i][j];
			part4 = part4 + matrix4[i][j] + "  ";
		}
		part4 = part4 + "\n";
	}

	visual_d = "DESZYFROWANIE\n\nETAP 1\n"+heading + "\n" + part3 + "\n" + "ETAP 2\n" + heading + "\n" + part4 + "\n" + "TEKST ZDESZYFROWANY\n"+ decrypted;

	for (int i = 0; i < rows; i++)
		delete[] matrix3[i];
	delete[] matrix3;

	for (int i = 0; i < rows; i++)
		delete[] matrix4[i];
	delete[] matrix4;
}

void save_encrypted_to_file()
{
	ofstream file;
	file.open("encrypted.txt", ios::out);
	file << encrypted;
	file.close();
}

void save_decrypted_to_file()
{
	ofstream file;
	file.open("decrypted.txt", ios::out);
	file << decrypted;
	file.close();
}

void clear_visual()
{
	part1.clear();
	part2.clear();
	part3.clear();
	part4.clear();
	visual.clear();
}

void clear_visual_decryption()
{
	part1.clear();
	part2.clear();
	visual_d.clear();
}

string info1 = "Alfabet wejsciowy : \nma�e i wielkie litery alfabetu polskiego (w kluczu bez polskich znak�w), podstawowe znaki interpunkcyjne i specjalne, cyfry. \n\nAlfabet wyjsciowy : \nmale litery alfabetu polskiego \n\nPodczas szyfrowania wielkie litery s� zamieniane na ma�e a cyfry, odst�py, znaki interpunkcyjne i specjalne s� usuwane. \n\n";
string info2 = "Opis algorytmu : \n\nSzyfrowanie : \nLitery w kluczu sa odpowiednio numerowane. Pod blokiem z numeracj� w macierzy o wymiarach liczba znakow w kluczu x iloraz liczby znakow w tekscie wejsciowym i liczby znakow w kluczu zapisywany jest tekst wej�ciowy. Nast�pnie tekst jest przepisywany kolumnami do nowej macierzy o tych samych wymiarach wed�ug kolejno�ci wyznaczonej przez numeracj� liter w kluczu dodawane s� symbole puste i tekst jest przepisywany wed�ug tej samej kolejno�ci na wyj�cie po wcze�niejszym podzieleniu na grupy 5 znakowe. \n\n";
string info3 = "Deszyfrowanie : \nTekst do zdeszfrowania jest zapisywany w macierzy o w/w wymiarach, nast�pnie tekst jest przepisywany kolumnami do bufora wed�ug kolejno�ci wyznaczonej przez numeracje liter w kluczu. Usuwane s� symbole puste. Nast�pnie tekstjest przepisywany do nowej macierzy wed�ug wspomnianej kolejno�ci. Po przepisaniu z tej macierzy podawany jest na wyj�cie. Tekst wyj�ciowy nie zawiera odst�p�w.\n\n";
string info4 = "Autor : Marek Rybicki";

string info = info1 + info2 + info3;

string srt1 = "Szyfrowanie \n1.Wprowadz klucz lub wybierz opcje pobrania z pliku tekstowego o nazwie key.txt.\n2.Wprowadz tekst do zaszyfrowania lub wypierz opcje pobrania z pliku in.txt.\n3.Opcjonalnie wybierz opcje wizualizacji przebiegu szyfrowania i zapisania rezultatu do pliku tekstowego o nazwie encrypted.txt.\n4. Naci�nij przycisk Szyfruj.\n5.Je�eli chcesz zaszyfrowa� nast�pny tekst naci�nij przycisk Reset.\n\n";
string srt2 = "Deszyfrowanie \n1.Wprowadz klucz lub wybierz opcje pobrania z pliku tekstowego o nazwie key.txt.\n2.Wprowadz tekst do deszyfrowania lub wypierz opcje pobrania z pliku in_d.txt.\n3.Opcjonalnie wybierz opcje wizualizacji przebiegu deszyfrowania i zapisania rezultatu do pliku tekstowego o nazwie decrypted.txt.\n4. Naci�nij przycisk Deszyfruj.\n5.Je�eli chcesz rozszyfrowa� nast�pny tekst naci�nij przycisk Reset.";

string support = srt1 + srt2;