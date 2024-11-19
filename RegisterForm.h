#pragma once
#include "User.h"
namespace ElectricApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::LinkLabel^ linkLoginBtn;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbConfirmPassword;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::TextBox^ tbAddress;
	private: System::Windows::Forms::TextBox^ tbPhone;
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label8;


















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
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->linkLoginBtn = (gcnew System::Windows::Forms::LinkLabel());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->tbAddress = (gcnew System::Windows::Forms::TextBox());
			this->tbPhone = (gcnew System::Windows::Forms::TextBox());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel4
			// 
			this->panel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel4->BackColor = System::Drawing::SystemColors::Control;
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Location = System::Drawing::Point(129, 92);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(718, 496);
			this->panel4->TabIndex = 3;
			// 
			// panel5
			// 
			this->panel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel5->Controls->Add(this->linkLoginBtn);
			this->panel5->Controls->Add(this->btnOK);
			this->panel5->Controls->Add(this->btnClose);
			this->panel5->Controls->Add(this->label6);
			this->panel5->Controls->Add(this->label5);
			this->panel5->Controls->Add(this->label4);
			this->panel5->Controls->Add(this->label3);
			this->panel5->Controls->Add(this->label2);
			this->panel5->Controls->Add(this->tbConfirmPassword);
			this->panel5->Controls->Add(this->tbPassword);
			this->panel5->Controls->Add(this->tbAddress);
			this->panel5->Controls->Add(this->tbPhone);
			this->panel5->Controls->Add(this->tbEmail);
			this->panel5->Controls->Add(this->tbName);
			this->panel5->Controls->Add(this->label1);
			this->panel5->Location = System::Drawing::Point(91, 33);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(541, 436);
			this->panel5->TabIndex = 0;
			// 
			// linkLoginBtn
			// 
			this->linkLoginBtn->AutoSize = true;
			this->linkLoginBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLoginBtn->Location = System::Drawing::Point(114, 365);
			this->linkLoginBtn->Name = L"linkLoginBtn";
			this->linkLoginBtn->Size = System::Drawing::Size(48, 20);
			this->linkLoginBtn->TabIndex = 29;
			this->linkLoginBtn->TabStop = true;
			this->linkLoginBtn->Text = L"Login";
			// 
			// btnOK
			// 
			this->btnOK->BackColor = System::Drawing::Color::CornflowerBlue;
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->btnOK->ForeColor = System::Drawing::Color::White;
			this->btnOK->Location = System::Drawing::Point(244, 362);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(105, 48);
			this->btnOK->TabIndex = 28;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = false;
			this->btnOK->Click += gcnew System::EventHandler(this, &RegisterForm::btnOK_Click_1);
			// 
			// btnClose
			// 
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->btnClose->Location = System::Drawing::Point(414, 362);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(110, 48);
			this->btnClose->TabIndex = 27;
			this->btnClose->Text = L"Close";
			this->btnClose->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14));
			this->label6->Location = System::Drawing::Point(10, 276);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(217, 37);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Confirm Pass.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14));
			this->label5->Location = System::Drawing::Point(10, 226);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(106, 33);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14));
			this->label4->Location = System::Drawing::Point(9, 178);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 33);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Address";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14));
			this->label3->Location = System::Drawing::Point(9, 128);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 33);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Phone";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14));
			this->label2->Location = System::Drawing::Point(9, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 33);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Email";
			// 
			// tbConfirmPassword
			// 
			this->tbConfirmPassword->Location = System::Drawing::Point(244, 269);
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			this->tbConfirmPassword->Size = System::Drawing::Size(280, 32);
			this->tbConfirmPassword->TabIndex = 21;
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(244, 219);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(280, 32);
			this->tbPassword->TabIndex = 20;
			// 
			// tbAddress
			// 
			this->tbAddress->Location = System::Drawing::Point(244, 169);
			this->tbAddress->Name = L"tbAddress";
			this->tbAddress->Size = System::Drawing::Size(280, 32);
			this->tbAddress->TabIndex = 19;
			// 
			// tbPhone
			// 
			this->tbPhone->Location = System::Drawing::Point(244, 119);
			this->tbPhone->Name = L"tbPhone";
			this->tbPhone->Size = System::Drawing::Size(280, 32);
			this->tbPhone->TabIndex = 18;
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(244, 69);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(280, 32);
			this->tbEmail->TabIndex = 17;
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(244, 22);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(280, 32);
			this->tbName->TabIndex = 16;
			this->tbName->TextChanged += gcnew System::EventHandler(this, &RegisterForm::tbName_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14));
			this->label1->Location = System::Drawing::Point(14, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 33);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Name";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label8);
			this->panel1->Location = System::Drawing::Point(1, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(977, 74);
			this->panel1->TabIndex = 13;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::CornflowerBlue;
			this->label8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe Print", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label8->Location = System::Drawing::Point(0, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(977, 74);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Register Your Account";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(978, 614);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel4);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"RegisterForm";
			this->Text = L"RegisterForm";
			this->Load += gcnew System::EventHandler(this, &RegisterForm::RegisterForm_Load);
			this->panel4->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	public: bool switchToLogin = false;
	private: System::Void linkLoginBtn_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		switchToLogin = true;
		this->Close();
	}
	public: User^ user = nullptr;
	private: System::Void btnOK_Click_1(System::Object^ sender, System::EventArgs^ e) {

		String^ name = tbName->Text;
		String^ email = tbEmail->Text;
		String^ phone = tbPhone->Text;
		String^ address = tbAddress->Text;
		String^ Password = tbPassword->Text;
		String^ confirmPassword = tbConfirmPassword->Text;

		if (name->Length == 0 || email->Length == 0 ||
			phone->Length == 0 || address->Length == 0 ||
			Password->Length == 0) {
			MessageBox::Show("Please enter all the fields",
				"One or more empty fields", MessageBoxButtons::OK);
			return;
		}
		if (String::Compare(Password, confirmPassword) != 0)
		{
			MessageBox::Show("Password and Confirm Password do not match", "Password Error", MessageBoxButtons::OK);
			return;
		}
		try {
			String^ connString = "Data Source=DESKTOP-FHNM1MD;Initial Catalog=ElectricityPlanner;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();
			String^ sqlQuery = "INSERT INTO Users " +
				"(Name, Email, Phone, Address, Password) VALUES " +
				"(@Name, @Email, @Phone, @Address, @Password);";


			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@phone", phone);
			command.Parameters->AddWithValue("@address", address);
			command.Parameters->AddWithValue("@Password", Password);


			command.ExecuteReader();

			user = gcnew User;
			user->name = name;
			user->email = email;
			user->phone = phone;
			user->address = address;
			user->Password = Password;
			this->Close();
		}


		catch (Exception^ e)
		{
			MessageBox::Show("Failed to connect to Database: " + e->Message, "Database Connection Error", MessageBoxButtons::OK);
		}



	}
private: System::Void RegisterForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
