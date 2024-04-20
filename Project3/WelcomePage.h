#pragma once
#include "MainPage.h"
#include <msclr\marshal_cppstd.h>
#include <string>

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace msclr::interop;

	public ref class WelcomePage : public System::Windows::Forms::Form
	{
	public:
		WelcomePage(void)
		{
			InitializeComponent();
			// read in and store csv file
			ParkingCitations obj1;
	    		obj1.readFile();
		}

	protected:
		~WelcomePage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ WelcomePanel;
	private: System::Windows::Forms::Panel^ WelcomePanelRight;
	private: System::Windows::Forms::Panel^ WelcomePanelLeft;
	private: System::Windows::Forms::Label^ AboutTitle;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ AboutText;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ LoginMessagePanel;
	private: System::Windows::Forms::Panel^ NameBackgroundPanel;
	private: System::Windows::Forms::TextBox^ NameTextBox;
	private: System::Windows::Forms::Button^ LoginConfirmButton;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::LinkLabel^ MergeSortLink;
	private: System::Windows::Forms::LinkLabel^ QuickSortLink;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(WelcomePage::typeid));
			this->WelcomePanel = (gcnew System::Windows::Forms::Label());
			this->WelcomePanelRight = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->QuickSortLink = (gcnew System::Windows::Forms::LinkLabel());
			this->MergeSortLink = (gcnew System::Windows::Forms::LinkLabel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->LoginConfirmButton = (gcnew System::Windows::Forms::Button());
			this->NameBackgroundPanel = (gcnew System::Windows::Forms::Panel());
			this->NameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->LoginMessagePanel = (gcnew System::Windows::Forms::Label());
			this->WelcomePanelLeft = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->AboutText = (gcnew System::Windows::Forms::Label());
			this->AboutTitle = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->WelcomePanelRight->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->NameBackgroundPanel->SuspendLayout();
			this->WelcomePanelLeft->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// WelcomePanel
			// 
			this->WelcomePanel->AutoSize = true;
			this->WelcomePanel->BackColor = System::Drawing::Color::Transparent;
			this->WelcomePanel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 40.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->WelcomePanel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->WelcomePanel->Location = System::Drawing::Point(96, 21);
			this->WelcomePanel->Name = L"WelcomePanel";
			this->WelcomePanel->Size = System::Drawing::Size(683, 89);
			this->WelcomePanel->TabIndex = 0;
			this->WelcomePanel->Text = L"Welcome to CiteSeek!";
			this->WelcomePanel->Click += gcnew System::EventHandler(this, &WelcomePage::otherClick);
			// 
			// WelcomePanelRight
			// 
			this->WelcomePanelRight->BackColor = System::Drawing::SystemColors::Control;
			this->WelcomePanelRight->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"WelcomePanelRight.BackgroundImage")));
			this->WelcomePanelRight->Controls->Add(this->label6);
			this->WelcomePanelRight->Controls->Add(this->label5);
			this->WelcomePanelRight->Controls->Add(this->label4);
			this->WelcomePanelRight->Controls->Add(this->QuickSortLink);
			this->WelcomePanelRight->Controls->Add(this->MergeSortLink);
			this->WelcomePanelRight->Controls->Add(this->label3);
			this->WelcomePanelRight->Controls->Add(this->pictureBox1);
			this->WelcomePanelRight->Controls->Add(this->LoginConfirmButton);
			this->WelcomePanelRight->Controls->Add(this->NameBackgroundPanel);
			this->WelcomePanelRight->Controls->Add(this->LoginMessagePanel);
			this->WelcomePanelRight->Controls->Add(this->WelcomePanel);
			this->WelcomePanelRight->Location = System::Drawing::Point(391, 0);
			this->WelcomePanelRight->Name = L"WelcomePanelRight";
			this->WelcomePanelRight->Size = System::Drawing::Size(875, 681);
			this->WelcomePanelRight->TabIndex = 1;
			this->WelcomePanelRight->Click += gcnew System::EventHandler(this, &WelcomePage::otherClick);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.2F));
			this->label5->ForeColor = System::Drawing::Color::Silver;
			this->label5->Location = System::Drawing::Point(256, 645);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(355, 19);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Links provided are from: https://www.geeksforgeeks.org/";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.2F));
			this->label4->ForeColor = System::Drawing::Color::Silver;
			this->label4->Location = System::Drawing::Point(235, 617);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(401, 19);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Created by Nicholas Gionti, Matthew Davis, and Matthew Dong.";
			// 
			// QuickSortLink
			// 
			this->QuickSortLink->ActiveLinkColor = System::Drawing::Color::Indigo;
			this->QuickSortLink->AutoSize = true;
			this->QuickSortLink->BackColor = System::Drawing::Color::Transparent;
			this->QuickSortLink->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.8F));
			this->QuickSortLink->LinkColor = System::Drawing::Color::GhostWhite;
			this->QuickSortLink->Location = System::Drawing::Point(483, 400);
			this->QuickSortLink->Name = L"QuickSortLink";
			this->QuickSortLink->Size = System::Drawing::Size(89, 23);
			this->QuickSortLink->TabIndex = 7;
			this->QuickSortLink->TabStop = true;
			this->QuickSortLink->Text = L"Quick Sort";
			this->QuickSortLink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &WelcomePage::QuickSortLink_LinkClicked);
			// 
			// MergeSortLink
			// 
			this->MergeSortLink->ActiveLinkColor = System::Drawing::Color::Indigo;
			this->MergeSortLink->AutoSize = true;
			this->MergeSortLink->BackColor = System::Drawing::Color::Transparent;
			this->MergeSortLink->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.8F));
			this->MergeSortLink->LinkColor = System::Drawing::Color::GhostWhite;
			this->MergeSortLink->Location = System::Drawing::Point(320, 400);
			this->MergeSortLink->Name = L"MergeSortLink";
			this->MergeSortLink->Size = System::Drawing::Size(95, 23);
			this->MergeSortLink->TabIndex = 6;
			this->MergeSortLink->TabStop = true;
			this->MergeSortLink->Text = L"Merge Sort";
			this->MergeSortLink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &WelcomePage::MergeSortLink_LinkClicked);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
			this->label3->ForeColor = System::Drawing::Color::Silver;
			this->label3->Location = System::Drawing::Point(256, 361);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(376, 23);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Need a refresher on merge sort and quick sort\? ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(716, 579);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(143, 82);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// LoginConfirmButton
			// 
			this->LoginConfirmButton->BackColor = System::Drawing::Color::SlateGray;
			this->LoginConfirmButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->LoginConfirmButton->FlatAppearance->BorderSize = 0;
			this->LoginConfirmButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LoginConfirmButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F));
			this->LoginConfirmButton->ForeColor = System::Drawing::Color::White;
			this->LoginConfirmButton->Location = System::Drawing::Point(324, 297);
			this->LoginConfirmButton->Name = L"LoginConfirmButton";
			this->LoginConfirmButton->Size = System::Drawing::Size(248, 46);
			this->LoginConfirmButton->TabIndex = 1;
			this->LoginConfirmButton->Text = L"Confirm";
			this->LoginConfirmButton->UseVisualStyleBackColor = false;
			this->LoginConfirmButton->Click += gcnew System::EventHandler(this, &WelcomePage::LoginConfirmButton_Click);
			// 
			// NameBackgroundPanel
			// 
			this->NameBackgroundPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->NameBackgroundPanel->Controls->Add(this->NameTextBox);
			this->NameBackgroundPanel->Location = System::Drawing::Point(217, 196);
			this->NameBackgroundPanel->Name = L"NameBackgroundPanel";
			this->NameBackgroundPanel->Size = System::Drawing::Size(448, 80);
			this->NameBackgroundPanel->TabIndex = 3;
			// 
			// NameTextBox
			// 
			this->NameTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->NameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->NameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->NameTextBox->ForeColor = System::Drawing::Color::White;
			this->NameTextBox->Location = System::Drawing::Point(22, 25);
			this->NameTextBox->MaxLength = 20;
			this->NameTextBox->Name = L"NameTextBox";
			this->NameTextBox->Size = System::Drawing::Size(405, 27);
			this->NameTextBox->TabIndex = 0;
			this->NameTextBox->Text = L"Name";
			this->NameTextBox->Click += gcnew System::EventHandler(this, &WelcomePage::NameTextBox_Click);
			// 
			// LoginMessagePanel
			// 
			this->LoginMessagePanel->AutoSize = true;
			this->LoginMessagePanel->BackColor = System::Drawing::Color::Transparent;
			this->LoginMessagePanel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.2F));
			this->LoginMessagePanel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->LoginMessagePanel->Location = System::Drawing::Point(150, 133);
			this->LoginMessagePanel->Name = L"LoginMessagePanel";
			this->LoginMessagePanel->Size = System::Drawing::Size(563, 46);
			this->LoginMessagePanel->TabIndex = 1;
			this->LoginMessagePanel->Text = L"Enter your name to begin searching!";
			this->LoginMessagePanel->Click += gcnew System::EventHandler(this, &WelcomePage::otherClick);
			// 
			// WelcomePanelLeft
			// 
			this->WelcomePanelLeft->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"WelcomePanelLeft.BackgroundImage")));
			this->WelcomePanelLeft->Controls->Add(this->label2);
			this->WelcomePanelLeft->Controls->Add(this->label1);
			this->WelcomePanelLeft->Controls->Add(this->panel3);
			this->WelcomePanelLeft->Controls->Add(this->AboutTitle);
			this->WelcomePanelLeft->Location = System::Drawing::Point(0, 0);
			this->WelcomePanelLeft->Name = L"WelcomePanelLeft";
			this->WelcomePanelLeft->Size = System::Drawing::Size(392, 678);
			this->WelcomePanelLeft->TabIndex = 2;
			this->WelcomePanelLeft->Click += gcnew System::EventHandler(this, &WelcomePage::otherClick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(70, 188);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(235, 39);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Technologies";
			this->label2->Click += gcnew System::EventHandler(this, &WelcomePage::otherClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 51, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(70, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(246, 96);
			this->label1->TabIndex = 3;
			this->label1->Text = L"MNM";
			this->label1->Click += gcnew System::EventHandler(this, &WelcomePage::otherClick);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->Controls->Add(this->AboutText);
			this->panel3->ForeColor = System::Drawing::Color::Transparent;
			this->panel3->Location = System::Drawing::Point(37, 396);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(304, 217);
			this->panel3->TabIndex = 2;
			// 
			// AboutText
			// 
			this->AboutText->BackColor = System::Drawing::Color::Transparent;
			this->AboutText->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AboutText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
			this->AboutText->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->AboutText->Location = System::Drawing::Point(0, 0);
			this->AboutText->Name = L"AboutText";
			this->AboutText->Size = System::Drawing::Size(304, 217);
			this->AboutText->TabIndex = 2;
			this->AboutText->Text = L"This application utilizes merge sort and quick sort in order to find vehicles tha"
				L"t have been given parking citations.";
			this->AboutText->Click += gcnew System::EventHandler(this, &WelcomePage::otherClick);
			// 
			// AboutTitle
			// 
			this->AboutTitle->AutoSize = true;
			this->AboutTitle->BackColor = System::Drawing::Color::Transparent;
			this->AboutTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.2F));
			this->AboutTitle->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->AboutTitle->Location = System::Drawing::Point(33, 317);
			this->AboutTitle->Name = L"AboutTitle";
			this->AboutTitle->Size = System::Drawing::Size(319, 46);
			this->AboutTitle->TabIndex = 1;
			this->AboutTitle->Text = L"About This Program";
			this->AboutTitle->Click += gcnew System::EventHandler(this, &WelcomePage::otherClick);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 6.2F));
			this->label6->ForeColor = System::Drawing::Color::Yellow;
			this->label6->Location = System::Drawing::Point(300, 441);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(291, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Note: These links will take you to your default browser.";
			// 
			// WelcomePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->WelcomePanelLeft);
			this->Controls->Add(this->WelcomePanelRight);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"WelcomePage";
			this->Text = L"CiteSeek";
			this->Load += gcnew System::EventHandler(this, &WelcomePage::WelcomePage_Load);
			this->WelcomePanelRight->ResumeLayout(false);
			this->WelcomePanelRight->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->NameBackgroundPanel->ResumeLayout(false);
			this->NameBackgroundPanel->PerformLayout();
			this->WelcomePanelLeft->ResumeLayout(false);
			this->WelcomePanelLeft->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

		// VARIABLES I DECLARED -------------------------------------------------------------------------------------------------------
				// FOR MATTHEW DONG: create a vector<Citations> that stores the initial list/vector of Citations, then modify the paramaterized constructor for MainPage. 
				// Follow the example of how String^ name is carried over
				// Also I think this UI absolutely hates non-modified types so you may need to adjust your code to work with List, a .NET storage container that works basically the same way
				// List<String^>^ newList = gcnew List<String^>(); is how you declare a new .NET List
				// here is the documentation: https://learn.microsoft.com/en-us/dotnet/api/system.collections.generic.list-1?view=net-8.0


		// FUNCTIONS I WROTE ----------------------------------------------------------------------------------------------------------
	private: System::Void WelcomePage_Load(System::Object^ sender, System::EventArgs^ e) {
		// Add event handler for name text
		NameTextBox->KeyDown += gcnew KeyEventHandler(this, &WelcomePage::NameTextBox_KeyDown);
	}

		   // "Name" placeholder becomes just empty space for the user to type into
	private: System::Void NameTextBox_Click(System::Object^ sender, System::EventArgs^ e) {
		if (NameTextBox->Text == "Name") {
			NameTextBox->Text = "";
		}
	}

		   // if user clicks outside of the text box, return text to name
	private: System::Void otherClick(System::Object^ sender, System::EventArgs^ e) {
		if (NameTextBox->Text == "") {
			NameTextBox->Text = "Name";
		}
	}
		   // Event handler for closing this page
	private: System::Void MainPage_FormClosed(System::Object^ sender, FormClosedEventArgs^ e) {
		this->Close(); // Close the welcome page when the main page is opened
	}

		   // LOGIN BUTTON + NameTextBox (button that says "Confirm") -------------------------------------------------------------------
	private: System::Void ConfirmLogin() {
		if (NameTextBox->Text == "") {
			NameTextBox->Text = "Name";
		}
		if (NameTextBox->Text == "Name") {
			MessageBox::Show("Please enter your name!", "No Name Selected");
			return;
		}
		this->Hide();
		MainPage^ mainPage = gcnew MainPage(NameTextBox->Text);
		mainPage->FormClosed += gcnew FormClosedEventHandler(this, &WelcomePage::MainPage_FormClosed);
		mainPage->ShowDialog();
	}

		   // allows for user to use "confirm" button to confirm name
	private: System::Void LoginConfirmButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ConfirmLogin();
	}
		   // event handler for the name text box
	private: System::Void NameTextBox_KeyDown(System::Object^ sender, KeyEventArgs^ e) {
		// allows for user to use "enter" to confirm name
		if (e->KeyCode == Keys::Enter) {
			ConfirmLogin();
		}
	}
		   // --------------------------------------------------------------------------------------------------

		   // MERGE SORT AND QUICK SORT LINKS --------------------------------------------------------------------------------------------------

	private: System::Void MergeSortLink_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		System::Diagnostics::Process::Start("https://www.geeksforgeeks.org/merge-sort/");
	}
	private: System::Void QuickSortLink_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		System::Diagnostics::Process::Start("https://www.geeksforgeeks.org/quick-sort/");
	}
		   // ---------------------------------------------------------------------------------------------------------------------------------

		   // FOR MATTHEW DONG: Here is where you can add your parsing function. again you may need to adjust your code to a Link .NET structure instead of a vector. 
		   //here is the documentation again: https://learn.microsoft.com/en-us/dotnet/api/system.collections.generic.list-1?view=net-8.0

	};
}
