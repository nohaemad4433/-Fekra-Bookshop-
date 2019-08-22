#pragma once
//#include "UpDate.h"
#include "Bill.h"
namespace Fekra {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Search
	/// </summary>
	public ref class Search : public System::Windows::Forms::Form
	{
	public:
		Search(void)
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
		~Search()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  Categories;
	private: System::Windows::Forms::Button^  Search1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  Book;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  Author;
	private: System::Windows::Forms::TextBox^  textBox1;


	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  closeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::Windows::Forms::ColumnHeader^  columnHeader8;


	private: System::ComponentModel::IContainer^  components;


	protected: 

	protected: 

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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Search::typeid));
			this->Categories = (gcnew System::Windows::Forms::ComboBox());
			this->Search1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Book = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Author = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Categories
			// 
			this->Categories->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Categories->FormattingEnabled = true;
			this->Categories->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"Religious", L"political", L"Human Development", 
				L"scientific", L"Historical", L"literature and arts"});
			this->Categories->Location = System::Drawing::Point(14, 24);
			this->Categories->Name = L"Categories";
			this->Categories->Size = System::Drawing::Size(272, 27);
			this->Categories->TabIndex = 0;
			this->Categories->Text = L"Categories";
			// 
			// Search1
			// 
			this->Search1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Search1->Location = System::Drawing::Point(757, 24);
			this->Search1->Name = L"Search1";
			this->Search1->Size = System::Drawing::Size(164, 31);
			this->Search1->TabIndex = 1;
			this->Search1->Text = L"Search Category";
			this->Search1->UseVisualStyleBackColor = true;
			this->Search1->Click += gcnew System::EventHandler(this, &Search::Search1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::DarkGray;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(187, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 26);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Author :";
			// 
			// Book
			// 
			this->Book->AutoSize = true;
			this->Book->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Book->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Book->Location = System::Drawing::Point(152, 96);
			this->Book->Name = L"Book";
			this->Book->Size = System::Drawing::Size(128, 24);
			this->Book->TabIndex = 3;
			this->Book->Text = L"Book Name :";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(757, 59);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 30);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Search Author";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Search::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(757, 96);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(164, 28);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Search Book Name";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Search::button2_Click);
			// 
			// Author
			// 
			this->Author->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Author->Location = System::Drawing::Point(374, 59);
			this->Author->Name = L"Author";
			this->Author->Size = System::Drawing::Size(217, 26);
			this->Author->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(374, 96);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(217, 26);
			this->textBox1->TabIndex = 7;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->closeToolStripMenuItem, 
				this->exitToolStripMenuItem});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(109, 48);
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->Size = System::Drawing::Size(108, 22);
			this->closeToolStripMenuItem->Text = L"Close";
			this->closeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Search::closeToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(108, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Search::exitToolStripMenuItem_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(59, 395);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(103, 31);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Clear";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Search::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Snap ITC", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(403, 410);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(188, 73);
			this->button3->TabIndex = 12;
			this->button3->Text = L"BUY";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Search::button3_Click_1);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3, this->columnHeader4, this->columnHeader7, this->columnHeader8});
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(135, 123);
			this->listView1->MultiSelect = false;
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(693, 266);
			this->listView1->TabIndex = 13;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->ItemSelectionChanged += gcnew System::Windows::Forms::ListViewItemSelectionChangedEventHandler(this, &Search::listView1_ItemSelectionChanged);
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &Search::listView1_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Category";
			this->columnHeader1->Width = 135;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Book Name";
			this->columnHeader2->Width = 144;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Author";
			this->columnHeader3->Width = 143;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Date Of Iseu";
			this->columnHeader4->Width = 105;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Page Number";
			this->columnHeader7->Width = 95;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Price";
			// 
			// Search
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(996, 543);
			this->ContextMenuStrip = this->contextMenuStrip1;
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Author);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Book);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Search1);
			this->Controls->Add(this->Categories);
			this->Cursor = System::Windows::Forms::Cursors::PanNW;
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"Search";
			this->Text = L"Search";
			this->Load += gcnew System::EventHandler(this, &Search::Search_Load);
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void Search_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			/* int n = listBox1-> SelectedItems -> Count  ;
		if (n > 0){
			 Bill^ Search =gcnew Bill (); 
			 Search ->ShowDialog(); 
		} */} 

private: System::Void closeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this -> Close () ; 
		 }
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application :: Exit () ; 
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			  StreamReader^ sr=gcnew StreamReader("Books2.txt");
			  int c =0 ;
				while(!sr->EndOfStream)
				{
					c= listView1->Items->Count;
					String^ row=Convert::ToString(sr->ReadLine());
					array<Char>^ splitter={'\t'};
			       	array<String^>^ arr=row->Split(splitter);


				    if(Author->Text==arr[2])
				    {
						 listView1->Items->Add(arr[0]);

				 listView1->Items[c]->SubItems->Add(arr[1]);
				 listView1->Items[c]->SubItems->Add(arr[2]);
				 listView1->Items[c]->SubItems->Add(arr[3]);
				 listView1->Items[c]->SubItems->Add(arr[4]);
			  listView1->Items[c]->SubItems->Add(arr[5]);

						//listBox1->Items->Add(row); 
					}
				
				}
				sr->Close();
				int s = listView1->Items->Count ;
				if (s==0)
						MessageBox::Show ("Not Exist" , Author->Text , MessageBoxButtons::OK, MessageBoxIcon:: Stop); 
				Author -> Text = "";

		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
int c = 0 ; 
			 StreamReader^ sr=gcnew StreamReader("Books2.txt");
				while(!sr->EndOfStream)
				{
					c= listView1->Items->Count ; 

					String^ row=Convert::ToString(sr->ReadLine());
					array<Char>^ splitter={'\t'};
			       	array<String^>^ arr=row->Split(splitter);

				    if(textBox1->Text==arr[1])
				    {
						 listView1->Items->Add(arr[0]);

				 listView1->Items[c]->SubItems->Add(arr[1]);
				 listView1->Items[c]->SubItems->Add(arr[2]);
				 listView1->Items[c]->SubItems->Add(arr[3]);
				 listView1->Items[c]->SubItems->Add(arr[4]);
				  listView1->Items[c]->SubItems->Add(arr[5]);

				//		listBox1->Items->Add(row); 
					}
				   
				}
				sr->Close();
				int w = listView1->Items->Count ;
				if (w==0)
						MessageBox::Show ("Not Exist" , textBox1->Text , MessageBoxButtons::OK, MessageBoxIcon:: Stop); 
				textBox1->Text = ""; 
		 }
private: System::Void Search1_Click(System::Object^  sender, System::EventArgs^  e) {

			 int c= 0 ;
			StreamReader^ sr=gcnew StreamReader("Books2.txt");
				while(!sr->EndOfStream)
				{
					c= listView1->Items->Count ; 
					String^ row=Convert::ToString(sr->ReadLine());
					array<Char>^ splitter={'\t'};
			       	array<String^>^ arr=row->Split(splitter);

				    if(Convert::ToString(Categories->SelectedItem)==arr[0])
				    {
						
								 listView1->Items->Add(arr[0]);

				 listView1->Items[c]->SubItems->Add(arr[1]);
				 listView1->Items[c]->SubItems->Add(arr[2]);
				 listView1->Items[c]->SubItems->Add(arr[3]);
				 listView1->Items[c]->SubItems->Add(arr[4]);
				  listView1->Items[c]->SubItems->Add(arr[5]);

						//listBox1->Items->Add(row); 
					}
				   
				}
				sr->Close();
			 	Categories->SelectedIndex=-1;
		    	 
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 listView1->Items->Clear () ;	

		 }
private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
			  int n = listView1-> SelectedItems -> Count  ;
		if (n > 0){
			 Bill^ Search =gcnew Bill (); 
			 Search ->ShowDialog(); 
		} 

		
		 }
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {		 }
private: System::Void listView1_ItemSelectionChanged(System::Object^  sender, System::Windows::Forms::ListViewItemSelectionChangedEventArgs^  e) {
		 }
};
}
