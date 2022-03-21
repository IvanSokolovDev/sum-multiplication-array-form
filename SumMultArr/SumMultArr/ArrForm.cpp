#include "ArrForm.h"
#include <cstdlib>
#include <ctime>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    SumMultArr::ArrForm form; 
    Application::Run(% form);
}

// начальные значения массива
const int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

int inter_arr[10];

// заполнение массива начальными значениями
int start_values(int index) {
    return arr[index];
}

int sum(int index) {
    int res_sum = 0;

    for (int i = 0; i < index + 1; i++) {
        if (inter_arr[i] > 0) {
            res_sum += inter_arr[i];
        }
    }

    return res_sum;
}

// индекс минимального элемента
int index_min(int index) {
    int min_elem = 2147483647;
    int min_i;

    for (int i = 0; i < index + 1; i++) {
        if (inter_arr[i] < min_elem) {
            min_elem = inter_arr[i];
            min_i = i;
        }
    }

    return min_i;
}

// индекс максимального элемента
int index_max(int index) {
    int max_elem = -2147483648;
    int max_i;

    for (int i = 0; i < index + 1; i++) {
        if (inter_arr[i] > max_elem) {
            max_elem = inter_arr[i];
            max_i = i;
        }
    }

    return max_i;
}

// произведение между максимальным и минимальным элементами
int mult(int index) {
    int prod = 1;

    if (index_min(index) < index_max(index)) {
        for (int i = index_min(index) + 1; i < index_max(index); i++) {
            prod *= inter_arr[i];
        }
    }
    else {
        for (int i = index_max(index) + 1; i < index_min(index); i++) {
            prod *= inter_arr[i];
        }
    }

    return prod;
}

// добавление элементов в массив
System::Void SumMultArr::ArrForm::checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBox2->Checked == true) {
        textBox2->ReadOnly = false;
        textBox2->BackColor = System::Drawing::SystemColors::Window;
    }
    else {
        textBox2->ReadOnly = true;
        textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox2->Clear();

        checkBox3->Checked = false;
        textBox3->ReadOnly = true;
        textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox3->Clear();

        checkBox4->Checked = false;
        textBox4->ReadOnly = true;
        textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox4->Clear();

        checkBox5->Checked = false;
        textBox5->ReadOnly = true;
        textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox5->Clear();

        checkBox6->Checked = false;
        textBox6->ReadOnly = true;
        textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox6->Clear();

        checkBox7->Checked = false;
        textBox7->ReadOnly = true;
        textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox7->Clear();

        checkBox8->Checked = false;
        textBox8->ReadOnly = true;
        textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox8->Clear();

        checkBox9->Checked = false;
        textBox9->ReadOnly = true;
        textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox9->Clear();

        checkBox10->Checked = false;
        textBox10->ReadOnly = true;
        textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox10->Clear();
    }

    return System::Void();
}

System::Void SumMultArr::ArrForm::checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBox3->Checked == true) {
        checkBox2->Checked = true;

        textBox2->ReadOnly = false;
        textBox2->BackColor = System::Drawing::SystemColors::Window;

        textBox3->ReadOnly = false;
        textBox3->BackColor = System::Drawing::SystemColors::Window;
    }
    else {
        textBox3->ReadOnly = true;
        textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox3->Clear();

        checkBox4->Checked = false;
        textBox4->ReadOnly = true;
        textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox4->Clear();

        checkBox5->Checked = false;
        textBox5->ReadOnly = true;
        textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox5->Clear();

        checkBox6->Checked = false;
        textBox6->ReadOnly = true;
        textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox6->Clear();

        checkBox7->Checked = false;
        textBox7->ReadOnly = true;
        textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox7->Clear();

        checkBox8->Checked = false;
        textBox8->ReadOnly = true;
        textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox8->Clear();

        checkBox9->Checked = false;
        textBox9->ReadOnly = true;
        textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox9->Clear();

        checkBox10->Checked = false;
        textBox10->ReadOnly = true;
        textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox10->Clear();
    }

    return System::Void();
}

System::Void SumMultArr::ArrForm::checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBox4->Checked == true) {
        checkBox2->Checked = true;
        checkBox3->Checked = true;

        textBox2->ReadOnly = false;
        textBox2->BackColor = System::Drawing::SystemColors::Window;

        textBox3->ReadOnly = false;
        textBox3->BackColor = System::Drawing::SystemColors::Window;

        textBox4->ReadOnly = false;
        textBox4->BackColor = System::Drawing::SystemColors::Window;
    }
    else {
        textBox4->ReadOnly = true;
        textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox4->Clear();

        checkBox5->Checked = false;
        textBox5->ReadOnly = true;
        textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox5->Clear();

        checkBox6->Checked = false;
        textBox6->ReadOnly = true;
        textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox6->Clear();

        checkBox7->Checked = false;
        textBox7->ReadOnly = true;
        textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox7->Clear();

        checkBox8->Checked = false;
        textBox8->ReadOnly = true;
        textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox8->Clear();

        checkBox9->Checked = false;
        textBox9->ReadOnly = true;
        textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox9->Clear();

        checkBox10->Checked = false;
        textBox10->ReadOnly = true;
        textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox10->Clear();
    }

    return System::Void();
}

System::Void SumMultArr::ArrForm::checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBox5->Checked == true) {
        checkBox2->Checked = true;
        checkBox3->Checked = true;
        checkBox4->Checked = true;

        textBox2->ReadOnly = false;
        textBox2->BackColor = System::Drawing::SystemColors::Window;

        textBox3->ReadOnly = false;
        textBox3->BackColor = System::Drawing::SystemColors::Window;

        textBox4->ReadOnly = false;
        textBox4->BackColor = System::Drawing::SystemColors::Window;

        textBox5->ReadOnly = false;
        textBox5->BackColor = System::Drawing::SystemColors::Window;
    }
    else {
        textBox5->ReadOnly = true;
        textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox5->Clear();

        checkBox6->Checked = false;
        textBox6->ReadOnly = true;
        textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox6->Clear();

        checkBox7->Checked = false;
        textBox7->ReadOnly = true;
        textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox7->Clear();

        checkBox8->Checked = false;
        textBox8->ReadOnly = true;
        textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox8->Clear();

        checkBox9->Checked = false;
        textBox9->ReadOnly = true;
        textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox9->Clear();

        checkBox10->Checked = false;
        textBox10->ReadOnly = true;
        textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox10->Clear();
    }

    return System::Void();
}

System::Void SumMultArr::ArrForm::checkBox6_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBox6->Checked == true) {
        checkBox2->Checked = true;
        checkBox3->Checked = true;
        checkBox4->Checked = true;
        checkBox5->Checked = true;

        textBox2->ReadOnly = false;
        textBox2->BackColor = System::Drawing::SystemColors::Window;

        textBox3->ReadOnly = false;
        textBox3->BackColor = System::Drawing::SystemColors::Window;

        textBox4->ReadOnly = false;
        textBox4->BackColor = System::Drawing::SystemColors::Window;

        textBox5->ReadOnly = false;
        textBox5->BackColor = System::Drawing::SystemColors::Window;

        textBox6->ReadOnly = false;
        textBox6->BackColor = System::Drawing::SystemColors::Window;
    }
    else {
        textBox6->ReadOnly = true;
        textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox6->Clear();

        checkBox7->Checked = false;
        textBox7->ReadOnly = true;
        textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox7->Clear();

        checkBox8->Checked = false;
        textBox8->ReadOnly = true;
        textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox8->Clear();

        checkBox9->Checked = false;
        textBox9->ReadOnly = true;
        textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox9->Clear();

        checkBox10->Checked = false;
        textBox10->ReadOnly = true;
        textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox10->Clear();
    }

    return System::Void();
}

System::Void SumMultArr::ArrForm::checkBox7_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBox7->Checked == true) {
        checkBox2->Checked = true;
        checkBox3->Checked = true;
        checkBox4->Checked = true;
        checkBox5->Checked = true;
        checkBox6->Checked = true;

        textBox2->ReadOnly = false;
        textBox2->BackColor = System::Drawing::SystemColors::Window;

        textBox3->ReadOnly = false;
        textBox3->BackColor = System::Drawing::SystemColors::Window;

        textBox4->ReadOnly = false;
        textBox4->BackColor = System::Drawing::SystemColors::Window;

        textBox5->ReadOnly = false;
        textBox5->BackColor = System::Drawing::SystemColors::Window;

        textBox6->ReadOnly = false;
        textBox6->BackColor = System::Drawing::SystemColors::Window;

        textBox7->ReadOnly = false;
        textBox7->BackColor = System::Drawing::SystemColors::Window;
    }
    else {
        textBox7->ReadOnly = true;
        textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox7->Clear();

        checkBox8->Checked = false;
        textBox8->ReadOnly = true;
        textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox8->Clear();

        checkBox9->Checked = false;
        textBox9->ReadOnly = true;
        textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox9->Clear();

        checkBox10->Checked = false;
        textBox10->ReadOnly = true;
        textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox10->Clear();
    }

    return System::Void();
}

System::Void SumMultArr::ArrForm::checkBox8_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBox8->Checked == true) {
        checkBox2->Checked = true;
        checkBox3->Checked = true;
        checkBox4->Checked = true;
        checkBox5->Checked = true;
        checkBox6->Checked = true;
        checkBox7->Checked = true;

        textBox2->ReadOnly = false;
        textBox2->BackColor = System::Drawing::SystemColors::Window;

        textBox3->ReadOnly = false;
        textBox3->BackColor = System::Drawing::SystemColors::Window;

        textBox4->ReadOnly = false;
        textBox4->BackColor = System::Drawing::SystemColors::Window;

        textBox5->ReadOnly = false;
        textBox5->BackColor = System::Drawing::SystemColors::Window;

        textBox6->ReadOnly = false;
        textBox6->BackColor = System::Drawing::SystemColors::Window;

        textBox7->ReadOnly = false;
        textBox7->BackColor = System::Drawing::SystemColors::Window;

        textBox8->ReadOnly = false;
        textBox8->BackColor = System::Drawing::SystemColors::Window;
    }
    else {
        textBox8->ReadOnly = true;
        textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox8->Clear();

        checkBox9->Checked = false;
        textBox9->ReadOnly = true;
        textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox9->Clear();

        checkBox10->Checked = false;
        textBox10->ReadOnly = true;
        textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox10->Clear();
    }

    return System::Void();
}

System::Void SumMultArr::ArrForm::checkBox9_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBox9->Checked == true) {
        checkBox2->Checked = true;
        checkBox3->Checked = true;
        checkBox4->Checked = true;
        checkBox5->Checked = true;
        checkBox6->Checked = true;
        checkBox7->Checked = true;
        checkBox8->Checked = true;

        textBox2->ReadOnly = false;
        textBox2->BackColor = System::Drawing::SystemColors::Window;

        textBox3->ReadOnly = false;
        textBox3->BackColor = System::Drawing::SystemColors::Window;

        textBox4->ReadOnly = false;
        textBox4->BackColor = System::Drawing::SystemColors::Window;

        textBox5->ReadOnly = false;
        textBox5->BackColor = System::Drawing::SystemColors::Window;

        textBox6->ReadOnly = false;
        textBox6->BackColor = System::Drawing::SystemColors::Window;

        textBox7->ReadOnly = false;
        textBox7->BackColor = System::Drawing::SystemColors::Window;

        textBox8->ReadOnly = false;
        textBox8->BackColor = System::Drawing::SystemColors::Window;

        textBox9->ReadOnly = false;
        textBox9->BackColor = System::Drawing::SystemColors::Window;
    }
    else {
        textBox9->ReadOnly = true;
        textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox9->Clear();

        checkBox10->Checked = false;
        textBox10->ReadOnly = true;
        textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox10->Clear();
    }

    return System::Void();
}

System::Void SumMultArr::ArrForm::checkBox10_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBox10->Checked == true) {
        checkBox2->Checked = true;
        checkBox3->Checked = true;
        checkBox4->Checked = true;
        checkBox5->Checked = true;
        checkBox6->Checked = true;
        checkBox7->Checked = true;
        checkBox8->Checked = true;
        checkBox9->Checked = true;

        textBox2->ReadOnly = false;
        textBox2->BackColor = System::Drawing::SystemColors::Window;

        textBox3->ReadOnly = false;
        textBox3->BackColor = System::Drawing::SystemColors::Window;

        textBox4->ReadOnly = false;
        textBox4->BackColor = System::Drawing::SystemColors::Window;

        textBox5->ReadOnly = false;
        textBox5->BackColor = System::Drawing::SystemColors::Window;

        textBox6->ReadOnly = false;
        textBox6->BackColor = System::Drawing::SystemColors::Window;

        textBox7->ReadOnly = false;
        textBox7->BackColor = System::Drawing::SystemColors::Window;

        textBox8->ReadOnly = false;
        textBox8->BackColor = System::Drawing::SystemColors::Window;

        textBox9->ReadOnly = false;
        textBox9->BackColor = System::Drawing::SystemColors::Window;

        textBox10->ReadOnly = false;
        textBox10->BackColor = System::Drawing::SystemColors::Window;
    }
    else {
        textBox10->ReadOnly = true;
        textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
            static_cast<System::Int32>(static_cast<System::Byte>(192)));
        textBox10->Clear();
    }

    return System::Void();
}

// заполнение массива начальными значениями
System::Void SumMultArr::ArrForm::buttonStartValues_Click(System::Object^ sender, System::EventArgs^ e)
{
    
    textBox1->Text = start_values(0).ToString();

    if (checkBox2->Checked == true) {
        textBox2->Text = start_values(1).ToString();
    }

    if (checkBox3->Checked == true) {
        textBox2->Text = start_values(1).ToString();
        textBox3->Text = start_values(2).ToString();
    }

    if (checkBox4->Checked == true) {
        textBox2->Text = start_values(1).ToString();
        textBox3->Text = start_values(2).ToString();
        textBox4->Text = start_values(3).ToString();
    }

    if (checkBox5->Checked == true) {
        textBox2->Text = start_values(1).ToString();
        textBox3->Text = start_values(2).ToString();
        textBox4->Text = start_values(3).ToString();
        textBox5->Text = start_values(4).ToString();
    }

    if (checkBox6->Checked == true) {
        textBox2->Text = start_values(1).ToString();
        textBox3->Text = start_values(2).ToString();
        textBox4->Text = start_values(3).ToString();
        textBox5->Text = start_values(4).ToString();
        textBox6->Text = start_values(5).ToString();
    }

    if (checkBox7->Checked == true) {
        textBox2->Text = start_values(1).ToString();
        textBox3->Text = start_values(2).ToString();
        textBox4->Text = start_values(3).ToString();
        textBox5->Text = start_values(4).ToString();
        textBox6->Text = start_values(5).ToString();
        textBox7->Text = start_values(6).ToString();
    }

    if (checkBox8->Checked == true) {
        textBox2->Text = start_values(1).ToString();
        textBox3->Text = start_values(2).ToString();
        textBox4->Text = start_values(3).ToString();
        textBox5->Text = start_values(4).ToString();
        textBox6->Text = start_values(5).ToString();
        textBox7->Text = start_values(6).ToString();
        textBox8->Text = start_values(7).ToString();
    }

    if (checkBox9->Checked == true) {
        textBox2->Text = start_values(1).ToString();
        textBox3->Text = start_values(2).ToString();
        textBox4->Text = start_values(3).ToString();
        textBox5->Text = start_values(4).ToString();
        textBox6->Text = start_values(5).ToString();
        textBox7->Text = start_values(6).ToString();
        textBox8->Text = start_values(7).ToString();
        textBox9->Text = start_values(8).ToString();
    }

    if (checkBox10->Checked == true) {
        textBox2->Text = start_values(1).ToString();
        textBox3->Text = start_values(2).ToString();
        textBox4->Text = start_values(3).ToString();
        textBox5->Text = start_values(4).ToString();
        textBox6->Text = start_values(5).ToString();
        textBox7->Text = start_values(6).ToString();
        textBox8->Text = start_values(7).ToString();
        textBox9->Text = start_values(8).ToString();
        textBox10->Text = start_values(9).ToString();
    }

    return System::Void();
}

// заполнение массива случайными значениями
System::Void SumMultArr::ArrForm::buttonRandomValues_Click(System::Object^ sender, System::EventArgs^ e)
{
    srand(time(NULL));

    textBox1->Text = (rand() % 101 - 1).ToString();

    if (checkBox2->Checked == true) {
        textBox2->Text = (rand() % 101 - 1).ToString();
    }

    if (checkBox3->Checked == true) {
        textBox2->Text = (rand() % 101 - 1).ToString();
        textBox3->Text = (rand() % 101 - 1).ToString();
    }

    if (checkBox4->Checked == true) {
        textBox2->Text = (rand() % 101 - 1).ToString();
        textBox3->Text = (rand() % 101 - 1).ToString();
        textBox4->Text = (rand() % 101 - 1).ToString();
    }

    if (checkBox5->Checked == true) {
        textBox2->Text = (rand() % 101 - 1).ToString();
        textBox3->Text = (rand() % 101 - 1).ToString();
        textBox4->Text = (rand() % 101 - 1).ToString();
        textBox5->Text = (rand() % 101 - 1).ToString();
    }

    if (checkBox6->Checked == true) {
        textBox2->Text = (rand() % 101 - 1).ToString();
        textBox3->Text = (rand() % 101 - 1).ToString();
        textBox4->Text = (rand() % 101 - 1).ToString();
        textBox5->Text = (rand() % 101 - 1).ToString();
        textBox6->Text = (rand() % 101 - 1).ToString();
    }

    if (checkBox7->Checked == true) {
        textBox2->Text = (rand() % 101 - 1).ToString();
        textBox3->Text = (rand() % 101 - 1).ToString();
        textBox4->Text = (rand() % 101 - 1).ToString();
        textBox5->Text = (rand() % 101 - 1).ToString();
        textBox6->Text = (rand() % 101 - 1).ToString();
        textBox7->Text = (rand() % 101 - 1).ToString();
    }

    if (checkBox8->Checked == true) {
        textBox2->Text = (rand() % 101 - 1).ToString();
        textBox3->Text = (rand() % 101 - 1).ToString();
        textBox4->Text = (rand() % 101 - 1).ToString();
        textBox5->Text = (rand() % 101 - 1).ToString();
        textBox6->Text = (rand() % 101 - 1).ToString();
        textBox7->Text = (rand() % 101 - 1).ToString();
        textBox8->Text = (rand() % 101 - 1).ToString();
    }

    if (checkBox9->Checked == true) {
        textBox2->Text = (rand() % 101 - 1).ToString();
        textBox3->Text = (rand() % 101 - 1).ToString();
        textBox4->Text = (rand() % 101 - 1).ToString();
        textBox5->Text = (rand() % 101 - 1).ToString();
        textBox6->Text = (rand() % 101 - 1).ToString();
        textBox7->Text = (rand() % 101 - 1).ToString();
        textBox8->Text = (rand() % 101 - 1).ToString();
        textBox9->Text = (rand() % 101 - 1).ToString();
    }

    if (checkBox10->Checked == true) {
        textBox2->Text = (rand() % 101 - 1).ToString();
        textBox3->Text = (rand() % 101 - 1).ToString();
        textBox4->Text = (rand() % 101 - 1).ToString();
        textBox5->Text = (rand() % 101 - 1).ToString();
        textBox6->Text = (rand() % 101 - 1).ToString();
        textBox7->Text = (rand() % 101 - 1).ToString();
        textBox8->Text = (rand() % 101 - 1).ToString();
        textBox9->Text = (rand() % 101 - 1).ToString();
        textBox10->Text = (rand() % 101 - 1).ToString();
    }
    
    return System::Void();
}

// очистить массив
System::Void SumMultArr::ArrForm::ButtonDeleteMass_Click(System::Object^ sender, System::EventArgs^ e)
{
    textBox1->Clear();
    textBox2->Clear();
    textBox3->Clear();
    textBox4->Clear();
    textBox5->Clear();
    textBox6->Clear();
    textBox7->Clear();
    textBox8->Clear();
    textBox9->Clear();
    textBox10->Clear();

    return System::Void();
}

// сумма положительных элементов массива
System::Void SumMultArr::ArrForm::PositiveSum_Click(System::Object^ sender, System::EventArgs^ e)
{
    bool protect = true;
    int index = 0;

    if (checkBox2->Checked == false) {
        if (textBox1->Text != "") {
            inter_arr[0] = System::Int32::Parse(textBox1->Text);

            index = 0;
        }
        else {
            protect = false;
        }
    }

    if (checkBox2->Checked == true) {
        if (textBox1->Text != "" & textBox2->Text != "") {
            inter_arr[0] = System::Int32::Parse(textBox1->Text);
            inter_arr[1] = System::Int32::Parse(textBox2->Text);

            index = 1;
        }
        else {
            protect = false;
        }
    }

    if (checkBox3->Checked == true) {
        if (textBox1->Text != "" & textBox2->Text != "" & textBox3->Text != "") {
            inter_arr[0] = System::Int32::Parse(textBox1->Text);
            inter_arr[1] = System::Int32::Parse(textBox2->Text);
            inter_arr[2] = System::Int32::Parse(textBox3->Text);

            index = 2;
        }
        else {
            protect = false;
        }
    }

    if (checkBox4->Checked == true) {
        if (textBox1->Text != "" & textBox2->Text != "" & textBox3->Text != "" & textBox4->Text != "") {
            inter_arr[0] = System::Int32::Parse(textBox1->Text);
            inter_arr[1] = System::Int32::Parse(textBox2->Text);
            inter_arr[2] = System::Int32::Parse(textBox3->Text);
            inter_arr[3] = System::Int32::Parse(textBox4->Text);

            index = 3;
        }
        else {
            protect = false;
        }
    }

    if (checkBox5->Checked == true) {
        if (textBox1->Text != "" & textBox2->Text != "" & textBox3->Text != "" & textBox4->Text != "" & textBox5->Text != "") {
            inter_arr[0] = System::Int32::Parse(textBox1->Text);
            inter_arr[1] = System::Int32::Parse(textBox2->Text);
            inter_arr[2] = System::Int32::Parse(textBox3->Text);
            inter_arr[3] = System::Int32::Parse(textBox4->Text);
            inter_arr[4] = System::Int32::Parse(textBox5->Text);

            index = 4;
        }
        else {
            protect = false;
        }
    }

    if (checkBox6->Checked == true) {
        if (textBox1->Text != "" & textBox2->Text != "" & textBox3->Text != "" & textBox4->Text != "" & textBox5->Text != "" & textBox6->Text != "") {
            inter_arr[0] = System::Int32::Parse(textBox1->Text);
            inter_arr[1] = System::Int32::Parse(textBox2->Text);
            inter_arr[2] = System::Int32::Parse(textBox3->Text);
            inter_arr[3] = System::Int32::Parse(textBox4->Text);
            inter_arr[4] = System::Int32::Parse(textBox5->Text);
            inter_arr[5] = System::Int32::Parse(textBox6->Text);

            index = 5;
        }
        else {
            protect = false;
        }
    }

    if (checkBox7->Checked == true) {
        if (textBox1->Text != "" & textBox2->Text != "" & textBox3->Text != "" & textBox4->Text != "" & textBox5->Text != "" & textBox6->Text != ""
            & textBox7->Text != "") {
            inter_arr[0] = System::Int32::Parse(textBox1->Text);
            inter_arr[1] = System::Int32::Parse(textBox2->Text);
            inter_arr[2] = System::Int32::Parse(textBox3->Text);
            inter_arr[3] = System::Int32::Parse(textBox4->Text);
            inter_arr[4] = System::Int32::Parse(textBox5->Text);
            inter_arr[5] = System::Int32::Parse(textBox6->Text);
            inter_arr[6] = System::Int32::Parse(textBox7->Text);

            index = 6;
        }
        else {
            protect = false;
        }
    }

    if (checkBox8->Checked == true) {
        if (textBox1->Text != "" & textBox2->Text != "" & textBox3->Text != "" & textBox4->Text != "" & textBox5->Text != "" & textBox6->Text != ""
            & textBox7->Text != "" & textBox8->Text != "") {
            inter_arr[0] = System::Int32::Parse(textBox1->Text);
            inter_arr[1] = System::Int32::Parse(textBox2->Text);
            inter_arr[2] = System::Int32::Parse(textBox3->Text);
            inter_arr[3] = System::Int32::Parse(textBox4->Text);
            inter_arr[4] = System::Int32::Parse(textBox5->Text);
            inter_arr[5] = System::Int32::Parse(textBox6->Text);
            inter_arr[6] = System::Int32::Parse(textBox7->Text);
            inter_arr[7] = System::Int32::Parse(textBox8->Text);

            index = 7;
        }
        else {
            protect = false;
        }
    }

    if (checkBox9->Checked == true) {
        if (textBox1->Text != "" & textBox2->Text != "" & textBox3->Text != "" & textBox4->Text != "" & textBox5->Text != "" & textBox6->Text != ""
            & textBox7->Text != "" & textBox8->Text != "" & textBox9->Text != "") {
            inter_arr[0] = System::Int32::Parse(textBox1->Text);
            inter_arr[1] = System::Int32::Parse(textBox2->Text);
            inter_arr[2] = System::Int32::Parse(textBox3->Text);
            inter_arr[3] = System::Int32::Parse(textBox4->Text);
            inter_arr[4] = System::Int32::Parse(textBox5->Text);
            inter_arr[5] = System::Int32::Parse(textBox6->Text);
            inter_arr[6] = System::Int32::Parse(textBox7->Text);
            inter_arr[7] = System::Int32::Parse(textBox8->Text);
            inter_arr[8] = System::Int32::Parse(textBox9->Text);

            index = 8;
        }
        else {
            protect = false;
        }
    }

    if (checkBox10->Checked == true) {
        if (textBox1->Text != "" & textBox2->Text != "" & textBox3->Text != "" & textBox4->Text != "" & textBox5->Text != "" & textBox6->Text != ""
            & textBox7->Text != "" & textBox8->Text != "" & textBox9->Text != "" & textBox10->Text != "") {
            inter_arr[0] = System::Int32::Parse(textBox1->Text);
            inter_arr[1] = System::Int32::Parse(textBox2->Text);
            inter_arr[2] = System::Int32::Parse(textBox3->Text);
            inter_arr[3] = System::Int32::Parse(textBox4->Text);
            inter_arr[4] = System::Int32::Parse(textBox5->Text);
            inter_arr[5] = System::Int32::Parse(textBox6->Text);
            inter_arr[6] = System::Int32::Parse(textBox7->Text);
            inter_arr[7] = System::Int32::Parse(textBox8->Text);
            inter_arr[8] = System::Int32::Parse(textBox9->Text);
            inter_arr[9] = System::Int32::Parse(textBox10->Text);

            index = 9;
        }
        else {
            protect = false;
        }
    }

    if (protect == true) {
        textBoxSum->Text = sum(index).ToString();
    }
    else {
        MessageBox::Show("Есть пустая ячейка!\nУберите лишние или заполните их значениями!", "Ошибка", MessageBoxButtons::OK);
    }

    
    return System::Void();
}

// произведение элементов между первым макисмальным и первым минимальным элементами массива
System::Void SumMultArr::ArrForm::MultMaxMin_Click(System::Object^ sender, System::EventArgs^ e)
{
    bool protect = true;
    int index = 0;

    if (checkBox2->Checked == false) {
        if (textBox1->Text != "") {
            inter_arr[0] = System::Int32::Parse(textBox1->Text);

            index = 0;
        }
        else {
            protect = false;
        }
    } 

    if (checkBox2->Checked == true) {
        if (textBox1->Text != "" & textBox2->Text != "") {
            inter_arr[0] = System::Int32::Parse(textBox1->Text);
            inter_arr[1] = System::Int32::Parse(textBox2->Text);

            index = 1;
        }
        else {
            protect = false;
        }
    }

    if (checkBox3->Checked == true) {
        if (textBox1->Text != "" & textBox2->Text != "" & textBox3->Text != "") {
            inter_arr[0] = System::Int32::Parse(textBox1->Text);
            inter_arr[1] = System::Int32::Parse(textBox2->Text);
            inter_arr[2] = System::Int32::Parse(textBox3->Text);

            index = 2;
        }
        else {
            protect = false;
        }
    }

    if (checkBox4->Checked == true) {
        if (textBox1->Text != "" & textBox2->Text != "" & textBox3->Text != "" & textBox4->Text != "") {
            inter_arr[0] = System::Int32::Parse(textBox1->Text);
            inter_arr[1] = System::Int32::Parse(textBox2->Text);
            inter_arr[2] = System::Int32::Parse(textBox3->Text);
            inter_arr[3] = System::Int32::Parse(textBox4->Text);

            index = 3;
        }
        else {
            protect = false;
        }
    }

    if (checkBox5->Checked == true) {
        if (textBox1->Text != "" & textBox2->Text != "" & textBox3->Text != "" & textBox4->Text != "" & textBox5->Text != "") {
            inter_arr[0] = System::Int32::Parse(textBox1->Text);
            inter_arr[1] = System::Int32::Parse(textBox2->Text);
            inter_arr[2] = System::Int32::Parse(textBox3->Text);
            inter_arr[3] = System::Int32::Parse(textBox4->Text);
            inter_arr[4] = System::Int32::Parse(textBox5->Text);

            index = 4;
        }
        else {
            protect = false;
        }
    }

    if (checkBox6->Checked == true) {
        if (textBox1->Text != "" & textBox2->Text != "" & textBox3->Text != "" & textBox4->Text != "" & textBox5->Text != "" & textBox6->Text != "") {
            inter_arr[0] = System::Int32::Parse(textBox1->Text);
            inter_arr[1] = System::Int32::Parse(textBox2->Text);
            inter_arr[2] = System::Int32::Parse(textBox3->Text);
            inter_arr[3] = System::Int32::Parse(textBox4->Text);
            inter_arr[4] = System::Int32::Parse(textBox5->Text);
            inter_arr[5] = System::Int32::Parse(textBox6->Text);

            index = 5;
        }
        else {
            protect = false;
        }
    }

    if (checkBox7->Checked == true) {
        if (textBox1->Text != "" & textBox2->Text != "" & textBox3->Text != "" & textBox4->Text != "" & textBox5->Text != "" & textBox6->Text != "" 
            & textBox7->Text != "") {
            inter_arr[0] = System::Int32::Parse(textBox1->Text);
            inter_arr[1] = System::Int32::Parse(textBox2->Text);
            inter_arr[2] = System::Int32::Parse(textBox3->Text);
            inter_arr[3] = System::Int32::Parse(textBox4->Text);
            inter_arr[4] = System::Int32::Parse(textBox5->Text);
            inter_arr[5] = System::Int32::Parse(textBox6->Text);
            inter_arr[6] = System::Int32::Parse(textBox7->Text);

            index = 6;
        }
        else {
            protect = false;
        }
    }

    if (checkBox8->Checked == true) {
        if (textBox1->Text != "" & textBox2->Text != "" & textBox3->Text != "" & textBox4->Text != "" & textBox5->Text != "" & textBox6->Text != ""
            & textBox7->Text != "" & textBox8->Text != "") {
            inter_arr[0] = System::Int32::Parse(textBox1->Text);
            inter_arr[1] = System::Int32::Parse(textBox2->Text);
            inter_arr[2] = System::Int32::Parse(textBox3->Text);
            inter_arr[3] = System::Int32::Parse(textBox4->Text);
            inter_arr[4] = System::Int32::Parse(textBox5->Text);
            inter_arr[5] = System::Int32::Parse(textBox6->Text);
            inter_arr[6] = System::Int32::Parse(textBox7->Text);
            inter_arr[7] = System::Int32::Parse(textBox8->Text);

            index = 7;
        }
        else {
            protect = false;
        }
    }

    if (checkBox9->Checked == true) {
        if (textBox1->Text != "" & textBox2->Text != "" & textBox3->Text != "" & textBox4->Text != "" & textBox5->Text != "" & textBox6->Text != ""
            & textBox7->Text != "" & textBox8->Text != "" & textBox9->Text != "") {
            inter_arr[0] = System::Int32::Parse(textBox1->Text);
            inter_arr[1] = System::Int32::Parse(textBox2->Text);
            inter_arr[2] = System::Int32::Parse(textBox3->Text);
            inter_arr[3] = System::Int32::Parse(textBox4->Text);
            inter_arr[4] = System::Int32::Parse(textBox5->Text);
            inter_arr[5] = System::Int32::Parse(textBox6->Text);
            inter_arr[6] = System::Int32::Parse(textBox7->Text);
            inter_arr[7] = System::Int32::Parse(textBox8->Text);
            inter_arr[8] = System::Int32::Parse(textBox9->Text);

            index = 8;
        }
        else {
            protect = false;
        }
    }

    if (checkBox10->Checked == true) {
        if (textBox1->Text != "" & textBox2->Text != "" & textBox3->Text != "" & textBox4->Text != "" & textBox5->Text != "" & textBox6->Text != ""
            & textBox7->Text != "" & textBox8->Text != "" & textBox9->Text != "" & textBox10->Text != "") {
            inter_arr[0] = System::Int32::Parse(textBox1->Text);
            inter_arr[1] = System::Int32::Parse(textBox2->Text);
            inter_arr[2] = System::Int32::Parse(textBox3->Text);
            inter_arr[3] = System::Int32::Parse(textBox4->Text);
            inter_arr[4] = System::Int32::Parse(textBox5->Text);
            inter_arr[5] = System::Int32::Parse(textBox6->Text);
            inter_arr[6] = System::Int32::Parse(textBox7->Text);
            inter_arr[7] = System::Int32::Parse(textBox8->Text);
            inter_arr[8] = System::Int32::Parse(textBox9->Text);
            inter_arr[9] = System::Int32::Parse(textBox10->Text);

            index = 9;
        }
        else {
            protect = false;
        }
    }

    if (mult(index) == 1) {
        textBoxMult->Text = "Между минимумом и минимумом нет элементов / Произведение равно 1";
    }
    else {
        if (protect == true) {
            textBoxMult->Text = mult(index).ToString();
        }
        else {
            MessageBox::Show("Есть пустая ячейка!\nУберите лишние или заполните их значениями!", "Ошибка", MessageBoxButtons::OK);
        }
    }
    

    return System::Void();
}
