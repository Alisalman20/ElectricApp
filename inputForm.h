#pragma once

namespace ElectricApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for inputForm
	/// </summary>
	public ref class inputForm : public System::Windows::Forms::Form
	{
	public:
		String^ eMail;
		String^ Pass;
			
		inputForm(String^ e, String^ P)
		{
			eMail = e;
			Pass = P;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~inputForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ tbArea;

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbUnitRate;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbExpectedBill;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbCurrentBill;










	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label8;


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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tbUnitRate = (gcnew System::Windows::Forms::TextBox());
			this->tbExpectedBill = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbArea = (gcnew System::Windows::Forms::TextBox());
			this->tbCurrentBill = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(121, 152);
			this->panel1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(749, 412);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &inputForm::panel1_Paint);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::Control;
			this->label7->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Gray;
			this->label7->Location = System::Drawing::Point(227, 355);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(197, 12);
			this->label7->TabIndex = 12;
			this->label7->Text = L"To add new appliances enter next";
			this->label7->Click += gcnew System::EventHandler(this, &inputForm::label7_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(545, 331);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 60);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Next";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &inputForm::button1_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->tbUnitRate);
			this->panel2->Controls->Add(this->tbExpectedBill);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->tbArea);
			this->panel2->Controls->Add(this->tbCurrentBill);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(39, 62);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(656, 253);
			this->panel2->TabIndex = 8;
			// 
			// tbUnitRate
			// 
			this->tbUnitRate->Location = System::Drawing::Point(226, 80);
			this->tbUnitRate->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->tbUnitRate->Name = L"tbUnitRate";
			this->tbUnitRate->Size = System::Drawing::Size(425, 26);
			this->tbUnitRate->TabIndex = 3;
			// 
			// tbExpectedBill
			// 
			this->tbExpectedBill->Location = System::Drawing::Point(226, 200);
			this->tbExpectedBill->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->tbExpectedBill->Name = L"tbExpectedBill";
			this->tbExpectedBill->Size = System::Drawing::Size(425, 26);
			this->tbExpectedBill->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(5, 15);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Area";
			this->label1->Click += gcnew System::EventHandler(this, &inputForm::label1_Click_1);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(7, 191);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(140, 33);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Expected Bill";
			this->label4->Click += gcnew System::EventHandler(this, &inputForm::label4_Click);
			// 
			// tbArea
			// 
			this->tbArea->Location = System::Drawing::Point(226, 19);
			this->tbArea->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->tbArea->Name = L"tbArea";
			this->tbArea->Size = System::Drawing::Size(425, 26);
			this->tbArea->TabIndex = 1;
			this->tbArea->TextChanged += gcnew System::EventHandler(this, &inputForm::textBox1_TextChanged);
			// 
			// tbCurrentBill
			// 
			this->tbCurrentBill->Location = System::Drawing::Point(226, 143);
			this->tbCurrentBill->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->tbCurrentBill->Name = L"tbCurrentBill";
			this->tbCurrentBill->Size = System::Drawing::Size(425, 26);
			this->tbCurrentBill->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(3, 76);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 33);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Unit Rate";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(5, 135);
			this->label3->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(130, 33);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Current Bill";
			this->label3->Click += gcnew System::EventHandler(this, &inputForm::label3_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label8);
			this->panel3->Location = System::Drawing::Point(2, 4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(976, 76);
			this->panel3->TabIndex = 1;
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
			this->label8->Size = System::Drawing::Size(976, 76);
			this->label8->TabIndex = 3;
			this->label8->Text = L"General Information";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// inputForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(978, 614);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->Name = L"inputForm";
			this->Text = L"inputForm";
			this->Load += gcnew System::EventHandler(this, &inputForm::inputForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void inputForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Get the input values
		String^ area = tbArea->Text;
		String^ unitRate = tbUnitRate->Text;
		String^ currentBill = tbCurrentBill->Text;
		String^ expectedBill = tbExpectedBill->Text;

		// Validate input
		if (String::IsNullOrWhiteSpace(area) || String::IsNullOrWhiteSpace(unitRate) ||
			String::IsNullOrWhiteSpace(currentBill) || String::IsNullOrWhiteSpace(expectedBill)) {
			MessageBox::Show("All fields must be filled.", "Input Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Connection string
		String^ connString = "Data Source=DESKTOP-FHNM1MD;Initial Catalog=ElectricityPlanner;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";

		// SQL query
		String^ sqlQuery = "INSERT INTO InputForm (Area, UnitRate, CurrentBill, ExpectedBill, Email, Password) " +
			"VALUES (@Area, @UnitRate, @CurrentBill, @ExpectedBill, @Email, @Password)";

		try {
			// Establish connection
			SqlConnection^ sqlConn = gcnew SqlConnection(connString);
			sqlConn->Open();

			// Create SQL command
			SqlCommand^ sqlCmd = gcnew SqlCommand(sqlQuery, sqlConn);

			// Add parameters
			sqlCmd->Parameters->AddWithValue("@Area", area);
			sqlCmd->Parameters->AddWithValue("@UnitRate", Convert::ToDouble(unitRate)); // Convert to numeric type
			sqlCmd->Parameters->AddWithValue("@CurrentBill", Convert::ToDouble(currentBill));
			sqlCmd->Parameters->AddWithValue("@ExpectedBill", Convert::ToDouble(expectedBill));
			sqlCmd->Parameters->AddWithValue("@Email", eMail);
			sqlCmd->Parameters->AddWithValue("@Password", Pass);

			// Execute query
			int rowsAffected = sqlCmd->ExecuteNonQuery();

			// Close connection
			sqlConn->Close();

			// Notify the user
			if (rowsAffected > 0) {
				MessageBox::Show("Data successfully inserted!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show("No rows affected. Please check your input.", "Insert Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		catch (Exception^ ex) {
			// Handle errors
			MessageBox::Show("Database error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
