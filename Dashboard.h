#pragma once
#include"User.h"
#include "appliencesForm.h"
#include"inputForm.h"

namespace ElectricApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;


	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{
	

	public:
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	public:
		String^ eMail;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button2;
	public:
		String^ Pass;
		Dashboard(String ^ e,String ^P)
		{
			eMail = e;
			Pass = P;
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
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ btnDataInput;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel5;





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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btnDataInput = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(652, 45);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(652, 45);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to DashBoard";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 45);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(133, 354);
			this->panel2->TabIndex = 1;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->button1);
			this->panel4->Location = System::Drawing::Point(2, 220);
			this->panel4->Margin = System::Windows::Forms::Padding(2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(133, 65);
			this->panel4->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::Teal;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Location = System::Drawing::Point(-2, 3);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 65);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Generate";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Dashboard::button1_Click_1);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->btnDataInput);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel3->Location = System::Drawing::Point(0, 289);
			this->panel3->Margin = System::Windows::Forms::Padding(2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(133, 65);
			this->panel3->TabIndex = 0;
			// 
			// btnDataInput
			// 
			this->btnDataInput->BackColor = System::Drawing::Color::ForestGreen;
			this->btnDataInput->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnDataInput->Font = (gcnew System::Drawing::Font(L"Segoe Print", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDataInput->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->btnDataInput->Location = System::Drawing::Point(0, 0);
			this->btnDataInput->Margin = System::Windows::Forms::Padding(2);
			this->btnDataInput->Name = L"btnDataInput";
			this->btnDataInput->Size = System::Drawing::Size(133, 65);
			this->btnDataInput->TabIndex = 0;
			this->btnDataInput->Text = L"Input";
			this->btnDataInput->UseVisualStyleBackColor = false;
			this->btnDataInput->Click += gcnew System::EventHandler(this, &Dashboard::btnDataInput_Click);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->chart1);
			this->panel5->Location = System::Drawing::Point(172, 60);
			this->panel5->Margin = System::Windows::Forms::Padding(2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(442, 294);
			this->panel5->TabIndex = 2;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(0, 0);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(437, 291);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &Dashboard::chart1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(172, 357);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(437, 30);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Comparison";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Dashboard::button2_Click);
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(652, 399);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Dashboard";
			this->Text = L"Dashboard";
			this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		
		ElectricApp::inputForm^ teacherForm = gcnew ElectricApp::inputForm(eMail, Pass);
		this->Hide();
		teacherForm->ShowDialog();
		this->Close();
	}
	private: System::Void Dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnDataInput_Click(System::Object^ sender, System::EventArgs^ e) {
	// Pass data to Teacher constructor and show the form
	ElectricApp::appliencesForm^ teacherForm = gcnew ElectricApp::appliencesForm(eMail,Pass);
	this->Hide();
	teacherForm->ShowDialog();
	this->Close();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
//private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
//	// Connection string
//	String^ connString = "Data Source=DESKTOP-FHNM1MD;Initial Catalog=ElectricityPlanner;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
//
//	try {
//		// SQL query to retrieve the current and expected bills
//		String^ query = "SELECT CurrentBill, ExpectedBill FROM InputForm WHERE Email = @Email AND Password = @Password";
//
//		// Establish connection
//		SqlConnection^ conn = gcnew SqlConnection(connString);
//		SqlCommand^ cmd = gcnew SqlCommand(query, conn);
//		cmd->Parameters->AddWithValue("@Email", eMail);
//		cmd->Parameters->AddWithValue("@Password", Pass);
//
//		// Open connection
//		conn->Open();
//
//		// Execute query
//		SqlDataReader^ reader = cmd->ExecuteReader();
//
//		if (reader->Read()) {
//			// Retrieve the current and expected bills
//			double currentBill = reader->GetDouble(0);
//			double expectedBill = reader->GetDouble(1);
//
//			// Close the reader
//			reader->Close();
//
//			// Display the comparison in a message box or update the chart/UI
//			String^ message = "Your current bill is: " + currentBill.ToString("C2") +
//				"\nExpected bill is: " + expectedBill.ToString("C2") +
//				"\nDifference: " + (currentBill - expectedBill).ToString("C2");
//
//			MessageBox::Show(message, "Bill Comparison", MessageBoxButtons::OK, MessageBoxIcon::Information);
//		}
//		else {
//			MessageBox::Show("No data found for the specified email and password.",
//				"Comparison", MessageBoxButtons::OK, MessageBoxIcon::Warning);
//		}
//
//		// Close connection
//		conn->Close();
//	}
//	catch (Exception^ ex) {
//		MessageBox::Show("Error: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
//	}
//}



	   //
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Connection string
	String^ connString = "Data Source=DESKTOP-FHNM1MD;Initial Catalog=ElectricityPlanner;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";

	try {
		// SQL query to retrieve the last 12 current bills
		String^ query = "SELECT TOP 12 CurrentBill FROM InputForm WHERE Email = @Email AND Password = @Password ORDER BY InputID DESC";

		// Establish connection
		SqlConnection^ conn = gcnew SqlConnection(connString);
		SqlCommand^ cmd = gcnew SqlCommand(query, conn);
		cmd->Parameters->AddWithValue("@Email", eMail);
		cmd->Parameters->AddWithValue("@Password", Pass);

		// Open connection
		conn->Open();

		// Execute query
		SqlDataReader^ reader = cmd->ExecuteReader();

		// Clear previous chart data
		this->chart1->Series["Series1"]->Points->Clear();

		// Populate chart with the retrieved data
		int index = 1; // To number the data points
		while (reader->Read()) {
			double currentBill = reader->GetDouble(0); // Get the current bill value
			this->chart1->Series["Series1"]->Points->AddXY("M-" + index, currentBill); // Add to chart
			index++;
		}

		// Close the reader and connection
		reader->Close();
		conn->Close();

		if (index == 1) {
			// If no data was retrieved, show a message
			MessageBox::Show("No records found for the last 12 bills.", "Update", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

	   //
private: System::Void chart1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}