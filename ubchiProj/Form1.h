#pragma once
#include <iostream>
#include <msclr/marshal_cppstd.h>
#include "stdafx.h"
#include <string>
#include "header.h"


namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		String ^ key_b;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::RichTextBox^  richTextBox3;
	private: System::Windows::Forms::RichTextBox^  richTextBox4;
	private: System::Windows::Forms::RichTextBox^  richTextBox5;
	private: System::Windows::Forms::RichTextBox^  richTextBox6;
	private: System::Windows::Forms::Label^  label16;

	public:
		String ^ text_b;
		Form1(void)
		{
			InitializeComponent();

		}

	protected:

		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::CheckBox^  checkBox5;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::CheckBox^  checkBox7;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::CheckBox^  checkBox8;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox6 = (gcnew System::Windows::Forms::RichTextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(165, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"SZYFROWANIE";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Klucz";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 128);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Tekst do zaszyfrowania";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(604, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"DESZYFROWANIE";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(194, 258);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 259);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(129, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Wczytaj tekst z pliku in.txt";
			this->label5->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(347, 262);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Szyfruj";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(194, 35);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(228, 38);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 450);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(154, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Poka¿ wizualizacjê szyfrowania";
			this->label6->Click += gcnew System::EventHandler(this, &Form1::label6_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(249, 449);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(15, 14);
			this->checkBox2->TabIndex = 11;
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(9, 423);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(234, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Zapisz zaszyfrowany tekst do pliku encrypted.txt";
			this->label7->Click += gcnew System::EventHandler(this, &Form1::label7_Click);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(249, 421);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(15, 14);
			this->checkBox3->TabIndex = 13;
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox3_CheckedChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(9, 98);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(140, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Wczytaj klucz z pliku key.txt";
			this->label8->Click += gcnew System::EventHandler(this, &Form1::label8_Click);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(194, 98);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(15, 14);
			this->checkBox4->TabIndex = 15;
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox4_CheckedChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(467, 35);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(33, 13);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Klucz";
			this->label9->Click += gcnew System::EventHandler(this, &Form1::label9_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(652, 38);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(228, 38);
			this->textBox4->TabIndex = 17;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(467, 259);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(141, 13);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Wczytaj tekst z pliku in_d.txt";
			this->label10->Click += gcnew System::EventHandler(this, &Form1::label10_Click);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(632, 258);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(15, 14);
			this->checkBox5->TabIndex = 19;
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox5_CheckedChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(805, 272);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 21;
			this->button2->Text = L"Deszyfruj";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(467, 125);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(119, 13);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Tekst do deszyfrowania";
			this->label11->Click += gcnew System::EventHandler(this, &Form1::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(467, 98);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(140, 13);
			this->label12->TabIndex = 24;
			this->label12->Text = L"Wczytaj klucz z pliku key.txt";
			this->label12->Click += gcnew System::EventHandler(this, &Form1::label12_Click);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(632, 97);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(15, 14);
			this->checkBox6->TabIndex = 25;
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox6_CheckedChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(467, 421);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(234, 13);
			this->label13->TabIndex = 26;
			this->label13->Text = L"Zapisz zaszyfrowany tekst do pliku decrypted.txt";
			this->label13->Click += gcnew System::EventHandler(this, &Form1::label13_Click);
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(702, 420);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(15, 14);
			this->checkBox7->TabIndex = 27;
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox7_CheckedChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(467, 449);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(166, 13);
			this->label14->TabIndex = 28;
			this->label14->Text = L"Poka¿ wizualizacjê deszyfrowania";
			this->label14->Click += gcnew System::EventHandler(this, &Form1::label14_Click);
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Location = System::Drawing::Point(702, 455);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(15, 14);
			this->checkBox8->TabIndex = 29;
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox8_CheckedChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 662);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 30;
			this->button3->Text = L"Info";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(102, 662);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 31;
			this->button4->Text = L"Pomoc";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(794, 662);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 32;
			this->button5->Text = L"Zamknij";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(713, 662);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 33;
			this->button6->Text = L"Czyœæ pola";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::LightGray;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Courier New", 9));
			this->richTextBox1->Location = System::Drawing::Point(12, 475);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(399, 181);
			this->richTextBox1->TabIndex = 34;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox1_TextChanged);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(347, 233);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 35;
			this->button7->Text = L"Wyœlij";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(347, 79);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 36;
			this->button8->Text = L"Wyœlij";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(805, 79);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 37;
			this->button9->Text = L"Wyœlij";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(805, 236);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 38;
			this->button10->Text = L"Wyœlij";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::Color::LightGray;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Courier New", 9));
			this->richTextBox2->Location = System::Drawing::Point(470, 475);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(399, 181);
			this->richTextBox2->TabIndex = 39;
			this->richTextBox2->Text = L"";
			this->richTextBox2->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox2_TextChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(9, 291);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(46, 13);
			this->label15->TabIndex = 40;
			this->label15->Text = L"Rezultat";
			this->label15->Click += gcnew System::EventHandler(this, &Form1::label15_Click);
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(194, 125);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(228, 102);
			this->richTextBox3->TabIndex = 41;
			this->richTextBox3->Text = L"";
			// 
			// richTextBox4
			// 
			this->richTextBox4->Location = System::Drawing::Point(12, 311);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(410, 96);
			this->richTextBox4->TabIndex = 42;
			this->richTextBox4->Text = L"";
			this->richTextBox4->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox4_TextChanged);
			// 
			// richTextBox5
			// 
			this->richTextBox5->Location = System::Drawing::Point(652, 128);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(228, 102);
			this->richTextBox5->TabIndex = 43;
			this->richTextBox5->Text = L"";
			// 
			// richTextBox6
			// 
			this->richTextBox6->Location = System::Drawing::Point(470, 311);
			this->richTextBox6->Name = L"richTextBox6";
			this->richTextBox6->Size = System::Drawing::Size(410, 96);
			this->richTextBox6->TabIndex = 44;
			this->richTextBox6->Text = L"";
			this->richTextBox6->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox6_TextChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(467, 291);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(46, 13);
			this->label16->TabIndex = 45;
			this->label16->Text = L"Rezultat";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(899, 693);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->richTextBox6);
			this->Controls->Add(this->richTextBox5);
			this->Controls->Add(this->richTextBox4);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->checkBox8);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Ubchi - szyfrator/deszyfrator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	text.clear();
	this->checkBox1->ThreeState = false;
	read_text_from_file();
	control_t = 0;
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	
	if ((control_k == 1 || control_t==1)||(control_k==1 && control_t==1))
	{
		std::string aqua = "Pola klucz i tekst do zaszyfrowania nie mog¹ byc puste!";
		String ^ message_error = gcnew String(aqua.c_str());
		MessageBox::Show(message_error);
	}
	else
	{
		encrypted.clear();
		buffer_encrypted2.clear();
		number_key();
		encryption();
		this->richTextBox4->Clear();
		String^ str2;
		str2= gcnew String(encrypted.c_str());
		this->richTextBox4->Clear();
		this->richTextBox4->Text = str2;
		this->checkBox1->Checked = false;
		this->checkBox2->Checked = false;
		this->checkBox3->Checked = false;
		this->checkBox4->Checked = false;
		control_t = 1;
		control_k = 1;
	}
	
	

}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	

}

private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
	if ((control_dk == 1 || control_dt == 1) || (control_dk == 1 && control_dt == 1))
	{
		std::string aqua = "Pola klucz i tekst do szyfrowania nie mog¹ byæ puste!";
		String ^ message_error = gcnew String(aqua.c_str());
		MessageBox::Show(message_error);		
	}
	else
	{
		clear_visual();
		String ^ message_b = gcnew String(visual.c_str());
		this->richTextBox1->Text = message_b;
	}
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if ((control_dk == 1 || control_dt == 1) || (control_dk == 1 && control_dt == 1))
	{		
		std::string aqua = "Pola klucz i tekst do szyfrowania nie mog¹ byæ puste!";
		String ^ message_error = gcnew String(aqua.c_str());
		MessageBox::Show(message_error);
	}
	else
	{
		save_encrypted_to_file();		
	}	
}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	key.clear();
	read_key_from_file();
	control_k = 0;

}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	text.clear();
	read_encrypted_text_from_file();
	this->checkBox5->ThreeState = false;
	control_dt = 0;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	if ((control_dk == 1 || control_dt == 1) || (control_dk == 1 && control_dt == 1))
	{
		std::string aqua = "Pola klucz i tekst do deszyfrowania nie mog¹ byc puste!";
		String ^ message_error = gcnew String(aqua.c_str());
		MessageBox::Show(message_error);
	}
	else
	{
		rows = 0; columns = 0;
		buffer_decrypted.clear();
		decrypted.clear();
		number_key();
		decryption();
		String^ str3 = gcnew String(decrypted.c_str());
		this->richTextBox6->Clear();
		this->richTextBox6->Text = str3;
		this->checkBox5->Checked = false;
		this->checkBox6->Checked = false;
		this->checkBox7->Checked = false;
		this->checkBox8->Checked = false;
		control_dk = 0;
		control_dt = 0;
	}
}

private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void checkBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	key.clear();
	read_key_from_file();
	this->checkBox6->ThreeState = false;
	control_dk = 0;
}
private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void checkBox7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	if ((control_dk == 1 || control_dt == 1) || (control_dk == 1 && control_dt == 1))
	{
		std::string aqua = "Pola klucz i tekst do deszyfrowania nie mog¹ byæ puste!";
		String ^ message_error = gcnew String(aqua.c_str());
		MessageBox::Show(message_error);
	}
	else
	{
		save_decrypted_to_file();		
	}
}
private: System::Void label14_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void checkBox8_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if ((control_dk == 1 || control_dt == 1) || (control_dk == 1 && control_dt == 1))
	{
		std::string aqua = "Pola klucz i tekst do deszyfrowania nie moga byæ puste!";
		String ^ message_error = gcnew String(aqua.c_str());
		MessageBox::Show(message_error);
	}
	else
	{
		clear_visual();
		String ^ message_c = gcnew String(visual_d.c_str());
		this->richTextBox2->Text = message_c;		
	}

}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ message_i = gcnew String(info.c_str());
	MessageBox::Show(message_i);
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ message_pom = gcnew String(support.c_str());
	MessageBox::Show(message_pom);
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	std::exit(42);
	

}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	key.clear();
	text.clear();

	this->textBox1->Clear();
	this->textBox4->Clear();

	this->richTextBox1->Clear();
	this->richTextBox2->Clear();
	this->richTextBox3->Clear();
	this->richTextBox4->Clear();
	this->richTextBox5->Clear();
	this->richTextBox6->Clear();

	this->checkBox1->Checked = false;
	this->checkBox2->Checked = false;
	this->checkBox3->Checked = false;
	this->checkBox4->Checked = false;
	this->checkBox5->Checked = false;
	this->checkBox6->Checked = false;
	this->checkBox7->Checked = false;
	this->checkBox8->Checked = false;

	part1.clear();
	part2.clear();
	part3.clear();
	part4.clear();
	heading.clear();
}
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		key.clear();		
		String^ key_b = textBox1->Text;

		if (String::IsNullOrEmpty(key_b))
		{
			std::string aqua = "Pole klucz nie mo¿e byæ puste!";
			String ^ message_error = gcnew String(aqua.c_str());
			MessageBox::Show(message_error);
			control_k = 1;
		}
		else
		{
			key = msclr::interop::marshal_as< std::string >(key_b);		
			read_key();
			control_k = 0;
		}

}

private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {	
	text.clear();
	String^ text_b = this->richTextBox3->Text;

	if (String::IsNullOrEmpty(text_b))
	{
		std::string aqua = "Pole tekst do zaszyfrowanie nie mo¿e byc puste!";
		String ^ message_error = gcnew String(aqua.c_str());
		MessageBox::Show(message_error);
		control_t = 1;
	}
	else
	{
		text = msclr::interop::marshal_as< std::string >(text_b);
		read_text_from_textbox();
		control_t = 0;
	}
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	key.clear();
	String ^ key_dec = textBox4->Text;

	if (String::IsNullOrEmpty(key_dec))
	{
		std::string aqua = "Pole klucz nie mo¿e byc puste!";
		String ^ message_error = gcnew String(aqua.c_str());
		MessageBox::Show(message_error);
		control_dk = 1;
	}
	else
	{
		key = msclr::interop::marshal_as< std::string >(key_dec);
		read_key();
		control_dk = 0;
	}
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {	
	text.clear();
	String ^ text_c = this->richTextBox5->Text;

	if (String::IsNullOrEmpty(text_c))
	{
		std::string aqua = "Pole tekst do deszyfrowania nie mo¿e byæ puste!";
		String ^ message_error = gcnew String(aqua.c_str());
		MessageBox::Show(message_error);
		control_dt = 1;
	}
	else
	{
		text = msclr::interop::marshal_as< std::string >(text_c);
		read_text_from_textbox();
		control_dt = 0;
	}

}
private: System::Void richTextBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label15_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void richTextBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void richTextBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
