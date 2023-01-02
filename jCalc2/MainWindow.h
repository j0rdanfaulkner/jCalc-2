#pragma once
#include <Windows.h>
#include <iostream>

namespace jCalc2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		float currentNum, ans;
		int count;
		MainWindow(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

		}
	// when C/CE button is clicked
	// clear the displayed numbers in the textbox at the top
	// reset the count variable to 0
	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		tbxDisplay->Clear();
		count = 0;
	}
	// when the mouse cursor enters the C/CE button
	// change the button's appearence
	private: System::Void btnClear_MouseEnter(System::Object^ sender, System::EventArgs^ e) 
	{
		btnClear->BackColor = System::Drawing::Color::FromArgb(5, 70, 134);
		btnClear->ForeColor = System::Drawing::Color::White;
	}
	// when the mouse cursor leaves the C/CE button
	// change the button's appearence back to its default appearence
	private: System::Void btnClear_MouseLeave(System::Object^ sender, System::EventArgs^ e) 
	{
		btnClear->BackColor = System::Drawing::Color::White;
		btnClear->ForeColor = System::Drawing::Color::FromArgb(5, 70, 134);
	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (tbxDisplay->Text != "") 
		{
			currentNum = Convert::ToDouble(tbxDisplay->Text);
			tbxDisplay->Clear();
			tbxDisplay->Focus();
			count = 1;
		}
		else
		{
			// System::Windows::Forms::MessageBox("A number must be entered before you can click the add button", "No Number Entered", MB_OK | MB_ICONINFORMATION);
		}
	}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::TextBox^ tbxDisplay;
	protected:


	private: System::Windows::Forms::Button^ btnPercentage;
	private: System::Windows::Forms::Button^ btnSqrRoot;
	private: System::Windows::Forms::Button^ btnDivide;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btnSubtract;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btnEquals;
	private: System::Windows::Forms::Button^ btnDecimal;
	private: System::Windows::Forms::Button^ btn0;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->tbxDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btnPercentage = (gcnew System::Windows::Forms::Button());
			this->btnSqrRoot = (gcnew System::Windows::Forms::Button());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btnSubtract = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btnEquals = (gcnew System::Windows::Forms::Button());
			this->btnDecimal = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::Color::White;
			this->btnClear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->btnClear->Location = System::Drawing::Point(12, 82);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(65, 65);
			this->btnClear->TabIndex = 0;
			this->btnClear->Text = L"C/CE";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &MainWindow::btnClear_Click);
			this->btnClear->MouseEnter += gcnew System::EventHandler(this, &MainWindow::btnClear_MouseEnter);
			this->btnClear->MouseLeave += gcnew System::EventHandler(this, &MainWindow::btnClear_MouseLeave);
			// 
			// tbxDisplay
			// 
			this->tbxDisplay->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbxDisplay->Font = (gcnew System::Drawing::Font(L"DS-Digital", 44.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbxDisplay->Location = System::Drawing::Point(12, 10);
			this->tbxDisplay->MaxLength = 9;
			this->tbxDisplay->Name = L"tbxDisplay";
			this->tbxDisplay->ReadOnly = true;
			this->tbxDisplay->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->tbxDisplay->Size = System::Drawing::Size(278, 66);
			this->tbxDisplay->TabIndex = 1;
			this->tbxDisplay->Text = L"000000000";
			this->tbxDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btnPercentage
			// 
			this->btnPercentage->BackColor = System::Drawing::Color::White;
			this->btnPercentage->Font = (gcnew System::Drawing::Font(L"Eurostile LT Std Bold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPercentage->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->btnPercentage->Location = System::Drawing::Point(83, 82);
			this->btnPercentage->Name = L"btnPercentage";
			this->btnPercentage->Size = System::Drawing::Size(65, 65);
			this->btnPercentage->TabIndex = 2;
			this->btnPercentage->Text = L"%";
			this->btnPercentage->UseVisualStyleBackColor = false;
			// 
			// btnSqrRoot
			// 
			this->btnSqrRoot->BackColor = System::Drawing::Color::White;
			this->btnSqrRoot->Font = (gcnew System::Drawing::Font(L"Eurostile LT Std Bold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSqrRoot->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->btnSqrRoot->Location = System::Drawing::Point(154, 82);
			this->btnSqrRoot->Name = L"btnSqrRoot";
			this->btnSqrRoot->Size = System::Drawing::Size(65, 65);
			this->btnSqrRoot->TabIndex = 3;
			this->btnSqrRoot->Text = L"√";
			this->btnSqrRoot->UseVisualStyleBackColor = false;
			// 
			// btnDivide
			// 
			this->btnDivide->BackColor = System::Drawing::Color::White;
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Eurostile LT Std Bold", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDivide->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->btnDivide->Location = System::Drawing::Point(225, 82);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(65, 65);
			this->btnDivide->TabIndex = 4;
			this->btnDivide->Text = L"÷";
			this->btnDivide->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Eurostile LT Std Bold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(225, 153);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(65, 65);
			this->button1->TabIndex = 8;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::Color::White;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Eurostile LT Std Bold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->btn9->Location = System::Drawing::Point(154, 153);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(65, 65);
			this->btn9->TabIndex = 7;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::Color::White;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Eurostile LT Std Bold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->btn8->Location = System::Drawing::Point(83, 153);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(65, 65);
			this->btn8->TabIndex = 6;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::White;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Eurostile LT Std Bold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->btn7->Location = System::Drawing::Point(12, 153);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(65, 65);
			this->btn7->TabIndex = 5;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			// 
			// btnSubtract
			// 
			this->btnSubtract->BackColor = System::Drawing::Color::White;
			this->btnSubtract->Font = (gcnew System::Drawing::Font(L"Eurostile LT Std Bold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubtract->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->btnSubtract->Location = System::Drawing::Point(225, 224);
			this->btnSubtract->Name = L"btnSubtract";
			this->btnSubtract->Size = System::Drawing::Size(65, 65);
			this->btnSubtract->TabIndex = 12;
			this->btnSubtract->Text = L"--";
			this->btnSubtract->UseVisualStyleBackColor = false;
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::White;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Eurostile LT Std Bold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->btn6->Location = System::Drawing::Point(154, 224);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(65, 65);
			this->btn6->TabIndex = 11;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::White;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Eurostile LT Std Bold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->btn5->Location = System::Drawing::Point(83, 224);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(65, 65);
			this->btn5->TabIndex = 10;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::White;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Eurostile LT Std Bold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->btn4->Location = System::Drawing::Point(12, 224);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(65, 65);
			this->btn4->TabIndex = 9;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::White;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Eurostile LT Std Bold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->btnAdd->Location = System::Drawing::Point(225, 295);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(65, 136);
			this->btnAdd->TabIndex = 16;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MainWindow::btnAdd_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::White;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Eurostile LT Std Bold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->btn3->Location = System::Drawing::Point(154, 295);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(65, 65);
			this->btn3->TabIndex = 15;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::White;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Eurostile LT Std Bold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->btn2->Location = System::Drawing::Point(83, 295);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(65, 65);
			this->btn2->TabIndex = 14;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::White;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Eurostile LT Std Bold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->btn1->Location = System::Drawing::Point(12, 295);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(65, 65);
			this->btn1->TabIndex = 13;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			// 
			// btnEquals
			// 
			this->btnEquals->BackColor = System::Drawing::Color::White;
			this->btnEquals->Font = (gcnew System::Drawing::Font(L"Eurostile LT Std Bold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEquals->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->btnEquals->Location = System::Drawing::Point(154, 366);
			this->btnEquals->Name = L"btnEquals";
			this->btnEquals->Size = System::Drawing::Size(65, 65);
			this->btnEquals->TabIndex = 19;
			this->btnEquals->Text = L"=";
			this->btnEquals->UseVisualStyleBackColor = false;
			// 
			// btnDecimal
			// 
			this->btnDecimal->BackColor = System::Drawing::Color::White;
			this->btnDecimal->Font = (gcnew System::Drawing::Font(L"Eurostile LT Std Bold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDecimal->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->btnDecimal->Location = System::Drawing::Point(83, 366);
			this->btnDecimal->Name = L"btnDecimal";
			this->btnDecimal->Size = System::Drawing::Size(65, 65);
			this->btnDecimal->TabIndex = 18;
			this->btnDecimal->Text = L".";
			this->btnDecimal->UseVisualStyleBackColor = false;
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::Color::White;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Eurostile LT Std Bold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->btn0->Location = System::Drawing::Point(12, 366);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(65, 65);
			this->btn0->TabIndex = 17;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->ClientSize = System::Drawing::Size(302, 449);
			this->Controls->Add(this->btnEquals);
			this->Controls->Add(this->btnDecimal);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btnSubtract);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btnDivide);
			this->Controls->Add(this->btnSqrRoot);
			this->Controls->Add(this->btnPercentage);
			this->Controls->Add(this->tbxDisplay);
			this->Controls->Add(this->btnClear);
			this->Font = (gcnew System::Drawing::Font(L"Eurostile LT Std Bold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(5);
			this->MaximizeBox = false;
			this->Name = L"MainWindow";
			this->Text = L"jCalc 2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}