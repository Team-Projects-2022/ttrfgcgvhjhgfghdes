#pragma once
#include "Availables.h"
namespace Project18 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  trivagologof1;
	protected:

	protected:

	private: System::Windows::Forms::ComboBox^  CountryMenu;
	protected:

	private: System::Windows::Forms::DateTimePicker^  StDateCal;
	private: System::Windows::Forms::DateTimePicker^  EndDateCal;
	private: System::Windows::Forms::Label^  StDateLabel;
	private: System::Windows::Forms::Label^  EndDateLabel;
	private: System::Windows::Forms::Button^  SearchButton;







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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->trivagologof1 = (gcnew System::Windows::Forms::PictureBox());
			this->CountryMenu = (gcnew System::Windows::Forms::ComboBox());
			this->StDateCal = (gcnew System::Windows::Forms::DateTimePicker());
			this->EndDateCal = (gcnew System::Windows::Forms::DateTimePicker());
			this->StDateLabel = (gcnew System::Windows::Forms::Label());
			this->EndDateLabel = (gcnew System::Windows::Forms::Label());
			this->SearchButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trivagologof1))->BeginInit();
			this->SuspendLayout();
			// 
			// trivagologof1
			// 
			this->trivagologof1->BackColor = System::Drawing::Color::Transparent;
			this->trivagologof1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"trivagologof1.Image")));
			this->trivagologof1->Location = System::Drawing::Point(190, 70);
			this->trivagologof1->Name = L"trivagologof1";
			this->trivagologof1->Size = System::Drawing::Size(522, 103);
			this->trivagologof1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->trivagologof1->TabIndex = 0;
			this->trivagologof1->TabStop = false;
			// 
			// CountryMenu
			// 
			this->CountryMenu->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CountryMenu->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CountryMenu->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->CountryMenu->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Egypt", L"France", L"India", L"USA" });
			this->CountryMenu->Location = System::Drawing::Point(116, 229);
			this->CountryMenu->Name = L"CountryMenu";
			this->CountryMenu->Size = System::Drawing::Size(115, 27);
			this->CountryMenu->Sorted = true;
			this->CountryMenu->TabIndex = 1;
			this->CountryMenu->Text = L"Country";
			this->CountryMenu->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox1_SelectedIndexChanged);
			// 
			// StDateCal
			// 
			this->StDateCal->Cursor = System::Windows::Forms::Cursors::Hand;
			this->StDateCal->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StDateCal->Location = System::Drawing::Point(251, 229);
			this->StDateCal->Name = L"StDateCal";
			this->StDateCal->Size = System::Drawing::Size(281, 27);
			this->StDateCal->TabIndex = 2;
			this->StDateCal->ValueChanged += gcnew System::EventHandler(this, &MyForm1::dateTimePicker1_ValueChanged);
			// 
			// EndDateCal
			// 
			this->EndDateCal->CalendarFont = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EndDateCal->Cursor = System::Windows::Forms::Cursors::Hand;
			this->EndDateCal->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EndDateCal->Location = System::Drawing::Point(553, 229);
			this->EndDateCal->Name = L"EndDateCal";
			this->EndDateCal->Size = System::Drawing::Size(281, 27);
			this->EndDateCal->TabIndex = 3;
			this->EndDateCal->ValueChanged += gcnew System::EventHandler(this, &MyForm1::EndDateCal_ValueChanged);
			// 
			// StDateLabel
			// 
			this->StDateLabel->AutoSize = true;
			this->StDateLabel->BackColor = System::Drawing::Color::Transparent;
			this->StDateLabel->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StDateLabel->Location = System::Drawing::Point(248, 207);
			this->StDateLabel->Name = L"StDateLabel";
			this->StDateLabel->Size = System::Drawing::Size(90, 18);
			this->StDateLabel->TabIndex = 4;
			this->StDateLabel->Text = L"Start Date:";
			// 
			// EndDateLabel
			// 
			this->EndDateLabel->AutoSize = true;
			this->EndDateLabel->BackColor = System::Drawing::Color::Transparent;
			this->EndDateLabel->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EndDateLabel->Location = System::Drawing::Point(550, 207);
			this->EndDateLabel->Name = L"EndDateLabel";
			this->EndDateLabel->Size = System::Drawing::Size(79, 18);
			this->EndDateLabel->TabIndex = 5;
			this->EndDateLabel->Text = L"End Date:";
			// 
			// SearchButton
			// 
			this->SearchButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(96)));
			this->SearchButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SearchButton->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchButton->Location = System::Drawing::Point(419, 285);
			this->SearchButton->Margin = System::Windows::Forms::Padding(0);
			this->SearchButton->Name = L"SearchButton";
			this->SearchButton->Size = System::Drawing::Size(92, 38);
			this->SearchButton->TabIndex = 7;
			this->SearchButton->Text = L"Search";
			this->SearchButton->UseVisualStyleBackColor = false;
			this->SearchButton->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(914, 450);
			this->Controls->Add(this->SearchButton);
			this->Controls->Add(this->EndDateLabel);
			this->Controls->Add(this->StDateLabel);
			this->Controls->Add(this->EndDateCal);
			this->Controls->Add(this->StDateCal);
			this->Controls->Add(this->CountryMenu);
			this->Controls->Add(this->trivagologof1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Search Page";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trivagologof1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (EndDateCal->Value < StDateCal->Value){
					 MessageBox::Show("Invalid Date");
				 }
				 if (CountryMenu->Text == "Country"){
					 MessageBox::Show("Invalid Country");

				 }
				 else{
					 Availables^ frm = gcnew Availables();
					// MyForm^ frm2 = gcnew MyForm();
					 frm->Show();
					 this->Hide();
				 }

	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void EndDateCal_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 
}
};
}
