#pragma once


namespace Form {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text::RegularExpressions;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ Equal;

	private: System::Windows::Forms::Button^ Minus;

	private: System::Windows::Forms::Button^ Plus;
	private: System::Windows::Forms::Button^ Multipl;
	private: System::Windows::Forms::Button^ Divide;



	private: System::Windows::Forms::Button^ Clear;


	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ Decemic;
	private: System::Windows::Forms::Button^ Backspace;
	private: System::Windows::Forms::Button^ MessageBoxButton;




	protected:







	protected:

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->Equal = (gcnew System::Windows::Forms::Button());
			this->Minus = (gcnew System::Windows::Forms::Button());
			this->Plus = (gcnew System::Windows::Forms::Button());
			this->Multipl = (gcnew System::Windows::Forms::Button());
			this->Divide = (gcnew System::Windows::Forms::Button());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->Decemic = (gcnew System::Windows::Forms::Button());
			this->Backspace = (gcnew System::Windows::Forms::Button());
			this->MessageBoxButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox1->Location = System::Drawing::Point(13, 56);
			this->textBox1->Name = L"textBox1";
			this->textBox1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->textBox1->Size = System::Drawing::Size(269, 38);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"0";
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button1->Location = System::Drawing::Point(13, 215);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(49, 49);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Numbers);
			this->button1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::keyone);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button2->Location = System::Drawing::Point(68, 215);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(49, 49);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Numbers);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button3->Location = System::Drawing::Point(123, 215);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(49, 49);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Numbers);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button4->Location = System::Drawing::Point(13, 155);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(49, 49);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Numbers);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button5->Location = System::Drawing::Point(68, 155);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(49, 49);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Numbers);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button6->Location = System::Drawing::Point(123, 155);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(49, 49);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::Numbers);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button7->Location = System::Drawing::Point(13, 100);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(49, 49);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::Numbers);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button8->Location = System::Drawing::Point(68, 100);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(49, 49);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::Numbers);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button9->Location = System::Drawing::Point(123, 100);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(49, 49);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::Numbers);
			// 
			// Equal
			// 
			this->Equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Equal->Location = System::Drawing::Point(178, 270);
			this->Equal->Name = L"Equal";
			this->Equal->Size = System::Drawing::Size(104, 49);
			this->Equal->TabIndex = 10;
			this->Equal->Text = L"=";
			this->Equal->UseVisualStyleBackColor = true;
			this->Equal->Click += gcnew System::EventHandler(this, &MyForm::equal_Click);
			// 
			// Minus
			// 
			this->Minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->Minus->Location = System::Drawing::Point(178, 215);
			this->Minus->Name = L"Minus";
			this->Minus->Size = System::Drawing::Size(49, 49);
			this->Minus->TabIndex = 11;
			this->Minus->Text = L"-";
			this->Minus->UseVisualStyleBackColor = true;
			this->Minus->Click += gcnew System::EventHandler(this, &MyForm::Operators);
			// 
			// Plus
			// 
			this->Plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->Plus->Location = System::Drawing::Point(178, 160);
			this->Plus->Name = L"Plus";
			this->Plus->Size = System::Drawing::Size(49, 49);
			this->Plus->TabIndex = 12;
			this->Plus->Text = L"+";
			this->Plus->UseVisualStyleBackColor = true;
			this->Plus->Click += gcnew System::EventHandler(this, &MyForm::Operators);
			// 
			// Multipl
			// 
			this->Multipl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->Multipl->Location = System::Drawing::Point(233, 160);
			this->Multipl->Name = L"Multipl";
			this->Multipl->Size = System::Drawing::Size(49, 49);
			this->Multipl->TabIndex = 13;
			this->Multipl->Text = L"*";
			this->Multipl->UseVisualStyleBackColor = true;
			this->Multipl->Click += gcnew System::EventHandler(this, &MyForm::Operators);
			// 
			// Divide
			// 
			this->Divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->Divide->Location = System::Drawing::Point(233, 215);
			this->Divide->Name = L"Divide";
			this->Divide->Size = System::Drawing::Size(49, 49);
			this->Divide->TabIndex = 14;
			this->Divide->Text = L"/";
			this->Divide->UseVisualStyleBackColor = true;
			this->Divide->Click += gcnew System::EventHandler(this, &MyForm::Operators);
			// 
			// Clear
			// 
			this->Clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->Clear->Location = System::Drawing::Point(12, 270);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(49, 49);
			this->Clear->TabIndex = 15;
			this->Clear->Text = L"C";
			this->Clear->UseVisualStyleBackColor = true;
			this->Clear->Click += gcnew System::EventHandler(this, &MyForm::clear_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button15->Location = System::Drawing::Point(68, 270);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(49, 49);
			this->button15->TabIndex = 16;
			this->button15->Text = L"0";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::Numbers);
			// 
			// Decemic
			// 
			this->Decemic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->Decemic->Location = System::Drawing::Point(123, 270);
			this->Decemic->Name = L"Decemic";
			this->Decemic->Size = System::Drawing::Size(49, 49);
			this->Decemic->TabIndex = 17;
			this->Decemic->Text = L".";
			this->Decemic->UseVisualStyleBackColor = true;
			this->Decemic->Click += gcnew System::EventHandler(this, &MyForm::decemic_Click);
			// 
			// Backspace
			// 
			this->Backspace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->Backspace->Location = System::Drawing::Point(178, 100);
			this->Backspace->Name = L"Backspace";
			this->Backspace->Size = System::Drawing::Size(49, 49);
			this->Backspace->TabIndex = 18;
			this->Backspace->Text = L"⌫";
			this->Backspace->UseVisualStyleBackColor = true;
			this->Backspace->Click += gcnew System::EventHandler(this, &MyForm::Backspace_Click);
			// 
			// MessageBoxButton
			// 
			this->MessageBoxButton->Location = System::Drawing::Point(77, 12);
			this->MessageBoxButton->Name = L"MessageBoxButton";
			this->MessageBoxButton->Size = System::Drawing::Size(137, 37);
			this->MessageBoxButton->TabIndex = 19;
			this->MessageBoxButton->Text = L"Message Box";
			this->MessageBoxButton->UseVisualStyleBackColor = true;
			this->MessageBoxButton->Click += gcnew System::EventHandler(this, &MyForm::MessageBoxButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(325, 354);
			this->Controls->Add(this->MessageBoxButton);
			this->Controls->Add(this->Backspace);
			this->Controls->Add(this->Decemic);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->Divide);
			this->Controls->Add(this->Multipl);
			this->Controls->Add(this->Plus);
			this->Controls->Add(this->Minus);
			this->Controls->Add(this->Equal);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstnum, secondnum, result;
		String^ operation;
		bool onedot = false;
		bool CheckInput(String^ input)
		{
			for (int i = 0; i < input->Length; i++)
			{
				//if (!Char::IsDigit(input[i]) && input[i] != '.')
				//{
				//	return false;
				//}
				//if (input[i] == '.' && input->IndexOf(".", i + 1) != -1)
				//{
				//	return false;
				//}
				if (!Char::IsDigit(input[i]))
				{
					if (i == 0 && (input[i] == '+' || input[i] == '-'))
					{
						return true;
					}
					else if (input[i] == '.')
					{
						if (onedot)
						{
							return false;
						}
						onedot = true;
					}
					else
					{
						return false;
					}

				}
			}
			return true;
		}
private: System::Void Numbers(System::Object^ sender, System::EventArgs^ e) {
	Button^ ENumber = safe_cast<Button ^>(sender);

	if (textBox1->Text == "0")
	{
		textBox1->Text = ENumber->Text;
	}
	else
	{
		textBox1->Text = textBox1->Text + ENumber->Text;
	}
}
private: System::Void Operators(System::Object^ sender, System::EventArgs^ e) {
	Regex^ Regnum = gcnew Regex("^[0-9]*\\.?[0-9]*$");
	//Match^ Matchnum = Regnum->Match(textBox1->Text);
	Button^ Numoperator = safe_cast<Button^>(sender);
	//if (Double::TryParse(textBox1->Text, firstnum))
	if(Regnum->IsMatch(textBox1->Text))
	//if(Matchnum->Success)
	{
		//firstnum = Double::Parse(textBox1->Text);
		firstnum = Convert::ToDouble(textBox1->Text);
		textBox1->Text = "";
		operation = Numoperator->Text;
	}
	else
	{
		MessageBox::Show("Error");
		textBox1->Text = "0";
		firstnum = 0;
		secondnum = 0;
	}
}
private: System::Void decemic_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!textBox1->Text->Contains("."))
	{
		textBox1->Text = textBox1->Text + ".";
	}
}
private: System::Void equal_Click(System::Object^ sender, System::EventArgs^ e) {
	secondnum = Double::Parse(textBox1->Text);
	if (operation == "+")
	{
		result = firstnum + secondnum;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (operation == "-")
	{
		result = firstnum - secondnum;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (operation == "*")
	{
		result = firstnum * secondnum;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (operation == "/")
	{
		result = firstnum / secondnum;
		textBox1->Text = System::Convert::ToString(result);
	}
}
private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "0";
	firstnum = 0;
	secondnum = 0;
}
private: System::Void Backspace_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Length > 1)
	{
		textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1, 1);
	}
	else if (textBox1->Text->Length == 1)
	{
		textBox1->Text = "0";
	}
}




private: System::Void keyone(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::NumPad1 || e->KeyCode == Keys::D1) 
	{
		if (textBox1->Text == "0")
		{
			textBox1->Text = System::Convert::ToString(1);
		}
		else
		{
			textBox1->Text = textBox1->Text + System::Convert::ToString(1);
		}
	}
}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar) && !(e->KeyChar == 8) && !(e->KeyChar == 43) && !(e->KeyChar == 45))
	{
		e->Handled = true;
	}
	if (((e->KeyChar == 43) || (e->KeyChar == 45))&& !(textBox1->TextLength == 0))
	{
		e->Handled = true;
	}
}
private: System::Void MessageBoxButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Windows::Forms::DialogResult dresult;
	dresult = MessageBox::Show("?", "Question", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question, MessageBoxDefaultButton::Button3);
	if (dresult == Windows::Forms::DialogResult::Yes)
	{
		MessageBox::Show("You pressed YES");
	}
}
};
}
