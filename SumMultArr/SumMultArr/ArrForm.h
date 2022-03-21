#pragma once

namespace SumMultArr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ArrForm
	/// </summary>
	public ref class ArrForm : public System::Windows::Forms::Form
	{
	public:
		ArrForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ArrForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::CheckBox^ checkBox7;
	private: System::Windows::Forms::CheckBox^ checkBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::CheckBox^ checkBox9;
	private: System::Windows::Forms::CheckBox^ checkBox10;
	private: System::Windows::Forms::Button^ buttonStartValues;
	private: System::Windows::Forms::Button^ buttonRandomValues;
	private: System::Windows::Forms::Button^ ButtonDeleteMass;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ PositiveSum;
	private: System::Windows::Forms::Button^ MultMaxMin;
	private: System::Windows::Forms::TextBox^ textBoxSum;
	private: System::Windows::Forms::TextBox^ textBoxMult;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;


	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ArrForm::typeid));
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->buttonStartValues = (gcnew System::Windows::Forms::Button());
			this->buttonRandomValues = (gcnew System::Windows::Forms::Button());
			this->ButtonDeleteMass = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->PositiveSum = (gcnew System::Windows::Forms::Button());
			this->MultMaxMin = (gcnew System::Windows::Forms::Button());
			this->textBoxSum = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMult = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(76, 62);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(32, 17);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"2";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &ArrForm::checkBox2_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(21, 94);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(32, 34);
			this->textBox1->TabIndex = 10;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox2->Location = System::Drawing::Point(76, 94);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(32, 34);
			this->textBox2->TabIndex = 11;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox3->Location = System::Drawing::Point(137, 94);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(32, 34);
			this->textBox3->TabIndex = 15;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox4->Location = System::Drawing::Point(192, 94);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(32, 34);
			this->textBox4->TabIndex = 14;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(137, 62);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(32, 17);
			this->checkBox3->TabIndex = 13;
			this->checkBox3->Text = L"3";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &ArrForm::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(192, 62);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(32, 17);
			this->checkBox4->TabIndex = 12;
			this->checkBox4->Text = L"4";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &ArrForm::checkBox4_CheckedChanged);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox5->Location = System::Drawing::Point(251, 94);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(32, 34);
			this->textBox5->TabIndex = 19;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox6->Location = System::Drawing::Point(306, 94);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(32, 34);
			this->textBox6->TabIndex = 18;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(251, 62);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(32, 17);
			this->checkBox5->TabIndex = 17;
			this->checkBox5->Text = L"5";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &ArrForm::checkBox5_CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(306, 62);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(32, 17);
			this->checkBox6->TabIndex = 16;
			this->checkBox6->Text = L"6";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &ArrForm::checkBox6_CheckedChanged);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox7->Location = System::Drawing::Point(364, 94);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(32, 34);
			this->textBox7->TabIndex = 23;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox8->Location = System::Drawing::Point(419, 94);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(32, 34);
			this->textBox8->TabIndex = 22;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(364, 62);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(32, 17);
			this->checkBox7->TabIndex = 21;
			this->checkBox7->Text = L"7";
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &ArrForm::checkBox7_CheckedChanged);
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Location = System::Drawing::Point(419, 62);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(32, 17);
			this->checkBox8->TabIndex = 20;
			this->checkBox8->Text = L"8";
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->CheckedChanged += gcnew System::EventHandler(this, &ArrForm::checkBox8_CheckedChanged);
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox9->Location = System::Drawing::Point(480, 94);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(32, 34);
			this->textBox9->TabIndex = 27;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox10->Location = System::Drawing::Point(534, 94);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(32, 34);
			this->textBox10->TabIndex = 26;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Location = System::Drawing::Point(480, 62);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(32, 17);
			this->checkBox9->TabIndex = 25;
			this->checkBox9->Text = L"9";
			this->checkBox9->UseVisualStyleBackColor = true;
			this->checkBox9->CheckedChanged += gcnew System::EventHandler(this, &ArrForm::checkBox9_CheckedChanged);
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Location = System::Drawing::Point(534, 62);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(38, 17);
			this->checkBox10->TabIndex = 24;
			this->checkBox10->Text = L"10";
			this->checkBox10->UseVisualStyleBackColor = true;
			this->checkBox10->CheckedChanged += gcnew System::EventHandler(this, &ArrForm::checkBox10_CheckedChanged);
			// 
			// buttonStartValues
			// 
			this->buttonStartValues->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonStartValues->Location = System::Drawing::Point(21, 146);
			this->buttonStartValues->Name = L"buttonStartValues";
			this->buttonStartValues->Size = System::Drawing::Size(158, 37);
			this->buttonStartValues->TabIndex = 28;
			this->buttonStartValues->Text = L"Начальные значения";
			this->buttonStartValues->UseVisualStyleBackColor = true;
			this->buttonStartValues->Click += gcnew System::EventHandler(this, &ArrForm::buttonStartValues_Click);
			// 
			// buttonRandomValues
			// 
			this->buttonRandomValues->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonRandomValues->Location = System::Drawing::Point(204, 146);
			this->buttonRandomValues->Name = L"buttonRandomValues";
			this->buttonRandomValues->Size = System::Drawing::Size(159, 37);
			this->buttonRandomValues->TabIndex = 29;
			this->buttonRandomValues->Text = L"Случайные значения";
			this->buttonRandomValues->UseVisualStyleBackColor = true;
			this->buttonRandomValues->Click += gcnew System::EventHandler(this, &ArrForm::buttonRandomValues_Click);
			// 
			// ButtonDeleteMass
			// 
			this->ButtonDeleteMass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->ButtonDeleteMass->Location = System::Drawing::Point(391, 146);
			this->ButtonDeleteMass->Name = L"ButtonDeleteMass";
			this->ButtonDeleteMass->Size = System::Drawing::Size(177, 37);
			this->ButtonDeleteMass->TabIndex = 30;
			this->ButtonDeleteMass->Text = L"Очистить массив ";
			this->ButtonDeleteMass->UseVisualStyleBackColor = true;
			this->ButtonDeleteMass->Click += gcnew System::EventHandler(this, &ArrForm::ButtonDeleteMass_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(21, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 16);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Количество ячеек";
			// 
			// PositiveSum
			// 
			this->PositiveSum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PositiveSum->Location = System::Drawing::Point(21, 261);
			this->PositiveSum->Name = L"PositiveSum";
			this->PositiveSum->Size = System::Drawing::Size(158, 68);
			this->PositiveSum->TabIndex = 32;
			this->PositiveSum->Text = L"Сумма положительных элементов массива";
			this->PositiveSum->UseVisualStyleBackColor = true;
			this->PositiveSum->Click += gcnew System::EventHandler(this, &ArrForm::PositiveSum_Click);
			// 
			// MultMaxMin
			// 
			this->MultMaxMin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MultMaxMin->Location = System::Drawing::Point(21, 352);
			this->MultMaxMin->Name = L"MultMaxMin";
			this->MultMaxMin->Size = System::Drawing::Size(158, 97);
			this->MultMaxMin->TabIndex = 33;
			this->MultMaxMin->Text = L"Произведение элементов между максимальным и минимальным элементами";
			this->MultMaxMin->UseVisualStyleBackColor = true;
			this->MultMaxMin->Click += gcnew System::EventHandler(this, &ArrForm::MultMaxMin_Click);
			// 
			// textBoxSum
			// 
			this->textBoxSum->Location = System::Drawing::Point(204, 261);
			this->textBoxSum->Multiline = true;
			this->textBoxSum->Name = L"textBoxSum";
			this->textBoxSum->Size = System::Drawing::Size(159, 68);
			this->textBoxSum->TabIndex = 34;
			// 
			// textBoxMult
			// 
			this->textBoxMult->Location = System::Drawing::Point(204, 352);
			this->textBoxMult->Multiline = true;
			this->textBoxMult->Name = L"textBoxMult";
			this->textBoxMult->Size = System::Drawing::Size(159, 68);
			this->textBoxMult->TabIndex = 35;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Location = System::Drawing::Point(21, 204);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(548, 2);
			this->label2->TabIndex = 36;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(24, 226);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(222, 16);
			this->label3->TabIndex = 37;
			this->label3->Text = L"Действия с элементами массива";
			// 
			// ArrForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(587, 483);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxMult);
			this->Controls->Add(this->textBoxSum);
			this->Controls->Add(this->MultMaxMin);
			this->Controls->Add(this->PositiveSum);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ButtonDeleteMass);
			this->Controls->Add(this->buttonRandomValues);
			this->Controls->Add(this->buttonStartValues);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->checkBox9);
			this->Controls->Add(this->checkBox10);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->checkBox8);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->checkBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"ArrForm";
			this->Text = L"Массив";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox6_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox7_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox8_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox9_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox10_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

private: System::Void buttonStartValues_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonRandomValues_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void ButtonDeleteMass_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void PositiveSum_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MultMaxMin_Click(System::Object^ sender, System::EventArgs^ e);
};
}
