#pragma once
#include "GameArea.h"
namespace Form {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CBattle
	/// </summary>
	public ref class CBattle : public System::Windows::Forms::Form
	{
	public:
		CBattle(void)
		{
			InitializeComponent();
			GridUser->RowCount = 10;
			GridBot->RowCount = 10;
			FArea = gcnew GameArea();
			SArea = gcnew GameArea();
			BotPrediction = gcnew List<List<Coords>^>(4);
			BotPrediction->Add(gcnew List<Coords>());
			BotPrediction->Add(gcnew List<Coords>());
			BotPrediction->Add(gcnew List<Coords>());
			BotPrediction->Add(gcnew List<Coords>());
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CBattle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ GridUser;
	protected:

	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Team1_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Team1_2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Team1_3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Team1_4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Team1_5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Team1_6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Team1_7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Team1_8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Team1_9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Team1_10;


//MyElements
	private:  GameArea^ FArea;
	private:  GameArea^ SArea;
	List<List <Coords>^>^ BotPrediction;
 //


	private: System::Windows::Forms::DataGridView^ GridBot;












	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::Timer^ timerShot;
	private: System::Windows::Forms::Timer^ timerClick;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->GridUser = (gcnew System::Windows::Forms::DataGridView());
			this->Team1_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Team1_2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Team1_3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Team1_4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Team1_5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Team1_6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Team1_7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Team1_8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Team1_9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Team1_10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->GridBot = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->timerShot = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerClick = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridUser))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridBot))->BeginInit();
			this->SuspendLayout();
			// 
			// GridUser
			// 
			this->GridUser->AllowUserToAddRows = false;
			this->GridUser->AllowUserToDeleteRows = false;
			this->GridUser->AllowUserToResizeColumns = false;
			this->GridUser->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->GridUser->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->GridUser->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->GridUser->ColumnHeadersVisible = false;
			this->GridUser->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->Team1_1, this->Team1_2,
					this->Team1_3, this->Team1_4, this->Team1_5, this->Team1_6, this->Team1_7, this->Team1_8, this->Team1_9, this->Team1_10
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::Transparent;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->GridUser->DefaultCellStyle = dataGridViewCellStyle2;
			this->GridUser->Location = System::Drawing::Point(23, 80);
			this->GridUser->MultiSelect = false;
			this->GridUser->Name = L"GridUser";
			this->GridUser->ReadOnly = true;
			this->GridUser->RowHeadersVisible = false;
			this->GridUser->RowTemplate->Height = 25;
			this->GridUser->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->GridUser->Size = System::Drawing::Size(253, 253);
			this->GridUser->TabIndex = 12;
			this->GridUser->CellMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &CBattle::GridUser_CellMouseClick);
			this->GridUser->CellMouseDoubleClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &CBattle::GridUser_CellMouseDoubleClick);
			// 
			// Team1_1
			// 
			this->Team1_1->HeaderText = L"";
			this->Team1_1->Name = L"Team1_1";
			this->Team1_1->ReadOnly = true;
			this->Team1_1->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Team1_1->Width = 25;
			// 
			// Team1_2
			// 
			this->Team1_2->HeaderText = L"";
			this->Team1_2->Name = L"Team1_2";
			this->Team1_2->ReadOnly = true;
			this->Team1_2->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Team1_2->Width = 25;
			// 
			// Team1_3
			// 
			this->Team1_3->HeaderText = L"";
			this->Team1_3->Name = L"Team1_3";
			this->Team1_3->ReadOnly = true;
			this->Team1_3->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Team1_3->Width = 25;
			// 
			// Team1_4
			// 
			this->Team1_4->HeaderText = L"";
			this->Team1_4->Name = L"Team1_4";
			this->Team1_4->ReadOnly = true;
			this->Team1_4->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Team1_4->Width = 25;
			// 
			// Team1_5
			// 
			this->Team1_5->HeaderText = L"";
			this->Team1_5->Name = L"Team1_5";
			this->Team1_5->ReadOnly = true;
			this->Team1_5->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Team1_5->Width = 25;
			// 
			// Team1_6
			// 
			this->Team1_6->HeaderText = L"";
			this->Team1_6->Name = L"Team1_6";
			this->Team1_6->ReadOnly = true;
			this->Team1_6->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Team1_6->Width = 25;
			// 
			// Team1_7
			// 
			this->Team1_7->HeaderText = L"";
			this->Team1_7->Name = L"Team1_7";
			this->Team1_7->ReadOnly = true;
			this->Team1_7->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Team1_7->Width = 25;
			// 
			// Team1_8
			// 
			this->Team1_8->HeaderText = L"";
			this->Team1_8->Name = L"Team1_8";
			this->Team1_8->ReadOnly = true;
			this->Team1_8->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Team1_8->Width = 25;
			// 
			// Team1_9
			// 
			this->Team1_9->HeaderText = L"";
			this->Team1_9->Name = L"Team1_9";
			this->Team1_9->ReadOnly = true;
			this->Team1_9->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Team1_9->Width = 25;
			// 
			// Team1_10
			// 
			this->Team1_10->HeaderText = L"";
			this->Team1_10->Name = L"Team1_10";
			this->Team1_10->ReadOnly = true;
			this->Team1_10->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Team1_10->Width = 25;
			// 
			// GridBot
			// 
			this->GridBot->AllowUserToAddRows = false;
			this->GridBot->AllowUserToDeleteRows = false;
			this->GridBot->AllowUserToResizeColumns = false;
			this->GridBot->AllowUserToResizeRows = false;
			this->GridBot->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->GridBot->ColumnHeadersVisible = false;
			this->GridBot->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9,
					this->dataGridViewTextBoxColumn10
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::Transparent;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->GridBot->DefaultCellStyle = dataGridViewCellStyle3;
			this->GridBot->Location = System::Drawing::Point(374, 80);
			this->GridBot->MultiSelect = false;
			this->GridBot->Name = L"GridBot";
			this->GridBot->ReadOnly = true;
			this->GridBot->RowHeadersVisible = false;
			this->GridBot->RowTemplate->Height = 25;
			this->GridBot->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->GridBot->Size = System::Drawing::Size(253, 253);
			this->GridBot->TabIndex = 13;
			this->GridBot->CellMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &CBattle::GridBot_CellMouseClick);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn1->Width = 25;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn2->Width = 25;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn3->Width = 25;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn4->Width = 25;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn5->Width = 25;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			this->dataGridViewTextBoxColumn6->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn6->Width = 25;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			this->dataGridViewTextBoxColumn7->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn7->Width = 25;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			this->dataGridViewTextBoxColumn8->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn8->Width = 25;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->ReadOnly = true;
			this->dataGridViewTextBoxColumn9->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn9->Width = 25;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->ReadOnly = true;
			this->dataGridViewTextBoxColumn10->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn10->Width = 25;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(23, 384);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 37);
			this->button1->TabIndex = 14;
			this->button1->Text = L" Autogen";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CBattle::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(137, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 13);
			this->label1->TabIndex = 15;
			this->label1->Text = L"PLAYER";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(502, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 16;
			this->label2->Text = L"BOT";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(109, 384);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(77, 37);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CBattle::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(312, 383);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(76, 38);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Start";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &CBattle::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(192, 384);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(77, 37);
			this->button4->TabIndex = 19;
			this->button4->Text = L"Verify";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &CBattle::button4_Click);
			// 
			// timerShot
			// 
			this->timerShot->Interval = 2000;
			this->timerShot->Tick += gcnew System::EventHandler(this, &CBattle::timerShot_Tick);
			// 
			// timerClick
			// 
			this->timerClick->Interval = 300;
			this->timerClick->Tick += gcnew System::EventHandler(this, &CBattle::timerClick_Tick);
			// 
			// CBattle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(705, 551);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->GridBot);
			this->Controls->Add(this->GridUser);
			this->Name = L"CBattle";
			this->Text = L"CBattle";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridUser))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridBot))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool GameStarted = false;
		bool PlayerTurn = true;
		void AreaToGrid(DataGridView^ grid, GameArea^ L)
		{
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					//mine_a = -2,
					//mine_d = -1,
					//empty = 0,
					//ship_a = 1,
					//ship_d = 2,
					//shoot = 3
						switch (L->area[i][j])
						{
						case 1:
							grid->Rows[i]->Cells[j]->Value = "S";
							grid->Rows[i]->Cells[j]->Style->BackColor = Color::LightGray;
							grid->Rows[i]->Cells[j]->Style->SelectionBackColor = Color::LightGray;
							break;
						case -2:
							grid->Rows[i]->Cells[j]->Value = "M";
							grid->Rows[i]->Cells[j]->Style->BackColor = Color::DarkGray;
							grid->Rows[i]->Cells[j]->Style->SelectionBackColor = Color::DarkGray;
							break;
						case 3:
							grid->Rows[i]->Cells[j]->Value = "x";
							grid->Rows[i]->Cells[j]->Style->BackColor = Color::LightGoldenrodYellow;
							grid->Rows[i]->Cells[j]->Style->SelectionBackColor = Color::LightGoldenrodYellow;
							break;
						case 2:
							grid->Rows[i]->Cells[j]->Value = "X";
							grid->Rows[i]->Cells[j]->Style->BackColor = Color::Black;
							grid->Rows[i]->Cells[j]->Style->SelectionBackColor = Color::Black;
							break;
						case -1:
							grid->Rows[i]->Cells[j]->Value = "V";
							grid->Rows[i]->Cells[j]->Style->BackColor = Color::DarkRed;
							grid->Rows[i]->Cells[j]->Style->SelectionBackColor = Color::DarkRed;
							break;
						default:
							grid->Rows[i]->Cells[j]->Value = " ";
							grid->Rows[i]->Cells[j]->Style->BackColor = Color::White;
							grid->Rows[i]->Cells[j]->Style->SelectionBackColor = Color::White;
							break;
						}
				}
			}
		}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	FArea->ClearArea();
	FArea->AutoGen();
	AreaToGrid(GridUser, FArea);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	FArea->ClearArea();
	AreaToGrid(GridUser, FArea);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!FArea->PlacementCheck())
	{
		MessageBox::Show("Incorrect placement of ship");
	}
	else
	{
		MessageBox::Show("Correct placement of ship");
	}
}


private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//if (FArea->PlacementCheck())
	{
		//bool EndGameFlag = false;
		if (GameStarted == false)
		{
			button3->Enabled = false;
			SArea->ClearArea();
			SArea->AutoGen();
			AreaToGrid(GridBot, SArea);
			GameStarted = true;
		}
		GridUser->Enabled = true;
		//do
		//{
			if (PlayerTurn)
			{
				label2->BackColor = Color::White;
				label1->BackColor  = Color::Yellow;

			}
			else
			{
				label1->BackColor = Color::White;
				label2->BackColor = Color::Yellow;
				PlayerTurn = true;
			}
		//} while (EndGameFlag);
	}
}

	   bool isBotPredictionEmpty()
	   {
		   for (int i = 0; i < BotPrediction->Count; i++)
		   {
			   if (BotPrediction[i]->Count > 0)
			   {
				   //Check 2
				   return false;
			   }
		   }
		   return true;
	   }

void BotTurn()
{
	Coords BotCoords;
	int side;
 	if (isBotPredictionEmpty())
	{
		BotCoords = FArea->RandomShoot();
	}
	else
	{
		//Обрати БотКордс з лісту. Зробити постріл ща координатами
		do {
			side = rand() % 4;
			/*
			0 - Вниз
			1 - Вверх
			2 - Праворуч
			3 - Ліворуч
			*/
		} while (BotPrediction[side]->Count == 0);
		List <Coords>^ sidecoords = BotPrediction[side];
		BotCoords.y = sidecoords[0].y;
		BotCoords.x = sidecoords[0].x;
		FArea->Shoot(BotCoords.x, BotCoords.y);
	}

	if (FArea->area[BotCoords.x][BotCoords.y] == 2)
	{
		if (!isBotPredictionEmpty())
		{
			if (side == 0 || side == 1)
			{
					BotPrediction[2]->Clear();
					BotPrediction[3]->Clear();

				if (side == 0)
				{
					if (BotPrediction[1]->Count > 0)
					{
						Coords tempcoords = BotCoords;
						tempcoords.y -= 4;
						BotPrediction[1]->Remove(tempcoords);
						//BotPrediction[1]->RemoveAt(BotPrediction[1]->Count - 1);
					}
					BotPrediction[side]->RemoveAt(0);
				}
				else
				{
					if (BotPrediction[0]->Count > 0)
					{
						Coords tempcoords = BotCoords;
						tempcoords.y += 4;
						BotPrediction[0]->Remove(tempcoords);
						//BotPrediction[0]->RemoveAt(BotPrediction[0]->Count - 1);
					}
					BotPrediction[side]->RemoveAt(0);
				}
			}
			if (side == 2 || side == 3)
			{
					BotPrediction[0]->Clear();
					BotPrediction[1]->Clear();
				if (side == 2)
				{
					BotPrediction[side]->RemoveAt(0);
					if(BotPrediction[3]->Count == 0)
					{
						Coords tempcoords = BotCoords;
						tempcoords.x -= 4;
						BotPrediction[3]->Remove(tempcoords);
						//BotPrediction[3]->RemoveAt(BotPrediction[3]->Count - 1);
					}
				}
				else
				{
					if(BotPrediction[2]->Count>0)
					{
						Coords tempcoords = BotCoords;
						tempcoords.x += 4;
						BotPrediction[2]->Remove(tempcoords);
						//BotPrediction[2]->RemoveAt(BotPrediction[2]->Count - 1);
					}
					BotPrediction[side]->RemoveAt(0);
				}
			}
		}
		else
		{
			Coords temp;
				for (int j = 0; j < 3; j++)
				{
					if (BotCoords.y + j + 1 < 10)
					{
						temp.x = BotCoords.x;
						temp.y = BotCoords.y + j + 1;
						BotPrediction[0]->Add(temp);
					}
					if (BotCoords.y - j - 1 >= 0)
					{
						temp.x = BotCoords.x;
						temp.y = BotCoords.y - j - 1;
						BotPrediction[1]->Add(temp);
					}

					if(BotCoords.x + j + 1 < 10)
					{
						temp.x = BotCoords.x + j + 1;
						temp.y = BotCoords.y;
						BotPrediction[2]->Add(temp);
					}
					if(temp.x = BotCoords.x - j - 1 > 0)
					{
						temp.x = BotCoords.x - j - 1;
						temp.y = BotCoords.y;
						BotPrediction[3]->Add(temp);
					}
				}

		}
	}
	if (FArea->area[BotCoords.x][BotCoords.y] == 3)
		{
			if (!isBotPredictionEmpty())
			{
				BotPrediction[side]->Clear();
			}
			PlayerTurn = true;
		}
		AreaToGrid(GridUser, FArea);

		if (FArea->LoseCheck())
		{
			label2->BackColor = Color::Green;
			GameStarted = false;
			button3->Enabled = true;
			return;
		}

			if (FArea->area[BotCoords.x][BotCoords.y] == -1)
		{
			GridUser->Enabled = true;
			GridBot->Enabled = false;
			MessageBox::Show("Enemy shot the mine. Choose your ship");
			//Коли гравець віддає міну, то потрібен другий ліст предікшн
			PlayerTurn = true;
			return;
		}
}
private: System::Void GridBot_CellMouseClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) 
{
	//label1->BackColor = Color::White;
	//label2->BackColor = Color::Yellow;
					//mine_a = -2,
					//mine_d = -1,
					//empty = 0,
					//ship_a = 1,
					//ship_d = 2,
					//shoot = 3
	if (GameStarted)
	{
		GridBot->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Style->BackColor = Color::Orange;
		if ((MessageBox::Show("ShootCell?", "ShootBox", MessageBoxButtons::OKCancel)) == System::Windows::Forms::DialogResult::OK)
		{
			if (SArea->area[e->RowIndex][e->ColumnIndex] == 1  || SArea->area[e->RowIndex][e->ColumnIndex] == -2)
			{
				PlayerTurn = true;
			}
			else
			{
				PlayerTurn = false;
			}
			SArea->Shoot(e->RowIndex, e->ColumnIndex);
			AreaToGrid(GridBot, SArea);
			if (SArea->LoseCheck())
			{
				label1->BackColor = Color::Green;
				GameStarted = false;
				button3->Enabled = true;
				return;
			}
			if (SArea->area[e->RowIndex][e->ColumnIndex] == -1)
			{
				SArea->MineShot();
				AreaToGrid(GridBot, SArea);
				if (SArea->LoseCheck())
				{
					label1->BackColor = Color::Green;
					GameStarted = false;
					button3->Enabled = true;
					return;
				}
			}

			if (!PlayerTurn)
			{
				//mine_a = -2,
				//mine_d = -1,
				//empty = 0,
				//ship_a = 1,
				//ship_d = 2,
				//shoot = 3
				//Coords BotCoords;

				//do
				//{
				//	BotTurn();
				//	/*BotCoords = FArea->RandomShoot();
				//	if (FArea->area[BotCoords.x][BotCoords.y] == 3)
				//	{
				//		PlayerTurn = true;
				//	}
				//	AreaToGrid(GridUser, FArea);

				//	if (FArea->LoseCheck())
				//	{
				//		label2->BackColor = Color::Green;
				//		GameStarted = false;
				//		button3->Enabled = true;
				//		return;
				//	}

				//	if (FArea->area[BotCoords.x][BotCoords.y] == -1)
				//	{
				//		GridUser->Enabled = true;
				//		GridBot->Enabled = false;
				//		MessageBox::Show("Enemy shot the mine. Choose your ship");
				//		PlayerTurn = true;
				//		return;
				//	}*/
				//} while (!PlayerTurn);

				timerShot->Start();

			}
		}
	}
}

	   //DataGridViewCellEventArgs^ clickInfo;
	   DataGridViewCellMouseEventArgs^ clickInfo;
private: System::Void GridUser_CellMouseClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
	clickInfo = e;
	timerClick->Start();
	/*if (!GameStarted)
	{
		if (FArea->area[e->RowIndex][e->ColumnIndex] == 0)
		{
			FArea->area[e->RowIndex][e->ColumnIndex] = 1;
		}
		else
		{
			FArea->area[e->RowIndex][e->ColumnIndex] = 0;
		}
		AreaToGrid(GridUser, FArea);
	}
	else
	{
		if (FArea->area[e->RowIndex][e->ColumnIndex] == 1)
		{
			FArea->Shoot(e->RowIndex,e->ColumnIndex);
			AreaToGrid(GridUser, FArea);
			if (FArea->LoseCheck())
			{
				label2->BackColor = Color::Green;
				GameStarted = false;
				button3->Enabled = true;
			}
			GridUser->Enabled = false;
			GridBot->Enabled = true;
		}
	}*/
}

private: System::Void GridUser_CellMouseDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
	timerClick->Stop();

	if (!GameStarted)
	{
		if (FArea->area[e->RowIndex][e->ColumnIndex] == 0)
		{
			FArea->area[e->RowIndex][e->ColumnIndex] = -2;
		}
		else
		{
			FArea->area[e->RowIndex][e->ColumnIndex] = 0;
		}
		AreaToGrid(GridUser, FArea);
	}
}
private: System::Void timerShot_Tick(System::Object^ sender, System::EventArgs^ e) {
	BotTurn();
	if (PlayerTurn)
		timerShot->Stop();
}
private: System::Void timerClick_Tick(System::Object^ sender, System::EventArgs^ e) {
	timerClick->Stop(); 
	
	if (clickInfo != nullptr)
	{
		
		if (!GameStarted)
		{
			if (FArea->area[clickInfo->RowIndex][clickInfo->ColumnIndex] == 0)
			{
				FArea->area[clickInfo->RowIndex][clickInfo->ColumnIndex] = 1;
			}
			else
			{
				FArea->area[clickInfo->RowIndex][clickInfo->ColumnIndex] = 0;
			}
			AreaToGrid(GridUser, FArea);
		}
		else
		{
			if (FArea->area[clickInfo->RowIndex][clickInfo->ColumnIndex] == 1)
			{
				FArea->Shoot(clickInfo->RowIndex, clickInfo->ColumnIndex);
				AreaToGrid(GridUser, FArea);
				if (FArea->LoseCheck())
				{
					label2->BackColor = Color::Green;
					GameStarted = false;
					button3->Enabled = true;
				}
				GridUser->Enabled = false;
				GridBot->Enabled = true;
			}
		}
	}

}
};
}
