#pragma once

namespace Project18 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Availables
	/// </summary>
	public ref class Availables : public System::Windows::Forms::Form
	{
	public:
		Availables(void)
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
		~Availables()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  trivagologof1;
	protected:


	private: System::Windows::Forms::VScrollBar^  vScrollBar1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Availables::typeid));
			this->trivagologof1 = (gcnew System::Windows::Forms::PictureBox());
			this->vScrollBar1 = (gcnew System::Windows::Forms::VScrollBar());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trivagologof1))->BeginInit();
			this->SuspendLayout();
			// 
			// trivagologof1
			// 
			this->trivagologof1->BackColor = System::Drawing::Color::Transparent;
			this->trivagologof1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"trivagologof1.Image")));
			this->trivagologof1->Location = System::Drawing::Point(209, 12);
			this->trivagologof1->Name = L"trivagologof1";
			this->trivagologof1->Size = System::Drawing::Size(522, 103);
			this->trivagologof1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->trivagologof1->TabIndex = 1;
			this->trivagologof1->TabStop = false;
			// 
			// vScrollBar1
			// 
			this->vScrollBar1->Location = System::Drawing::Point(896, 0);
			this->vScrollBar1->Name = L"vScrollBar1";
			this->vScrollBar1->Size = System::Drawing::Size(18, 452);
			this->vScrollBar1->TabIndex = 4;
			this->vScrollBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &Availables::vScrollBar1_Scroll);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::White;
			this->listBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->listBox1->DisplayMember = L"HOtels";
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->ItemHeight = 33;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Hotel 1", L"Hotel 2", L"Hotel 3" });
			this->listBox1->Location = System::Drawing::Point(4, 204);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(248, 103);
			this->listBox1->Sorted = true;
			this->listBox1->TabIndex = 5;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Availables::listBox1_SelectedIndexChanged);
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(318, 218);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(269, 20);
			this->maskedTextBox1->TabIndex = 6;
			// 
			// Availables
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(914, 450);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->vScrollBar1);
			this->Controls->Add(this->trivagologof1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Availables";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Availables";
			this->Load += gcnew System::EventHandler(this, &Availables::Availables_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trivagologof1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tableLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void Availables_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void vScrollBar1_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) {
	}

private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}
};
}
