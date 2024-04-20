#pragma once
#include <string>

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class ResultPage : public System::Windows::Forms::Form
	{
	public:
		ResultPage(void)
		{
			InitializeComponent();
		}
		// constructor to bring over the two sort times as well as the number of citations (cars) that match all the attributes
		ResultPage(double^ mergeTime, double^ quickTime, double^ numCitations)
		{
			InitializeComponent();
			this->mergeTime = mergeTime;
			this->quickTime = quickTime;
			this->numCitations = numCitations;
			UpdateTimesandCitationCount();
		}

	protected:
		
		~ResultPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ NumCitationsLabel;
	private: System::Windows::Forms::Label^ MergeTimeLabel;
	private: System::Windows::Forms::Label^ QuickTimeLabel;
	private: System::Windows::Forms::Label^ LoginMessagePanel;
	private: System::Windows::Forms::Button^ CloseApplicationButton;
	private: System::Windows::Forms::Panel^ ResultPanel;
	private: System::Windows::Forms::Panel^ ClosePanel;
	private:
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
	void InitializeComponent(void)
	{
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ResultPage::typeid));
		this->NumCitationsLabel = (gcnew System::Windows::Forms::Label());
		this->MergeTimeLabel = (gcnew System::Windows::Forms::Label());
		this->QuickTimeLabel = (gcnew System::Windows::Forms::Label());
		this->LoginMessagePanel = (gcnew System::Windows::Forms::Label());
		this->CloseApplicationButton = (gcnew System::Windows::Forms::Button());
		this->ResultPanel = (gcnew System::Windows::Forms::Panel());
		this->ClosePanel = (gcnew System::Windows::Forms::Panel());
		this->ResultPanel->SuspendLayout();
		this->ClosePanel->SuspendLayout();
		this->SuspendLayout();
		// 
		// NumCitationsLabel
		// 
		this->NumCitationsLabel->AutoSize = true;
		this->NumCitationsLabel->BackColor = System::Drawing::Color::Transparent;
		this->NumCitationsLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F));
		this->NumCitationsLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
		this->NumCitationsLabel->Location = System::Drawing::Point(9, 11);
		this->NumCitationsLabel->Name = L"NumCitationsLabel";
		this->NumCitationsLabel->Size = System::Drawing::Size(842, 38);
		this->NumCitationsLabel->TabIndex = 2;
		this->NumCitationsLabel->Text = L"The number of citations that match your search are: numCitations!;";
		// 
		// MergeTimeLabel
		// 
		this->MergeTimeLabel->AutoSize = true;
		this->MergeTimeLabel->BackColor = System::Drawing::Color::Transparent;
		this->MergeTimeLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.2F));
		this->MergeTimeLabel->ForeColor = System::Drawing::SystemColors::ButtonShadow;
		this->MergeTimeLabel->Location = System::Drawing::Point(11, 52);
		this->MergeTimeLabel->Name = L"MergeTimeLabel";
		this->MergeTimeLabel->Size = System::Drawing::Size(172, 30);
		this->MergeTimeLabel->TabIndex = 3;
		this->MergeTimeLabel->Text = L"Merge Sort Time:";
		// 
		// QuickTimeLabel
		// 
		this->QuickTimeLabel->AutoSize = true;
		this->QuickTimeLabel->BackColor = System::Drawing::Color::Transparent;
		this->QuickTimeLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.2F));
		this->QuickTimeLabel->ForeColor = System::Drawing::SystemColors::AppWorkspace;
		this->QuickTimeLabel->Location = System::Drawing::Point(11, 95);
		this->QuickTimeLabel->Name = L"QuickTimeLabel";
		this->QuickTimeLabel->Size = System::Drawing::Size(165, 30);
		this->QuickTimeLabel->TabIndex = 4;
		this->QuickTimeLabel->Text = L"Quick Sort Time:";
		// 
		// LoginMessagePanel
		// 
		this->LoginMessagePanel->AutoSize = true;
		this->LoginMessagePanel->BackColor = System::Drawing::Color::Transparent;
		this->LoginMessagePanel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.2F));
		this->LoginMessagePanel->ForeColor = System::Drawing::SystemColors::ButtonFace;
		this->LoginMessagePanel->Location = System::Drawing::Point(5, 16);
		this->LoginMessagePanel->Name = L"LoginMessagePanel";
		this->LoginMessagePanel->Size = System::Drawing::Size(520, 46);
		this->LoginMessagePanel->TabIndex = 5;
		this->LoginMessagePanel->Text = L"Thank you for choosing CiteSeek!";
		// 
		// CloseApplicationButton
		// 
		this->CloseApplicationButton->BackColor = System::Drawing::Color::SlateGray;
		this->CloseApplicationButton->Cursor = System::Windows::Forms::Cursors::Hand;
		this->CloseApplicationButton->FlatAppearance->BorderSize = 0;
		this->CloseApplicationButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->CloseApplicationButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F));
		this->CloseApplicationButton->ForeColor = System::Drawing::Color::White;
		this->CloseApplicationButton->Location = System::Drawing::Point(149, 77);
		this->CloseApplicationButton->Name = L"CloseApplicationButton";
		this->CloseApplicationButton->Size = System::Drawing::Size(248, 46);
		this->CloseApplicationButton->TabIndex = 54;
		this->CloseApplicationButton->Text = L"Close Application";
		this->CloseApplicationButton->UseVisualStyleBackColor = false;
		this->CloseApplicationButton->Click += gcnew System::EventHandler(this, &ResultPage::CloseApplicationButton_Click);
		// 
		// ResultPanel
		// 
		this->ResultPanel->BackColor = System::Drawing::Color::SteelBlue;
		this->ResultPanel->Controls->Add(this->NumCitationsLabel);
		this->ResultPanel->Controls->Add(this->MergeTimeLabel);
		this->ResultPanel->Controls->Add(this->QuickTimeLabel);
		this->ResultPanel->Location = System::Drawing::Point(35, 46);
		this->ResultPanel->Name = L"ResultPanel";
		this->ResultPanel->Size = System::Drawing::Size(850, 149);
		this->ResultPanel->TabIndex = 55;
		// 
		// ClosePanel
		// 
		this->ClosePanel->BackColor = System::Drawing::Color::SteelBlue;
		this->ClosePanel->Controls->Add(this->CloseApplicationButton);
		this->ClosePanel->Controls->Add(this->LoginMessagePanel);
		this->ClosePanel->Location = System::Drawing::Point(685, 465);
		this->ClosePanel->Name = L"ClosePanel";
		this->ClosePanel->Size = System::Drawing::Size(546, 144);
		this->ClosePanel->TabIndex = 56;
		// 
		// ResultPage
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
		this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		this->ClientSize = System::Drawing::Size(1262, 673);
		this->Controls->Add(this->ResultPanel);
		this->Controls->Add(this->ClosePanel);
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
		this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
		this->MaximizeBox = false;
		this->Name = L"ResultPage";
		this->Text = L"CiteSeek";
		this->ResultPanel->ResumeLayout(false);
		this->ResultPanel->PerformLayout();
		this->ClosePanel->ResumeLayout(false);
		this->ClosePanel->PerformLayout();
		this->ResumeLayout(false);

	}
#pragma endregion
// VARIABLES I DECLARED -------------------------------------------------------------------------------------------------------
	// FOR TEAMMATES: These are the variables we are working with.
	double^ mergeTime = 1.0; // This is the time taken to complete ALL merge sorts, 1.0 is a filler value
	double^ quickTime = 1.0; // This is the time taken to complete ALL quick sorts, 1.0 is a filler value
	double^ numCitations = 1.0; // This is the finalCitations.size() (or for Winforms its .count() for a List object) I was talking about before, 1 is a filler value

	// These conversions are needed because .NET objects use different handles than regular C++, so a bit more complicated to do easy conversions
	// Convert double and int handles to native types, 
	double mergeTimeValue = *mergeTime;
	double quickTimeValue = *quickTime;
	double numCitationsValue = *numCitations;

	// Convert native types to strings
	System::String^ mergeTimeString = mergeTimeValue.ToString();
	System::String^ quickTimeString = quickTimeValue.ToString();
	System::String^ numCitationsString = numCitationsValue.ToString();
// FUNCTIONS I WROTE ----------------------------------------------------------------------------------------------------------
	void UpdateTimesandCitationCount()
	{
		this->NumCitationsLabel->Text = "The number of citations that match your search are: " + numCitationsString + "!";
		if (mergeTimeValue == 1.0) {
			this->MergeTimeLabel->Text = "Merge Sort Time: " + mergeTimeString + " second";
		}
		else {
			this->MergeTimeLabel->Text = "Merge Sort Time: " + mergeTimeString + " seconds";
		}
		if (quickTimeValue == 1.0) {
			this->QuickTimeLabel->Text = "Quick Sort Time: " + quickTimeString + " second";
		}
		else {
			this->QuickTimeLabel->Text = "Quick Sort Time: " + quickTimeString + " seconds";
		}		
	}
private: System::Void CloseApplicationButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close(); // Close the result page
}
};
}
