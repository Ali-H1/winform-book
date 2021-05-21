#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace bookstore {

	/// <summary>
	/// Summary for bookmadule
	/// </summary>
	public ref class bookmadule : public System::Windows::Forms::UserControl
	{
	public:
		bookmadule(void)
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
		~bookmadule()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ book_pic;
	protected:
	private: System::Windows::Forms::Label^ book_author;
	private: System::Windows::Forms::Label^ book_title;
	private: System::Windows::Forms::Panel^ panel1;

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
			this->book_pic = (gcnew System::Windows::Forms::PictureBox());
			this->book_author = (gcnew System::Windows::Forms::Label());
			this->book_title = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->book_pic))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// book_pic
			// 
			this->book_pic->Location = System::Drawing::Point(4, 4);
			this->book_pic->Name = L"book_pic";
			this->book_pic->Size = System::Drawing::Size(138, 169);
			this->book_pic->TabIndex = 0;
			this->book_pic->TabStop = false;
			// 
			// book_author
			// 
			this->book_author->AutoSize = true;
			this->book_author->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->book_author->Location = System::Drawing::Point(51, 213);
			this->book_author->Name = L"book_author";
			this->book_author->Size = System::Drawing::Size(47, 23);
			this->book_author->TabIndex = 1;
			this->book_author->Text = L"نویسنده";
			// 
			// book_title
			// 
			this->book_title->AutoSize = true;
			this->book_title->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->book_title->Location = System::Drawing::Point(39, 176);
			this->book_title->Name = L"book_title";
			this->book_title->Size = System::Drawing::Size(69, 27);
			this->book_title->TabIndex = 2;
			this->book_title->Text = L"اسم کتاب";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->book_pic);
			this->panel1->Controls->Add(this->book_title);
			this->panel1->Controls->Add(this->book_author);
			this->panel1->Location = System::Drawing::Point(1, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(148, 250);
			this->panel1->TabIndex = 3;
			// 
			// bookmadule
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panel1);
			this->Name = L"bookmadule";
			this->Size = System::Drawing::Size(299, 311);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->book_pic))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
