#pragma once

#include "About.h"
#include "InputTypeDialog.h"
#include "UdpPropertiesDialog.h"
#include "ManageChannelsDialog.h"

namespace LogsLiteViewerCLI 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Security::Permissions;
	
	using namespace LogViewer::Logic;

	public ref class LogViewerMainForm : public System::Windows::Forms::Form
	{
	public:
		LogViewerMainForm(void)
		{
			InitializeComponent();						
		}

	protected:		
		~LogViewerMainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TabControl^  MainTabs;

	
	private: System::Windows::Forms::ToolStrip^  MainToolbar;

	private: System::Windows::Forms::MenuStrip^  MainMenu;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripButton^  joinStripButton;
	private: System::Windows::Forms::ToolStripButton^  createChannelStripButton;



	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  joinToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  createChannelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  splitChannelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  tieToolStripMenuItem;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^  manageChannelsToolStripMenuItem;
	private: System::Windows::Forms::NotifyIcon^  NotifyIcon;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::FolderBrowserDialog^  FolderBrowserDialog;
	private: System::Windows::Forms::ToolStripButton^  manageChannelsButton;
	public: System::ComponentModel::BackgroundWorker^  udpWorker;
	private: 


	private: System::ComponentModel::IContainer^  components;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LogViewerMainForm::typeid));
			this->MainTabs = (gcnew System::Windows::Forms::TabControl());
			this->MainMenu = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createChannelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->joinToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->splitChannelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->manageChannelsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->MainToolbar = (gcnew System::Windows::Forms::ToolStrip());
			this->joinStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->createChannelStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->manageChannelsButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->NotifyIcon = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->FolderBrowserDialog = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->udpWorker = (gcnew System::ComponentModel::BackgroundWorker());
			this->MainMenu->SuspendLayout();
			this->MainToolbar->SuspendLayout();
			this->SuspendLayout();
			// 
			// MainTabs
			// 
			this->MainTabs->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->MainTabs->Location = System::Drawing::Point(0, 52);
			this->MainTabs->Name = L"MainTabs";
			this->MainTabs->SelectedIndex = 0;
			this->MainTabs->Size = System::Drawing::Size(694, 520);
			this->MainTabs->TabIndex = 0;
			// 
			// MainMenu
			// 
			this->MainMenu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->fileToolStripMenuItem, 
				this->editToolStripMenuItem, this->helpToolStripMenuItem});
			this->MainMenu->Location = System::Drawing::Point(0, 0);
			this->MainMenu->Name = L"MainMenu";
			this->MainMenu->Size = System::Drawing::Size(694, 24);
			this->MainMenu->TabIndex = 1;
			this->MainMenu->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->createChannelToolStripMenuItem, 
				this->toolStripMenuItem3, this->joinToolStripMenuItem, this->toolStripMenuItem2, this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"&File";
			// 
			// createChannelToolStripMenuItem
			// 
			this->createChannelToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"createChannelToolStripMenuItem.Image")));
			this->createChannelToolStripMenuItem->Name = L"createChannelToolStripMenuItem";
			this->createChannelToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->createChannelToolStripMenuItem->Text = L"&Create channel";
			this->createChannelToolStripMenuItem->Click += gcnew System::EventHandler(this, &LogViewerMainForm::createChannelToolStripMenuItem_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(150, 6);
			// 
			// joinToolStripMenuItem
			// 
			this->joinToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"joinToolStripMenuItem.Image")));
			this->joinToolStripMenuItem->Name = L"joinToolStripMenuItem";
			this->joinToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->joinToolStripMenuItem->Text = L"&Join input";
			this->joinToolStripMenuItem->Click += gcnew System::EventHandler(this, &LogViewerMainForm::joinToolStripMenuItem_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(150, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->exitToolStripMenuItem->Text = L"&Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &LogViewerMainForm::exitToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->splitChannelToolStripMenuItem, 
				this->tieToolStripMenuItem, this->toolStripMenuItem4, this->manageChannelsToolStripMenuItem});
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"&Edit";
			// 
			// splitChannelToolStripMenuItem
			// 
			this->splitChannelToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"splitChannelToolStripMenuItem.Image")));
			this->splitChannelToolStripMenuItem->Name = L"splitChannelToolStripMenuItem";
			this->splitChannelToolStripMenuItem->Size = System::Drawing::Size(176, 22);
			this->splitChannelToolStripMenuItem->Text = L"&Split channel";
			this->splitChannelToolStripMenuItem->Click += gcnew System::EventHandler(this, &LogViewerMainForm::splitChannelToolStripMenuItem_Click);
			// 
			// tieToolStripMenuItem
			// 
			this->tieToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tieToolStripMenuItem.Image")));
			this->tieToolStripMenuItem->Name = L"tieToolStripMenuItem";
			this->tieToolStripMenuItem->Size = System::Drawing::Size(176, 22);
			this->tieToolStripMenuItem->Text = L" &Tie channels";
			this->tieToolStripMenuItem->Click += gcnew System::EventHandler(this, &LogViewerMainForm::tieToolStripMenuItem_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(173, 6);
			// 
			// manageChannelsToolStripMenuItem
			// 
			this->manageChannelsToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"manageChannelsToolStripMenuItem.Image")));
			this->manageChannelsToolStripMenuItem->Name = L"manageChannelsToolStripMenuItem";
			this->manageChannelsToolStripMenuItem->Size = System::Drawing::Size(176, 22);
			this->manageChannelsToolStripMenuItem->Text = L"&Manage channels...";
			this->manageChannelsToolStripMenuItem->Click += gcnew System::EventHandler(this, &LogViewerMainForm::manageChannelsToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->aboutToolStripMenuItem1});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"&Help";
			// 
			// aboutToolStripMenuItem1
			// 
			this->aboutToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"aboutToolStripMenuItem1.Image")));
			this->aboutToolStripMenuItem1->Name = L"aboutToolStripMenuItem1";
			this->aboutToolStripMenuItem1->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem1->Text = L"&About";
			this->aboutToolStripMenuItem1->Click += gcnew System::EventHandler(this, &LogViewerMainForm::aboutToolStripMenuItem1_Click);
			// 
			// MainToolbar
			// 
			this->MainToolbar->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->joinStripButton, 
				this->toolStripSeparator1, this->createChannelStripButton, this->manageChannelsButton});
			this->MainToolbar->Location = System::Drawing::Point(0, 24);
			this->MainToolbar->Name = L"MainToolbar";
			this->MainToolbar->Size = System::Drawing::Size(694, 25);
			this->MainToolbar->TabIndex = 2;
			this->MainToolbar->Text = L"toolStrip1";
			// 
			// joinStripButton
			// 
			this->joinStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->joinStripButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"joinStripButton.Image")));
			this->joinStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->joinStripButton->Name = L"joinStripButton";
			this->joinStripButton->Size = System::Drawing::Size(23, 22);
			this->joinStripButton->Text = L"Join inputs...";
			this->joinStripButton->ToolTipText = L"Join inputs into one channel...";
			this->joinStripButton->Click += gcnew System::EventHandler(this, &LogViewerMainForm::joinStripButton_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// createChannelStripButton
			// 
			this->createChannelStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->createChannelStripButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"createChannelStripButton.Image")));
			this->createChannelStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->createChannelStripButton->Name = L"createChannelStripButton";
			this->createChannelStripButton->Size = System::Drawing::Size(23, 22);
			this->createChannelStripButton->Text = L"Create channel";
			this->createChannelStripButton->ToolTipText = L"Click here to create channel...";
			this->createChannelStripButton->Click += gcnew System::EventHandler(this, &LogViewerMainForm::createChannelStripButton_Click);
			// 
			// manageChannelsButton
			// 
			this->manageChannelsButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->manageChannelsButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"manageChannelsButton.Image")));
			this->manageChannelsButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->manageChannelsButton->Name = L"manageChannelsButton";
			this->manageChannelsButton->Size = System::Drawing::Size(23, 22);
			this->manageChannelsButton->Text = L"manageChannelsButton";
			this->manageChannelsButton->ToolTipText = L"Click to manage channels...";
			this->manageChannelsButton->Click += gcnew System::EventHandler(this, &LogViewerMainForm::manageChannelsButton_Click);
			// 
			// NotifyIcon
			// 
			this->NotifyIcon->BalloonTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->NotifyIcon->BalloonTipText = L"Your input was changed...\r\n";
			this->NotifyIcon->BalloonTipTitle = L"New Information...";
			this->NotifyIcon->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"NotifyIcon.Icon")));
			this->NotifyIcon->Visible = true;
			// 
			// udpWorker
			// 
			this->udpWorker->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &LogViewerMainForm::udpWorker_DoWork);
			// 
			// LogViewerMainForm
			// 
			this->AccessibleName = L"";
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(694, 572);
			this->Controls->Add(this->MainToolbar);
			this->Controls->Add(this->MainTabs);
			this->Controls->Add(this->MainMenu);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->MainMenu;
			this->MaximizeBox = false;
			this->MinimumSize = System::Drawing::Size(700, 600);
			this->Name = L"LogViewerMainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LogLiteViewer.CLI";
			this->Load += gcnew System::EventHandler(this, &LogViewerMainForm::LogViewerMainForm_Load);
			this->MainMenu->ResumeLayout(false);
			this->MainMenu->PerformLayout();
			this->MainToolbar->ResumeLayout(false);
			this->MainToolbar->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion

	#pragma region Application logic - Main Window 

	private:		
		// Global channel manager for window.
		ChannelManager^ channelsManager;

	private: 
		System::Void LogViewerMainForm_Load(System::Object^  sender, System::EventArgs^  e) 
		{
			// Initialize channel manager.
			channelsManager = gcnew ChannelManager();
		
			// Create first channel.
			CreateChannelLogic();	
			
			// Enable worker.
			udpWorker->RunWorkerAsync();
		}
		
	private:   
		System::Void CreateChannelLogic()
		{
			// Create new name.
			String^ newName = "New Channel " + channelsManager->channelCount().ToString();
							
			// Create new page.									
			TabPage^ newPage = gcnew TabPage(newName);
			newPage->Name = "NewChannelTab" + channelsManager->channelCount().ToString();
			MainTabs->TabPages->Add(newPage);	
			
			// Create new ListBox to out page.
			ListBox^ temp = gcnew ListBox();
			temp->Dock = DockStyle::Fill;
			temp->Name = "NewChannelListBox" + channelsManager->channelCount().ToString();
			
			// Adding channel and page to the page control.
			MainTabs->TabPages[newPage->Name]->Controls->Add(temp);			
			channelsManager->appendChannel(gcnew Channel(newName));
		}		
	
	#pragma region Delegate handlers
	
	public:
		// Adding data to the specified list box - delegate.
		delegate void DelegateAddItemToListBox(ListBox^ lb, String^ item);
		
		// Valid function, for adding data into ListBox from the same thread.
		void AddValueToListBox(ListBox^ lb, String^ item)
		{
			// Add item value into listbox.			
			lb->Items->Add(item);
		}		
		
		// Valid function, for adding data into ListBox from the same thread.
		void AddFileChangeToListBox(ListBox^ lb, String^ item)
		{
			try
			{
				// Reading from file sent in item parameter, last change and last state.
				StreamReader^ f = gcnew StreamReader(item);
			
				String^ line = "";
				List<String^>^ lines = gcnew List<String^>();
				
				while ((line = f->ReadLine()) != nullptr)
				{
					lines->Add(line);
				}
				f->Close();

				line = lines[lines->Count - 1];
				lb->Items->Add(line);							
				
				// Scroll down and notify.
				lb->TopIndex = lb->Items->Count - 1;				
				String^ name = "NewChannelListBox";					
				Notify(line, Convert::ToInt32(lb->Name->Substring(name->Length)));			
			} 
			catch(...)
			{}
		}		
		
		// Valid function, for adding data into ListBox from the same thread - xml file.
		void AddXmlFileChangeToListBox(ListBox^ lb, String^ item)
		{
			try
			{
				// Reading from file sent in item parameter, last change and last state.
				StreamReader^ f = gcnew StreamReader(item);
				
				String^ line = "";
				List<String^>^ lines = gcnew List<String^>();
				
				while ((line = f->ReadLine()) != nullptr)
				{
					lines->Add(line);
				}
				
				f->Close();
					
				line = lines[lines->Count - 1];
				
				// TODO: Extracting data from XML	
				lb->Items->Add(line);			
				
				// Scroll down and notify.
				lb->TopIndex = lb->Items->Count - 1;				
				String^ name = "NewChannelListBox";					
				Notify(line, Convert::ToInt32(lb->Name->Substring(name->Length)));									
			}
			catch(...)
			{}
		}
		
	#pragma endregion

	private:
		// App notifies user, when something hit, and when window is minimized.
		System::Void Notify(System::String^ value, unsigned int tabIdx)
		{
			if (this->WindowState == Windows::Forms::FormWindowState::Minimized)
			{
				System::String^ oldVal = NotifyIcon->BalloonTipText;
				NotifyIcon->BalloonTipText += String::Format("Tab {1} caught value: \n'{0}' \n", value->Substring(0, 12) + "..." , tabIdx);
				NotifyIcon->ShowBalloonTip(2000);
				
				NotifyIcon->BalloonTipText = oldVal;
			}
		}

	private:			 	
		// UdpClient data handler.
		System::Void UDPData_Received(System::Object^  sender, LogViewer::Events::SimpleChangedDataEventArgs^  e) 
		{			
			// Decoding Tab and ListBox from index sent to the event.
			int idx = e->TabIndex();	
			ListBox^ control = (ListBox^)this->MainTabs->TabPages[idx]->Controls[String::Format("NewChannelListBox{0}", idx)];	
			this->Invoke(gcnew DelegateAddItemToListBox(this, &LogViewerMainForm::AddValueToListBox), control, e->Data());
			Notify(e->Data(), e->TabIndex());
		}		 				
	
	private:			 	
		// FileSystemWatcher txt file change event handler.
		System::Void FileSystemWatcher_Changed(System::Object^  sender, LogViewer::Events::SimpleChangedDataEventArgs^  e) 
		{				
			// Decoding Tab and ListBox from index sent to the event.
			int idx = e->TabIndex();
			ListBox^ control = (ListBox^)this->MainTabs->TabPages[idx]->Controls[String::Format("NewChannelListBox{0}", idx)];
			this->Invoke(gcnew DelegateAddItemToListBox(this, &LogViewerMainForm::AddFileChangeToListBox), control, e->Data());						
		}		
	
	private:
		// FileSystemWatcher xml file change event handler.
		System::Void FileSystemWatcherXml_Changed(System::Object^  sender, LogViewer::Events::SimpleChangedDataEventArgs^  e) 
		{				
			// Decoding Tab and ListBox from index sent to the event.
			int idx = e->TabIndex();
			ListBox^ control = (ListBox^)this->MainTabs->TabPages[idx]->Controls[String::Format("NewChannelListBox{0}", idx)];
			this->Invoke(gcnew DelegateAddItemToListBox(this, &LogViewerMainForm::AddXmlFileChangeToListBox), control, e->Data());						
		}			
		
	private:
		// Showing manage channels dialog.
		System::Void ShowManageChannelsDialog()
		{
			ManageChannelsDialog^ window = gcnew ManageChannelsDialog();
			window->channelsManagerRef() = channelsManager;
			
			window->ShowDialog(this);
			
			// TODO: Fill tabs again.
		}		
		
	private:	
		System::Void JoinGenericInputLogic()
		{
			unsigned int idx = MainTabs->SelectedIndex;
			InputTypeDialog^ window = gcnew InputTypeDialog();

			if (window->ShowDialog(this) == Windows::Forms::DialogResult::OK)
			{		
				if (window->cbxType->SelectedItem->ToString()->Contains("UDP"))
				{
					// Selecting type of input.			
					UdpPropertiesDialog^ dialog = gcnew UdpPropertiesDialog();
					
					if (dialog->ShowDialog(this) == Windows::Forms::DialogResult::OK)
					{					
						JoinNetworkLogic(dialog->tbAddress->Text, static_cast<unsigned int>(dialog->nmPort->Value), idx);			
					}
				}
				else if (window->cbxType->SelectedItem->ToString()->Contains("XML"))
				{
					// Join xml input.
					JoinFileInputLogic(InputWatcher::FileType::FileType_Xml, idx);
				}
				else
				{	
					// Join txt input.
					JoinFileInputLogic(InputWatcher::FileType::FileType_Txt, idx);
				}		
			}
		}
	
	private:
		System::Void JoinNetworkLogic(System::String^ address, unsigned int port, unsigned int idx)
		{
			// Adding new input into channels manager.			
			Inputs::NetworkInput^ networkInput = gcnew Inputs::NetworkInput(address, port, idx);
			networkInput->OnReceived += gcnew Inputs::NetworkInput::ReceivedDelegate(this, &LogViewerMainForm::UDPData_Received);
			
			channelsManager[MainTabs->TabIndex]->appendInput(networkInput);
		}
	
	private:			
		System::Void JoinFileInputLogic(InputWatcher::FileType ft, unsigned int idx)
		{
			// Joining new file input into active channel.			
			if (FolderBrowserDialog->ShowDialog(this) == System::Windows::Forms::DialogResult::OK)
			{		
				InputWatcher::ProxyFileSystemDelegate^ eventHandler = nullptr;
				if (ft == InputWatcher::FileType::FileType_Txt)
				{
					eventHandler = gcnew InputWatcher::ProxyFileSystemDelegate(this, &LogViewerMainForm::FileSystemWatcher_Changed);
				}
				else
				{
					eventHandler = gcnew InputWatcher::ProxyFileSystemDelegate(this, &LogViewerMainForm::FileSystemWatcherXml_Changed);
				}
				
				channelsManager[MainTabs->TabIndex]->appendInput(gcnew Inputs::FileInput(FolderBrowserDialog->SelectedPath, ft, idx, eventHandler));
			}
		}			
		
	private: 
		System::Void joinToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			// Join input.
			JoinGenericInputLogic();
		}
						
	private: 
		System::Void joinStripButton_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			// Join input.
			JoinGenericInputLogic();
		}
							
	private: 
		System::Void createChannelStripButton_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			// Create channel.
			CreateChannelLogic();
		}
		
	private:  
		System::Void createChannelToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		{		
			// Create channel	
			CreateChannelLogic();
		}
		
	private: 		
		System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			// Closing form.
			Close();	
		}			
			 		 		 
	private: 
		System::Void aboutToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) 
		{					
			About^ AboutWindow = gcnew About();
			AboutWindow->Show(this);
		}
			
	private: 
		System::Void splitChannelToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			// TODO
		}
		
	private: 
		System::Void tieToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			// TODO
		}
		
		
	private: 
		System::Void manageChannelsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			ShowManageChannelsDialog();
		}
		
	private: 
		System::Void manageChannelsButton_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			ShowManageChannelsDialog();
		}
									
	private: 
		System::Void udpWorker_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) 
		{
			Inputs::NetworkInput^ ptr = nullptr;
			
		    while (true)
			{				
				for(unsigned int i = 0; i < channelsManager->channelCount(); ++i)
				{
					for (unsigned int j = 0; j < channelsManager[i]->inputsCount(); ++j)
					{					
						if (channelsManager[i][j]->Type() == "NetworkInput")
						{
							ptr = static_cast<Inputs::NetworkInput^>(channelsManager[i][j]);					
							ptr->receive();
						}
					}
				}
			}
		}
		
	#pragma endregion	
};

}