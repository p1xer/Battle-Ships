#pragma once
#include <array>

namespace Form {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void)
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
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ detLabel;
	private: System::Windows::Forms::DataGridView^ dataGridView2;






	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ num1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ num2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ num3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ num4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ answers;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ answers2;
	private: System::Windows::Forms::Label^ label2;











	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->detLabel = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->num1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->num2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->num3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->num4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->answers = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->answers2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(4, 30);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(72, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Game::textBoxes);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(192, 30);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(72, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Game::textBoxes);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(116, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 37);
			this->label1->TabIndex = 2;
			this->label1->Text = L"-";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(94, 79);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 253);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(240, 150);
			this->dataGridView1->TabIndex = 4;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"1";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 35;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"2";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 35;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"3";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 35;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(259, 253);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 100);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 65);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(41, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"5*5";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Game::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 42);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(41, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"4*4";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Game::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(41, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"3*3";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Game::radioButton1_CheckedChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(265, 360);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Game::button2_Click);
			// 
			// detLabel
			// 
			this->detLabel->AutoSize = true;
			this->detLabel->Location = System::Drawing::Point(346, 365);
			this->detLabel->Name = L"detLabel";
			this->detLabel->Size = System::Drawing::Size(0, 13);
			this->detLabel->TabIndex = 7;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->num1, this->num2,
					this->num3, this->num4, this->answers, this->answers2
			});
			this->dataGridView2->Location = System::Drawing::Point(349, 64);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->Size = System::Drawing::Size(240, 150);
			this->dataGridView2->TabIndex = 8;
			// 
			// num1
			// 
			this->num1->HeaderText = L"";
			this->num1->Name = L"num1";
			this->num1->Width = 20;
			// 
			// num2
			// 
			this->num2->HeaderText = L"";
			this->num2->Name = L"num2";
			this->num2->Width = 20;
			// 
			// num3
			// 
			this->num3->HeaderText = L"";
			this->num3->Name = L"num3";
			this->num3->Width = 20;
			// 
			// num4
			// 
			this->num4->HeaderText = L"";
			this->num4->Name = L"num4";
			this->num4->Width = 20;
			// 
			// answers
			// 
			this->answers->HeaderText = L"????";
			this->answers->Name = L"answers";
			this->answers->Width = 50;
			// 
			// answers2
			// 
			this->answers2->HeaderText = L"??????";
			this->answers2->Name = L"answers2";
			this->answers2->Width = 50;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(596, 139);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Check";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Game::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(596, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 10;
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(734, 471);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->detLabel);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"Game";
			this->Text = L"Game";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
			GameRand();

		}
#pragma endregion
		int n = 3;
		int first, second, search;
		bool answer = false;

		array <int>^ randnum = gcnew array<int>(4);
		void GameRand()
		{
			Random^ randomiser = gcnew Random();
			int temp = 0;
			for (int i = 0; i < 4; i++)
			{
				randnum[i] = randomiser->Next(0, 10);
				label2->Text += randnum[i];
				//?????? ????????? ??? ?? ?????????????
			}
			dataGridView2->Rows->Add();
		}
		bool BC_Checker(array <int, 1>^ checknum, array <int, 1>^ randnum)
		{
			int cows = 0, bulls = 0;
			if (sizeof(checknum) == sizeof(randnum))
			{
				for (int i = 0; i < 4; i++)
				{
					if (checknum[i] == randnum[i])
					{
						bulls++;
						if (bulls == 4)
						{
							dataGridView2->Rows[dataGridView2->RowCount - 2]->Cells[4]->Value = bulls;
							dataGridView2->Rows[dataGridView2->RowCount - 2]->Cells[5]->Value = cows;
							return true;
						}
					}
					else
					{
						for (int j = 0; j < 4; j++)
						{
							if (j != i)
							{
								if (checknum[i] == randnum[j])
								{
									cows++;
								}
							}
						}
					}
				}

			}
			dataGridView2->Rows[dataGridView2->RowCount - 2]->Cells[4]->Value = bulls;
			dataGridView2->Rows[dataGridView2->RowCount - 2]->Cells[5]->Value = cows;
			return false;
		}
	private: System::Void textBoxes(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && !(e->KeyChar == 8))
		{
			e->Handled = true;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		first = System::Convert::ToInt16(textBox1->Text);
		second = System::Convert::ToInt16(textBox2->Text);
		Windows::Forms::DialogResult dresult;
		if (first > second)
		{
			int temp;
			temp = second;
			second = first;
			first = temp;
		}
		answer = false;
		while (!answer)
		{

			dresult = MessageBox::Show("Is your number bigger " + ((first + second) / 2).ToString(), "Question", MessageBoxButtons::YesNo, MessageBoxIcon::Question, MessageBoxDefaultButton::Button2);
			if (dresult == Windows::Forms::DialogResult::Yes)
			{
				if (second - (first + second) / 2 == 1)
				{
					first = second;
				}
				else
				{
					first = (first + second) / 2;
				}
			}
			else
			{
				second = (first + second) / 2;
			}

			if (first == second)
			{
				dresult = MessageBox::Show("Your number is " + second.ToString());
				answer = true;
			}
		}
	}
	private: void RChange()
	{
		dataGridView1->RowCount = n;
		dataGridView1->ColumnCount = n;
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			n = 3;
			RChange();
		}
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton2->Checked == true)
		{
			n = 4;
			RChange();
		}
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton3->Checked == true)
		{
			n = 5;
			RChange();
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		array<int, 2>^ matrix = gcnew array<int, 2>(dataGridView1->RowCount * 2 - 1, dataGridView1->ColumnCount);
		for (int i = 0; i < dataGridView1->RowCount; i++)
		{
			for (int j = 0; j < dataGridView1->ColumnCount; j++)
			{
				//dataGridView1->Rows[i]->Cells[j]->Value = i+j;
				matrix[i, j] = System::Convert::ToInt16(dataGridView1->Rows[i]->Cells[j]->Value);
			}

		}
		for (int i = 0; i < dataGridView1->RowCount - 1; i++)
		{
			for (int j = 0; j < dataGridView1->ColumnCount; j++)
			{
				matrix[i + dataGridView1->RowCount, j] = matrix[i, j];
			}
		}
		int det_test = Det(matrix, dataGridView1->RowCount, dataGridView1->ColumnCount);
		String^ string_test = System::Convert::ToString(det_test);
		detLabel->Text = System::Convert::ToString(Det(matrix, dataGridView1->RowCount, dataGridView1->ColumnCount));

	}
		   int Det(array<int, 2>^ matrix, int det_rows, int det_cols)
		   {
			   int Det1 = 0;
			   int Det2 = 0;

			   for (int det_row = 0; det_row < det_rows; det_row++)
			   {
				   int diagonal = 1;
				   for (int i = det_row, j = 0; j < det_cols; i++, j++) {
					   diagonal *= matrix[i, j];
				   }
				   Det1 += diagonal;
			   }
			   for (int det_row = 0; det_row < det_rows; det_row++)
			   {
				   int diagonal = 1;
				   for (int i = det_row, j = det_cols - 1; j >= 0; i++, j--) {
					   diagonal *= matrix[i, j];
				   }
				   Det2 += diagonal;
			   }
			   return Det1 - Det2;
		   }
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView2->Rows->Add();
		dataGridView2->Rows[dataGridView2->RowCount - 2]->ReadOnly = true;
		int bulls = 0, cows = 0;
		array <int>^ checknum = gcnew array<int>(4);
		for (int i = 0; i < 4; i++)
		{
			checknum[i] = System::Convert::ToInt16(dataGridView2->Rows[dataGridView2->RowCount - 2]->Cells[i]->Value);
		}
		if (BC_Checker(checknum, randnum))
		{
			if (MessageBox::Show("You guessed the number. Do you want to restart?", "Result", MessageBoxButtons::OKCancel) == Windows::Forms::DialogResult::OK)
			{
				for (int i = 0; i < dataGridView2->RowCount - 1; i++)
				{
					for (int j = 0; j < 6; j++)
					{
						dataGridView2->Rows[i]->Cells[j]->Value = " ";
					}
				}
				dataGridView2->RowCount = 1;
				GameRand();
			}
			else
			{
				Close();
			}
		}
		//dataGridView3->Rows[0]->Cells[0]->Style->BackColor = Color::DarkCyan;
		//int r = 23, g = 14, b = 200;
		//dataGridView3->Rows[0]->Cells[1]->Style->BackColor = Color::FromArgb(r, g, b);
		//Color^ color = Color::Chocolate;
		//int r1 = color->R;
	}
	};
}
