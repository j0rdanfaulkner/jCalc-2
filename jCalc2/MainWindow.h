#pragma once
#include <Windows.h>
#include <iostream>
namespace jCalc2 {
	using namespace std;
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
		double tmp;
		int count;
		MainWindow(void)
		{
			InitializeComponent();
			tbxDisplay->Clear();
		}
	private:
		// quit application when 'X' of form window is clicked
		System::Void MainWindow_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
		{
			Application::Exit();
		}
		// when C/CE button is clicked
		// clear the displayed numbers in the textbox at the top
		// reset the count variable to 0
		System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			tbxDisplay->Clear();
			count = 0;
		}
		// when the mouse cursor enters the C/CE button
		// change the button's appearance
		System::Void btnClear_MouseEnter(System::Object^ sender, System::EventArgs^ e) 
		{
			btnClear->BackColor = System::Drawing::Color::FromArgb(5, 70, 134);
			btnClear->ForeColor = System::Drawing::Color::White;
		}
		// when the mouse cursor leaves the C/CE button
		// change the button's appearence back to its default appearance
		System::Void btnClear_MouseLeave(System::Object^ sender, System::EventArgs^ e) 
		{
			btnClear->BackColor = System::Drawing::Color::White;
			btnClear->ForeColor = System::Drawing::Color::FromArgb(5, 70, 134);
		}
		// when the add button is clicked
		// check to make sure a number has been entered
		// if so, parse the text of the text box as a float and store it as the current number
		// clear the text box at the top (so that the user knows to enter the next number)
		// set the focus to the text box at the top
		// set the count variable to 1
		System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (tbxDisplay->Text != "") 
			{
				currentNum = float::Parse(tbxDisplay->Text);
				tbxDisplay->Clear();
				tbxDisplay->Focus();
				count = 1;
			}
			else
			{
				// System::Windows::Forms::MessageBox("A number must be entered before you can click the add button", "No Number Entered", MB_OK | MB_ICONINFORMATION);
			}
		}
		// when the mouse cursor enters the add button
		// change its appearance
		System::Void btnAdd_MouseEnter(System::Object^ sender, System::EventArgs^ e) 
		{
			btnAdd->BackColor = System::Drawing::Color::FromArgb(5, 70, 134);
			btnAdd->ForeColor = System::Drawing::Color::White;
		}
		// when the mouse cursor leaves the add button
		// change its appearance back to its default settings
		System::Void btnAdd_MouseLeave(System::Object^ sender, System::EventArgs^ e) 
		{
			btnAdd->BackColor = System::Drawing::Color::White;
			btnAdd->ForeColor = System::Drawing::Color::FromArgb(5, 70, 134);
		}
		// when the subtract button is clicked
		// check to make sure that a number has been entered
		// if so, parse the text of the text box as a float and store it as the current number
		// clear the text box at the top (so that the user knows to enter the next number)
		// set the focus to the text box at the top
		// set the count variable to 2
		System::Void btnSubtract_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (tbxDisplay->Text != "")
			{
				currentNum = float::Parse(tbxDisplay->Text);
				tbxDisplay->Clear();
				tbxDisplay->Focus();
				count = 2;
			}
			else
			{
				// System::Windows::Forms::MessageBox("A number must be entered before you can click the subtract button", "No Number Entered", MB_OK | MB_ICONINFORMATION);
			}
		}
		// when the mouse cursor enters the subtract button
		// change its appearance
		System::Void btnSubtract_MouseEnter(System::Object^ sender, System::EventArgs^ e)
		{
			btnSubtract->BackColor = System::Drawing::Color::FromArgb(5, 70, 134);
			btnSubtract->ForeColor = System::Drawing::Color::White;
		}
		// when the mouse cursor leaves the subtract button
		// change its appearance back to its default settings
		System::Void btnSubtract_MouseLeave(System::Object^ sender, System::EventArgs^ e)
		{
			btnSubtract->BackColor = System::Drawing::Color::White;
			btnSubtract->ForeColor = System::Drawing::Color::FromArgb(5, 70, 134);
		}
		// when the multiply button is clicked
		// check to make sure a number has been entered
		// if so, parse the text of the text box as a float and store it as the current number
		// clear the text box at the top (so that the user knows to enter the next number)
		// set the focus to the text box at the top
		// set the count variable to 3
		System::Void btnMultiply_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (tbxDisplay->Text != "")
			{
				currentNum = float::Parse(tbxDisplay->Text);
				tbxDisplay->Clear();
				tbxDisplay->Focus();
				count = 3;
			}
			else
			{
				// System::Windows::Forms::MessageBox("A number must be entered before you can click the multiply button", "No Number Entered", MB_OK | MB_ICONINFORMATION);
			}
		}
		// when the mouse cursor enters the multiply button
		// change its appearance
		System::Void btnMultiply_MouseEnter(System::Object^ sender, System::EventArgs^ e)
		{
			btnMultiply->BackColor = System::Drawing::Color::FromArgb(5, 70, 134);
			btnMultiply->ForeColor = System::Drawing::Color::White;
		}
		// when the mouse cursor leaves the multiply button
		// change its appearance back to its default settings
		System::Void btnMultiply_MouseLeave(System::Object^ sender, System::EventArgs^ e)
		{
			btnMultiply->BackColor = System::Drawing::Color::White;
			btnMultiply->ForeColor = System::Drawing::Color::FromArgb(5, 70, 134);
		}
		// when the divide button is clicked
		// check to make sure a number has been entered
		// if so, parse the text of the text box as a float and store it as the current number
		// clear the text box at the top (so that the user knows to enter the next number)
		// set the focus to the text box at the top
		// set the count variable to 4
		System::Void btnDivide_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (tbxDisplay->Text != "")
			{
				currentNum = float::Parse(tbxDisplay->Text);
				tbxDisplay->Clear();
				tbxDisplay->Focus();
				count = 4;
			}
			else
			{
				// System::Windows::Forms::MessageBox("A number must be entered before you can click the divide button", "No Number Entered", MB_OK | MB_ICONINFORMATION);
			}
		}
		// when the mouse cursor enters the divide button
		// change its appearance
		System::Void btnDivide_MouseEnter(System::Object^ sender, System::EventArgs^ e)
		{
			btnDivide->BackColor = System::Drawing::Color::FromArgb(5, 70, 134);
			btnDivide->ForeColor = System::Drawing::Color::White;
		}
		// when the mouse cursor leaves the divide button
		// change its appearance back to its default settings
		System::Void btnDivide_MouseLeave(System::Object^ sender, System::EventArgs^ e) 
		{
			btnDivide->BackColor = System::Drawing::Color::White;
			btnDivide->ForeColor = System::Drawing::Color::FromArgb(5, 70, 134);
		}
		// when the percent button is clicked
		// parse the text of the text box as a float and store it as the current number
		// divide the current number by 100 (to make it into a percentage)
		// set the focus to the text box at the top
		System::Void btnPercentage_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (tbxDisplay->Text != "")
			{
				currentNum = float::Parse(tbxDisplay->Text);
				currentNum = currentNum / 100;
				tbxDisplay->Text = Convert::ToString(currentNum);
				tbxDisplay->Focus();
			}
			else
			{
				// System::Windows::Forms::MessageBox("A number must be entered before you can click the percentage button", "No Number Entered", MB_OK | MB_ICONINFORMATION);
			}
		}
		// when the mouse cursor enters the percentage button
		// change its appearance
		System::Void btnPercentage_MouseEnter(System::Object^ sender, System::EventArgs^ e)
		{
			btnPercentage->BackColor = System::Drawing::Color::FromArgb(5, 70, 134);
			btnPercentage->ForeColor = System::Drawing::Color::White;
		}
		// when the mouse cursor leaves the percentage button
		// change its appearance back to its default settings
		System::Void btnPercentage_MouseLeave(System::Object^ sender, System::EventArgs^ e)
		{
			btnPercentage->BackColor = System::Drawing::Color::White;
			btnPercentage->ForeColor = System::Drawing::Color::FromArgb(5, 70, 134);
		}
		// when the square root button is clicked
		// check to make sure a number has been entered
		// if so, parse the text of the text box as a float and store it as the current number
		// clear the text box at the top (so that the user knows to enter the next number)
		// set the focus to the text box at the top
		// set the count variable to 5
		System::Void btnSqrRoot_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (tbxDisplay->Text != "")
			{
				currentNum = float::Parse(tbxDisplay->Text);
				tbxDisplay->Clear();
				tbxDisplay->Focus();
				count = 5;
			}
			else
			{
				// System::Windows::Forms::MessageBox("A number must be entered before you can click the square root button", "No Number Entered", MB_OK | MB_ICONINFORMATION);
			}
		}
		// when the mouse cursor enters the square root button
		// change its appearance
		System::Void btnSqrRoot_MouseEnter(System::Object^ sender, System::EventArgs^ e)
		{
			btnSqrRoot->BackColor = System::Drawing::Color::FromArgb(5, 70, 134);
			btnSqrRoot->ForeColor = System::Drawing::Color::White;
		}
		// when the mouse cursor leaves the square root button
		// change its appearance back to its default settings
		System::Void btnSqrRoot_MouseLeave(System::Object^ sender, System::EventArgs^ e)
		{
			btnSqrRoot->BackColor = System::Drawing::Color::White;
			btnSqrRoot->ForeColor = System::Drawing::Color::FromArgb(5, 70, 134);
		}
		// when equals button is clicked
		// call the compute method using the count as a parameter
		System::Void btnEquals_Click(System::Object^ sender, System::EventArgs^ e)
		{
			compute(count);
		}
		// when the mouse cursor enters the equals button
		// change its appearance
		System::Void btnEquals_MouseEnter(System::Object^ sender, System::EventArgs^ e)
		{
			btnEquals->BackColor = System::Drawing::Color::FromArgb(5, 70, 134);
			btnEquals->ForeColor = System::Drawing::Color::White;
		}
		// when the mouse cursor leaves the equals button
		// change its appearance back to its default settings
		System::Void btnEquals_MouseLeave(System::Object^ sender, System::EventArgs^ e)
		{
			btnEquals->BackColor = System::Drawing::Color::White;
			btnEquals->ForeColor = System::Drawing::Color::FromArgb(5, 70, 134);
		}
		// add a 1 to the end of the textbox when the '1' button is clicked
		System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			tbxDisplay->Text = tbxDisplay->Text + 1;
		}
		// add a 2 to the end of the textbox when the '2' button is clicked
		System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e)
		{
			tbxDisplay->Text = tbxDisplay->Text + 2;
		}
		// add a 3 to the end of the textbox when the '3' button is clicked
		System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e)
		{
			tbxDisplay->Text = tbxDisplay->Text + 3;
		}
		// add a 4 to the end of the textbox when the '4' button is clicked
		System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e)
		{
			tbxDisplay->Text = tbxDisplay->Text + 4;
		}
		// add a 5 to the end of the textbox when the '5' button is clicked
		System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e)
		{
			tbxDisplay->Text = tbxDisplay->Text + 5;
		}
		// add a 6 to the end of the textbox when the '6' button is clicked
		System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e)
		{
			tbxDisplay->Text = tbxDisplay->Text + 6;
		}
		// add a 7 to the end of the textbox when the '7' button is clicked
		System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e)
		{
			tbxDisplay->Text = tbxDisplay->Text + 7;
		}
		// add a 8 to the end of the textbox when the '8' button is clicked
		System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e)
		{
			tbxDisplay->Text = tbxDisplay->Text + 8;
		}
		// add a 9 to the end of the textbox when the '9' button is clicked
		System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e)
		{
			tbxDisplay->Text = tbxDisplay->Text + 9;
		}
		// add a 0 to the end of the textbox when the '0' button is clicked
		System::Void btn0_Click(System::Object^ sender, System::EventArgs^ e)
		{
			tbxDisplay->Text = tbxDisplay->Text + 0;
		}
		// when the button for inserting a decimal place is clicked
		// get the length of the text of the text box and store this as an int variable called 'length'
		// set another int variable called 'flag' to '0'
		// store the text value of the text box as a string
		// create a for loop that iterates until the length of the text box is reached (to check for existing decimal)
		// if the text value at 'i' is equal to a decimal point, break the for loop and set the flag variable to '1'
		// if there is currently no decimal (in other words, flag remained equal to '0')
		// set the text box text to equal '.'
		System::Void btnDecimal_Click(System::Object^ sender, System::EventArgs^ e)
		{
			int length = tbxDisplay->TextLength;
			int flag = 0;
			System::String^ text = tbxDisplay->Text;
			int i;
			for (i = 0; i < length; i++)
			{
				if (text[i].ToString() == ".")
				{
					flag = 1;
					string message = "Decimal has already been entered";
					// MessageBox.Show(message, "Decimal Already Entered", MessageBoxButtons.OK, MessageBoxIcon.Information);
					break;
				}
				else
				{
					flag = 0;
				}
			}
			if (flag == 0)
			{
				tbxDisplay->Text = tbxDisplay->Text + ".";
			}
		}
		// if user has entered their input
		// use switch statement to perform the correct mathematical operation
		// add = count 1
		// subtract = count 2
		// multiply = count 3
		// divide = count 4
		// square root = count 5
		void compute(int count)
		{
			if (currentNum.ToString() == "")
			{
				string message = "Please enter a number";
				// MessageBox.Show(message, "No Number Entered", MessageBoxButtons.OK, MessageBoxIcon.Error);
			}
			else
			{
				switch (count)
				{
				case 1:
					ans = currentNum + float::Parse(tbxDisplay->Text);
					tbxDisplay->Text = ans.ToString();
					break;
				case 2:
					ans = currentNum - float::Parse(tbxDisplay->Text);
					tbxDisplay->Text = ans.ToString();
					break;
				case 3:
					ans = currentNum * float::Parse(tbxDisplay->Text);
					tbxDisplay->Text = ans.ToString();
					break;
				case 4:
					ans = currentNum / float::Parse(tbxDisplay->Text);
					tbxDisplay->Text = ans.ToString();
					break;
				case 5:
					tmp = Convert::ToDouble(currentNum);
					ans = Convert::ToSingle(Math::Sqrt(tmp));
					tbxDisplay->Text = ans.ToString();
					break;
				}
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
	private: System::Windows::Forms::Button^ btnMultiply;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->tbxDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btnPercentage = (gcnew System::Windows::Forms::Button());
			this->btnSqrRoot = (gcnew System::Windows::Forms::Button());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->btnMultiply = (gcnew System::Windows::Forms::Button());
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
			this->tbxDisplay->BackColor = System::Drawing::SystemColors::Info;
			this->tbxDisplay->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbxDisplay->Font = (gcnew System::Drawing::Font(L"DS-Digital", 44.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbxDisplay->Location = System::Drawing::Point(12, 10);
			this->tbxDisplay->MaxLength = 9;
			this->tbxDisplay->Name = L"tbxDisplay";
			this->tbxDisplay->ReadOnly = true;
			this->tbxDisplay->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tbxDisplay->Size = System::Drawing::Size(278, 66);
			this->tbxDisplay->TabIndex = 1;
			this->tbxDisplay->Text = L"000000000";
			this->tbxDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
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
			this->btnPercentage->Click += gcnew System::EventHandler(this, &MainWindow::btnPercentage_Click);
			this->btnPercentage->MouseEnter += gcnew System::EventHandler(this, &MainWindow::btnPercentage_MouseEnter);
			this->btnPercentage->MouseLeave += gcnew System::EventHandler(this, &MainWindow::btnPercentage_MouseLeave);
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
			this->btnSqrRoot->Click += gcnew System::EventHandler(this, &MainWindow::btnSqrRoot_Click);
			this->btnSqrRoot->MouseEnter += gcnew System::EventHandler(this, &MainWindow::btnSqrRoot_MouseEnter);
			this->btnSqrRoot->MouseLeave += gcnew System::EventHandler(this, &MainWindow::btnSqrRoot_MouseLeave);
			// 
			// btnDivide
			// 
			this->btnDivide->BackColor = System::Drawing::Color::White;
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Eurostile LT Std Bold", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDivide->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->btnDivide->Location = System::Drawing::Point(225, 82);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(65, 65);
			this->btnDivide->TabIndex = 4;
			this->btnDivide->Text = L"÷";
			this->btnDivide->UseVisualStyleBackColor = false;
			this->btnDivide->Click += gcnew System::EventHandler(this, &MainWindow::btnDivide_Click);
			this->btnDivide->MouseEnter += gcnew System::EventHandler(this, &MainWindow::btnDivide_MouseEnter);
			this->btnDivide->MouseLeave += gcnew System::EventHandler(this, &MainWindow::btnDivide_MouseLeave);
			// 
			// btnMultiply
			// 
			this->btnMultiply->BackColor = System::Drawing::Color::White;
			this->btnMultiply->Font = (gcnew System::Drawing::Font(L"Eurostile LT Std Bold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMultiply->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->btnMultiply->Location = System::Drawing::Point(225, 153);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size(65, 65);
			this->btnMultiply->TabIndex = 8;
			this->btnMultiply->Text = L"X";
			this->btnMultiply->UseVisualStyleBackColor = false;
			this->btnMultiply->Click += gcnew System::EventHandler(this, &MainWindow::btnMultiply_Click);
			this->btnMultiply->MouseEnter += gcnew System::EventHandler(this, &MainWindow::btnMultiply_MouseEnter);
			this->btnMultiply->MouseLeave += gcnew System::EventHandler(this, &MainWindow::btnMultiply_MouseLeave);
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
			this->btn9->Click += gcnew System::EventHandler(this, &MainWindow::btn9_Click);
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
			this->btn8->Click += gcnew System::EventHandler(this, &MainWindow::btn8_Click);
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
			this->btn7->Click += gcnew System::EventHandler(this, &MainWindow::btn7_Click);
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
			this->btnSubtract->Click += gcnew System::EventHandler(this, &MainWindow::btnSubtract_Click);
			this->btnSubtract->MouseEnter += gcnew System::EventHandler(this, &MainWindow::btnSubtract_MouseEnter);
			this->btnSubtract->MouseLeave += gcnew System::EventHandler(this, &MainWindow::btnSubtract_MouseLeave);
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
			this->btn6->Click += gcnew System::EventHandler(this, &MainWindow::btn6_Click);
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
			this->btn5->Click += gcnew System::EventHandler(this, &MainWindow::btn5_Click);
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
			this->btn4->Click += gcnew System::EventHandler(this, &MainWindow::btn4_Click);
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
			this->btnAdd->MouseEnter += gcnew System::EventHandler(this, &MainWindow::btnAdd_MouseEnter);
			this->btnAdd->MouseLeave += gcnew System::EventHandler(this, &MainWindow::btnAdd_MouseLeave);
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
			this->btn3->Click += gcnew System::EventHandler(this, &MainWindow::btn3_Click);
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
			this->btn2->Click += gcnew System::EventHandler(this, &MainWindow::btn2_Click);
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
			this->btn1->Click += gcnew System::EventHandler(this, &MainWindow::btn1_Click);
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
			this->btnEquals->Click += gcnew System::EventHandler(this, &MainWindow::btnEquals_Click);
			this->btnEquals->MouseEnter += gcnew System::EventHandler(this, &MainWindow::btnEquals_MouseEnter);
			this->btnEquals->MouseLeave += gcnew System::EventHandler(this, &MainWindow::btnEquals_MouseLeave);
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
			this->btnDecimal->Click += gcnew System::EventHandler(this, &MainWindow::btnDecimal_Click);
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
			this->btn0->Click += gcnew System::EventHandler(this, &MainWindow::btn0_Click);
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
			this->Controls->Add(this->btnMultiply);
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
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5);
			this->MaximizeBox = false;
			this->Name = L"MainWindow";
			this->Text = L"jCalc 2";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainWindow::MainWindow_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}