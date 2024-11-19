#pragma once
#include"User.h"
#include"Dashboard.h"

namespace ElectricApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbEmail;

	private: System::Windows::Forms::Label^ Password;
	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::Button^ btnOk;
	private: System::Windows::Forms::Button^ btnCancel;

	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::LinkLabel^ linkRegisterBtn;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label8;


	private: System::ComponentModel::IContainer^ components;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->Password = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->linkRegisterBtn = (gcnew System::Windows::Forms::LinkLabel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(3, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 49);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Email";
			this->label2->Click += gcnew System::EventHandler(this, &LoginForm::label2_Click);
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(228, 35);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(407, 44);
			this->tbEmail->TabIndex = 2;
			// 
			// Password
			// 
			this->Password->AutoSize = true;
			this->Password->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14));
			this->Password->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Password->Location = System::Drawing::Point(3, 92);
			this->Password->Name = L"Password";
			this->Password->Size = System::Drawing::Size(156, 49);
			this->Password->TabIndex = 3;
			this->Password->Text = L"Password";
			this->Password->Click += gcnew System::EventHandler(this, &LoginForm::Password_Click);
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(228, 85);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(407, 44);
			this->tbPassword->TabIndex = 4;
			// 
			// btnOk
			// 
			this->btnOk->BackColor = System::Drawing::Color::CornflowerBlue;
			this->btnOk->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->btnOk->Location = System::Drawing::Point(230, 166);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(164, 62);
			this->btnOk->TabIndex = 5;
			this->btnOk->Text = L"Confirm";
			this->btnOk->UseVisualStyleBackColor = false;
			this->btnOk->Click += gcnew System::EventHandler(this, &LoginForm::btnOk_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::White;
			this->btnCancel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnCancel->Location = System::Drawing::Point(490, 163);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(148, 62);
			this->btnCancel->TabIndex = 6;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &LoginForm::btnCancel_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(432, 117);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(131, 105);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &LoginForm::pictureBox1_Click);
			// 
			// linkRegisterBtn
			// 
			this->linkRegisterBtn->Font = (gcnew System::Drawing::Font(L"SimSun", 9));
			this->linkRegisterBtn->Location = System::Drawing::Point(381, 258);
			this->linkRegisterBtn->Name = L"linkRegisterBtn";
			this->linkRegisterBtn->Size = System::Drawing::Size(132, 29);
			this->linkRegisterBtn->TabIndex = 9;
			this->linkRegisterBtn->TabStop = true;
			this->linkRegisterBtn->Text = L"Register Here";
			this->linkRegisterBtn->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::linkRegisterBtn_LinkClicked);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel2->Controls->Add(this->tbPassword);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->tbEmail);
			this->panel2->Controls->Add(this->Password);
			this->panel2->Controls->Add(this->btnOk);
			this->panel2->Controls->Add(this->linkRegisterBtn);
			this->panel2->Controls->Add(this->btnCancel);
			this->panel2->Location = System::Drawing::Point(173, 238);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(646, 312);
			this->panel2->TabIndex = 10;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label8);
			this->panel1->Location = System::Drawing::Point(2, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(973, 80);
			this->panel1->TabIndex = 12;
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
			this->label8->Size = System::Drawing::Size(973, 80);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Login to Your Account";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(19, 37);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(978, 604);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel2);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		//------------------
	public:User^ user = nullptr;
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Password_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnOk_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ email = this->tbEmail->Text;
		String^ Password = this->tbPassword->Text;

		// Check if the email or Password fields are empty
		if (email->Length == 0 || Password->Length == 0) {
			MessageBox::Show("Please enter email and Password", "Email or Password Empty", MessageBoxButtons::OK);
			return;
		}

		try {
			String^ connString = "Data Source=DESKTOP-FHNM1MD;Initial Catalog=ElectricityPlanner;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();
			String^ sqlQuery = "SELECT * FROM Users WHERE email=@Email AND Password=@Password;";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@Email", email);
			command.Parameters->AddWithValue("@Password", Password);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read())
			{
				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->name = reader->GetString(1);
				user->email = reader->GetString(2);
				user->phone = reader->GetString(3);
				user->address = reader->GetString(4);
				user->Password = reader->GetString(5);
				this->Hide();		
				MessageBox::Show("Login Successfully", "Login", MessageBoxButtons::OK);

				// Pass data to Teacher constructor and show the form
				ElectricApp::Dashboard^ teacherForm = gcnew ElectricApp::Dashboard(email,Password);
				this->Hide();
				teacherForm->ShowDialog();
				this->Close();
			}
			else {
				MessageBox::Show("Email and Password is Wrong");
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Failed to connect to Database: " + e->Message, "Database Connection Error", MessageBoxButtons::OK);
		}




	}
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	public: bool switchToRegister = false;
	private: System::Void linkRegisterBtn_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		switchToRegister = true;
		this->Close();
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
