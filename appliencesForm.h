#pragma once
#include"User.h"

namespace ElectricApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for appliencesForm
	/// </summary>
	public ref class appliencesForm : public System::Windows::Forms::Form
	{
	public:
		String^ eMail;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	public:

		String^ Pass;
		
		appliencesForm(String^ e, String^ P)
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
		~appliencesForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	protected:
	private: System::Windows::Forms::Panel^ panel1;





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ appPriority;

	private: System::Windows::Forms::TextBox^ appName;
	private: System::Windows::Forms::TextBox^ appUnit;






















	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;

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
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->appPriority = (gcnew System::Windows::Forms::TextBox());
			this->appName = (gcnew System::Windows::Forms::TextBox());
			this->appUnit = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->panel1);
			this->panel2->Location = System::Drawing::Point(94, 111);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(777, 115);
			this->panel2->TabIndex = 9;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->appPriority);
			this->panel1->Controls->Add(this->appName);
			this->panel1->Controls->Add(this->appUnit);
			this->panel1->Location = System::Drawing::Point(12, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(747, 66);
			this->panel1->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14));
			this->label1->Location = System::Drawing::Point(5, 11);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Appliance";
			// 
			// appPriority
			// 
			this->appPriority->Location = System::Drawing::Point(623, 15);
			this->appPriority->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->appPriority->Name = L"appPriority";
			this->appPriority->Size = System::Drawing::Size(121, 29);
			this->appPriority->TabIndex = 9;
			// 
			// appName
			// 
			this->appName->Location = System::Drawing::Point(226, 15);
			this->appName->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->appName->Name = L"appName";
			this->appName->Size = System::Drawing::Size(223, 29);
			this->appName->TabIndex = 1;
			this->appName->TextChanged += gcnew System::EventHandler(this, &appliencesForm::textBox1_TextChanged);
			// 
			// appUnit
			// 
			this->appUnit->Location = System::Drawing::Point(475, 15);
			this->appUnit->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->appUnit->Name = L"appUnit";
			this->appUnit->Size = System::Drawing::Size(121, 29);
			this->appUnit->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(94, 243);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(777, 58);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Added";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &appliencesForm::button1_Click);
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->label8);
			this->panel7->Controls->Add(this->label7);
			this->panel7->Controls->Add(this->label6);
			this->panel7->Location = System::Drawing::Point(314, 51);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(539, 54);
			this->panel7->TabIndex = 11;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14, System::Drawing::FontStyle::Bold));
			this->label8->Location = System::Drawing::Point(408, 7);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(89, 33);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Priority";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14, System::Drawing::FontStyle::Bold));
			this->label7->Location = System::Drawing::Point(276, 4);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(57, 33);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Unit";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(61, 4);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 33);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Name";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(94, 312);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(777, 290);
			this->dataGridView1->TabIndex = 12;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &appliencesForm::dataGridView1_CellContentClick);
			// 
			// appliencesForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(978, 614);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel2);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"appliencesForm";
			this->Text = L"appliencesForm";
			this->Load += gcnew System::EventHandler(this, &appliencesForm::appliencesForm_Load);
			this->panel2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (2 == 1 + 1)
		{
			String^ apName = appName->Text;
			String^ apUnit = appUnit->Text;
			String^ apPriority = appPriority->Text;
			// Accessing the email and password from the user object
			String^ email1 = eMail;
			String^ password1 = Pass;

			// Check for empty fields
			if (apName->Length == 0 || apUnit->Length == 0 || apPriority->Length == 0 || email1->Length == 0 || password1->Length == 0) {
				MessageBox::Show("Please enter all the fields", "One or more empty fields", MessageBoxButtons::OK);
				return;
			}

			try {
				// Connection string
				String^ connString = "Data Source=DESKTOP-FHNM1MD;Initial Catalog=ElectricityPlanner;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();



				String^ sqlQuery = "INSERT INTO Appliances (ApplianceName, MonthlyUnitsUsed, Priority, Email, Password) VALUES " +
					"(@ApplianceName, @MonthlyUnitsUsed, @Priority, @Email, @Password);";

				// Prepare the SQL command with parameters
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@ApplianceName", apName);
				command.Parameters->AddWithValue("@MonthlyUnitsUsed", Convert::ToInt32(apUnit));
				command.Parameters->AddWithValue("@Priority", Convert::ToInt32(apPriority));
				command.Parameters->AddWithValue("@Email", email1);
				command.Parameters->AddWithValue("@Password", password1);  // Password should be hashed before insertion

				// Execute the query
				command.ExecuteNonQuery();

				// Show a success message
				MessageBox::Show("Appliance added successfully!", "Success", MessageBoxButtons::OK);

				// Optionally, clear input fields after successful insertion
				appName->Text = "";
				appUnit->Text = "";
				appPriority->Text = "";
			}
			catch (Exception^ e) {
				MessageBox::Show("Failed to connect to Database: " + e->Message, "Database Connection Error", MessageBoxButtons::OK);
			}

		}
		if (1 == 1) {
			String^ email = eMail;  // Assuming the email is stored in the user object
			String^ password = Pass;  // Assuming the password is stored in the user object

			// Query to retrieve appliances matching the email and password
			String^ sqlQuery = "SELECT  ApplianceName, MonthlyUnitsUsed, Priority " +
				"FROM Appliances " +
				"WHERE Email = @Email AND Password = @Password;";

			// SQL connection and command
			try {
				String^ connString = "Data Source=DESKTOP-FHNM1MD;Initial Catalog=ElectricityPlanner;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				// Create SQL command
				SqlCommand^ sqlCommand = gcnew SqlCommand(sqlQuery, % sqlConn);
				sqlCommand->Parameters->AddWithValue("@Email", email);
				sqlCommand->Parameters->AddWithValue("@Password", password);

				// Create SQL data adapter
				SqlDataAdapter^ da = gcnew SqlDataAdapter(sqlCommand);
				DataTable^ table = gcnew DataTable();

				// Fill the DataTable with the result set
				da->Fill(table);

				// Bind the DataTable to the existing DataGridView (dataGridView1)
				dataGridView1->DataSource = table;

				// Optionally, adjust the DataGridView appearance and settings
				dataGridView1->AutoGenerateColumns = true;  // Automatically generate columns based on DataTable schema

			}
			catch (Exception^ e) {
				MessageBox::Show("Database Error: " + e->Message, "Error", MessageBoxButtons::OK);
			}
		}

	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void appliencesForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}
};
}
