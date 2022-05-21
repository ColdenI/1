#include <SFML/Audio.hpp>
#include <cstdlib>
#include <Windows.h>
#include <fstream>
#include <iostream>
#include <dos.h>




#pragma once



void main1();
int grab(int le_prot, int diffil);
int random(int from, int before);
void exs(int n);




int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE prevInstance,
	PSTR cmdLine, int showCmd);

namespace ForestDolina {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ?????? ??? ForestDolina
	/// </summary>
	public ref class ForestDolina : public System::Windows::Forms::Form
	{
	public:
		ForestDolina(void)
		{
			InitializeComponent();
			//
			//TODO: ???????? ??? ????????????
			//
		}

	protected:
		/// <summary>
		/// ?????????? ??? ???????????? ???????.
		/// </summary>
		~ForestDolina()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel_shop;



	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::PictureBox^ pictureButtSave;

	private: System::Windows::Forms::Label^ labelButtSave;
	private: System::Windows::Forms::Panel^ panelMenuSetting;

	private: System::Windows::Forms::Panel^ panelLanguage;



	private: System::Windows::Forms::RadioButton^ radioButtonLanguage_Eng;
	private: System::Windows::Forms::Label^ labelLanguage;
	private: System::Windows::Forms::RadioButton^ radioButtonLanguage_Rus;
	private: System::Windows::Forms::Label^ labelText_setting;
	private: System::Windows::Forms::PictureBox^ picture_butt_setting;


	private: System::Windows::Forms::CheckBox^ checkBox_sounds;
	private: System::Windows::Forms::PictureBox^ picture_butt_resData;
	private: System::Windows::Forms::Label^ label_resData;
	private: System::Windows::Forms::PictureBox^ pictureBox_resurs;
	private: System::Windows::Forms::Label^ label_silver;


	private: System::Windows::Forms::Panel^ panel_vis_resurs;
	private: System::Windows::Forms::Label^ label_bread;
	private: System::Windows::Forms::Label^ label_human;


	private: System::Windows::Forms::Label^ label_wheat;
	private: System::Windows::Forms::Label^ label_flour;



	private: System::Windows::Forms::Label^ label_wood;
	private: System::Windows::Forms::Label^ label_iron;


	private: System::Windows::Forms::Label^ label_coal;
	private: System::Windows::Forms::Label^ label_iron_ore;


	private: System::Windows::Forms::Label^ label_gold;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label_LEVEL;
	private: System::Windows::Forms::PictureBox^ pictureButt_market;
	private: System::Windows::Forms::PictureBox^ pictureButt_protection;


	private: System::Windows::Forms::PictureBox^ pictureButt_mine;
	private: System::Windows::Forms::PictureBox^ pictureButt_farm;
	private: System::Windows::Forms::PictureBox^ pictureButt_windmill;




	private: System::Windows::Forms::PictureBox^ pictureButt_bake;
	private: System::Windows::Forms::PictureBox^ pictureButt_sawmill;
	private: System::Windows::Forms::PictureBox^ pictureButt_village;

	private: System::Windows::Forms::PictureBox^ pictureButt_bakery;






	private: System::Windows::Forms::PictureBox^ pictureButt_mainhome;

	private: System::Windows::Forms::PictureBox^ pictureButtShop;

	private: System::Windows::Forms::PictureBox^ pictureButtDownload;
	private: System::Windows::Forms::Label^ labelButtDownload;
	private: System::Windows::Forms::Panel^ panel_difficulty;
	private: System::Windows::Forms::RadioButton^ radioButton_difficult_difficulty;
	private: System::Windows::Forms::RadioButton^ radioButton_moderate_difficulty;
	private: System::Windows::Forms::RadioButton^ radioButton_easy_difficulty;
	private: System::Windows::Forms::Label^ label_difficulty;
	private: System::Windows::Forms::Label^ label_panel_text_shop;


	private: System::Windows::Forms::Label^ label_shop_mainhome;
	private: System::Windows::Forms::Button^ button_shop_bakery;

	private: System::Windows::Forms::Button^ button_shop_windmill;

	private: System::Windows::Forms::Button^ button_shop_bake;
	private: System::Windows::Forms::Button^ button_shop_farm;


	private: System::Windows::Forms::Button^ button_shop_mine;
	private: System::Windows::Forms::Button^ button_shop_market;


	private: System::Windows::Forms::Button^ button_shop_village;
	private: System::Windows::Forms::Button^ button_shop_protection;


	private: System::Windows::Forms::Button^ button_shop_sawmill;

	private: System::Windows::Forms::Label^ label_shop_bakery;
	private: System::Windows::Forms::Button^ button_shop_mainhome;


	private: System::Windows::Forms::Label^ label_shop_windmill;

	private: System::Windows::Forms::Label^ label_shop_bake;
	private: System::Windows::Forms::Label^ label_shop_farm;

	private: System::Windows::Forms::Label^ label_shop_mine;
	private: System::Windows::Forms::Label^ label_shop_market;

	private: System::Windows::Forms::Label^ label_shop_village;
	private: System::Windows::Forms::Label^ label_shop_protection;

	private: System::Windows::Forms::Label^ label_shop_sawmill;
	private: System::Windows::Forms::PictureBox^ picture_shop_goldITEM;
	private: System::Windows::Forms::PictureBox^ picture_shop_silverITEM;
	private: System::Windows::Forms::PictureBox^ pictureBox_butt_obm;
	private: System::Windows::Forms::Panel^ panel_mine;
	private: System::Windows::Forms::PictureBox^ pictureBox_butt_pickaxe;
	private: System::Windows::Forms::Label^ label_mine_levelM;
	private: System::Windows::Forms::Label^ label_mine_info;
	private: System::Windows::Forms::Panel^ panel_bake;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button_bake;
	private: System::Windows::Forms::Label^ label_bake_level;
	private: System::Windows::Forms::Label^ label_bake_info;
	private: System::Windows::Forms::Panel^ panel_sawmill;
	private: System::Windows::Forms::PictureBox^ pictureBox_sawmill_axe;
	private: System::Windows::Forms::Label^ label_sawmill_info;
	private: System::Windows::Forms::Label^ label_sawmill_level;
	private: System::Windows::Forms::Panel^ panel_vilage;
	private: System::Windows::Forms::Label^ label_vilage_info;
	private: System::Windows::Forms::Panel^ panel_market;
	private: System::Windows::Forms::PictureBox^ butt_market_4;

	private: System::Windows::Forms::PictureBox^ butt_market_3;

	private: System::Windows::Forms::PictureBox^ butt_market_2;

	private: System::Windows::Forms::PictureBox^ butt_market_1;

	private: System::Windows::Forms::Label^ label_market_info;
	private: System::Windows::Forms::Panel^ panel_farm;
	private: System::Windows::Forms::PictureBox^ butt_farm_1;
	private: System::Windows::Forms::Label^ label_farm_info;
	private: System::Windows::Forms::Label^ label_farm_level;
	private: System::Windows::Forms::Panel^ panel_windmill;
	private: System::Windows::Forms::Label^ label_windmill_info_;

	private: System::Windows::Forms::Label^ label_windmill_level;
	private: System::Windows::Forms::Button^ butt_windmill_1;
	private: System::Windows::Forms::Panel^ panel_bakery;
	private: System::Windows::Forms::Label^ label_bakery_info;
	private: System::Windows::Forms::Label^ label_bakery_level;
	private: System::Windows::Forms::Button^ butt_bakery_1;
	private: System::Windows::Forms::Panel^ panel_protect;
	private: System::Windows::Forms::Label^ label_protect_info;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ panel_task1;
	private: System::Windows::Forms::Label^ label_task1_log;
	private: System::Windows::Forms::PictureBox^ picture_butt_tasksLOG;

	private: System::Windows::Forms::Label^ label_tasksG_text;
	private: System::Windows::Forms::PictureBox^ picture_butt_tasks2;
	private: System::Windows::Forms::Label^ label_task_info;














	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// ???????????? ?????????? ????????????.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ????????? ????? ??? ????????? ???????????? — ?? ????????? 
		/// ?????????? ????? ?????? ? ??????? ????????? ????.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ForestDolina::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel_shop = (gcnew System::Windows::Forms::Panel());
			this->pictureBox_butt_obm = (gcnew System::Windows::Forms::PictureBox());
			this->picture_shop_silverITEM = (gcnew System::Windows::Forms::PictureBox());
			this->picture_shop_goldITEM = (gcnew System::Windows::Forms::PictureBox());
			this->button_shop_bakery = (gcnew System::Windows::Forms::Button());
			this->button_shop_windmill = (gcnew System::Windows::Forms::Button());
			this->button_shop_bake = (gcnew System::Windows::Forms::Button());
			this->button_shop_farm = (gcnew System::Windows::Forms::Button());
			this->button_shop_mine = (gcnew System::Windows::Forms::Button());
			this->button_shop_market = (gcnew System::Windows::Forms::Button());
			this->button_shop_village = (gcnew System::Windows::Forms::Button());
			this->button_shop_protection = (gcnew System::Windows::Forms::Button());
			this->button_shop_sawmill = (gcnew System::Windows::Forms::Button());
			this->label_shop_bakery = (gcnew System::Windows::Forms::Label());
			this->button_shop_mainhome = (gcnew System::Windows::Forms::Button());
			this->label_shop_windmill = (gcnew System::Windows::Forms::Label());
			this->label_shop_bake = (gcnew System::Windows::Forms::Label());
			this->label_shop_farm = (gcnew System::Windows::Forms::Label());
			this->label_shop_mine = (gcnew System::Windows::Forms::Label());
			this->label_shop_market = (gcnew System::Windows::Forms::Label());
			this->label_shop_village = (gcnew System::Windows::Forms::Label());
			this->label_shop_protection = (gcnew System::Windows::Forms::Label());
			this->label_shop_sawmill = (gcnew System::Windows::Forms::Label());
			this->label_shop_mainhome = (gcnew System::Windows::Forms::Label());
			this->label_panel_text_shop = (gcnew System::Windows::Forms::Label());
			this->panelMenuSetting = (gcnew System::Windows::Forms::Panel());
			this->panel_difficulty = (gcnew System::Windows::Forms::Panel());
			this->radioButton_difficult_difficulty = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_moderate_difficulty = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_easy_difficulty = (gcnew System::Windows::Forms::RadioButton());
			this->label_difficulty = (gcnew System::Windows::Forms::Label());
			this->label_resData = (gcnew System::Windows::Forms::Label());
			this->picture_butt_resData = (gcnew System::Windows::Forms::PictureBox());
			this->checkBox_sounds = (gcnew System::Windows::Forms::CheckBox());
			this->labelText_setting = (gcnew System::Windows::Forms::Label());
			this->panelLanguage = (gcnew System::Windows::Forms::Panel());
			this->radioButtonLanguage_Eng = (gcnew System::Windows::Forms::RadioButton());
			this->labelLanguage = (gcnew System::Windows::Forms::Label());
			this->radioButtonLanguage_Rus = (gcnew System::Windows::Forms::RadioButton());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->label_silver = (gcnew System::Windows::Forms::Label());
			this->label_gold = (gcnew System::Windows::Forms::Label());
			this->label_bread = (gcnew System::Windows::Forms::Label());
			this->label_coal = (gcnew System::Windows::Forms::Label());
			this->label_flour = (gcnew System::Windows::Forms::Label());
			this->label_human = (gcnew System::Windows::Forms::Label());
			this->label_iron = (gcnew System::Windows::Forms::Label());
			this->label_iron_ore = (gcnew System::Windows::Forms::Label());
			this->label_wheat = (gcnew System::Windows::Forms::Label());
			this->label_wood = (gcnew System::Windows::Forms::Label());
			this->picture_butt_setting = (gcnew System::Windows::Forms::PictureBox());
			this->pictureButt_protection = (gcnew System::Windows::Forms::PictureBox());
			this->pictureButt_windmill = (gcnew System::Windows::Forms::PictureBox());
			this->pictureButt_bakery = (gcnew System::Windows::Forms::PictureBox());
			this->pictureButt_market = (gcnew System::Windows::Forms::PictureBox());
			this->pictureButt_mine = (gcnew System::Windows::Forms::PictureBox());
			this->pictureButt_farm = (gcnew System::Windows::Forms::PictureBox());
			this->pictureButt_bake = (gcnew System::Windows::Forms::PictureBox());
			this->pictureButt_sawmill = (gcnew System::Windows::Forms::PictureBox());
			this->pictureButt_village = (gcnew System::Windows::Forms::PictureBox());
			this->pictureButt_mainhome = (gcnew System::Windows::Forms::PictureBox());
			this->pictureButtShop = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_resurs = (gcnew System::Windows::Forms::PictureBox());
			this->pictureButtSave = (gcnew System::Windows::Forms::PictureBox());
			this->labelButtSave = (gcnew System::Windows::Forms::Label());
			this->panel_vis_resurs = (gcnew System::Windows::Forms::Panel());
			this->label_LEVEL = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureButtDownload = (gcnew System::Windows::Forms::PictureBox());
			this->labelButtDownload = (gcnew System::Windows::Forms::Label());
			this->panel_mine = (gcnew System::Windows::Forms::Panel());
			this->label_mine_info = (gcnew System::Windows::Forms::Label());
			this->label_mine_levelM = (gcnew System::Windows::Forms::Label());
			this->pictureBox_butt_pickaxe = (gcnew System::Windows::Forms::PictureBox());
			this->panel_bake = (gcnew System::Windows::Forms::Panel());
			this->label_bake_info = (gcnew System::Windows::Forms::Label());
			this->label_bake_level = (gcnew System::Windows::Forms::Label());
			this->button_bake = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel_sawmill = (gcnew System::Windows::Forms::Panel());
			this->pictureBox_sawmill_axe = (gcnew System::Windows::Forms::PictureBox());
			this->label_sawmill_info = (gcnew System::Windows::Forms::Label());
			this->label_sawmill_level = (gcnew System::Windows::Forms::Label());
			this->panel_vilage = (gcnew System::Windows::Forms::Panel());
			this->label_vilage_info = (gcnew System::Windows::Forms::Label());
			this->panel_market = (gcnew System::Windows::Forms::Panel());
			this->butt_market_4 = (gcnew System::Windows::Forms::PictureBox());
			this->butt_market_3 = (gcnew System::Windows::Forms::PictureBox());
			this->butt_market_2 = (gcnew System::Windows::Forms::PictureBox());
			this->butt_market_1 = (gcnew System::Windows::Forms::PictureBox());
			this->label_market_info = (gcnew System::Windows::Forms::Label());
			this->panel_farm = (gcnew System::Windows::Forms::Panel());
			this->butt_farm_1 = (gcnew System::Windows::Forms::PictureBox());
			this->label_farm_info = (gcnew System::Windows::Forms::Label());
			this->label_farm_level = (gcnew System::Windows::Forms::Label());
			this->panel_windmill = (gcnew System::Windows::Forms::Panel());
			this->butt_windmill_1 = (gcnew System::Windows::Forms::Button());
			this->label_windmill_info_ = (gcnew System::Windows::Forms::Label());
			this->label_windmill_level = (gcnew System::Windows::Forms::Label());
			this->panel_bakery = (gcnew System::Windows::Forms::Panel());
			this->butt_bakery_1 = (gcnew System::Windows::Forms::Button());
			this->label_bakery_info = (gcnew System::Windows::Forms::Label());
			this->label_bakery_level = (gcnew System::Windows::Forms::Label());
			this->panel_protect = (gcnew System::Windows::Forms::Panel());
			this->panel_task1 = (gcnew System::Windows::Forms::Panel());
			this->label_task_info = (gcnew System::Windows::Forms::Label());
			this->label_task1_log = (gcnew System::Windows::Forms::Label());
			this->label_protect_info = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->picture_butt_tasksLOG = (gcnew System::Windows::Forms::PictureBox());
			this->label_tasksG_text = (gcnew System::Windows::Forms::Label());
			this->picture_butt_tasks2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel_shop->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_butt_obm))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_shop_silverITEM))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_shop_goldITEM))->BeginInit();
			this->panelMenuSetting->SuspendLayout();
			this->panel_difficulty->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_butt_resData))->BeginInit();
			this->panelLanguage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_butt_setting))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureButt_protection))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureButt_windmill))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureButt_bakery))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureButt_market))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureButt_mine))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureButt_farm))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureButt_bake))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureButt_sawmill))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureButt_village))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureButt_mainhome))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureButtShop))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_resurs))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureButtSave))->BeginInit();
			this->panel_vis_resurs->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureButtDownload))->BeginInit();
			this->panel_mine->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_butt_pickaxe))->BeginInit();
			this->panel_bake->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel_sawmill->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_sawmill_axe))->BeginInit();
			this->panel_vilage->SuspendLayout();
			this->panel_market->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->butt_market_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->butt_market_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->butt_market_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->butt_market_1))->BeginInit();
			this->panel_farm->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->butt_farm_1))->BeginInit();
			this->panel_windmill->SuspendLayout();
			this->panel_bakery->SuspendLayout();
			this->panel_protect->SuspendLayout();
			this->panel_task1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_butt_tasksLOG))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_butt_tasks2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(277, 524);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 87);
			this->button1->TabIndex = 0;
			this->button1->Text = L"скрыта.\r\nдля тестов";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &ForestDolina::button1_Click);
			// 
			// panel_shop
			// 
			this->panel_shop->BackColor = System::Drawing::SystemColors::Control;
			this->panel_shop->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_shop.BackgroundImage")));
			this->panel_shop->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel_shop->Controls->Add(this->pictureBox_butt_obm);
			this->panel_shop->Controls->Add(this->picture_shop_silverITEM);
			this->panel_shop->Controls->Add(this->picture_shop_goldITEM);
			this->panel_shop->Controls->Add(this->button_shop_bakery);
			this->panel_shop->Controls->Add(this->button_shop_windmill);
			this->panel_shop->Controls->Add(this->button_shop_bake);
			this->panel_shop->Controls->Add(this->button_shop_farm);
			this->panel_shop->Controls->Add(this->button_shop_mine);
			this->panel_shop->Controls->Add(this->button_shop_market);
			this->panel_shop->Controls->Add(this->button_shop_village);
			this->panel_shop->Controls->Add(this->button_shop_protection);
			this->panel_shop->Controls->Add(this->button_shop_sawmill);
			this->panel_shop->Controls->Add(this->label_shop_bakery);
			this->panel_shop->Controls->Add(this->button_shop_mainhome);
			this->panel_shop->Controls->Add(this->label_shop_windmill);
			this->panel_shop->Controls->Add(this->label_shop_bake);
			this->panel_shop->Controls->Add(this->label_shop_farm);
			this->panel_shop->Controls->Add(this->label_shop_mine);
			this->panel_shop->Controls->Add(this->label_shop_market);
			this->panel_shop->Controls->Add(this->label_shop_village);
			this->panel_shop->Controls->Add(this->label_shop_protection);
			this->panel_shop->Controls->Add(this->label_shop_sawmill);
			this->panel_shop->Controls->Add(this->label_shop_mainhome);
			this->panel_shop->Controls->Add(this->label_panel_text_shop);
			this->panel_shop->Location = System::Drawing::Point(294, 25);
			this->panel_shop->Name = L"panel_shop";
			this->panel_shop->Size = System::Drawing::Size(945, 501);
			this->panel_shop->TabIndex = 1;
			this->panel_shop->Visible = false;
			// 
			// pictureBox_butt_obm
			// 
			this->pictureBox_butt_obm->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_butt_obm.BackgroundImage")));
			this->pictureBox_butt_obm->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox_butt_obm->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_butt_obm.Image")));
			this->pictureBox_butt_obm->Location = System::Drawing::Point(724, 230);
			this->pictureBox_butt_obm->Name = L"pictureBox_butt_obm";
			this->pictureBox_butt_obm->Size = System::Drawing::Size(69, 80);
			this->pictureBox_butt_obm->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox_butt_obm->TabIndex = 5;
			this->pictureBox_butt_obm->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox_butt_obm, L"1");
			this->pictureBox_butt_obm->Click += gcnew System::EventHandler(this, &ForestDolina::pictureBox2_Click);
			// 
			// picture_shop_silverITEM
			// 
			this->picture_shop_silverITEM->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_shop_silverITEM.BackgroundImage")));
			this->picture_shop_silverITEM->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->picture_shop_silverITEM->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_shop_silverITEM.Image")));
			this->picture_shop_silverITEM->Location = System::Drawing::Point(706, 335);
			this->picture_shop_silverITEM->Name = L"picture_shop_silverITEM";
			this->picture_shop_silverITEM->Size = System::Drawing::Size(106, 118);
			this->picture_shop_silverITEM->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->picture_shop_silverITEM->TabIndex = 4;
			this->picture_shop_silverITEM->TabStop = false;
			// 
			// picture_shop_goldITEM
			// 
			this->picture_shop_goldITEM->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_shop_goldITEM.BackgroundImage")));
			this->picture_shop_goldITEM->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->picture_shop_goldITEM->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_shop_goldITEM.Image")));
			this->picture_shop_goldITEM->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_shop_goldITEM.InitialImage")));
			this->picture_shop_goldITEM->Location = System::Drawing::Point(706, 90);
			this->picture_shop_goldITEM->Name = L"picture_shop_goldITEM";
			this->picture_shop_goldITEM->Size = System::Drawing::Size(106, 119);
			this->picture_shop_goldITEM->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->picture_shop_goldITEM->TabIndex = 3;
			this->picture_shop_goldITEM->TabStop = false;
			// 
			// button_shop_bakery
			// 
			this->button_shop_bakery->BackColor = System::Drawing::Color::Wheat;
			this->button_shop_bakery->Location = System::Drawing::Point(350, 448);
			this->button_shop_bakery->Name = L"button_shop_bakery";
			this->button_shop_bakery->Size = System::Drawing::Size(123, 42);
			this->button_shop_bakery->TabIndex = 2;
			this->button_shop_bakery->Text = L"Buy";
			this->button_shop_bakery->UseVisualStyleBackColor = false;
			this->button_shop_bakery->Click += gcnew System::EventHandler(this, &ForestDolina::button_shop_bakery_Click);
			// 
			// button_shop_windmill
			// 
			this->button_shop_windmill->BackColor = System::Drawing::Color::Wheat;
			this->button_shop_windmill->Location = System::Drawing::Point(350, 367);
			this->button_shop_windmill->Name = L"button_shop_windmill";
			this->button_shop_windmill->Size = System::Drawing::Size(123, 42);
			this->button_shop_windmill->TabIndex = 2;
			this->button_shop_windmill->Text = L"Buy";
			this->button_shop_windmill->UseVisualStyleBackColor = false;
			this->button_shop_windmill->Click += gcnew System::EventHandler(this, &ForestDolina::button_shop_windmill_Click);
			// 
			// button_shop_bake
			// 
			this->button_shop_bake->BackColor = System::Drawing::Color::Wheat;
			this->button_shop_bake->Location = System::Drawing::Point(26, 447);
			this->button_shop_bake->Name = L"button_shop_bake";
			this->button_shop_bake->Size = System::Drawing::Size(123, 42);
			this->button_shop_bake->TabIndex = 2;
			this->button_shop_bake->Text = L"Buy";
			this->button_shop_bake->UseVisualStyleBackColor = false;
			this->button_shop_bake->Click += gcnew System::EventHandler(this, &ForestDolina::button_shop_bake_Click);
			// 
			// button_shop_farm
			// 
			this->button_shop_farm->BackColor = System::Drawing::Color::Wheat;
			this->button_shop_farm->Location = System::Drawing::Point(350, 285);
			this->button_shop_farm->Name = L"button_shop_farm";
			this->button_shop_farm->Size = System::Drawing::Size(123, 42);
			this->button_shop_farm->TabIndex = 2;
			this->button_shop_farm->Text = L"Buy";
			this->button_shop_farm->UseVisualStyleBackColor = false;
			this->button_shop_farm->Click += gcnew System::EventHandler(this, &ForestDolina::button_shop_farm_Click);
			// 
			// button_shop_mine
			// 
			this->button_shop_mine->BackColor = System::Drawing::Color::Wheat;
			this->button_shop_mine->Location = System::Drawing::Point(26, 366);
			this->button_shop_mine->Name = L"button_shop_mine";
			this->button_shop_mine->Size = System::Drawing::Size(123, 42);
			this->button_shop_mine->TabIndex = 2;
			this->button_shop_mine->Text = L"Buy";
			this->button_shop_mine->UseVisualStyleBackColor = false;
			this->button_shop_mine->Click += gcnew System::EventHandler(this, &ForestDolina::button_shop_mine_Click);
			// 
			// button_shop_market
			// 
			this->button_shop_market->BackColor = System::Drawing::Color::Wheat;
			this->button_shop_market->Location = System::Drawing::Point(350, 207);
			this->button_shop_market->Name = L"button_shop_market";
			this->button_shop_market->Size = System::Drawing::Size(123, 42);
			this->button_shop_market->TabIndex = 2;
			this->button_shop_market->Text = L"Buy";
			this->button_shop_market->UseVisualStyleBackColor = false;
			this->button_shop_market->Click += gcnew System::EventHandler(this, &ForestDolina::button_shop_market_Click);
			// 
			// button_shop_village
			// 
			this->button_shop_village->BackColor = System::Drawing::Color::Wheat;
			this->button_shop_village->Location = System::Drawing::Point(26, 284);
			this->button_shop_village->Name = L"button_shop_village";
			this->button_shop_village->Size = System::Drawing::Size(123, 42);
			this->button_shop_village->TabIndex = 2;
			this->button_shop_village->Text = L"Buy";
			this->button_shop_village->UseVisualStyleBackColor = false;
			this->button_shop_village->Click += gcnew System::EventHandler(this, &ForestDolina::button_shop_village_Click);
			// 
			// button_shop_protection
			// 
			this->button_shop_protection->BackColor = System::Drawing::Color::Wheat;
			this->button_shop_protection->Location = System::Drawing::Point(350, 125);
			this->button_shop_protection->Name = L"button_shop_protection";
			this->button_shop_protection->Size = System::Drawing::Size(123, 42);
			this->button_shop_protection->TabIndex = 2;
			this->button_shop_protection->Text = L"Buy";
			this->button_shop_protection->UseVisualStyleBackColor = false;
			this->button_shop_protection->Click += gcnew System::EventHandler(this, &ForestDolina::button_shop_protection_Click);
			// 
			// button_shop_sawmill
			// 
			this->button_shop_sawmill->BackColor = System::Drawing::Color::Wheat;
			this->button_shop_sawmill->Location = System::Drawing::Point(26, 206);
			this->button_shop_sawmill->Name = L"button_shop_sawmill";
			this->button_shop_sawmill->Size = System::Drawing::Size(123, 42);
			this->button_shop_sawmill->TabIndex = 2;
			this->button_shop_sawmill->Text = L"Buy";
			this->button_shop_sawmill->UseVisualStyleBackColor = false;
			this->button_shop_sawmill->Click += gcnew System::EventHandler(this, &ForestDolina::button_shop_sawmill_Click);
			// 
			// label_shop_bakery
			// 
			this->label_shop_bakery->AutoSize = true;
			this->label_shop_bakery->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label_shop_bakery.Image")));
			this->label_shop_bakery->Location = System::Drawing::Point(347, 419);
			this->label_shop_bakery->Name = L"label_shop_bakery";
			this->label_shop_bakery->Size = System::Drawing::Size(238, 26);
			this->label_shop_bakery->TabIndex = 1;
			this->label_shop_bakery->Text = L"Buy \?\?\?\?\?\?\?\r\n \?\?\?\?\?\?\?\?\?: 80\?\?\?\?\?\? 40\?\?\?\?\?\? 2800\?\?\?\?\?\?\?";
			// 
			// button_shop_mainhome
			// 
			this->button_shop_mainhome->BackColor = System::Drawing::Color::Wheat;
			this->button_shop_mainhome->Location = System::Drawing::Point(26, 124);
			this->button_shop_mainhome->Name = L"button_shop_mainhome";
			this->button_shop_mainhome->Size = System::Drawing::Size(123, 42);
			this->button_shop_mainhome->TabIndex = 2;
			this->button_shop_mainhome->Text = L"Buy";
			this->button_shop_mainhome->UseVisualStyleBackColor = false;
			this->button_shop_mainhome->Click += gcnew System::EventHandler(this, &ForestDolina::button_shop_mainhome_Click);
			// 
			// label_shop_windmill
			// 
			this->label_shop_windmill->AutoSize = true;
			this->label_shop_windmill->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label_shop_windmill.Image")));
			this->label_shop_windmill->Location = System::Drawing::Point(347, 338);
			this->label_shop_windmill->Name = L"label_shop_windmill";
			this->label_shop_windmill->Size = System::Drawing::Size(232, 26);
			this->label_shop_windmill->TabIndex = 1;
			this->label_shop_windmill->Text = L"Buy \?\?\?\?\?\?\?\?\r\n \?\?\?\?\?\?\?\?\?: 50\?\?\?\?\?\? 20\?\?\?\?\?\? 800\?\?\?\?\?\?\?";
			// 
			// label_shop_bake
			// 
			this->label_shop_bake->AutoSize = true;
			this->label_shop_bake->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label_shop_bake.Image")));
			this->label_shop_bake->Location = System::Drawing::Point(23, 418);
			this->label_shop_bake->Name = L"label_shop_bake";
			this->label_shop_bake->Size = System::Drawing::Size(181, 26);
			this->label_shop_bake->TabIndex = 1;
			this->label_shop_bake->Text = L"Buy \?\?\?\?\?\?\?\?\?\r\n \?\?\?\?\?\?\?\?\?: 10\?\?\?\?\?\? 150\?\?\?\?\?\?\?";
			// 
			// label_shop_farm
			// 
			this->label_shop_farm->AutoSize = true;
			this->label_shop_farm->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label_shop_farm.Image")));
			this->label_shop_farm->Location = System::Drawing::Point(347, 255);
			this->label_shop_farm->Name = L"label_shop_farm";
			this->label_shop_farm->Size = System::Drawing::Size(232, 26);
			this->label_shop_farm->TabIndex = 1;
			this->label_shop_farm->Text = L"Buy \?\?\?\?\?  \r\n \?\?\?\?\?\?\?\?\?: 50\?\?\?\?\?\? 20\?\?\?\?\?\? 800\?\?\?\?\?\?\?";
			// 
			// label_shop_mine
			// 
			this->label_shop_mine->AutoSize = true;
			this->label_shop_mine->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label_shop_mine.Image")));
			this->label_shop_mine->Location = System::Drawing::Point(23, 337);
			this->label_shop_mine->Name = L"label_shop_mine";
			this->label_shop_mine->Size = System::Drawing::Size(181, 26);
			this->label_shop_mine->TabIndex = 1;
			this->label_shop_mine->Text = L"Buy \?\?\?\?\?\r\n \?\?\?\?\?\?\?\?\?: 10\?\?\?\?\?\? 150\?\?\?\?\?\?\?";
			// 
			// label_shop_market
			// 
			this->label_shop_market->AutoSize = true;
			this->label_shop_market->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label_shop_market.Image")));
			this->label_shop_market->Location = System::Drawing::Point(347, 178);
			this->label_shop_market->Name = L"label_shop_market";
			this->label_shop_market->Size = System::Drawing::Size(130, 26);
			this->label_shop_market->TabIndex = 1;
			this->label_shop_market->Text = L"Buy \?\?\?\?\? \r\n \?\?\?\?\?\?\?\?\?: 100\?\?\?\?\?\?\?";
			// 
			// label_shop_village
			// 
			this->label_shop_village->AutoSize = true;
			this->label_shop_village->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label_shop_village.Image")));
			this->label_shop_village->Location = System::Drawing::Point(23, 254);
			this->label_shop_village->Name = L"label_shop_village";
			this->label_shop_village->Size = System::Drawing::Size(181, 26);
			this->label_shop_village->TabIndex = 1;
			this->label_shop_village->Text = L"Buy \?\?\?\?\?\?\?\?\?  \r\n \?\?\?\?\?\?\?\?\?: 15\?\?\?\?\?\? 150\?\?\?\?\?\?\?";
			// 
			// label_shop_protection
			// 
			this->label_shop_protection->AutoSize = true;
			this->label_shop_protection->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label_shop_protection.Image")));
			this->label_shop_protection->Location = System::Drawing::Point(347, 96);
			this->label_shop_protection->Name = L"label_shop_protection";
			this->label_shop_protection->Size = System::Drawing::Size(232, 26);
			this->label_shop_protection->TabIndex = 1;
			this->label_shop_protection->Text = L"Buy \?\?\?\?\?\?\? \r\n \?\?\?\?\?\?\?\?\?: 30\?\?\?\?\?\? 15\?\?\?\?\?\? 700\?\?\?\?\?\?\?";
			// 
			// label_shop_sawmill
			// 
			this->label_shop_sawmill->AutoSize = true;
			this->label_shop_sawmill->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label_shop_sawmill.Image")));
			this->label_shop_sawmill->Location = System::Drawing::Point(23, 177);
			this->label_shop_sawmill->Name = L"label_shop_sawmill";
			this->label_shop_sawmill->Size = System::Drawing::Size(130, 26);
			this->label_shop_sawmill->TabIndex = 1;
			this->label_shop_sawmill->Text = L"Buy \?\?\?\?\?\?\?\?\?  \r\n \?\?\?\?\?\?\?\?\?: 100\?\?\?\?\?\?\?";
			// 
			// label_shop_mainhome
			// 
			this->label_shop_mainhome->AutoSize = true;
			this->label_shop_mainhome->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label_shop_mainhome.Image")));
			this->label_shop_mainhome->Location = System::Drawing::Point(23, 95);
			this->label_shop_mainhome->Name = L"label_shop_mainhome";
			this->label_shop_mainhome->Size = System::Drawing::Size(181, 26);
			this->label_shop_mainhome->TabIndex = 1;
			this->label_shop_mainhome->Text = L"\?\?\?\?\?\?\?\? \?\?\?\?\?\? (\?\? 2\?\?.) \r\n \?\?\?\?\?\?\?\?\?: 20\?\?\?\?\?\? 200\?\?\?\?\?\?\?";
			// 
			// label_panel_text_shop
			// 
			this->label_panel_text_shop->AutoSize = true;
			this->label_panel_text_shop->Font = (gcnew System::Drawing::Font(L"Impact", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_panel_text_shop->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label_panel_text_shop.Image")));
			this->label_panel_text_shop->Location = System::Drawing::Point(363, 11);
			this->label_panel_text_shop->Name = L"label_panel_text_shop";
			this->label_panel_text_shop->Size = System::Drawing::Size(272, 80);
			this->label_panel_text_shop->TabIndex = 0;
			this->label_panel_text_shop->Text = L"\?\?\?\?\?\?\?";
			// 
			// panelMenuSetting
			// 
			this->panelMenuSetting->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panelMenuSetting->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panelMenuSetting->Controls->Add(this->panel_difficulty);
			this->panelMenuSetting->Controls->Add(this->label_resData);
			this->panelMenuSetting->Controls->Add(this->picture_butt_resData);
			this->panelMenuSetting->Controls->Add(this->checkBox_sounds);
			this->panelMenuSetting->Controls->Add(this->labelText_setting);
			this->panelMenuSetting->Controls->Add(this->panelLanguage);
			this->panelMenuSetting->Location = System::Drawing::Point(1255, 408);
			this->panelMenuSetting->Name = L"panelMenuSetting";
			this->panelMenuSetting->Size = System::Drawing::Size(616, 210);
			this->panelMenuSetting->TabIndex = 1;
			this->panelMenuSetting->Visible = false;
			// 
			// panel_difficulty
			// 
			this->panel_difficulty->Controls->Add(this->radioButton_difficult_difficulty);
			this->panel_difficulty->Controls->Add(this->radioButton_moderate_difficulty);
			this->panel_difficulty->Controls->Add(this->radioButton_easy_difficulty);
			this->panel_difficulty->Controls->Add(this->label_difficulty);
			this->panel_difficulty->Location = System::Drawing::Point(212, 90);
			this->panel_difficulty->Name = L"panel_difficulty";
			this->panel_difficulty->Size = System::Drawing::Size(143, 111);
			this->panel_difficulty->TabIndex = 5;
			// 
			// radioButton_difficult_difficulty
			// 
			this->radioButton_difficult_difficulty->AutoSize = true;
			this->radioButton_difficult_difficulty->Location = System::Drawing::Point(16, 83);
			this->radioButton_difficult_difficulty->Name = L"radioButton_difficult_difficulty";
			this->radioButton_difficult_difficulty->Size = System::Drawing::Size(61, 17);
			this->radioButton_difficult_difficulty->TabIndex = 1;
			this->radioButton_difficult_difficulty->TabStop = true;
			this->radioButton_difficult_difficulty->Text = L"\?\?\?\?\?\?";
			this->radioButton_difficult_difficulty->UseVisualStyleBackColor = true;
			this->radioButton_difficult_difficulty->CheckedChanged += gcnew System::EventHandler(this, &ForestDolina::radioButton_difficult_difficulty_CheckedChanged);
			// 
			// radioButton_moderate_difficulty
			// 
			this->radioButton_moderate_difficulty->AutoSize = true;
			this->radioButton_moderate_difficulty->Checked = true;
			this->radioButton_moderate_difficulty->Location = System::Drawing::Point(16, 60);
			this->radioButton_moderate_difficulty->Name = L"radioButton_moderate_difficulty";
			this->radioButton_moderate_difficulty->Size = System::Drawing::Size(73, 17);
			this->radioButton_moderate_difficulty->TabIndex = 1;
			this->radioButton_moderate_difficulty->TabStop = true;
			this->radioButton_moderate_difficulty->Text = L"\?\?\?\?\?\?\?\?";
			this->radioButton_moderate_difficulty->UseVisualStyleBackColor = true;
			this->radioButton_moderate_difficulty->CheckedChanged += gcnew System::EventHandler(this, &ForestDolina::radioButton_moderate_difficulty_CheckedChanged);
			// 
			// radioButton_easy_difficulty
			// 
			this->radioButton_easy_difficulty->AutoSize = true;
			this->radioButton_easy_difficulty->Location = System::Drawing::Point(16, 37);
			this->radioButton_easy_difficulty->Name = L"radioButton_easy_difficulty";
			this->radioButton_easy_difficulty->Size = System::Drawing::Size(55, 17);
			this->radioButton_easy_difficulty->TabIndex = 1;
			this->radioButton_easy_difficulty->TabStop = true;
			this->radioButton_easy_difficulty->Text = L"\?\?\?\?\?";
			this->radioButton_easy_difficulty->UseVisualStyleBackColor = true;
			this->radioButton_easy_difficulty->CheckedChanged += gcnew System::EventHandler(this, &ForestDolina::radioButton_easy_difficulty_CheckedChanged);
			// 
			// label_difficulty
			// 
			this->label_difficulty->AutoSize = true;
			this->label_difficulty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_difficulty->Location = System::Drawing::Point(12, 14);
			this->label_difficulty->Name = L"label_difficulty";
			this->label_difficulty->Size = System::Drawing::Size(99, 20);
			this->label_difficulty->TabIndex = 0;
			this->label_difficulty->Text = L"\?\?\?\?\?\?\?\?\?";
			// 
			// label_resData
			// 
			this->label_resData->AutoSize = true;
			this->label_resData->Location = System::Drawing::Point(480, 67);
			this->label_resData->Name = L"label_resData";
			this->label_resData->Size = System::Drawing::Size(94, 13);
			this->label_resData->TabIndex = 4;
			this->label_resData->Text = L"\?\?\?\?\?\?\?\? \?\?\?\?\?\?";
			// 
			// picture_butt_resData
			// 
			this->picture_butt_resData->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->picture_butt_resData->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_butt_resData.Image")));
			this->picture_butt_resData->Location = System::Drawing::Point(483, 83);
			this->picture_butt_resData->Name = L"picture_butt_resData";
			this->picture_butt_resData->Size = System::Drawing::Size(108, 118);
			this->picture_butt_resData->TabIndex = 2;
			this->picture_butt_resData->TabStop = false;
			this->picture_butt_resData->Click += gcnew System::EventHandler(this, &ForestDolina::picture_butt_resData_Click);
			// 
			// checkBox_sounds
			// 
			this->checkBox_sounds->AutoSize = true;
			this->checkBox_sounds->Checked = true;
			this->checkBox_sounds->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox_sounds->Location = System::Drawing::Point(374, 103);
			this->checkBox_sounds->Name = L"checkBox_sounds";
			this->checkBox_sounds->Size = System::Drawing::Size(56, 17);
			this->checkBox_sounds->TabIndex = 3;
			this->checkBox_sounds->Text = L"\?\?\?\?\?";
			this->checkBox_sounds->UseVisualStyleBackColor = true;
			this->checkBox_sounds->CheckedChanged += gcnew System::EventHandler(this, &ForestDolina::checkBox_sounds_CheckedChanged);
			// 
			// labelText_setting
			// 
			this->labelText_setting->AutoSize = true;
			this->labelText_setting->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelText_setting->Location = System::Drawing::Point(231, 19);
			this->labelText_setting->Name = L"labelText_setting";
			this->labelText_setting->Size = System::Drawing::Size(170, 37);
			this->labelText_setting->TabIndex = 2;
			this->labelText_setting->Text = L"\?\?\?\?\?\?\?\?\?";
			// 
			// panelLanguage
			// 
			this->panelLanguage->Controls->Add(this->radioButtonLanguage_Eng);
			this->panelLanguage->Controls->Add(this->labelLanguage);
			this->panelLanguage->Controls->Add(this->radioButtonLanguage_Rus);
			this->panelLanguage->Location = System::Drawing::Point(49, 90);
			this->panelLanguage->Name = L"panelLanguage";
			this->panelLanguage->Size = System::Drawing::Size(145, 99);
			this->panelLanguage->TabIndex = 1;
			// 
			// radioButtonLanguage_Eng
			// 
			this->radioButtonLanguage_Eng->AutoSize = true;
			this->radioButtonLanguage_Eng->Location = System::Drawing::Point(17, 64);
			this->radioButtonLanguage_Eng->Name = L"radioButtonLanguage_Eng";
			this->radioButtonLanguage_Eng->Size = System::Drawing::Size(59, 17);
			this->radioButtonLanguage_Eng->TabIndex = 0;
			this->radioButtonLanguage_Eng->TabStop = true;
			this->radioButtonLanguage_Eng->Text = L"English";
			this->radioButtonLanguage_Eng->UseVisualStyleBackColor = true;
			this->radioButtonLanguage_Eng->CheckedChanged += gcnew System::EventHandler(this, &ForestDolina::radioButtonLanguage_Eng_CheckedChanged);
			// 
			// labelLanguage
			// 
			this->labelLanguage->AutoSize = true;
			this->labelLanguage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLanguage->Location = System::Drawing::Point(13, 14);
			this->labelLanguage->Name = L"labelLanguage";
			this->labelLanguage->Size = System::Drawing::Size(50, 24);
			this->labelLanguage->TabIndex = 0;
			this->labelLanguage->Text = L"\?\?\?\?";
			// 
			// radioButtonLanguage_Rus
			// 
			this->radioButtonLanguage_Rus->AutoSize = true;
			this->radioButtonLanguage_Rus->Checked = true;
			this->radioButtonLanguage_Rus->Location = System::Drawing::Point(17, 41);
			this->radioButtonLanguage_Rus->Name = L"radioButtonLanguage_Rus";
			this->radioButtonLanguage_Rus->Size = System::Drawing::Size(67, 17);
			this->radioButtonLanguage_Rus->TabIndex = 0;
			this->radioButtonLanguage_Rus->TabStop = true;
			this->radioButtonLanguage_Rus->Text = L"Русский";
			this->radioButtonLanguage_Rus->UseVisualStyleBackColor = true;
			this->radioButtonLanguage_Rus->CheckedChanged += gcnew System::EventHandler(this, &ForestDolina::radioButtonLanguage_Rus_CheckedChanged);
			// 
			// label_silver
			// 
			this->label_silver->AutoSize = true;
			this->label_silver->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->label_silver->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_silver->Location = System::Drawing::Point(58, 198);
			this->label_silver->Name = L"label_silver";
			this->label_silver->Size = System::Drawing::Size(0, 20);
			this->label_silver->TabIndex = 5;
			this->toolTip1->SetToolTip(this->label_silver, L"\?\?\?\?\?\?\? (0-7000)");
			// 
			// label_gold
			// 
			this->label_gold->AutoSize = true;
			this->label_gold->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->label_gold->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_gold->Location = System::Drawing::Point(167, 198);
			this->label_gold->Name = L"label_gold";
			this->label_gold->Size = System::Drawing::Size(0, 20);
			this->label_gold->TabIndex = 5;
			this->toolTip1->SetToolTip(this->label_gold, L"\?\?\?\?\?\? (0-200)");
			// 
			// label_bread
			// 
			this->label_bread->AutoSize = true;
			this->label_bread->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->label_bread->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_bread->Location = System::Drawing::Point(58, 406);
			this->label_bread->Name = L"label_bread";
			this->label_bread->Size = System::Drawing::Size(0, 20);
			this->label_bread->TabIndex = 5;
			this->toolTip1->SetToolTip(this->label_bread, L"\?\?\?\? (0-200)");
			// 
			// label_coal
			// 
			this->label_coal->AutoSize = true;
			this->label_coal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->label_coal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_coal->Location = System::Drawing::Point(167, 253);
			this->label_coal->Name = L"label_coal";
			this->label_coal->Size = System::Drawing::Size(0, 20);
			this->label_coal->TabIndex = 5;
			this->toolTip1->SetToolTip(this->label_coal, L"\?\?\?\?\? (0-200)");
			// 
			// label_flour
			// 
			this->label_flour->AutoSize = true;
			this->label_flour->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->label_flour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_flour->Location = System::Drawing::Point(167, 356);
			this->label_flour->Name = L"label_flour";
			this->label_flour->Size = System::Drawing::Size(0, 20);
			this->label_flour->TabIndex = 5;
			this->toolTip1->SetToolTip(this->label_flour, L"\?\?\?\? (0-200)");
			// 
			// label_human
			// 
			this->label_human->AutoSize = true;
			this->label_human->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->label_human->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_human->Location = System::Drawing::Point(167, 406);
			this->label_human->Name = L"label_human";
			this->label_human->Size = System::Drawing::Size(0, 20);
			this->label_human->TabIndex = 5;
			this->toolTip1->SetToolTip(this->label_human, L"\?\?\?\?\?\?\?\?\? \?\?\?\?\?\?");
			// 
			// label_iron
			// 
			this->label_iron->AutoSize = true;
			this->label_iron->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->label_iron->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_iron->Location = System::Drawing::Point(167, 305);
			this->label_iron->Name = L"label_iron";
			this->label_iron->Size = System::Drawing::Size(0, 20);
			this->label_iron->TabIndex = 5;
			this->toolTip1->SetToolTip(this->label_iron, L"\?\?\?\?\?\? (0-200)");
			// 
			// label_iron_ore
			// 
			this->label_iron_ore->AutoSize = true;
			this->label_iron_ore->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->label_iron_ore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_iron_ore->Location = System::Drawing::Point(58, 305);
			this->label_iron_ore->Name = L"label_iron_ore";
			this->label_iron_ore->Size = System::Drawing::Size(0, 20);
			this->label_iron_ore->TabIndex = 5;
			this->toolTip1->SetToolTip(this->label_iron_ore, L"\?\?\?\?\?\?\?\? \?\?\?\? (0-200)");
			// 
			// label_wheat
			// 
			this->label_wheat->AutoSize = true;
			this->label_wheat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->label_wheat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_wheat->Location = System::Drawing::Point(58, 356);
			this->label_wheat->Name = L"label_wheat";
			this->label_wheat->Size = System::Drawing::Size(0, 20);
			this->label_wheat->TabIndex = 5;
			this->toolTip1->SetToolTip(this->label_wheat, L"\?\?\?\?\?\?\? (0-200)");
			// 
			// label_wood
			// 
			this->label_wood->AutoSize = true;
			this->label_wood->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->label_wood->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_wood->Location = System::Drawing::Point(58, 253);
			this->label_wood->Name = L"label_wood";
			this->label_wood->Size = System::Drawing::Size(0, 20);
			this->label_wood->TabIndex = 5;
			this->toolTip1->SetToolTip(this->label_wood, L"\?\?\?\?\?\? (0-200)");
			// 
			// picture_butt_setting
			// 
			this->picture_butt_setting->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_butt_setting.BackgroundImage")));
			this->picture_butt_setting->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->picture_butt_setting->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picture_butt_setting->Location = System::Drawing::Point(1066, 552);
			this->picture_butt_setting->Name = L"picture_butt_setting";
			this->picture_butt_setting->Size = System::Drawing::Size(60, 59);
			this->picture_butt_setting->TabIndex = 2;
			this->picture_butt_setting->TabStop = false;
			this->toolTip1->SetToolTip(this->picture_butt_setting, L"\?\?\?\?\?\?\?\?\?");
			this->picture_butt_setting->Click += gcnew System::EventHandler(this, &ForestDolina::picture_butt_setting_Click);
			// 
			// pictureButt_protection
			// 
			this->pictureButt_protection->BackColor = System::Drawing::SystemColors::Control;
			this->pictureButt_protection->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureButt_protection.BackgroundImage")));
			this->pictureButt_protection->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureButt_protection->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureButt_protection->Location = System::Drawing::Point(1000, 552);
			this->pictureButt_protection->Name = L"pictureButt_protection";
			this->pictureButt_protection->Size = System::Drawing::Size(60, 59);
			this->pictureButt_protection->TabIndex = 8;
			this->pictureButt_protection->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureButt_protection, L"\?\?\?\?\?\?\?");
			this->pictureButt_protection->Click += gcnew System::EventHandler(this, &ForestDolina::pictureButt_protection_Click);
			// 
			// pictureButt_windmill
			// 
			this->pictureButt_windmill->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureButt_windmill.BackgroundImage")));
			this->pictureButt_windmill->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureButt_windmill->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureButt_windmill->Location = System::Drawing::Point(868, 552);
			this->pictureButt_windmill->Name = L"pictureButt_windmill";
			this->pictureButt_windmill->Size = System::Drawing::Size(60, 59);
			this->pictureButt_windmill->TabIndex = 8;
			this->pictureButt_windmill->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureButt_windmill, L"\?\?\?\?\?\?\?\?");
			this->pictureButt_windmill->Click += gcnew System::EventHandler(this, &ForestDolina::pictureButt_windmill_Click);
			// 
			// pictureButt_bakery
			// 
			this->pictureButt_bakery->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureButt_bakery.BackgroundImage")));
			this->pictureButt_bakery->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureButt_bakery->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureButt_bakery->Location = System::Drawing::Point(934, 552);
			this->pictureButt_bakery->Name = L"pictureButt_bakery";
			this->pictureButt_bakery->Size = System::Drawing::Size(60, 59);
			this->pictureButt_bakery->TabIndex = 8;
			this->pictureButt_bakery->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureButt_bakery, L"\?\?\?\?\?\?\?");
			this->pictureButt_bakery->Click += gcnew System::EventHandler(this, &ForestDolina::pictureButt_bakery_Click);
			// 
			// pictureButt_market
			// 
			this->pictureButt_market->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureButt_market.BackgroundImage")));
			this->pictureButt_market->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureButt_market->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureButt_market->Location = System::Drawing::Point(736, 552);
			this->pictureButt_market->Name = L"pictureButt_market";
			this->pictureButt_market->Size = System::Drawing::Size(60, 59);
			this->pictureButt_market->TabIndex = 8;
			this->pictureButt_market->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureButt_market, L"\?\?\?\?\?");
			this->pictureButt_market->Click += gcnew System::EventHandler(this, &ForestDolina::pictureButt_market_Click);
			// 
			// pictureButt_mine
			// 
			this->pictureButt_mine->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureButt_mine.BackgroundImage")));
			this->pictureButt_mine->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureButt_mine->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureButt_mine->Location = System::Drawing::Point(472, 552);
			this->pictureButt_mine->Name = L"pictureButt_mine";
			this->pictureButt_mine->Size = System::Drawing::Size(60, 59);
			this->pictureButt_mine->TabIndex = 8;
			this->pictureButt_mine->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureButt_mine, L"\?\?\?\?\?");
			this->pictureButt_mine->Click += gcnew System::EventHandler(this, &ForestDolina::pictureButt_mine_Click);
			// 
			// pictureButt_farm
			// 
			this->pictureButt_farm->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureButt_farm.BackgroundImage")));
			this->pictureButt_farm->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureButt_farm->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureButt_farm->Location = System::Drawing::Point(802, 552);
			this->pictureButt_farm->Name = L"pictureButt_farm";
			this->pictureButt_farm->Size = System::Drawing::Size(60, 59);
			this->pictureButt_farm->TabIndex = 8;
			this->pictureButt_farm->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureButt_farm, L"\?\?\?\?\?");
			this->pictureButt_farm->Click += gcnew System::EventHandler(this, &ForestDolina::pictureButt_farm_Click);
			// 
			// pictureButt_bake
			// 
			this->pictureButt_bake->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureButt_bake.BackgroundImage")));
			this->pictureButt_bake->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureButt_bake->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureButt_bake->Location = System::Drawing::Point(538, 552);
			this->pictureButt_bake->Name = L"pictureButt_bake";
			this->pictureButt_bake->Size = System::Drawing::Size(60, 59);
			this->pictureButt_bake->TabIndex = 8;
			this->pictureButt_bake->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureButt_bake, L"\?\?\?\?\?\?\?\?\?");
			this->pictureButt_bake->Click += gcnew System::EventHandler(this, &ForestDolina::pictureButt_bake_Click);
			// 
			// pictureButt_sawmill
			// 
			this->pictureButt_sawmill->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureButt_sawmill.BackgroundImage")));
			this->pictureButt_sawmill->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureButt_sawmill->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureButt_sawmill->Location = System::Drawing::Point(604, 552);
			this->pictureButt_sawmill->Name = L"pictureButt_sawmill";
			this->pictureButt_sawmill->Size = System::Drawing::Size(60, 59);
			this->pictureButt_sawmill->TabIndex = 8;
			this->pictureButt_sawmill->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureButt_sawmill, L"\?\?\?\?\?\?\?\?\?");
			this->pictureButt_sawmill->Click += gcnew System::EventHandler(this, &ForestDolina::pictureButt_sawmill_Click);
			// 
			// pictureButt_village
			// 
			this->pictureButt_village->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureButt_village.BackgroundImage")));
			this->pictureButt_village->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureButt_village->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureButt_village->Location = System::Drawing::Point(670, 552);
			this->pictureButt_village->Name = L"pictureButt_village";
			this->pictureButt_village->Size = System::Drawing::Size(60, 59);
			this->pictureButt_village->TabIndex = 8;
			this->pictureButt_village->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureButt_village, L"\?\?\?\?\?\?\?\?\?");
			this->pictureButt_village->Click += gcnew System::EventHandler(this, &ForestDolina::pictureButt_village_Click);
			// 
			// pictureButt_mainhome
			// 
			this->pictureButt_mainhome->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureButt_mainhome.BackgroundImage")));
			this->pictureButt_mainhome->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureButt_mainhome->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureButt_mainhome->Location = System::Drawing::Point(406, 552);
			this->pictureButt_mainhome->Name = L"pictureButt_mainhome";
			this->pictureButt_mainhome->Size = System::Drawing::Size(60, 59);
			this->pictureButt_mainhome->TabIndex = 8;
			this->pictureButt_mainhome->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureButt_mainhome, L"\?\?\?\?\?\?");
			this->pictureButt_mainhome->Click += gcnew System::EventHandler(this, &ForestDolina::pictureButt_mainhome_Click);
			// 
			// pictureButtShop
			// 
			this->pictureButtShop->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureButtShop.BackgroundImage")));
			this->pictureButtShop->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureButtShop->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureButtShop->Location = System::Drawing::Point(3, 481);
			this->pictureButtShop->Name = L"pictureButtShop";
			this->pictureButtShop->Size = System::Drawing::Size(147, 128);
			this->pictureButtShop->TabIndex = 8;
			this->pictureButtShop->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureButtShop, L"\?\?\?\?\?\?\?");
			this->pictureButtShop->Click += gcnew System::EventHandler(this, &ForestDolina::pictureButtShop_Click);
			// 
			// pictureBox_resurs
			// 
			this->pictureBox_resurs->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_resurs.BackgroundImage")));
			this->pictureBox_resurs->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox_resurs->Location = System::Drawing::Point(-25, 169);
			this->pictureBox_resurs->Name = L"pictureBox_resurs";
			this->pictureBox_resurs->Size = System::Drawing::Size(282, 276);
			this->pictureBox_resurs->TabIndex = 0;
			this->pictureBox_resurs->TabStop = false;
			// 
			// pictureButtSave
			// 
			this->pictureButtSave->BackColor = System::Drawing::SystemColors::Control;
			this->pictureButtSave->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureButtSave->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureButtSave.Image")));
			this->pictureButtSave->Location = System::Drawing::Point(1265, 4);
			this->pictureButtSave->Name = L"pictureButtSave";
			this->pictureButtSave->Size = System::Drawing::Size(134, 59);
			this->pictureButtSave->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureButtSave->TabIndex = 2;
			this->pictureButtSave->TabStop = false;
			this->pictureButtSave->Click += gcnew System::EventHandler(this, &ForestDolina::pictureButtSave_Click);
			// 
			// labelButtSave
			// 
			this->labelButtSave->AutoSize = true;
			this->labelButtSave->Cursor = System::Windows::Forms::Cursors::Hand;
			this->labelButtSave->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelButtSave.Image")));
			this->labelButtSave->Location = System::Drawing::Point(1299, 25);
			this->labelButtSave->Name = L"labelButtSave";
			this->labelButtSave->Size = System::Drawing::Size(61, 13);
			this->labelButtSave->TabIndex = 4;
			this->labelButtSave->Text = L"\?\?\?\?\?\?\?\?\?";
			this->labelButtSave->Click += gcnew System::EventHandler(this, &ForestDolina::labelButtSave_Click);
			// 
			// panel_vis_resurs
			// 
			this->panel_vis_resurs->Controls->Add(this->label_LEVEL);
			this->panel_vis_resurs->Controls->Add(this->label_bread);
			this->panel_vis_resurs->Controls->Add(this->label_human);
			this->panel_vis_resurs->Controls->Add(this->pictureButtShop);
			this->panel_vis_resurs->Controls->Add(this->label_wheat);
			this->panel_vis_resurs->Controls->Add(this->label_flour);
			this->panel_vis_resurs->Controls->Add(this->label_wood);
			this->panel_vis_resurs->Controls->Add(this->label_iron);
			this->panel_vis_resurs->Controls->Add(this->label_coal);
			this->panel_vis_resurs->Controls->Add(this->label_iron_ore);
			this->panel_vis_resurs->Controls->Add(this->label_gold);
			this->panel_vis_resurs->Controls->Add(this->label_silver);
			this->panel_vis_resurs->Controls->Add(this->pictureBox_resurs);
			this->panel_vis_resurs->Controls->Add(this->pictureBox1);
			this->panel_vis_resurs->Location = System::Drawing::Point(0, 2);
			this->panel_vis_resurs->Name = L"panel_vis_resurs";
			this->panel_vis_resurs->Size = System::Drawing::Size(261, 662);
			this->panel_vis_resurs->TabIndex = 6;
			// 
			// label_LEVEL
			// 
			this->label_LEVEL->AutoSize = true;
			this->label_LEVEL->BackColor = System::Drawing::Color::SaddleBrown;
			this->label_LEVEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_LEVEL->Location = System::Drawing::Point(96, 119);
			this->label_LEVEL->Name = L"label_LEVEL";
			this->label_LEVEL->Size = System::Drawing::Size(54, 13);
			this->label_LEVEL->TabIndex = 4;
			this->label_LEVEL->Text = L" Level -99";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(-8, -49);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(265, 263);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// pictureButtDownload
			// 
			this->pictureButtDownload->BackColor = System::Drawing::SystemColors::Control;
			this->pictureButtDownload->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureButtDownload->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureButtDownload.Image")));
			this->pictureButtDownload->Location = System::Drawing::Point(1265, 58);
			this->pictureButtDownload->Name = L"pictureButtDownload";
			this->pictureButtDownload->Size = System::Drawing::Size(134, 59);
			this->pictureButtDownload->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureButtDownload->TabIndex = 2;
			this->pictureButtDownload->TabStop = false;
			this->pictureButtDownload->Click += gcnew System::EventHandler(this, &ForestDolina::pictureButtDownload_Click);
			// 
			// labelButtDownload
			// 
			this->labelButtDownload->AutoSize = true;
			this->labelButtDownload->Cursor = System::Windows::Forms::Cursors::Hand;
			this->labelButtDownload->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelButtDownload.Image")));
			this->labelButtDownload->Location = System::Drawing::Point(1299, 78);
			this->labelButtDownload->Name = L"labelButtDownload";
			this->labelButtDownload->Size = System::Drawing::Size(61, 13);
			this->labelButtDownload->TabIndex = 4;
			this->labelButtDownload->Text = L"\?\?\?\?\?\?\?\?\?";
			this->labelButtDownload->Click += gcnew System::EventHandler(this, &ForestDolina::labelButtDownload_Click);
			// 
			// panel_mine
			// 
			this->panel_mine->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_mine.BackgroundImage")));
			this->panel_mine->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel_mine->Controls->Add(this->label_mine_info);
			this->panel_mine->Controls->Add(this->label_mine_levelM);
			this->panel_mine->Controls->Add(this->pictureBox_butt_pickaxe);
			this->panel_mine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->panel_mine->Location = System::Drawing::Point(294, 25);
			this->panel_mine->Name = L"panel_mine";
			this->panel_mine->Size = System::Drawing::Size(945, 501);
			this->panel_mine->TabIndex = 9;
			this->panel_mine->Visible = false;
			// 
			// label_mine_info
			// 
			this->label_mine_info->AutoSize = true;
			this->label_mine_info->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_mine_info->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label_mine_info.Image")));
			this->label_mine_info->Location = System::Drawing::Point(323, 373);
			this->label_mine_info->Name = L"label_mine_info";
			this->label_mine_info->Size = System::Drawing::Size(0, 25);
			this->label_mine_info->TabIndex = 2;
			// 
			// label_mine_levelM
			// 
			this->label_mine_levelM->AutoSize = true;
			this->label_mine_levelM->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label_mine_levelM->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->label_mine_levelM->Location = System::Drawing::Point(3, 4);
			this->label_mine_levelM->Name = L"label_mine_levelM";
			this->label_mine_levelM->Size = System::Drawing::Size(35, 13);
			this->label_mine_levelM->TabIndex = 1;
			this->label_mine_levelM->Text = L"label1";
			// 
			// pictureBox_butt_pickaxe
			// 
			this->pictureBox_butt_pickaxe->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->pictureBox_butt_pickaxe->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox_butt_pickaxe->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_butt_pickaxe.Image")));
			this->pictureBox_butt_pickaxe->Location = System::Drawing::Point(3, 383);
			this->pictureBox_butt_pickaxe->Name = L"pictureBox_butt_pickaxe";
			this->pictureBox_butt_pickaxe->Size = System::Drawing::Size(110, 115);
			this->pictureBox_butt_pickaxe->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox_butt_pickaxe->TabIndex = 0;
			this->pictureBox_butt_pickaxe->TabStop = false;
			this->pictureBox_butt_pickaxe->Click += gcnew System::EventHandler(this, &ForestDolina::pictureBox_butt_pickaxe_Click);
			// 
			// panel_bake
			// 
			this->panel_bake->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_bake.BackgroundImage")));
			this->panel_bake->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel_bake->Controls->Add(this->label_bake_info);
			this->panel_bake->Controls->Add(this->label_bake_level);
			this->panel_bake->Controls->Add(this->button_bake);
			this->panel_bake->Location = System::Drawing::Point(294, 25);
			this->panel_bake->Name = L"panel_bake";
			this->panel_bake->Size = System::Drawing::Size(945, 501);
			this->panel_bake->TabIndex = 10;
			this->panel_bake->Visible = false;
			// 
			// label_bake_info
			// 
			this->label_bake_info->AutoSize = true;
			this->label_bake_info->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_bake_info->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label_bake_info.Image")));
			this->label_bake_info->Location = System::Drawing::Point(21, 17);
			this->label_bake_info->Name = L"label_bake_info";
			this->label_bake_info->Size = System::Drawing::Size(0, 25);
			this->label_bake_info->TabIndex = 2;
			// 
			// label_bake_level
			// 
			this->label_bake_level->AutoSize = true;
			this->label_bake_level->BackColor = System::Drawing::Color::SlateGray;
			this->label_bake_level->Location = System::Drawing::Point(0, 0);
			this->label_bake_level->Name = L"label_bake_level";
			this->label_bake_level->Size = System::Drawing::Size(35, 13);
			this->label_bake_level->TabIndex = 1;
			this->label_bake_level->Text = L"label1";
			// 
			// button_bake
			// 
			this->button_bake->BackColor = System::Drawing::Color::Green;
			this->button_bake->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button_bake->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_bake->Location = System::Drawing::Point(26, 408);
			this->button_bake->Name = L"button_bake";
			this->button_bake->Size = System::Drawing::Size(109, 71);
			this->button_bake->TabIndex = 0;
			this->button_bake->UseVisualStyleBackColor = false;
			this->button_bake->Click += gcnew System::EventHandler(this, &ForestDolina::button_bake_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(-2000, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1417, 632);
			this->pictureBox2->TabIndex = 11;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &ForestDolina::pictureBox2_Click_1);
			// 
			// panel_sawmill
			// 
			this->panel_sawmill->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_sawmill.BackgroundImage")));
			this->panel_sawmill->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel_sawmill->Controls->Add(this->pictureBox_sawmill_axe);
			this->panel_sawmill->Controls->Add(this->label_sawmill_info);
			this->panel_sawmill->Controls->Add(this->label_sawmill_level);
			this->panel_sawmill->Location = System::Drawing::Point(294, 25);
			this->panel_sawmill->Name = L"panel_sawmill";
			this->panel_sawmill->Size = System::Drawing::Size(945, 501);
			this->panel_sawmill->TabIndex = 12;
			this->panel_sawmill->Visible = false;
			// 
			// pictureBox_sawmill_axe
			// 
			this->pictureBox_sawmill_axe->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->pictureBox_sawmill_axe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_sawmill_axe.BackgroundImage")));
			this->pictureBox_sawmill_axe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox_sawmill_axe->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_sawmill_axe.Image")));
			this->pictureBox_sawmill_axe->Location = System::Drawing::Point(6, 380);
			this->pictureBox_sawmill_axe->Name = L"pictureBox_sawmill_axe";
			this->pictureBox_sawmill_axe->Size = System::Drawing::Size(110, 118);
			this->pictureBox_sawmill_axe->TabIndex = 15;
			this->pictureBox_sawmill_axe->TabStop = false;
			this->pictureBox_sawmill_axe->Click += gcnew System::EventHandler(this, &ForestDolina::pictureBox_sawmill_axe_Click);
			// 
			// label_sawmill_info
			// 
			this->label_sawmill_info->AutoSize = true;
			this->label_sawmill_info->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_sawmill_info->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label_sawmill_info.Image")));
			this->label_sawmill_info->Location = System::Drawing::Point(323, 16);
			this->label_sawmill_info->Name = L"label_sawmill_info";
			this->label_sawmill_info->Size = System::Drawing::Size(324, 50);
			this->label_sawmill_info->TabIndex = 14;
			this->label_sawmill_info->Text = L"\?\?\?\?\?\? \?\?\?\?\?\?\?\?\?: 10 \?\?\?\?\?\?\?\r\n  \?\?\?\?\?\? 1-2";
			// 
			// label_sawmill_level
			// 
			this->label_sawmill_level->AutoSize = true;
			this->label_sawmill_level->BackColor = System::Drawing::Color::CornflowerBlue;
			this->label_sawmill_level->Location = System::Drawing::Point(-3, 0);
			this->label_sawmill_level->Name = L"label_sawmill_level";
			this->label_sawmill_level->Size = System::Drawing::Size(35, 13);
			this->label_sawmill_level->TabIndex = 13;
			this->label_sawmill_level->Text = L"label1";
			// 
			// panel_vilage
			// 
			this->panel_vilage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_vilage.BackgroundImage")));
			this->panel_vilage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel_vilage->Controls->Add(this->label_vilage_info);
			this->panel_vilage->Location = System::Drawing::Point(294, 25);
			this->panel_vilage->Name = L"panel_vilage";
			this->panel_vilage->Size = System::Drawing::Size(945, 501);
			this->panel_vilage->TabIndex = 13;
			this->panel_vilage->Visible = false;
			// 
			// label_vilage_info
			// 
			this->label_vilage_info->AutoSize = true;
			this->label_vilage_info->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_vilage_info->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label_vilage_info.Image")));
			this->label_vilage_info->Location = System::Drawing::Point(21, 33);
			this->label_vilage_info->Name = L"label_vilage_info";
			this->label_vilage_info->Size = System::Drawing::Size(252, 50);
			this->label_vilage_info->TabIndex = 0;
			this->label_vilage_info->Text = L"\?\?\?\?\?\?\?\?\? 1\r\n \?\?\?\?\?\?\?\?\?: 20 \?\?\?\?\?\?\?";
			// 
			// panel_market
			// 
			this->panel_market->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_market.BackgroundImage")));
			this->panel_market->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel_market->Controls->Add(this->butt_market_4);
			this->panel_market->Controls->Add(this->butt_market_3);
			this->panel_market->Controls->Add(this->butt_market_2);
			this->panel_market->Controls->Add(this->butt_market_1);
			this->panel_market->Controls->Add(this->label_market_info);
			this->panel_market->Location = System::Drawing::Point(294, 25);
			this->panel_market->Name = L"panel_market";
			this->panel_market->Size = System::Drawing::Size(945, 501);
			this->panel_market->TabIndex = 14;
			this->panel_market->Visible = false;
			// 
			// butt_market_4
			// 
			this->butt_market_4->BackColor = System::Drawing::Color::White;
			this->butt_market_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butt_market_4.BackgroundImage")));
			this->butt_market_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->butt_market_4->Location = System::Drawing::Point(618, 181);
			this->butt_market_4->Name = L"butt_market_4";
			this->butt_market_4->Size = System::Drawing::Size(100, 100);
			this->butt_market_4->TabIndex = 1;
			this->butt_market_4->TabStop = false;
			this->butt_market_4->Click += gcnew System::EventHandler(this, &ForestDolina::butt_market_4_Click);
			// 
			// butt_market_3
			// 
			this->butt_market_3->BackColor = System::Drawing::Color::White;
			this->butt_market_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butt_market_3.BackgroundImage")));
			this->butt_market_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->butt_market_3->Location = System::Drawing::Point(479, 181);
			this->butt_market_3->Name = L"butt_market_3";
			this->butt_market_3->Size = System::Drawing::Size(100, 100);
			this->butt_market_3->TabIndex = 1;
			this->butt_market_3->TabStop = false;
			this->butt_market_3->Click += gcnew System::EventHandler(this, &ForestDolina::butt_market_3_Click);
			// 
			// butt_market_2
			// 
			this->butt_market_2->BackColor = System::Drawing::Color::White;
			this->butt_market_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butt_market_2.BackgroundImage")));
			this->butt_market_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->butt_market_2->Location = System::Drawing::Point(350, 181);
			this->butt_market_2->Name = L"butt_market_2";
			this->butt_market_2->Size = System::Drawing::Size(100, 100);
			this->butt_market_2->TabIndex = 1;
			this->butt_market_2->TabStop = false;
			this->butt_market_2->Click += gcnew System::EventHandler(this, &ForestDolina::butt_market_2_Click);
			// 
			// butt_market_1
			// 
			this->butt_market_1->BackColor = System::Drawing::Color::White;
			this->butt_market_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butt_market_1.BackgroundImage")));
			this->butt_market_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->butt_market_1->Location = System::Drawing::Point(223, 181);
			this->butt_market_1->Name = L"butt_market_1";
			this->butt_market_1->Size = System::Drawing::Size(100, 100);
			this->butt_market_1->TabIndex = 1;
			this->butt_market_1->TabStop = false;
			this->butt_market_1->Click += gcnew System::EventHandler(this, &ForestDolina::butt_market_1_Click);
			// 
			// label_market_info
			// 
			this->label_market_info->AutoSize = true;
			this->label_market_info->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_market_info->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label_market_info.Image")));
			this->label_market_info->Location = System::Drawing::Point(305, 3);
			this->label_market_info->Name = L"label_market_info";
			this->label_market_info->Size = System::Drawing::Size(0, 25);
			this->label_market_info->TabIndex = 0;
			// 
			// panel_farm
			// 
			this->panel_farm->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_farm.BackgroundImage")));
			this->panel_farm->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel_farm->Controls->Add(this->butt_farm_1);
			this->panel_farm->Controls->Add(this->label_farm_info);
			this->panel_farm->Controls->Add(this->label_farm_level);
			this->panel_farm->Location = System::Drawing::Point(294, 25);
			this->panel_farm->Name = L"panel_farm";
			this->panel_farm->Size = System::Drawing::Size(945, 501);
			this->panel_farm->TabIndex = 15;
			this->panel_farm->Visible = false;
			// 
			// butt_farm_1
			// 
			this->butt_farm_1->BackColor = System::Drawing::Color::DarkGreen;
			this->butt_farm_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butt_farm_1.BackgroundImage")));
			this->butt_farm_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->butt_farm_1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->butt_farm_1->Location = System::Drawing::Point(796, 333);
			this->butt_farm_1->Name = L"butt_farm_1";
			this->butt_farm_1->Size = System::Drawing::Size(146, 165);
			this->butt_farm_1->TabIndex = 2;
			this->butt_farm_1->TabStop = false;
			this->butt_farm_1->Click += gcnew System::EventHandler(this, &ForestDolina::butt_farm_1_Click);
			// 
			// label_farm_info
			// 
			this->label_farm_info->AutoSize = true;
			this->label_farm_info->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_farm_info->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label_farm_info.Image")));
			this->label_farm_info->Location = System::Drawing::Point(595, 11);
			this->label_farm_info->Name = L"label_farm_info";
			this->label_farm_info->Size = System::Drawing::Size(312, 50);
			this->label_farm_info->TabIndex = 1;
			this->label_farm_info->Text = L"\?\?\?\?\?\? \?\?\?\?\?\?\?\?: 10 \?\?\?\?\?\?\?\r\n  \?\?\?\?\?\?\? 2";
			// 
			// label_farm_level
			// 
			this->label_farm_level->AutoSize = true;
			this->label_farm_level->BackColor = System::Drawing::Color::PowderBlue;
			this->label_farm_level->Location = System::Drawing::Point(0, 0);
			this->label_farm_level->Name = L"label_farm_level";
			this->label_farm_level->Size = System::Drawing::Size(35, 13);
			this->label_farm_level->TabIndex = 0;
			this->label_farm_level->Text = L"label1";
			// 
			// panel_windmill
			// 
			this->panel_windmill->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_windmill.BackgroundImage")));
			this->panel_windmill->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel_windmill->Controls->Add(this->butt_windmill_1);
			this->panel_windmill->Controls->Add(this->label_windmill_info_);
			this->panel_windmill->Controls->Add(this->label_windmill_level);
			this->panel_windmill->Location = System::Drawing::Point(294, 25);
			this->panel_windmill->Name = L"panel_windmill";
			this->panel_windmill->Size = System::Drawing::Size(945, 501);
			this->panel_windmill->TabIndex = 16;
			this->panel_windmill->Visible = false;
			// 
			// butt_windmill_1
			// 
			this->butt_windmill_1->BackColor = System::Drawing::Color::Bisque;
			this->butt_windmill_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butt_windmill_1->ForeColor = System::Drawing::Color::OliveDrab;
			this->butt_windmill_1->Location = System::Drawing::Point(808, 407);
			this->butt_windmill_1->Name = L"butt_windmill_1";
			this->butt_windmill_1->Size = System::Drawing::Size(123, 83);
			this->butt_windmill_1->TabIndex = 2;
			this->butt_windmill_1->Text = L"button2";
			this->butt_windmill_1->UseVisualStyleBackColor = false;
			this->butt_windmill_1->Click += gcnew System::EventHandler(this, &ForestDolina::butt_windmill_1_Click);
			// 
			// label_windmill_info_
			// 
			this->label_windmill_info_->AutoSize = true;
			this->label_windmill_info_->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_windmill_info_->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label_windmill_info_.Image")));
			this->label_windmill_info_->Location = System::Drawing::Point(58, 87);
			this->label_windmill_info_->Name = L"label_windmill_info_";
			this->label_windmill_info_->Size = System::Drawing::Size(300, 100);
			this->label_windmill_info_->TabIndex = 1;
			this->label_windmill_info_->Text = L"\?\?\? \?\?\?\?\?\?\?\?\? \?\?\?\?\? \?\?\?\?\?:\r\n  \?\?\?\?\?\?\? 2\r\n \?\?\?\?\?\?\?\?:\r\n  \?\?\?\? 1";
			// 
			// label_windmill_level
			// 
			this->label_windmill_level->AutoSize = true;
			this->label_windmill_level->BackColor = System::Drawing::Color::LightBlue;
			this->label_windmill_level->Location = System::Drawing::Point(-3, 0);
			this->label_windmill_level->Name = L"label_windmill_level";
			this->label_windmill_level->Size = System::Drawing::Size(35, 13);
			this->label_windmill_level->TabIndex = 0;
			this->label_windmill_level->Text = L"label1";
			// 
			// panel_bakery
			// 
			this->panel_bakery->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_bakery.BackgroundImage")));
			this->panel_bakery->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel_bakery->Controls->Add(this->butt_bakery_1);
			this->panel_bakery->Controls->Add(this->label_bakery_info);
			this->panel_bakery->Controls->Add(this->label_bakery_level);
			this->panel_bakery->Location = System::Drawing::Point(294, 25);
			this->panel_bakery->Name = L"panel_bakery";
			this->panel_bakery->Size = System::Drawing::Size(945, 501);
			this->panel_bakery->TabIndex = 17;
			this->panel_bakery->Visible = false;
			// 
			// butt_bakery_1
			// 
			this->butt_bakery_1->BackColor = System::Drawing::Color::Chocolate;
			this->butt_bakery_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butt_bakery_1->Location = System::Drawing::Point(835, 416);
			this->butt_bakery_1->Name = L"butt_bakery_1";
			this->butt_bakery_1->Size = System::Drawing::Size(107, 82);
			this->butt_bakery_1->TabIndex = 2;
			this->butt_bakery_1->Text = L"button2";
			this->butt_bakery_1->UseVisualStyleBackColor = false;
			this->butt_bakery_1->Click += gcnew System::EventHandler(this, &ForestDolina::butt_bakery_1_Click);
			// 
			// label_bakery_info
			// 
			this->label_bakery_info->AutoSize = true;
			this->label_bakery_info->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_bakery_info->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label_bakery_info.Image")));
			this->label_bakery_info->Location = System::Drawing::Point(21, 44);
			this->label_bakery_info->Name = L"label_bakery_info";
			this->label_bakery_info->Size = System::Drawing::Size(174, 125);
			this->label_bakery_info->TabIndex = 1;
			this->label_bakery_info->Text = L"\?\?\?\?\?\? \?\?\?\? \?\?:\r\n  \?\?\?\?\? 1\r\n  \?\?\?\? 2\r\n \?\?\?\?\?\?\?\?:\r\n  \?\?\?\? 1";
			// 
			// label_bakery_level
			// 
			this->label_bakery_level->AutoSize = true;
			this->label_bakery_level->BackColor = System::Drawing::Color::SaddleBrown;
			this->label_bakery_level->ForeColor = System::Drawing::SystemColors::Control;
			this->label_bakery_level->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label_bakery_level.Image")));
			this->label_bakery_level->Location = System::Drawing::Point(3, 0);
			this->label_bakery_level->Name = L"label_bakery_level";
			this->label_bakery_level->Size = System::Drawing::Size(35, 13);
			this->label_bakery_level->TabIndex = 0;
			this->label_bakery_level->Text = L"label1";
			// 
			// panel_protect
			// 
			this->panel_protect->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_protect.BackgroundImage")));
			this->panel_protect->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel_protect->Controls->Add(this->panel_task1);
			this->panel_protect->Controls->Add(this->label_protect_info);
			this->panel_protect->Location = System::Drawing::Point(294, 25);
			this->panel_protect->Name = L"panel_protect";
			this->panel_protect->Size = System::Drawing::Size(945, 501);
			this->panel_protect->TabIndex = 18;
			this->panel_protect->Visible = false;
			// 
			// panel_task1
			// 
			this->panel_task1->BackColor = System::Drawing::SystemColors::Info;
			this->panel_task1->Controls->Add(this->label_task_info);
			this->panel_task1->Controls->Add(this->label_task1_log);
			this->panel_task1->Location = System::Drawing::Point(132, 146);
			this->panel_task1->Name = L"panel_task1";
			this->panel_task1->Size = System::Drawing::Size(634, 230);
			this->panel_task1->TabIndex = 1;
			this->panel_task1->Visible = false;
			// 
			// label_task_info
			// 
			this->label_task_info->AutoSize = true;
			this->label_task_info->Location = System::Drawing::Point(88, 84);
			this->label_task_info->Name = L"label_task_info";
			this->label_task_info->Size = System::Drawing::Size(35, 13);
			this->label_task_info->TabIndex = 1;
			this->label_task_info->Text = L"label1";
			// 
			// label_task1_log
			// 
			this->label_task1_log->AutoSize = true;
			this->label_task1_log->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_task1_log->Location = System::Drawing::Point(238, 15);
			this->label_task1_log->Name = L"label_task1_log";
			this->label_task1_log->Size = System::Drawing::Size(168, 42);
			this->label_task1_log->TabIndex = 0;
			this->label_task1_log->Text = L"Задание";
			// 
			// label_protect_info
			// 
			this->label_protect_info->AutoSize = true;
			this->label_protect_info->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_protect_info->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label_protect_info.Image")));
			this->label_protect_info->Location = System::Drawing::Point(27, 13);
			this->label_protect_info->Name = L"label_protect_info";
			this->label_protect_info->Size = System::Drawing::Size(301, 50);
			this->label_protect_info->TabIndex = 0;
			this->label_protect_info->Text = L"\?\?\?\?\?\?\? \?\?\?\?\?\?\?\?\? 1\r\n  30% \?\?\?\?\?\? \?\? \?\?\?\?\?\?\?\?\?\?";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(606, 206);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(352, 148);
			this->pictureBox3->TabIndex = 19;
			this->pictureBox3->TabStop = false;
			// 
			// picture_butt_tasksLOG
			// 
			this->picture_butt_tasksLOG->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_butt_tasksLOG.BackgroundImage")));
			this->picture_butt_tasksLOG->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->picture_butt_tasksLOG->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picture_butt_tasksLOG->Location = System::Drawing::Point(1288, 149);
			this->picture_butt_tasksLOG->Name = L"picture_butt_tasksLOG";
			this->picture_butt_tasksLOG->Size = System::Drawing::Size(92, 91);
			this->picture_butt_tasksLOG->TabIndex = 20;
			this->picture_butt_tasksLOG->TabStop = false;
			this->picture_butt_tasksLOG->Click += gcnew System::EventHandler(this, &ForestDolina::picture_butt_tasksLOG_Click);
			// 
			// label_tasksG_text
			// 
			this->label_tasksG_text->AutoSize = true;
			this->label_tasksG_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_tasksG_text->Location = System::Drawing::Point(1299, 129);
			this->label_tasksG_text->Name = L"label_tasksG_text";
			this->label_tasksG_text->Size = System::Drawing::Size(72, 18);
			this->label_tasksG_text->TabIndex = 21;
			this->label_tasksG_text->Text = L"задания";
			// 
			// picture_butt_tasks2
			// 
			this->picture_butt_tasks2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_butt_tasks2.BackgroundImage")));
			this->picture_butt_tasks2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->picture_butt_tasks2->Location = System::Drawing::Point(1288, 246);
			this->picture_butt_tasks2->Name = L"picture_butt_tasks2";
			this->picture_butt_tasks2->Size = System::Drawing::Size(92, 91);
			this->picture_butt_tasks2->TabIndex = 20;
			this->picture_butt_tasks2->TabStop = false;
			// 
			// ForestDolina
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1400, 613);
			this->Controls->Add(this->picture_butt_tasksLOG);
			this->Controls->Add(this->label_tasksG_text);
			this->Controls->Add(this->picture_butt_tasks2);
			this->Controls->Add(this->panelMenuSetting);
			this->Controls->Add(this->panel_protect);
			this->Controls->Add(this->panel_bakery);
			this->Controls->Add(this->panel_windmill);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel_farm);
			this->Controls->Add(this->panel_market);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel_vilage);
			this->Controls->Add(this->panel_sawmill);
			this->Controls->Add(this->panel_bake);
			this->Controls->Add(this->panel_mine);
			this->Controls->Add(this->pictureButt_protection);
			this->Controls->Add(this->pictureButt_market);
			this->Controls->Add(this->pictureButt_windmill);
			this->Controls->Add(this->pictureButt_bakery);
			this->Controls->Add(this->picture_butt_setting);
			this->Controls->Add(this->labelButtDownload);
			this->Controls->Add(this->pictureButt_farm);
			this->Controls->Add(this->pictureButt_mine);
			this->Controls->Add(this->labelButtSave);
			this->Controls->Add(this->pictureButt_village);
			this->Controls->Add(this->pictureButtDownload);
			this->Controls->Add(this->pictureButt_bake);
			this->Controls->Add(this->pictureButtSave);
			this->Controls->Add(this->pictureButt_sawmill);
			this->Controls->Add(this->panel_vis_resurs);
			this->Controls->Add(this->pictureButt_mainhome);
			this->Controls->Add(this->panel_shop);
			this->Controls->Add(this->pictureBox3);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ForestDolina";
			this->Text = L"Forest Dolina";
			this->panel_shop->ResumeLayout(false);
			this->panel_shop->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_butt_obm))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_shop_silverITEM))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_shop_goldITEM))->EndInit();
			this->panelMenuSetting->ResumeLayout(false);
			this->panelMenuSetting->PerformLayout();
			this->panel_difficulty->ResumeLayout(false);
			this->panel_difficulty->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_butt_resData))->EndInit();
			this->panelLanguage->ResumeLayout(false);
			this->panelLanguage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_butt_setting))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureButt_protection))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureButt_windmill))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureButt_bakery))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureButt_market))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureButt_mine))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureButt_farm))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureButt_bake))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureButt_sawmill))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureButt_village))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureButt_mainhome))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureButtShop))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_resurs))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureButtSave))->EndInit();
			this->panel_vis_resurs->ResumeLayout(false);
			this->panel_vis_resurs->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureButtDownload))->EndInit();
			this->panel_mine->ResumeLayout(false);
			this->panel_mine->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_butt_pickaxe))->EndInit();
			this->panel_bake->ResumeLayout(false);
			this->panel_bake->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel_sawmill->ResumeLayout(false);
			this->panel_sawmill->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_sawmill_axe))->EndInit();
			this->panel_vilage->ResumeLayout(false);
			this->panel_vilage->PerformLayout();
			this->panel_market->ResumeLayout(false);
			this->panel_market->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->butt_market_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->butt_market_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->butt_market_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->butt_market_1))->EndInit();
			this->panel_farm->ResumeLayout(false);
			this->panel_farm->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->butt_farm_1))->EndInit();
			this->panel_windmill->ResumeLayout(false);
			this->panel_windmill->PerformLayout();
			this->panel_bakery->ResumeLayout(false);
			this->panel_bakery->PerformLayout();
			this->panel_protect->ResumeLayout(false);
			this->panel_protect->PerformLayout();
			this->panel_task1->ResumeLayout(false);
			this->panel_task1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_butt_tasksLOG))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_butt_tasks2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


		//variables

		bool fee = false;
		bool sounds = true;
		bool language = false; //true ENG  false RUS
		int difficulty = 2;

		int Task = 0;

		int silver;
		int gold;
		int wood;
		int iron_ore;
		int iron;
		int coal;
		int human;
		int ex;
		int level;
		int wheat;
		int flour;
		int bread;

		int le_mainhome;
		int le_mine;
		int le_bake;
		int le_protection;
		int le_sawmill;
		int le_market;
		int le_farm;
		int le_windmill;
		int le_bakery;
		int le_village;

		int time_tax;
		int time_bonus;




#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//soun_test();


		WinExec("sounTest.exe", 1);

		le_bake++;
		le_bakery++;
		le_mainhome++;
		le_mine++;
		le_market++;
		le_protection++;
		le_farm++;
		le_windmill++;
		le_sawmill++;
		le_village++;



		/*std::ofstream Data0;
		Data0.open("datahhhhhhhhhh.txt");
		Data0 << "123235123453";
		Data0.close();
		*/



		//system("G:\progect c++\sounTest\Release\sounTest.exe");
	}
	private: System::Void pictureButtSave_Click(System::Object^ sender, System::EventArgs^ e) {
		if (sounds)WinExec("good.exe", 1);
		save();
	}

	private: System::Void radioButtonLanguage_Rus_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		rus();
	}
		   void rus() {
			   if (radioButtonLanguage_Rus->Checked) {
				   language = false;
				   this->labelText_setting->Text = L"Настройки";
				   this->labelButtSave->Text = L"Сохранить";
				   this->labelLanguage->Text = L"Язык";
				   this->checkBox_sounds->Text = L"Звуки";
				   this->label_resData->Text = L"Сбросить данные";
				   this->labelButtDownload->Text = L"Загрузить";
				   this->radioButton_difficult_difficulty->Text = L"Сложно";
				   this->radioButton_moderate_difficulty->Text = L"Умеренно";
				   this->radioButton_easy_difficulty->Text = L"Легко";
				   this->label_difficulty->Text = L"Сложность";
				   this->label_panel_text_shop->Text = L"Магазин";
				   this->label_tasksG_text->Text = L"задания";

				   //tootip
				   this->toolTip1->SetToolTip(this->picture_butt_setting, L"Настройки");
				   this->toolTip1->SetToolTip(this->pictureButtShop, L"Магазин");

				   this->toolTip1->SetToolTip(this->label_silver, L"Серебро (0-7000)");
				   this->toolTip1->SetToolTip(this->label_gold, L"Золото (0-200)");
				   this->toolTip1->SetToolTip(this->label_bread, L"Хлеб (0-200)");
				   this->toolTip1->SetToolTip(this->label_coal, L"Уголь (0-200)");
				   this->toolTip1->SetToolTip(this->label_flour, L"Мука (0-200)");
				   this->toolTip1->SetToolTip(this->label_human, L"Свободные жители");
				   this->toolTip1->SetToolTip(this->label_iron, L"Железо (0-200)");
				   this->toolTip1->SetToolTip(this->label_iron_ore, L"Железная руда (0-200)");
				   this->toolTip1->SetToolTip(this->label_wheat, L"Пшеница (0-200)");
				   this->toolTip1->SetToolTip(this->label_wood, L"Дерево (0-200)");

				   this->toolTip1->SetToolTip(this->pictureButt_mainhome, L"Ратуша");
				   this->toolTip1->SetToolTip(this->pictureButt_village, L"Поселение");
				   this->toolTip1->SetToolTip(this->pictureButt_sawmill, L"Лесопилка");
				   this->toolTip1->SetToolTip(this->pictureButt_bake, L"Плавильня");
				   this->toolTip1->SetToolTip(this->pictureButt_farm, L"Ферма");
				   this->toolTip1->SetToolTip(this->pictureButt_mine, L"Шахта");
				   this->toolTip1->SetToolTip(this->pictureButt_market, L"Рынок");
				   this->toolTip1->SetToolTip(this->pictureButt_bakery, L"Пекарня");
				   this->toolTip1->SetToolTip(this->pictureButt_windmill, L"Мельница");
				   this->toolTip1->SetToolTip(this->pictureButt_protection, L"Оборона");

			   }
		   }
	private: System::Void radioButtonLanguage_Eng_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButtonLanguage_Eng->Checked) {
			language = true;
			this->labelText_setting->Text = L"Settings";
			this->labelButtSave->Text = L"       Save";
			this->labelLanguage->Text = L"Language";
			this->checkBox_sounds->Text = L"Sounds";
			this->label_resData->Text = L"Reset data";
			this->labelButtDownload->Text = L" Download";
			this->radioButton_difficult_difficulty->Text = L"Difficult";
			this->radioButton_moderate_difficulty->Text = L"Moderate";
			this->radioButton_easy_difficulty->Text = L"Easy";
			this->label_difficulty->Text = L"Difficulty";
			this->label_panel_text_shop->Text = L"  Shop";
			this->label_tasksG_text->Text = L"   tasks";


			//tootip
			this->toolTip1->SetToolTip(this->picture_butt_setting, L"Settings");
			this->toolTip1->SetToolTip(this->pictureButtShop, L"Shop");

			this->toolTip1->SetToolTip(this->label_silver, L"Silver (0-7000)");
			this->toolTip1->SetToolTip(this->label_gold, L"Gold (0-200)");
			this->toolTip1->SetToolTip(this->label_bread, L"Bread (0-200)");
			this->toolTip1->SetToolTip(this->label_coal, L"Coal (0-200)");
			this->toolTip1->SetToolTip(this->label_flour, L"Flour (0-200)");
			this->toolTip1->SetToolTip(this->label_human, L"Free human");
			this->toolTip1->SetToolTip(this->label_iron, L"Iron (0-200)");
			this->toolTip1->SetToolTip(this->label_iron_ore, L"Iron ore (0-200)");
			this->toolTip1->SetToolTip(this->label_wheat, L"Wheat (0-200)");
			this->toolTip1->SetToolTip(this->label_wood, L"Wood (0-200)");

			this->toolTip1->SetToolTip(this->pictureButt_mainhome, L"Town hall");
			this->toolTip1->SetToolTip(this->pictureButt_village, L"Village");
			this->toolTip1->SetToolTip(this->pictureButt_sawmill, L"Sawmill");
			this->toolTip1->SetToolTip(this->pictureButt_bake, L"Foundry");
			this->toolTip1->SetToolTip(this->pictureButt_farm, L"Farm");
			this->toolTip1->SetToolTip(this->pictureButt_mine, L"Mine");
			this->toolTip1->SetToolTip(this->pictureButt_market, L"Market");
			this->toolTip1->SetToolTip(this->pictureButt_bakery, L"Bakery");
			this->toolTip1->SetToolTip(this->pictureButt_windmill, L"Windmill");
			this->toolTip1->SetToolTip(this->pictureButt_protection, L"Defense");

		}
	}
	private: System::Void checkBox_sounds_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox_sounds->Checked) {
			sounds = true;
			WinExec("good.exe", 1);
		}
		else {
			sounds = false;
		}
	}

	private: System::Void picture_butt_resData_Click(System::Object^ sender, System::EventArgs^ e) {
		this->radioButton_moderate_difficulty->Checked = true;
		if (sounds) WinExec("good.exe", 1);
		using namespace std;
		ofstream Data;
		Data.open("data.txt");
		Data << 0 << endl << 10 << endl << 300 << endl << 0 << endl << 0 << endl << 0 << endl << 20 << endl << 0 << endl << 0 << endl << 0 << endl << 1 << endl << 0 << endl << 0 << endl << 0 << endl << 0 << endl << 0 << endl << 0 << endl << 0 << endl << 0 << endl << 0 << endl << 1 << endl << 0 << endl << 0 << endl << 0;
		Data.close();

		silver = 300;   gold = 10;   wood = 0;
		iron_ore = 0;   iron = 0;    coal = 0;
		human = 20;     ex = 0;	  level = 1;
		wheat = 0;      flour = 0;   bread = 0;

		le_mainhome = 1;	 le_mine = 0;	   le_bake = 0;
		le_protection = 0;	 le_sawmill = 0;   le_market = 0;
		le_farm = 0;		 le_windmill = 0;  le_bakery = 0;
		le_village = 0;

		time_tax = 0;		 time_bonus = 0;   difficulty = 2;

		fee = 0;			 Task = 0;

		print_resurs();
	}

	private: System::Void picture_butt_setting_Click(System::Object^ sender, System::EventArgs^ e) {
		if (sounds)WinExec("good.exe", 1);

		this->panelMenuSetting->Visible = !this->panelMenuSetting->Visible;
		this->panel_vilage->Visible = false;
		this->panel_sawmill->Visible = false;
		//this->panelMenuSetting->Visible = false;
		this->panel_mine->Visible = false;
		this->panel_market->Visible = false;
		this->panel_bake->Visible = false;
		this->panel_shop->Visible = false;
		this->panel_farm->Visible = false;
		this->panel_windmill->Visible = false;
		this->panel_bakery->Visible = false;
		this->panel_protect->Visible = false;


		print_resurs();
	}
		   void save() {
			   this->ClientSize = System::Drawing::Size(1400, 613);
			   using namespace std;
			   ofstream Data;
			   Data.open("data.txt");
			   Data << wood << endl << gold << endl << silver << endl << iron_ore << endl << iron << endl << coal << endl << human << endl << wheat << endl << flour << endl << bread << endl << le_mainhome << endl << le_bake << endl << le_mine << endl << le_village << endl << le_protection << endl << le_sawmill << endl << le_market << endl << le_farm << endl << le_windmill << endl << le_bakery << endl << level << endl << ex << endl << time_tax << endl << time_bonus;
			   Data.close();

			   print_resurs();
		   }
		   //shop
	private: System::Void pictureButtShop_Click(System::Object^ sender, System::EventArgs^ e) {
		if (sounds)WinExec("money.exe", 1);
		this->panel_vilage->Visible = false;
		this->panel_sawmill->Visible = false;
		this->panelMenuSetting->Visible = false;
		this->panel_mine->Visible = false;
		this->panel_market->Visible = false;
		this->panel_bake->Visible = false;
		//this->panel_shop->Visible = false;
		this->panel_farm->Visible = false;
		this->panel_windmill->Visible = false;
		this->panel_bakery->Visible = false;
		this->panel_protect->Visible = false;
		this->panel_shop->Visible = !this->panel_shop->Visible;


		if (!language) {
			//rassia v
			if (le_mainhome == 1)this->label_shop_mainhome->Text = L"Улучшить Ратушу (до 2ур.) (налог:600серебра) \r\n Стоимость: 20дерева 200серебра";
			if (le_mainhome == 2)this->label_shop_mainhome->Text = L"Улучшить Ратушу (до 3ур.) (налог:1000серебра)\r\n Стоимость: 80дерева 20железа 1000серебра";
			if (le_mainhome == 3)this->label_shop_mainhome->Text = L"Улучшить Ратушу (до 4ур.) (налог:2000серебра)\r\n Стоимость: 110дерева 40железа 2300серебра";
			if (le_mainhome == 4)this->label_shop_mainhome->Text = L"Улучшить Ратушу (до 5ур.) (налог:3800серебра)\r\n Стоимость: 200дерева 60железа 90угля 5000серебра";
			if (le_mainhome == 5)this->label_shop_mainhome->Text = L"\nРатуша максимального уровня (5ур.) (налог:3800серебра)";

			if (le_sawmill == 0) this->label_shop_sawmill->Text = L"Купить Лесопилку (2 дерева/мин) \r\n Стоимость: 100серебра";
			if (le_sawmill == 1) this->label_shop_sawmill->Text = L"Улучшить Лесопилку (до 2ур.) (5 дерева/мин)\r\n Стоимость: 15дерева 300серебра";
			if (le_sawmill == 2) this->label_shop_sawmill->Text = L"Улучшить Лесопилку (до 3ур.) (8 дерева/мин)\r\n Стоимость: 40дерева 5железа 800серебра";
			if (le_sawmill == 3) this->label_shop_sawmill->Text = L"Улучшить Лесопилку (до 4ур.) (12 дерева/мин)\r\n Стоимость: 70дерева 20железа 1400серебра";
			if (le_sawmill == 4) this->label_shop_sawmill->Text = L"\nЛесопилка максимального уровня (4ур.)(12 дерева/мин)";

			if (le_village == 0) this->label_shop_village->Text = L"Купить Поселение (+20человек) \r\n Стоимость: 15дерева 150серебра";
			if (le_village == 1) this->label_shop_village->Text = L"Улучшить Поселение (до 2ур.) (+30человек) \r\n Стоимость: 40дерева 10железа 400серебра";
			if (le_village == 2) this->label_shop_village->Text = L"Улучшить Поселение (до 3ур.) (+40человек) \r\n Стоимость: 50дерева 20железа 600серебра";
			if (le_village == 3) this->label_shop_village->Text = L"Улучшить Поселение (до 4ур.) (+50человек) \r\n Стоимость: 60дерева 30железа 700серебра";
			if (le_village == 4) this->label_shop_village->Text = L"Улучшить Поселение (до 5ур.) (+60человек) \r\n Стоимость: 60дерева 30железа 800серебра";
			if (le_village == 5) this->label_shop_village->Text = L"Улучшить Поселение (до 6ур.) (+70человек) \r\n Стоимость: 60дерева 35железа 900серебра";
			if (le_village == 6) this->label_shop_village->Text = L"Улучшить Поселение (до 7ур.) (+80человек) \r\n Стоимость: 70дерева 40железа 1000серебра";
			if (le_village == 7) this->label_shop_village->Text = L"Улучшить Поселение (до 8ур.) (+150человек) \r\n Стоимость: 90дерева 60железа 1500серебра";
			if (le_village == 8) this->label_shop_village->Text = L"Улучшить Поселение (до 9ур.) (+200человек) \r\n Стоимость: 100дерева 60железа 2000серебра 10зозлота";
			if (le_village == 9) this->label_shop_village->Text = L"\nПоселение максимального уровня (9ур.) (700человек)";

			if (le_mine == 0) this->label_shop_mine->Text = L"Купить Шахту \r\n Стоимость: 10дерева 150серебра";
			if (le_mine == 1) this->label_shop_mine->Text = L"Улучшить Шахту (до 2ур.) \r\n Стоимость: 40дерева 10железа 500серебра";
			if (le_mine == 2) this->label_shop_mine->Text = L"Улучшить Шахту (до 3ур.) \r\n Стоимость: 80дерева 30железа 950серебра";
			if (le_mine == 3) this->label_shop_mine->Text = L"Улучшить Шахту (до 4ур.) \r\n Стоимость: 100дерева 50железа 1400серебра";
			if (le_mine == 4) this->label_shop_mine->Text = L"\nШахта максимального уровня (4ур.)";

			if (le_bake == 0) this->label_shop_bake->Text = L"Купить Плавильню (1железо/мин)\r\n Стоимость: 10дерева 150серебра";
			if (le_bake == 1) this->label_shop_bake->Text = L"Улучшить Плавильню (до 2ур.) (3железо/мин) \r\n Стоимость: 40дерева 10железа 500серебра";
			if (le_bake == 2) this->label_shop_bake->Text = L"Улучшить Плавильню (до 3ур.) (5железо/мин) \r\n Стоимость: 80дерева 30железа 950серебра";
			if (le_bake == 3) this->label_shop_bake->Text = L"Улучшить Плавильню (до 4ур.) (10железо/мин) \r\n Стоимость: 100дерева 50железа 1400серебра";
			if (le_bake == 4) this->label_shop_bake->Text = L"\nПлавильня максимального уровня (4ур.) (10железо/мин)";

			if (le_protection == 0) this->label_shop_protection->Text = L"Купить Оборону (30%)\r\n Стоимость: 30дерева 15железа 700серебра";
			if (le_protection == 1) this->label_shop_protection->Text = L"Улучшить Оборону (до 2ур.) (40%)\r\n Стоимость: 70дерева 30железа 1200серебра";
			if (le_protection == 2) this->label_shop_protection->Text = L"Улучшить Оборону (до 3ур.) (60%)\r\n Стоимость: 110дерева 50железа 1800серебра";
			if (le_protection == 3) this->label_shop_protection->Text = L"Улучшить Оборону (до 4ур.) (70%)\r\n Стоимость: 150дерева 65железа 3400серебра";
			if (le_protection == 4) this->label_shop_protection->Text = L"\nОборона максимального уровня (4ур.) (70%)";

			if (le_market == 0) this->label_shop_market->Text = L"Купить Рынок \r\n Стоимость: 100серебра";
			if (le_market == 1) this->label_shop_market->Text = L"\nРынок куплен";

			if (le_farm == 0) this->label_shop_farm->Text = L"Купить Ферму (2пшеницы/мин) \r\n Стоимость: 50дерева 20железа 800серебра";
			if (le_farm == 1) this->label_shop_farm->Text = L"Улучшить Ферму (до 2ур.) (4пшеницы/мин) \r\n Стоимость: 60дерева 25железа 900серебра";
			if (le_farm == 2) this->label_shop_farm->Text = L"Улучшить Ферму (до 3ур.) (8пшеницы/мин) \r\n Стоимость: 80дерева 30железа 2600серебра";
			if (le_farm == 3) this->label_shop_farm->Text = L"Улучшить Ферму (до 4ур.) (12пшеницы/мин) \r\n Стоимость: 120дерева 50железа 3800серебра";
			if (le_farm == 4) this->label_shop_farm->Text = L"\nФерма максимального уровня (4ур.) (12пшеницы/мин)";

			if (le_windmill == 0) this->label_shop_windmill->Text = L"Купить Мельницу (1мука/мин)\r\n Стоимость: 50дерева 20железа 800серебра";
			if (le_windmill == 1) this->label_shop_windmill->Text = L"Улучшить Мельницу (до 2ур.) (2мука/мин)\r\n Стоимость: 60дерева 25железа 900серебра";
			if (le_windmill == 2) this->label_shop_windmill->Text = L"Улучшить Мельницу (до 3ур.) (4мука/мин)\r\n Стоимость: 80дерева 30железа 2600серебра";
			if (le_windmill == 3) this->label_shop_windmill->Text = L"Улучшить Мельницу (до 4ур.) (8мука/мин)\r\n Стоимость: 120дерева 50железа 3800серебра";
			if (le_windmill == 4) this->label_shop_windmill->Text = L"\nМельница максимального уровня (4ур.) (8мука/мин)";

			if (le_bakery == 0) this->label_shop_bakery->Text = L"Купить Пекарню (1хлеб/мин) \r\n Стоимость: 80дерева 40железа 2800серебра";
			if (le_bakery == 1) this->label_shop_bakery->Text = L"Улучшить Пекарню (до 2ур.) (3хлеба/мин) \r\n Стоимость: 190дерева 60железа 4600серебра";
			if (le_bakery == 2) this->label_shop_bakery->Text = L"\nПекарня максимального уровня (2ур.) (3хлеб/мин)";
			//butt
			this->button_shop_bake->Text = L"Купить";
			this->button_shop_bakery->Text = L"Купить";
			this->button_shop_mine->Text = L"Купить";
			this->button_shop_market->Text = L"Купить";
			this->button_shop_mainhome->Text = L"Купить";
			this->button_shop_farm->Text = L"Купить";
			this->button_shop_sawmill->Text = L"Купить";
			this->button_shop_windmill->Text = L"Купить";
			this->button_shop_protection->Text = L"Купить";
			this->button_shop_village->Text = L"Купить";

			this->toolTip1->SetToolTip(this->pictureBox_butt_obm, L"Обменять 1золото -> 100серебра");
		}
		else {
			//english v
			if (le_mainhome == 1)this->label_shop_mainhome->Text = L"Upgrade the Town Hall (up to level 2) (tax:600 silver) \r\n Price: 20wood 200silver";
			if (le_mainhome == 2)this->label_shop_mainhome->Text = L"Upgrade the Town Hall (up to level 3) (tax:1000 silver)\r\n Price: 80wood 20iron 1000silver";
			if (le_mainhome == 3)this->label_shop_mainhome->Text = L"Upgrade the Town Hall (up to level 4) (tax:2000 silver)\r\n Price: 110wood 40iron 2300silver";
			if (le_mainhome == 4)this->label_shop_mainhome->Text = L"Upgrade the Town Hall (up to level 5) (tax:3800 silver)\r\n Price: 200wood 60iron 90coal 5000silver";
			if (le_mainhome == 5)this->label_shop_mainhome->Text = L"\nMaximum level Town Hall (level 5) (tax:3800 silver)";

			if (le_sawmill == 0) this->label_shop_sawmill->Text = L"Buy sawmill (2 trees / min) \r\n Price: 100silver";
			if (le_sawmill == 1) this->label_shop_sawmill->Text = L"Upggrade the sawmill (up to 2 levels) (5 trees/min)\r\n Price: 15wood 300silver";
			if (le_sawmill == 2) this->label_shop_sawmill->Text = L"Upggrade the sawmill (up to 3 levels) (8 trees/min)\r\n Price: 40wood 5iron 800silver";
			if (le_sawmill == 3) this->label_shop_sawmill->Text = L"Upggrade the sawmill (up to 4 levels) (12 trees/min)\r\n Price: 70wood 20iron 1400silver";
			if (le_sawmill == 4) this->label_shop_sawmill->Text = L"\nMaximum level Sawmill (level 4) (12 trees/min)";

			if (le_village == 0) this->label_shop_village->Text = L"Buy village (+20human) \r\n Price: 15wood 150silver";
			if (le_village == 1) this->label_shop_village->Text = L"Upggrade the village (up to level 2) (+30human) \r\n Price: 40wood 10iron 400silver";
			if (le_village == 2) this->label_shop_village->Text = L"Upggrade the village (up to level 3) (+40human) \r\n Price: 50wood 20iron 600silver";
			if (le_village == 3) this->label_shop_village->Text = L"Upggrade the village (up to level 4) (+50human) \r\n Price: 60wood 30iron 700silver";
			if (le_village == 4) this->label_shop_village->Text = L"Upggrade the village (up to level 5) (+60human) \r\n Price: 60wood 30iron 800silver";
			if (le_village == 5) this->label_shop_village->Text = L"Upggrade the village (up to level 6) (+70human) \r\n Price: 60wood 35iron 900silver";
			if (le_village == 6) this->label_shop_village->Text = L"Upggrade the village (up to level 7) (+80human) \r\n Price: 70wood 40iron 1000silver";
			if (le_village == 7) this->label_shop_village->Text = L"Upggrade the village (up to level 8) (+150human) \r\n Price: 90wood 60iron 1500silver";
			if (le_village == 8) this->label_shop_village->Text = L"Upggrade the village (up to level 9) (+200human) \r\n Price: 100wood 60iron 2000silver 10gold";
			if (le_village == 9) this->label_shop_village->Text = L"\nMaximum Level village (level 9) (700human)";

			if (le_mine == 0) this->label_shop_mine->Text = L"Buy mine \r\n Price: 10wood 150silver";
			if (le_mine == 1) this->label_shop_mine->Text = L"Upggrade the mine (up to level 2) \r\n Price: 40wood 10iron 500silver";
			if (le_mine == 2) this->label_shop_mine->Text = L"Upggrade the mine (up to level 3) \r\n Price: 80wood 30iron 950silver";
			if (le_mine == 3) this->label_shop_mine->Text = L"Upggrade the mine (up to level 4) \r\n Price: 100wood 50iron 1400silver";
			if (le_mine == 4) this->label_shop_mine->Text = L"\nMaximum Level mine (level 4)";

			if (le_bake == 0) this->label_shop_bake->Text = L"Buy foundry (1iron/min)\r\n Price: 10wood 150silver";
			if (le_bake == 1) this->label_shop_bake->Text = L"Upggrade the foundry (up to level 2) (3iron/min) \r\n Price: 40wood 10iron 500silver";
			if (le_bake == 2) this->label_shop_bake->Text = L"Upggrade the foundry (up to level 3) (5iron/min) \r\n Price: 80wood 30iron 950silver";
			if (le_bake == 3) this->label_shop_bake->Text = L"Upggrade the foundry (up to level 4) (10iron/min) \r\n Price: 100wood 50iron 1400silver";
			if (le_bake == 4) this->label_shop_bake->Text = L"\nMaximum Level foundry (level 4) (10iron/min)";

			if (le_protection == 0) this->label_shop_protection->Text = L"Buy defense (30%)\r\n Price: 30wood 15iron 700silver";
			if (le_protection == 1) this->label_shop_protection->Text = L"Upggrade the defense (up to level 2) (40%)\r\n Price: 70wood 30iron 1200silver";
			if (le_protection == 2) this->label_shop_protection->Text = L"Upggrade the defense (up to level 3) (60%)\r\n Price: 110wood 50iron 1800silver";
			if (le_protection == 3) this->label_shop_protection->Text = L"Upggrade the defense (up to level 4) (70%)\r\n Price: 150wood 65iron 3400silver";
			if (le_protection == 4) this->label_shop_protection->Text = L"\nMaximum level defense (level 4) (70%)";

			if (le_market == 0) this->label_shop_market->Text = L"Buy market \r\n Price: 100silver";
			if (le_market == 1) this->label_shop_market->Text = L"\nThe market is bought";

			if (le_farm == 0) this->label_shop_farm->Text = L"Buy farm (2wheat/min) \r\n Price: 50wood 20iron 800silver";
			if (le_farm == 1) this->label_shop_farm->Text = L"Upggrade the farm (up to level 2) (4wheat/min) \r\n Price: 60wood 25iron 900silver";
			if (le_farm == 2) this->label_shop_farm->Text = L"Upggrade the farm (up to level 3) (8wheat/min) \r\n Price: 80wood 30iron 2600silver";
			if (le_farm == 3) this->label_shop_farm->Text = L"Upggrade the farm (up to level 4) (12wheat/min) \r\n Price: 120wood 50iron 3800silver";
			if (le_farm == 4) this->label_shop_farm->Text = L"\nMaximum level farm (level 4) (12wheat/min)";

			if (le_windmill == 0) this->label_shop_windmill->Text = L"Buy windmill (1flour/min)\r\n Price: 50wood 20iron 800silver";
			if (le_windmill == 1) this->label_shop_windmill->Text = L"Upggrade the windmill (up to level 2) (2flour/min)\r\n Price: 60wood 25iron 900silver";
			if (le_windmill == 2) this->label_shop_windmill->Text = L"Upggrade the windmill (up to level 3) (4flour/min)\r\n Price: 80wood 30iron 2600silver";
			if (le_windmill == 3) this->label_shop_windmill->Text = L"Upggrade the windmill (up to level 4) (8flour/min)\r\n Price: 120wood 50iron 3800silver";
			if (le_windmill == 4) this->label_shop_windmill->Text = L"\nMaximum level windmill (level 4) (8flour/min)";

			if (le_bakery == 0) this->label_shop_bakery->Text = L"Buy bakery (1bread/min) \r\n Price: 80wood 40iron 2800silver";
			if (le_bakery == 1) this->label_shop_bakery->Text = L"Upggrade the bakery (up to level 2) (3bread/min) \r\n Price: 190wood 60iron 4600silver";
			if (le_bakery == 2) this->label_shop_bakery->Text = L"\nMaximum level bakery (level 2) (3bread/min)";
			//butt
			this->button_shop_bake->Text = L"Buy";
			this->button_shop_bakery->Text = L"Buy";
			this->button_shop_mine->Text = L"Buy";
			this->button_shop_mainhome->Text = L"Buy";
			this->button_shop_farm->Text = L"Buy";
			this->button_shop_market->Text = L"Buy";
			this->button_shop_sawmill->Text = L"Buy";
			this->button_shop_windmill->Text = L"Buy";
			this->button_shop_protection->Text = L"Buy";
			this->button_shop_village->Text = L"Buy";

			this->toolTip1->SetToolTip(this->pictureBox_butt_obm, L"Exchange 1 gold -> 100 silver");
		}

		if (le_mainhome >= 5) this->button_shop_mainhome->Enabled = false; else this->button_shop_mainhome->Enabled = true;
		if (le_sawmill >= 4) this->button_shop_sawmill->Enabled = false; else this->button_shop_sawmill->Enabled = true;
		if (le_mine >= 4) this->button_shop_mine->Enabled = false; else this->button_shop_mine->Enabled = true;
		if (le_market >= 1) this->button_shop_market->Enabled = false; else this->button_shop_market->Enabled = true;
		if (le_bakery >= 2) this->button_shop_bakery->Enabled = false; else this->button_shop_bakery->Enabled = true;
		if (le_bake >= 4) this->button_shop_bake->Enabled = false; else this->button_shop_bake->Enabled = true;
		if (le_farm >= 4) this->button_shop_farm->Enabled = false; else this->button_shop_farm->Enabled = true;
		if (le_village >= 9) this->button_shop_village->Enabled = false; else this->button_shop_village->Enabled = true;
		if (le_protection >= 4) this->button_shop_protection->Enabled = false; else this->button_shop_protection->Enabled = true;
		if (le_windmill >= 4) this->button_shop_windmill->Enabled = false; else this->button_shop_windmill->Enabled = true;

	}
	private: System::Void button_shop_mainhome_Click(System::Object^ sender, System::EventArgs^ e) {
		if (le_mainhome == 1) {
			if (wood >= 20 && silver >= 200) {
				wood -= 20;
				silver -= 200;
				le_mainhome = 2;
				human += 10;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Wood 20\n  -Silver 200", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Дерево 20\n  -Серебро 200", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_mainhome == 2) {
			if (iron >= 20 && wood >= 80 && silver >= 1000) {
				wood -= 80;
				iron -= 20;
				silver -= 1000;
				le_mainhome = 3;
				human += 10;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Iron 20\n  -Wood 80\n  -Silver 1000", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Железо 20\n  -Дерево 80\n  -Серебро 1000", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_mainhome == 3) {
			if (iron >= 40 && wood >= 110 && silver >= 2300) {
				wood -= 110;
				iron -= 40;
				silver -= 2300;
				le_mainhome = 4;
				human += 10;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Iron 40\n  -Wood 110\n  -Silver 2300", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Железо 40\n  -Дерево 110\n  -Серебро 2300", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_mainhome == 4) {
			if (iron >= 60 && wood >= 200 && silver >= 5000 && coal >= 90) {
				wood -= 200;
				iron -= 60;
				silver -= 5000;
				coal -= 90;
				le_mainhome = 5;
				human += 10;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Coal 90\n  -Iron 60\n  -Wood 200\n  -Silver 5000", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Уголь 90\n  -Железо 60\n  -Дерево 200\n  -Серебро 5000", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
	}
	private: System::Void button_shop_sawmill_Click(System::Object^ sender, System::EventArgs^ e) {
		if (le_sawmill == 0) {
			if (silver >= 100 && le_mainhome >= 1 && human >= 10) {
				le_sawmill = 1;
				silver -= 100;
				human -= 10;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Human 10\n  -Town Hall level 1\n  -Silver 100", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Жители 10\n  -Ратуша 1 уровень\n  -Серебро 100", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_sawmill == 1) {
			if (silver >= 300 && le_mainhome >= 1 && human >= 10 && wood >= 15) {
				le_sawmill = 2;
				silver -= 300;
				wood -= 15;
				human -= 10;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Human 20\n  -Town Hall level 1\n  -Wood 15\n  -Silver 300", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Жители 10\n  -Ратуша 1 уровень\n  -Дерево 15\n  -Серебро 300", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_sawmill == 2) {
			if (silver >= 800 && le_mainhome >= 2 && human >= 10 && wood >= 40 && iron >= 5) {
				le_sawmill = 3;
				silver -= 800;
				wood -= 40;
				iron -= 5;
				human -= 10;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Human 30\n  -Town Hall level 2\n  -Silver 800\n  -Wood 40\n  -Iron 5", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Жители 10\n  -Ратуша 2 уровень\n  -Дерево 40\n  -Железо 5\n  -Серебро 800", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_sawmill == 3) {
			if (silver >= 1400 && le_mainhome >= 4 && human >= 20 && wood >= 70 && iron >= 20) {
				le_sawmill = 4;
				silver -= 1400;
				wood -= 70;
				iron -= 20;
				human -= 20;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Human 50\n  -Town Hall level 4\n  -Silver 1400\n  -Wood 70\n  -Iron 20", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Жители 20\n  -Ратуша 4 уровень\n  -Дерево 70\n  -Железо 20\n  -Серебро 1400", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
	}
	private: System::Void button_shop_village_Click(System::Object^ sender, System::EventArgs^ e) {
		if (le_village == 0) {
			if (wood >= 15 && silver >= 150 && le_mainhome >= 1) {
				wood -= 15;
				silver -= 150;
				human += 20;
				le_village = 1;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 1\n  -Silver 150\n  -Wood 15", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 1 уровень\n  -Дерево 15\n  -Серебро 150", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_village == 1) {
			if (wood >= 40 && silver >= 400 && iron >= 10 && le_mainhome >= 2) {
				wood -= 40;
				silver -= 400;
				iron -= 10;
				human += 30;
				le_village = 2;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 2\n  -Silver 400\n  -Wood 40\n  -Iron 10", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 2 уровень\n  -Дерево 40\n  -Железо 10\n  -Серебро 400", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_village == 2) {
			if (wood >= 50 && silver >= 600 && iron >= 20 && le_mainhome >= 3) {
				wood -= 50;
				silver -= 600;
				iron -= 20;
				human += 40;
				le_village = 3;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 3\n  -Silver 600\n  -Wood 50\n  -Iron 20", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 3 уровень\n  -Дерево 50\n  -Железо 20\n  -Серебро 600", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_village == 3) {
			if (wood >= 60 && silver >= 700 && iron >= 30 && le_mainhome >= 3) {
				wood -= 60;
				silver -= 700;
				iron -= 30;
				human += 50;
				le_village = 4;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 3\n  -Silver 700\n  -Wood 60\n  -Iron 30", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 3 уровень\n  -Дерево 60\n  -Железо 30\n  -Серебро 700", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_village == 4) {
			if (wood >= 60 && silver >= 800 && iron >= 30 && le_mainhome >= 4) {
				wood -= 60;
				silver -= 800;
				iron -= 30;
				human += 60;
				le_village = 5;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 4\n  -Silver 800\n  -Wood 60\n  -Iron 30", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 4 уровень\n  -Дерево 60\n  -Железо 30\n  -Серебро 800", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_village == 5) {
			if (wood >= 60 && silver >= 900 && iron >= 35 && le_mainhome >= 4) {
				wood -= 60;
				silver -= 900;
				iron -= 35;
				human += 70;
				le_village = 6;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 4\n  -Silver 900\n  -Wood 60\n  -Iron 35", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 4 уровень\n  -Дерево 60\n  -Железо 35\n  -Серебро 900", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_village == 6) {
			if (wood >= 70 && silver >= 1000 && iron >= 40 && le_mainhome >= 4) {
				wood -= 70;
				silver -= 1000;
				iron -= 40;
				human += 80;
				le_village = 7;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 4\n  -Silver 1000\n  -Wood 70\n  -Iron 40", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 4 уровень\n  -Дерево 70\n  -Железо 40\n  -Серебро 1000", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_village == 7) {
			if (wood >= 90 && silver >= 1500 && iron >= 60 && le_mainhome >= 4) {
				wood -= 90;
				silver -= 1500;
				iron -= 60;
				human += 150;
				le_village = 8;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 4\n  -Silver 1500\n  -Wood 90\n  -Iron 60", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 4 уровень\n  -Дерево 90\n  -Железо 60\n  -Серебро 1500", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_village == 8) {
			if (wood >= 100 && silver >= 2000 && iron >= 60 && le_mainhome >= 5) {
				wood -= 100;
				silver -= 2000;
				iron -= 60;
				human += 200;
				le_village = 9;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 5\n  -Silver 2000\n  -Wood 100\n  -Iron 60", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 5 уровень\n  -Дерево 100\n  -Железо 60\n  -Серебро 2000", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}


	}
	private: System::Void button_shop_mine_Click(System::Object^ sender, System::EventArgs^ e) {
		if (le_mine == 0) {
			if (silver >= 150 && wood >= 10 && le_mainhome >= 2 && human >= 20) {
				wood -= 10;
				silver -= 150;
				human -= 20;
				le_mine = 1;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 2\n  -Human 20\n  -Silver 150\n  -Wood 10", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 2 уровень\n  -Жителей 20\n  -Дерево 10\n  -Серебро 150", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_mine == 1) {
			if (silver >= 500 && wood >= 40 && le_mainhome >= 3 && human >= 10 && iron >= 10) {
				wood -= 40;
				silver -= 500;
				human -= 10;
				iron -= 10;
				le_mine = 2;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 3\n  -Human 10\n  -Iron 10\n  -Silver 500\n  -Wood 40", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 3 уровень\n  -Жителей 10\n  -Железо 10\n  -Дерево 40\n  -Серебро 500", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_mine == 2) {
			if (silver >= 950 && wood >= 80 && le_mainhome >= 4 && human >= 20 && iron >= 30) {
				wood -= 80;
				silver -= 950;
				human -= 20;
				iron -= 30;
				le_mine = 3;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 4\n  -Human 20\n  -Iron 30\n  -Silver 950\n  -Wood 80", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 4 уровень\n  -Жителей 20\n  -Железо 30\n  -Дерево 80\n  -Серебро 950", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_mine == 3) {
			if (silver >= 1400 && wood >= 100 && le_mainhome >= 5 && human >= 20 && iron >= 50) {
				wood -= 100;
				silver -= 1400;
				human -= 20;
				iron -= 50;
				le_mine = 4;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 5\n  -Human 20\n  -Iron 50\n  -Silver 1400\n  -Wood 100", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 5 уровень\n  -Жителей 20\n  -Железо 50\n  -Дерево 100\n  -Серебро 1400", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
	}
	private: System::Void button_shop_bake_Click(System::Object^ sender, System::EventArgs^ e) {
		if (le_bake == 0) {
			if (silver >= 150 && wood >= 10 && le_mainhome >= 2 && human >= 20) {
				wood -= 10;
				silver -= 150;
				human -= 20;
				le_bake = 1;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 2\n  -Human 20\n  -Silver 150\n  -Wood 10", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 2 уровень\n  -Жителей 20\n  -Дерево 10\n  -Серебро 150", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_bake == 1) {
			if (silver >= 500 && wood >= 40 && le_mainhome >= 3 && human >= 10 && iron >= 10) {
				wood -= 40;
				silver -= 500;
				human -= 10;
				iron -= 10;
				le_bake = 2;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 3\n  -Human 10\n  -Iron 10\n  -Silver 500\n  -Wood 40", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 3 уровень\n  -Жителей 10\n  -Железо 10\n  -Дерево 40\n  -Серебро 500", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_bake == 2) {
			if (silver >= 950 && wood >= 80 && le_mainhome >= 4 && human >= 20 && iron >= 30) {
				wood -= 80;
				silver -= 950;
				human -= 20;
				iron -= 30;
				le_bake = 3;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 4\n  -Human 20\n  -Iron 30\n  -Silver 950\n  -Wood 80", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 4 уровень\n  -Жителей 20\n  -Железо 30\n  -Дерево 80\n  -Серебро 950", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_bake == 3) {
			if (silver >= 1400 && wood >= 100 && le_mainhome >= 5 && human >= 20 && iron >= 50) {
				wood -= 100;
				silver -= 1400;
				human -= 20;
				iron -= 50;
				le_bake = 4;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 5\n  -Human 20\n  -Iron 50\n  -Silver 1400\n  -Wood 100", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 5 уровень\n  -Жителей 20\n  -Железо 50\n  -Дерево 100\n  -Серебро 1400", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
	}
	private: System::Void button_shop_protection_Click(System::Object^ sender, System::EventArgs^ e) {
		if (le_protection == 0) {
			if (le_mainhome >= 3 && human >= 20 && silver >= 700 && wood >= 30 && iron >= 15) {
				human -= 20;
				silver -= 700;
				wood -= 30;
				iron -= 15;
				le_protection = 1;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 3\n  -Human 20\n  -Iron 15\n  -Silver 700\n  -Wood 30", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 3 уровень\n  -Жителей 20\n  -Железо 15\n  -Дерево 30\n  -Серебро 700", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_protection == 1) {
			if (le_mainhome >= 3 && human >= 30 && silver >= 1200 && wood >= 70 && iron >= 30) {
				human -= 30;
				silver -= 1200;
				wood -= 70;
				iron -= 30;
				le_protection = 2;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 3\n  -Human 30\n  -Iron 30\n  -Silver 1200\n  -Wood 70", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 3 уровень\n  -Жителей 30\n  -Железо 30\n  -Дерево 70\n  -Серебро 1200", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_protection == 2) {
			if (le_mainhome >= 4 && human >= 20 && silver >= 1800 && wood >= 110 && iron >= 50) {
				human -= 20;
				silver -= 1800;
				wood -= 110;
				iron -= 50;
				le_protection = 3;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 4\n  -Human 20\n  -Iron 50\n  -Silver 1800\n  -Wood 110", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 4 уровень\n  -Жителей 20\n  -Железо 50\n  -Дерево 110\n  -Серебро 1800", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_protection == 3) {
			if (le_mainhome >= 5 && human >= 20 && silver >= 3400 && wood >= 150 && iron >= 65) {
				human -= 20;
				silver -= 3400;
				wood -= 150;
				iron -= 65;
				le_protection = 4;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 5\n  -Human 20\n  -Iron 65\n  -Silver 3400\n  -Wood 150", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 5 уровень\n  -Жителей 20\n  -Железо 65\n  -Дерево 150\n  -Серебро 3400", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
	}
	private: System::Void button_shop_market_Click(System::Object^ sender, System::EventArgs^ e) {
		if (le_market == 0) {
			if (silver >= 100 && le_mainhome >= 3) {
				silver -= 100;
				le_market = 1;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 3\n  -Silver 100", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 3 уровень\n  -Серебро 100", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
	}
	private: System::Void button_shop_farm_Click(System::Object^ sender, System::EventArgs^ e) {
		if (le_farm == 0) {
			if (silver >= 800 && iron >= 20 && wood >= 50 && le_mainhome >= 4 && human >= 40) {
				wood -= 50;
				iron -= 20;
				silver -= 800;
				human -= 40;
				le_farm = 1;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 4\n  -Human 40\n  -Iron 20\n  -Silver 800\n  -Wood 50", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 4 уровень\n  -Жителей 40\n  -Железо 20\n  -Дерево 50\n  -Серебро 800", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_farm == 1) {
			if (silver >= 900 && iron >= 25 && wood >= 60 && le_mainhome >= 4 && human >= 20) {
				wood -= 60;
				iron -= 25;
				silver -= 800;
				human -= 20;
				le_farm = 2;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 4\n  -Human 20\n  -Iron 25\n  -Silver 900\n  -Wood 60", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 4 уровень\n  -Жителей 20\n  -Железо 25\n  -Дерево 60\n  -Серебро 900", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_farm == 2) {
			if (silver >= 2600 && iron >= 30 && wood >= 80 && le_mainhome >= 5 && human >= 20) {
				wood -= 80;
				iron -= 30;
				silver -= 2600;
				human -= 20;
				le_farm = 3;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 5\n  -Human 20\n  -Iron 30\n  -Silver 2600\n  -Wood 80", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 5 уровень\n  -Жителей 20\n  -Железо 30\n  -Дерево 80\n  -Серебро 2600", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_farm == 3) {
			if (silver >= 3800 && iron >= 50 && wood >= 120 && le_mainhome >= 5 && human >= 20) {
				wood -= 120;
				iron -= 50;
				silver -= 3800;
				human -= 20;
				le_farm = 4;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 5\n  -Human 20\n  -Iron 50\n  -Silver 3800\n  -Wood 120", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 5 уровень\n  -Жителей 20\n  -Железо 50\n  -Дерево 120\n  -Серебро 3800", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
	}
	private: System::Void button_shop_windmill_Click(System::Object^ sender, System::EventArgs^ e) {
		if (le_windmill == 0) {
			if (silver >= 800 && iron >= 20 && wood >= 50 && le_mainhome >= 4 && human >= 40) {
				wood -= 50;
				iron -= 20;
				silver -= 800;
				human -= 40;
				le_windmill = 1;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 4\n  -Human 40\n  -Iron 20\n  -Silver 800\n  -Wood 50", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 4 уровень\n  -Жителей 40\n  -Железо 20\n  -Дерево 50\n  -Серебро 800", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_windmill == 1) {
			if (silver >= 900 && iron >= 25 && wood >= 60 && le_mainhome >= 4 && human >= 20) {
				wood -= 60;
				iron -= 25;
				silver -= 800;
				human -= 20;
				le_windmill = 2;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 4\n  -Human 20\n  -Iron 25\n  -Silver 900\n  -Wood 60", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 4 уровень\n  -Жителей 20\n  -Железо 25\n  -Дерево 60\n  -Серебро 900", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_windmill == 2) {
			if (silver >= 2600 && iron >= 30 && wood >= 80 && le_mainhome >= 5 && human >= 20) {
				wood -= 80;
				iron -= 30;
				silver -= 2600;
				human -= 20;
				le_windmill = 3;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 5\n  -Human 20\n  -Iron 30\n  -Silver 2600\n  -Wood 80", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 5 уровень\n  -Жителей 20\n  -Железо 30\n  -Дерево 80\n  -Серебро 2600", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_windmill == 3) {
			if (silver >= 3800 && iron >= 50 && wood >= 120 && le_mainhome >= 5 && human >= 20) {
				wood -= 120;
				iron -= 50;
				silver -= 3800;
				human -= 20;
				le_windmill = 4;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 5\n  -Human 20\n  -Iron 50\n  -Silver 3800\n  -Wood 120", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 5 уровень\n  -Жителей 20\n  -Железо 50\n  -Дерево 120\n  -Серебро 3800", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
	}
	private: System::Void button_shop_bakery_Click(System::Object^ sender, System::EventArgs^ e) {
		if (le_bakery == 0) {
			if (silver >= 2800 && wood >= 80 && iron >= 40 && le_mainhome >= 5 && human >= 100) {
				silver -= 2800;
				wood -= 80;
				iron -= 40;
				human -= 100;
				le_bakery = 1;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 5\n  -Human 100\n  -Iron 40\n  -Silver 2800\n  -Wood 80", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 5 уровень\n  -Жителей 100\n  -Железо 40\n  -Дерево 80\n  -Серебро 2800", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_bakery == 1) {
			if (silver >= 4600 && wood >= 190 && iron >= 60 && le_mainhome >= 5 && human >= 20) {
				silver -= 4600;
				wood -= 190;
				iron -= 60;
				human -= 20;
				le_bakery = 2;
				exs(15);
				save();
				if (sounds) WinExec("good.exe", 1);
				this->panel_shop->Visible = false;
			}
			else {
				if (language) MessageBox::Show("Aw... To improve, you need:\n  -Town Hall level 5\n  -Human 20\n  -Iron 60\n  -Silver 4600\n  -Wood 190", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... Для улучшения нужно:\n  -Ратуша 5 уровень\n  -Жителей 20\n  -Железо 60\n  -Дерево 190\n  -Серебро 4600", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
	}

	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (gold >= 1) {
			if (silver <= 6900) {
				gold -= 1;
				silver += 100;
				save();
				if (sounds) WinExec("good.exe", 1);
			}
			else {
				if (language) MessageBox::Show("Aw... There is not enough space in the storage!", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ой... В хранилище недостаточно места!", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else {
			if (language) MessageBox::Show("Aw... To purchase, you need:\n  -Gold 1", "Aw...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			else MessageBox::Show("Ой... Для покупки нужно:\n  -Золото 1", "Ой...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}

		   //mine
	private: System::Void pictureButt_mine_Click(System::Object^ sender, System::EventArgs^ e) {
		if (le_mine != 0) {
			this->panel_vilage->Visible = false;
			this->panel_sawmill->Visible = false;
			this->panelMenuSetting->Visible = false;
			//this->panel_mine->Visible = false;
			this->panel_market->Visible = false;
			this->panel_bake->Visible = false;
			this->panel_shop->Visible = false;
			this->panel_farm->Visible = false;
			this->panel_windmill->Visible = false;
			this->panel_bakery->Visible = false;
			this->panel_protect->Visible = false;
			this->panel_mine->Visible = !this->panel_mine->Visible;
			if (sounds)WinExec("mine.exe", 1);

			if (language) {
				this->toolTip1->SetToolTip(this->pictureBox_butt_pickaxe, L"Mine");
				if (le_mine == 1) this->label_mine_levelM->Text = "Mine level 1";
				if (le_mine == 2) this->label_mine_levelM->Text = "Mine level 2";
				if (le_mine == 3) this->label_mine_levelM->Text = "Mine level 3";
				if (le_mine == 4) this->label_mine_levelM->Text = "Mine level 4";

				if (le_mine == 1) this->label_mine_info->Text = L"Hire miners: 20 silver\r\n   Coal 1-3\r\n   Iron ore 0-1";
				if (le_mine == 2) this->label_mine_info->Text = L"Hire miners: 30 silver\r\n   Coal 2-7\r\n   Iron ore 1-3";
				if (le_mine == 3) this->label_mine_info->Text = L"Hire miners: 40 silver\r\n   Coal 5-12\r\n   Iron ore 3-7";
				if (le_mine == 4) this->label_mine_info->Text = L"Hire miners: 50 silver\r\n   Coal 8-20\r\n   Iron ore 5-11\r\n  1 Gold (10%)";
			}
			else {
				this->toolTip1->SetToolTip(this->pictureBox_butt_pickaxe, L"Добывать");
				if (le_mine == 1) this->label_mine_levelM->Text = "Шахта 1 уровня";
				if (le_mine == 2) this->label_mine_levelM->Text = "Шахта 2 уровня";
				if (le_mine == 3) this->label_mine_levelM->Text = "Шахта 3 уровня";
				if (le_mine == 4) this->label_mine_levelM->Text = "Шахта 4 уровня";

				if (le_mine == 1) this->label_mine_info->Text = L"Нанять шахтёров: 20 серебра\r\n   Уголь 1-3\r\n   Железная руда 0-1";
				if (le_mine == 2) this->label_mine_info->Text = L"Нанять шахтёров: 30 серебра\r\n   Уголь 2-7\r\n   Железная руда 1-3";
				if (le_mine == 3) this->label_mine_info->Text = L"Нанять шахтёров: 40 серебра\r\n   Уголь 5-12\r\n   Железная руда 3-7";
				if (le_mine == 4) this->label_mine_info->Text = L"Нанять шахтёров: 50 серебра\r\n   Уголь 8-20\r\n   Железная руда 5-11\r\n  1 Золото (10%)";
			}
		}
		else {
			if (language) MessageBox::Show("Aw... Buy a mine in the store!", "Mine", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			else MessageBox::Show("Ой... Купите шахту в магазине!", "Шахта", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	private: System::Void pictureBox_butt_pickaxe_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pictureBox_butt_pickaxe->Cursor = System::Windows::Forms::Cursors::WaitCursor;
		if (language) MessageBox::Show("You need to wait 10 seconds", "Mine", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		else MessageBox::Show("Нужно подождать 10 секунд", "Шахта", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);




		if (le_mine == 1) {
			if (silver >= 20) {
				if (sounds)WinExec("mine.exe", 1);
				{
					Sleep(2000);
					Sleep(2000);
					Sleep(2000);
					Sleep(2000);
					Sleep(2000);
				}
				silver -= 20;
				coal += random(1, 3);
				iron_ore += random(0, 1);
				exs(2);
				save();
			}
			else {
				if (language) MessageBox::Show("Not enough silver!", "Mine", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Недостаточно серебра!", "Шахта", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_mine == 2) {
			if (sounds)WinExec("mine.exe", 1);
			if (silver >= 30) {
				{
					Sleep(2000);
					Sleep(2000);
					Sleep(2000);
					Sleep(2000);
					Sleep(2000);
				}
				silver -= 30;
				coal += random(2, 7);
				iron_ore += random(1, 3);
				exs(4);
				save();
			}
			else {
				if (language) MessageBox::Show("Not enough silver!", "Mine", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Недостаточно серебра!", "Шахта", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_mine == 3) {
			if (silver >= 40) {
				if (sounds)WinExec("mine.exe", 1);
				{
					{
						Sleep(2000);
						Sleep(2000);
						Sleep(2000);
						Sleep(2000);
						Sleep(2000);
					}
				}
				silver -= 40;
				coal += random(5, 12);
				iron_ore += random(3, 7);
				exs(6);
				save();
			}
			else {
				if (language) MessageBox::Show("Not enough silver!", "Mine", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Недостаточно серебра!", "Шахта", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_mine == 4) {
			if (silver >= 50) {
				if (sounds)WinExec("mine.exe", 1);
				{
					{
						Sleep(2000);
						Sleep(2000);
						Sleep(2000);
						Sleep(2000);
						Sleep(2000);
					}
				}
				silver -= 50;
				coal += random(8, 20);
				iron_ore += random(5, 11);
				exs(8);
				if (random(1, 10) == 1) gold += 1;
				save();
			}
			else {
				if (language) MessageBox::Show("Not enough silver!", "Mine", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Недостаточно серебра!", "Шахта", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		grabe();
		switch (difficulty)
		{
		case 1:
			if (random(1, 50) == 1) {
				if (language) MessageBox::Show("Blockage!!! \n There was a blockage in the mine.\n Cost:\n  500 silser", "Mine", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Завал!!!\n В шахте случился завал. \n Затраты:\n  500 серебра", "Шахта", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				if (silver <= 500) silver = 0; else silver -= 500;
			}
			break;
		case 2:
			if (random(1, 30) == 1) {
				if (language) MessageBox::Show("Blockage!!! \n There was a blockage in the mine.\n Cost:\n  800 silser", "Mine", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Завал!!!\n В шахте случился завал. \n Затраты:\n  800 серебра", "Шахта", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				if (silver <= 800) silver = 0; else silver -= 800;
			}
			break;
		case 3:
			if (random(1, 20) == 1) {
				if (language) MessageBox::Show("Blockage!!! \n There was a blockage in the mine.\n Cost:\n  1200 silser", "Mine", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Завал!!!\n В шахте случился завал. \n Затраты:\n  1200 серебра", "Шахта", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				if (silver <= 1200) silver = 0; else silver -= 1200;
			}
			break;
		}
		save();
		if (sounds)WinExec("pickaxe.exe", 1);
		this->pictureBox_butt_pickaxe->Cursor = System::Windows::Forms::Cursors::Hand;
	}

		   //bake
	private: System::Void pictureButt_bake_Click(System::Object^ sender, System::EventArgs^ e) {
		if (le_bake != 0) {
			this->panel_vilage->Visible = false;
			this->panel_sawmill->Visible = false;
			this->panelMenuSetting->Visible = false;
			this->panel_mine->Visible = false;
			this->panel_market->Visible = false;
			//this->panel_bake->Visible = false;
			this->panel_shop->Visible = false;
			this->panel_farm->Visible = false;
			this->panel_windmill->Visible = false;
			this->panel_bakery->Visible = false;
			this->panel_protect->Visible = false;
			this->panel_bake->Visible = !this->panel_bake->Visible;
			if (sounds)WinExec("fire.exe", 1);

			if (language) {
				this->button_bake->Text = L"Melt it down";
				if (le_bake == 1) this->label_bake_level->Text = L"Foundry level 1";
				if (le_bake == 2) this->label_bake_level->Text = L"Foundry level 2";
				if (le_bake == 3) this->label_bake_level->Text = L"Foundry level 3";
				if (le_bake == 4) this->label_bake_level->Text = L"Foundry level 4";

				if (le_bake == 1) this->label_bake_info->Text = L"For remelting, you need:\r\n  Iron ore 1\r\n  Coal 2\r\nGet it:\r\n  Iron 1";
				if (le_bake == 2) this->label_bake_info->Text = L"For remelting, you need:\r\n  Iron ore 3\r\n  Coal 6\r\nGet it:\r\n  Iron 3";
				if (le_bake == 3) this->label_bake_info->Text = L"For remelting, you need:\r\n  Iron ore 5\r\n  Coal 9\r\nGet it:\r\n  Iron 5";
				if (le_bake == 4) this->label_bake_info->Text = L"For remelting, you need:\r\n  Iron ore 10\r\n  Coal 18\r\nGet it:\r\n  Iron 10";
			}
			else {
				this->button_bake->Text = L"Переплавить";
				if (le_bake == 1) this->label_bake_level->Text = L"Плавильня 1 уровня";
				if (le_bake == 2) this->label_bake_level->Text = L"Плавильня 2 уровня";
				if (le_bake == 3) this->label_bake_level->Text = L"Плавильня 3 уровня";
				if (le_bake == 4) this->label_bake_level->Text = L"Плавильня 4 уровня";

				if (le_bake == 1) this->label_bake_info->Text = L"Для переплавки нужно:\r\n  Железная руда 1\r\n  Уголь 2\r\nПолучите:\r\n  Железо 1";
				if (le_bake == 2) this->label_bake_info->Text = L"Для переплавки нужно:\r\n  Железная руда 3\r\n  Уголь 6\r\nПолучите:\r\n  Железо 3";
				if (le_bake == 3) this->label_bake_info->Text = L"Для переплавки нужно:\r\n  Железная руда 5\r\n  Уголь 9\r\nПолучите:\r\n  Железо 5";
				if (le_bake == 4) this->label_bake_info->Text = L"Для переплавки нужно:\r\n  Железная руда 10\r\n  Уголь 18\r\nПолучите:\r\n  Железо 10";
			}
		}
		else {
			if (language) MessageBox::Show("Aw... Buy a foundry in the store!", "Foundry", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			else MessageBox::Show("Ой... Купите плавильню в магазине!", "Плавильня", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	private: System::Void button_bake_Click(System::Object^ sender, System::EventArgs^ e) {
		this->button_bake->Cursor = System::Windows::Forms::Cursors::WaitCursor;
		if (language) MessageBox::Show("You need to wait 10 seconds", "Foundry", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		else MessageBox::Show("Нужно подождать 10 секунд", "Плавильня", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);


		if (le_bake == 1) {
			if (coal >= 2 && iron_ore >= 1) {
				if (sounds)WinExec("fire.exe", 1);
				{
					Sleep(2000);
					Sleep(2000);
					Sleep(2000);
					Sleep(2000);
					Sleep(2000);
				}
				iron_ore -= 1;
				coal -= 2;
				iron += 1;
				exs(4);
				save();
			}
			else {
				if (language) MessageBox::Show("Insufficient resources!", "Foundry", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Недостаточно ресурсов!", "Плавильня", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_bake == 2) {
			if (coal >= 6 && iron_ore >= 3) {
				if (sounds)WinExec("fire.exe", 1);
				{
					Sleep(2000);
					Sleep(2000);
					Sleep(2000);
					Sleep(2000);
					Sleep(2000);
				}
				iron_ore -= 3;
				coal -= 6;
				iron += 3;
				exs(5);
				save();
			}
			else {
				if (language) MessageBox::Show("Insufficient resources!", "Foundry", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Недостаточно ресурсов!", "Плавильня", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_bake == 3) {
			if (coal >= 9 && iron_ore >= 5) {
				if (sounds)WinExec("fire.exe", 1);
				{
					Sleep(2000);
					Sleep(2000);
					Sleep(2000);
					Sleep(2000);
					Sleep(2000);
				}
				iron_ore -= 5;
				coal -= 9;
				iron += 5;
				exs(7);
				save();
			}
			else {
				if (language) MessageBox::Show("Insufficient resources!", "Foundry", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Недостаточно ресурсов!", "Плавильня", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_bake == 4) {
			if (coal >= 18 && iron_ore >= 10) {
				if (sounds)WinExec("fire.exe", 1);
				{
					Sleep(2000);
					Sleep(2000);
					Sleep(2000);
					Sleep(2000);
					Sleep(2000);
				}
				iron_ore -= 10;
				coal -= 18;
				iron += 10;
				exs(8);
				save();
			}
			else {
				if (language) MessageBox::Show("Insufficient resources!", "Foundry", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Недостаточно ресурсов!", "Плавильня", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		grabe();
		save();
		if (sounds)WinExec("fire.exe", 1);
		this->button_bake->Cursor = System::Windows::Forms::Cursors::Hand;
	}

		   //sawmill
	private: System::Void pictureButt_sawmill_Click(System::Object^ sender, System::EventArgs^ e) {
		if (le_sawmill != 0) {
			this->panel_sawmill->Visible = !this->panel_sawmill->Visible;
			this->panel_vilage->Visible = false;
			//this->panel_sawmill->Visible = false;
			this->panelMenuSetting->Visible = false;
			this->panel_mine->Visible = false;
			this->panel_market->Visible = false;
			this->panel_bake->Visible = false;
			this->panel_shop->Visible = false;
			this->panel_farm->Visible = false;
			this->panel_windmill->Visible = false;
			this->panel_bakery->Visible = false;
			this->panel_protect->Visible = false;

			if (sounds)WinExec("pila.exe", 1);
			if (language) {
				if (le_sawmill == 1) this->label_sawmill_level->Text = L"Sawmill level 1";
				if (le_sawmill == 2) this->label_sawmill_level->Text = L"Sawmill level 2";
				if (le_sawmill == 3) this->label_sawmill_level->Text = L"Sawmill level 3";
				if (le_sawmill == 4) this->label_sawmill_level->Text = L"Sawmill level 4";

				if (le_sawmill == 1) this->label_sawmill_info->Text = L"Hire loggers: 10 Silver\r\n  Wood 1-2";
				if (le_sawmill == 2) this->label_sawmill_info->Text = L"Hire loggers: 20 Silver\r\n  Wood 3-5";
				if (le_sawmill == 3) this->label_sawmill_info->Text = L"Hire loggers: 20 Silver\r\n  Wood 5-8";
				if (le_sawmill == 4) this->label_sawmill_info->Text = L"Hire loggers: 30 Silver\r\n  Wood 8-12";
			}
			else {
				if (le_sawmill == 1) this->label_sawmill_level->Text = L"Лесопилка 1 уровня";
				if (le_sawmill == 2) this->label_sawmill_level->Text = L"Лесопилка 2 уровня";
				if (le_sawmill == 3) this->label_sawmill_level->Text = L"Лесопилка 3 уровня";
				if (le_sawmill == 4) this->label_sawmill_level->Text = L"Лесопилка 4 уровня";

				if (le_sawmill == 1) this->label_sawmill_info->Text = L"Нанять лесорубов: 10 серебра\r\n  Дерево 1-2";
				if (le_sawmill == 2) this->label_sawmill_info->Text = L"Нанять лесорубов: 20 серебра\r\n  Дерево 3-5";
				if (le_sawmill == 3) this->label_sawmill_info->Text = L"Нанять лесорубов: 20 серебра\r\n  Дерево 5-8";
				if (le_sawmill == 4) this->label_sawmill_info->Text = L"Нанять лесорубов: 30 серебра\r\n  Дерево 8-12";
			}
		}
		else {
			if (language) MessageBox::Show("Aw... Buy a sawmill in the store!", "Sawmill", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			else MessageBox::Show("Ой... Купите лесопилку в магазине!", "Лесопилка", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	private: System::Void pictureBox_sawmill_axe_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pictureBox_sawmill_axe->Cursor = System::Windows::Forms::Cursors::WaitCursor;
		if (language) MessageBox::Show("You need to wait 10 seconds", "Sawmill", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		else MessageBox::Show("Нужно подождать 10 секунд", "Лесопилка", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);

		if (le_sawmill == 1) {
			if (silver >= 10) {
				if (sounds)WinExec("axe.exe", 1);
				{
					Sleep(2000);
					Sleep(2000);
					Sleep(2000);
					Sleep(2000);
					Sleep(2000);
				}
				silver -= 10;
				wood += random(1, 2);
				exs(2);
				save();
			}
			else {
				if (language) MessageBox::Show("Insufficient resources!", "Sawmill", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Недостаточно ресурсов!", "Лесопилка", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_sawmill == 2) {
			if (silver >= 20) {
				if (sounds)WinExec("axe.exe", 1);
				{
					Sleep(2000);
					Sleep(2000);
					Sleep(2000);
					Sleep(2000);
					Sleep(2000);
				}
				silver -= 20;
				wood += random(3, 5);
				exs(3);
				save();
			}
			else {
				if (language) MessageBox::Show("Insufficient resources!", "Sawmill", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Недостаточно ресурсов!", "Лесопилка", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_sawmill == 3) {
			if (silver >= 20) {
				if (sounds)WinExec("axe.exe", 1);
				{
					Sleep(2000);
					Sleep(2000);
					Sleep(2000);
					Sleep(2000);
					Sleep(2000);
				}
				silver -= 20;
				wood += random(5, 8);
				exs(5);
				save();
			}
			else {
				if (language) MessageBox::Show("Insufficient resources!", "Sawmill", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Недостаточно ресурсов!", "Лесопилка", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_sawmill == 4) {
			if (silver >= 30) {
				if (sounds)WinExec("axe.exe", 1);
				{
					Sleep(2000);
					Sleep(2000);
					Sleep(2000);
					Sleep(2000);
					Sleep(2000);
				}
				silver -= 30;
				wood += random(8, 12);
				exs(6);
				save();
			}
			else {
				if (language) MessageBox::Show("Insufficient resources!", "Sawmill", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Недостаточно ресурсов!", "Лесопилка", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}

		switch (difficulty)
		{
		case 1:
			if (random(1, 50) == 1) {
				if (language) MessageBox::Show("An accident!!! \n There was an accident at the sawmill.\n Cost:\n  500 silser", "Mine", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Несчастный случай!!!\n На лесопилке произошел несчастный случай. \n Затраты:\n  500 серебра", "Шахта", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				if (silver <= 500) silver = 0; else silver -= 500;
			}
			break;
		case 2:
			if (random(1, 30) == 1) {
				if (language) MessageBox::Show("An accident!!! \n There was an accident at the sawmill.\n Cost:\n  800 silser", "Mine", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Несчастный случай!!!\n На лесопилке произошел несчастный случай. \n Затраты:\n  800 серебра", "Шахта", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				if (silver <= 800) silver = 0; else silver -= 800;
			}
			break;
		case 3:
			if (random(1, 20) == 1) {
				if (language) MessageBox::Show("An accident!!! \n There was an accident at the sawmill.\n Cost:\n  1200 silser", "Mine", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Несчастный случай!!!\n На лесопилке произошел несчастный случай. \n Затраты:\n  1200 серебра", "Шахта", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				if (silver <= 1200) silver = 0; else silver -= 1200;
			}
			break;
		}
		save();
		grabe();
		if (sounds)WinExec("axe.exe", 1);
		this->pictureBox_sawmill_axe->Cursor = System::Windows::Forms::Cursors::Hand;
	}

		   //vilage
	private: System::Void pictureButt_village_Click(System::Object^ sender, System::EventArgs^ e) {
		if (le_village != 0) {
			this->panel_vilage->Visible = !this->panel_vilage->Visible;
			//this->panel_vilage->Visible = false;
			this->panel_sawmill->Visible = false;
			this->panelMenuSetting->Visible = false;
			this->panel_mine->Visible = false;
			this->panel_market->Visible = false;
			this->panel_bake->Visible = false;
			this->panel_shop->Visible = false;
			this->panel_farm->Visible = false;
			this->panel_windmill->Visible = false;
			this->panel_bakery->Visible = false;
			this->panel_protect->Visible = false;

			grabe();
			if (sounds)WinExec("gor.exe", 1);

			if (language) {
				if (le_village == 1) this->label_vilage_info->Text = L"Village level 1  \r\n Lives: 20 human";
				if (le_village == 2) this->label_vilage_info->Text = L"Village level 2  \r\n Lives: 50 human";
				if (le_village == 3) this->label_vilage_info->Text = L"Village level 3  \r\n Lives: 90 human";
				if (le_village == 4) this->label_vilage_info->Text = L"Village level 4  \r\n Lives: 140 human";
				if (le_village == 5) this->label_vilage_info->Text = L"Village level 5  \r\n Lives: 200 human";
				if (le_village == 6) this->label_vilage_info->Text = L"Village level 6  \r\n Lives: 270 human";
				if (le_village == 7) this->label_vilage_info->Text = L"Village level 7  \r\n Lives: 350 human";
				if (le_village == 8) this->label_vilage_info->Text = L"Village level 8  \r\n Lives: 500 human";
				if (le_village == 9) this->label_vilage_info->Text = L"Village level 9  \r\n Lives: 700 human";
			}
			else {
				if (le_village == 1) this->label_vilage_info->Text = L"Поселение 1 уровня\r\n Проживает: 20 человек";
				if (le_village == 2) this->label_vilage_info->Text = L"Поселение 2 уровня\r\n Проживает: 50 человек";
				if (le_village == 3) this->label_vilage_info->Text = L"Поселение 3 уровня\r\n Проживает: 90 человек";
				if (le_village == 4) this->label_vilage_info->Text = L"Поселение 4 уровня\r\n Проживает: 140 человек";
				if (le_village == 5) this->label_vilage_info->Text = L"Поселение 5 уровня\r\n Проживает: 200 человек";
				if (le_village == 6) this->label_vilage_info->Text = L"Поселение 6 уровня\r\n Проживает: 270 человек";
				if (le_village == 7) this->label_vilage_info->Text = L"Поселение 7 уровня\r\n Проживает: 350 человек";
				if (le_village == 8) this->label_vilage_info->Text = L"Поселение 8 уровня\r\n Проживает: 500 человек";
				if (le_village == 9) this->label_vilage_info->Text = L"Поселение 9 уровня\r\n Проживает: 700 человек";
			}
		}
		else {
			if (language) MessageBox::Show("Aw... Buy a village in the store!", "Village", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			else MessageBox::Show("Ой... Купите поселение в магазине!", "Поселение", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}

		   //market
	private: System::Void pictureButt_market_Click(System::Object^ sender, System::EventArgs^ e) {
		if (le_market != 0) {
			this->panel_vilage->Visible = false;
			this->panel_sawmill->Visible = false;
			this->panelMenuSetting->Visible = false;
			this->panel_mine->Visible = false;
			//this->panel_market->Visible = false;
			this->panel_bake->Visible = false;
			this->panel_shop->Visible = false;
			this->panel_farm->Visible = false;
			this->panel_windmill->Visible = false;
			this->panel_bakery->Visible = false;
			this->panel_protect->Visible = false;
			this->panel_market->Visible = !this->panel_market->Visible;
			if (sounds)WinExec("gor.exe", 1);

			if (language) {
				this->label_market_info->Text = L"1. To sell 3 coal for 10 silver\r\n\r\n2. To sell iron for 10 silver\r\n\r\n3. To sell "
					L"2 flour for 30 silver\r\n\r\n4. To sell bread for 40 silver";
			}
			else {
				this->label_market_info->Text = L"1. Продать 3 угля за 10 серебра\r\n\r\n2. Продать железо за 10 серебра\r\n\r\n3. Продать "
					L"2 муки за 30 серебра\r\n\r\n4. Продать хлеб за 40 серебра";
			}
		}
		else {
			if (language) MessageBox::Show("Aw... Buy a market in the store!", "Market", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			else MessageBox::Show("Ой... Купите рынок в магазине!", "Рынок", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	private: System::Void butt_market_1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (coal >= 3) {
			if (sounds)WinExec("money.exe", 1);
			silver += 10;
			coal -= 3;
			exs(1);
			save();
		}
		else {
			if (language) MessageBox::Show("Insufficient resources!", "Market", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			else MessageBox::Show("Недостаточно ресурсов!", "Рынок", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	private: System::Void butt_market_2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (iron >= 1) {
			if (sounds)WinExec("money.exe", 1);
			silver += 10;
			iron -= 1;
			exs(1);
			save();
		}
		else {
			if (language) MessageBox::Show("Insufficient resources!", "Market", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			else MessageBox::Show("Недостаточно ресурсов!", "Рынок", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	private: System::Void butt_market_3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (flour >= 2) {
			if (sounds)WinExec("money.exe", 1);
			silver += 30;
			flour -= 2;
			exs(1);
			save();
		}
		else {
			if (language) MessageBox::Show("Insufficient resources!", "Market", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			else MessageBox::Show("Недостаточно ресурсов!", "Рынок", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	private: System::Void butt_market_4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (bread >= 1) {
			if (sounds)WinExec("money.exe", 1);
			silver += 40;
			bread -= 1;
			exs(2);
			save();
		}
		else {
			if (language) MessageBox::Show("Insufficient resources!", "Market", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			else MessageBox::Show("Недостаточно ресурсов!", "Рынок", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}

		   //farm
	private: System::Void pictureButt_farm_Click(System::Object^ sender, System::EventArgs^ e) {
		if (le_farm != 0) {
			this->panel_vilage->Visible = false;
			this->panel_sawmill->Visible = false;
			this->panelMenuSetting->Visible = false;
			this->panel_mine->Visible = false;
			this->panel_market->Visible = false;
			this->panel_bake->Visible = false;
			this->panel_shop->Visible = false;
			//this->panel_farm->Visible = false;
			this->panel_windmill->Visible = false;
			this->panel_bakery->Visible = false;
			this->panel_protect->Visible = false;
			this->panel_farm->Visible = !this->panel_farm->Visible;
			if (sounds)WinExec("farm.exe", 1);

			if (language) {
				if (le_farm == 1) this->label_farm_level->Text = L"Farm level 1";
				if (le_farm == 2) this->label_farm_level->Text = L"Farm level 2";
				if (le_farm == 3) this->label_farm_level->Text = L"Farm level 3";
				if (le_farm == 4) this->label_farm_level->Text = L"Farm level 4";

				if (le_farm == 1) this->label_farm_info->Text = L"Hire farmers: 10 silver\r\n  Wheat 2";
				if (le_farm == 2) this->label_farm_info->Text = L"Hire farmers: 20 silver\r\n  Wheat 4";
				if (le_farm == 3) this->label_farm_info->Text = L"Hire farmers: 30 silver\r\n  Wheat 8";
				if (le_farm == 4) this->label_farm_info->Text = L"Hire farmers: 40 silver\r\n  Wheat 12";
			}
			else {
				if (le_farm == 1) this->label_farm_level->Text = L"Ферма 1 уровня";
				if (le_farm == 2) this->label_farm_level->Text = L"Ферма 2 уровня";
				if (le_farm == 3) this->label_farm_level->Text = L"Ферма 3 уровня";
				if (le_farm == 4) this->label_farm_level->Text = L"Ферма 4 уровня";

				if (le_farm == 1) this->label_farm_info->Text = L"Нанять фермеров: 10 серебра\r\n  Пшеница 2";
				if (le_farm == 2) this->label_farm_info->Text = L"Нанять фермеров: 20 серебра\r\n  Пшеница 4";
				if (le_farm == 3) this->label_farm_info->Text = L"Нанять фермеров: 30 серебра\r\n  Пшеница 8";
				if (le_farm == 4) this->label_farm_info->Text = L"Нанять фермеров: 40 серебра\r\n  Пшеница 12";
			}
		}
		else {
			if (language) MessageBox::Show("Aw... Buy a farm in the store!", "Farm", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			else MessageBox::Show("Ой... Купите ферму в магазине!", "Ферма", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	private: System::Void butt_farm_1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->butt_farm_1->Cursor = System::Windows::Forms::Cursors::WaitCursor;
		if (language) MessageBox::Show("You need to wait 10 seconds", "Farm", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		else MessageBox::Show("Нужно подождать 10 секунд", "Ферма", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);



		if (le_farm == 1) {
			if (silver >= 10) {
				if (sounds)WinExec("farm.exe", 1);
				Sleep(2000);
				Sleep(2000);
				Sleep(2000);
				Sleep(2000);
				Sleep(2000);
				silver -= 10;
				wheat += 2;
				exs(3);
				save();
			}
			else {
				if (language) MessageBox::Show("Insufficient resources!", "Farm", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Недостаточно ресурсов!", "Ферма", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_farm == 2) {
			if (silver >= 20) {
				if (sounds)WinExec("farm.exe", 1);
				Sleep(2000);
				Sleep(2000);
				Sleep(2000);
				Sleep(2000);
				Sleep(2000);
				silver -= 20;
				wheat += 4;
				exs(4);
				save();
			}
			else {
				if (language) MessageBox::Show("Insufficient resources!", "Farm", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Недостаточно ресурсов!", "Ферма", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_farm == 3) {
			if (silver >= 30) {
				if (sounds)WinExec("farm.exe", 1);
				Sleep(2000);
				Sleep(2000);
				Sleep(2000);
				Sleep(2000);
				Sleep(2000);
				silver -= 30;
				wheat += 8;
				exs(5);
				save();
			}
			else {
				if (language) MessageBox::Show("Insufficient resources!", "Farm", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Недостаточно ресурсов!", "Ферма", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_farm == 4) {
			if (silver >= 40) {
				if (sounds)WinExec("farm.exe", 1);
				Sleep(2000);
				Sleep(2000);
				Sleep(2000);
				Sleep(2000);
				Sleep(2000);
				silver -= 40;
				wheat += 12;
				exs(7);
				save();
			}
			else {
				if (language) MessageBox::Show("Insufficient resources!", "Farm", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Недостаточно ресурсов!", "Ферма", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		grabe();
		if (sounds)WinExec("farm.exe", 1);
		this->butt_farm_1->Cursor = System::Windows::Forms::Cursors::Hand;
		save();
	}

		   //windmill
	private: System::Void pictureButt_windmill_Click(System::Object^ sender, System::EventArgs^ e) {
		if (le_windmill != 0) {
			this->panel_vilage->Visible = false;
			this->panel_sawmill->Visible = false;
			this->panelMenuSetting->Visible = false;
			this->panel_mine->Visible = false;
			this->panel_market->Visible = false;
			this->panel_bake->Visible = false;
			this->panel_shop->Visible = false;
			this->panel_farm->Visible = false;
			//this->panel_windmill->Visible = false;
			this->panel_bakery->Visible = false;
			this->panel_protect->Visible = false;
			this->panel_windmill->Visible = !this->panel_windmill->Visible;
			if (sounds)WinExec("wind.exe", 1);

			if (language) {
				if (le_windmill == 1) this->label_windmill_level->Text = L"Windmill level 1";
				if (le_windmill == 2) this->label_windmill_level->Text = L"Windmill level 2";
				if (le_windmill == 3) this->label_windmill_level->Text = L"Windmill level 3";
				if (le_windmill == 4) this->label_windmill_level->Text = L"Windmill level 4";

				if (le_windmill == 1) this->label_windmill_info_->Text = L"To grind wheat, you need::\r\n  Wheat 2\r\n Get it:\r\n  Flour 1";
				if (le_windmill == 2) this->label_windmill_info_->Text = L"To grind wheat, you need::\r\n  Wheat 4\r\n Get it:\r\n  Flour 2";
				if (le_windmill == 3) this->label_windmill_info_->Text = L"To grind wheat, you need::\r\n  Wheat 8\r\n Get it:\r\n  Flour 4";
				if (le_windmill == 4) this->label_windmill_info_->Text = L"To grind wheat, you need::\r\n  Wheat 15\r\n Get it:\r\n  Flour 8";

				this->butt_windmill_1->Text = L"Grind";
			}
			else {
				if (le_windmill == 1) this->label_windmill_level->Text = L"Мельница 1 уровня";
				if (le_windmill == 2) this->label_windmill_level->Text = L"Мельница 2 уровня";
				if (le_windmill == 3) this->label_windmill_level->Text = L"Мельница 3 уровня";
				if (le_windmill == 4) this->label_windmill_level->Text = L"Мельница 4 уровня";

				if (le_windmill == 1) this->label_windmill_info_->Text = L"Для перемолки пшеницы нужно:\r\n  Пшеница 2\r\n Получите:\r\n  Мука 1";
				if (le_windmill == 2) this->label_windmill_info_->Text = L"Для перемолки пшеницы нужно:\r\n  Пшеница 4\r\n Получите:\r\n  Мука 2";
				if (le_windmill == 3) this->label_windmill_info_->Text = L"Для перемолки пшеницы нужно:\r\n  Пшеница 8\r\n Получите:\r\n  Мука 4";
				if (le_windmill == 4) this->label_windmill_info_->Text = L"Для перемолки пшеницы нужно:\r\n  Пшеница 15\r\n Получите:\r\n  Мука 8";

				this->butt_windmill_1->Text = L"Перемолоть";
			}
		}
		else {
			if (language) MessageBox::Show("Aw... Buy a windmill in the store!", "Windmill", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			else MessageBox::Show("Ой... Купите мельницу в магазине!", "Мельница", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	private: System::Void butt_windmill_1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->butt_windmill_1->Cursor = System::Windows::Forms::Cursors::WaitCursor;
		if (language) MessageBox::Show("You need to wait 10 seconds", "Windmill", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		else MessageBox::Show("Нужно подождать 10 секунд", "Мельница", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);

		if (le_windmill == 1) {
			if (wheat >= 2) {
				if (sounds)WinExec("wind.exe", 1);
				Sleep(2000);
				Sleep(2000);
				Sleep(2000);
				Sleep(2000);
				Sleep(2000);
				wheat -= 2;
				flour += 1;
				exs(3);
				save();
			}
			else {
				if (language) MessageBox::Show("Insufficient resources!", "Windmill", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Недостаточно ресурсов!", "Мельница", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_windmill == 2) {
			if (wheat >= 4) {
				if (sounds)WinExec("wind.exe", 1);
				Sleep(2000);
				Sleep(2000);
				Sleep(2000);
				Sleep(2000);
				Sleep(2000);
				wheat -= 4;
				flour += 2;
				exs(4);
				save();
			}
			else {
				if (language) MessageBox::Show("Insufficient resources!", "Windmill", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Недостаточно ресурсов!", "Мельница", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_windmill == 3) {
			if (wheat >= 8) {
				if (sounds)WinExec("wind.exe", 1);
				Sleep(2000);
				Sleep(2000);
				Sleep(2000);
				Sleep(2000);
				Sleep(2000);
				wheat -= 8;
				flour += 4;
				exs(6);
				save();
			}
			else {
				if (language) MessageBox::Show("Insufficient resources!", "Windmill", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Недостаточно ресурсов!", "Мельница", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_windmill == 4) {
			if (wheat >= 15) {
				if (sounds)WinExec("wind.exe", 1);
				Sleep(2000);
				Sleep(2000);
				Sleep(2000);
				Sleep(2000);
				Sleep(2000);
				wheat -= 15;
				flour += 8;
				exs(7);
				save();
			}
			else {
				if (language) MessageBox::Show("Insufficient resources!", "Windmill", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Недостаточно ресурсов!", "Мельница", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}

		grabe();
		if (sounds)WinExec("wind.exe", 1);
		this->butt_windmill_1->Cursor = System::Windows::Forms::Cursors::Hand;
		save();
	}

		   //bakery
	private: System::Void pictureButt_bakery_Click(System::Object^ sender, System::EventArgs^ e) {
		if (le_bakery != 0) {
			this->panel_vilage->Visible = false;
			this->panel_sawmill->Visible = false;
			this->panelMenuSetting->Visible = false;
			this->panel_mine->Visible = false;
			this->panel_market->Visible = false;
			this->panel_bake->Visible = false;
			this->panel_shop->Visible = false;
			this->panel_farm->Visible = false;
			this->panel_windmill->Visible = false;
			this->panel_protect->Visible = false;
			this->panel_bakery->Visible = !this->panel_bakery->Visible;
			if (sounds)WinExec("fire.exe", 1);

			if (language) {
				if (le_bakery == 1) this->label_bakery_level->Text = L"Bakery level 1";
				if (le_bakery == 2) this->label_bakery_level->Text = L"Bakery level 2";

				if (le_bakery == 1) this->label_bakery_info->Text = L"Bake bread for:\r\n  Coal 1\r\n  Flour 2\r\n Get it:\r\n  Bread 1";
				if (le_bakery == 2) this->label_bakery_info->Text = L"Bake bread for:\r\n  Coal 3\r\n  Flour 6\r\n Get it:\r\n  Bread 3";

				this->butt_bakery_1->Text = L"Bake";
			}
			else {
				if (le_bakery == 1) this->label_bakery_level->Text = L"Пекарня 1 уровня";
				if (le_bakery == 2) this->label_bakery_level->Text = L"Пекарня 2 уровня";

				if (le_bakery == 1) this->label_bakery_info->Text = L"Испечь хлеб за:\r\n  Уголь 1\r\n  Мука 2\r\n Получите:\r\n  Хлеб 1";
				if (le_bakery == 2) this->label_bakery_info->Text = L"Испечь хлеб за:\r\n  Уголь 3\r\n  Мука 6\r\n Получите:\r\n  Хлеб 3";

				this->butt_bakery_1->Text = L"Испечь";
			}

		}
		else {
			if (language) MessageBox::Show("Aw... Buy a bakery in the store!", "Bakery", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			else MessageBox::Show("Ой... Купите пекарню в магазине!", "Пекарня", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	private: System::Void butt_bakery_1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->butt_bakery_1->Cursor = System::Windows::Forms::Cursors::WaitCursor;
		if (language) MessageBox::Show("You need to wait 10 seconds", "Bakery", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		else MessageBox::Show("Нужно подождать 10 секунд", "Пекарня", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);

		if (le_bakery == 1) {
			if (flour >= 2 && coal >= 1) {
				if (sounds)WinExec("fire.exe", 1);
				Sleep(2000);
				Sleep(2000);
				Sleep(2000);
				Sleep(2000);
				Sleep(2000);
				coal -= 1;
				flour -= 2;
				bread += 1;
				exs(4);
				save();
			}
			else {
				if (language) MessageBox::Show("Insufficient resources!", "Bakery", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Недостаточно ресурсов!", "Пекарня", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else if (le_bakery == 2) {
			if (flour >= 6 && coal >= 3) {
				if (sounds)WinExec("fire.exe", 1);
				Sleep(2000);
				Sleep(2000);
				Sleep(2000);
				Sleep(2000);
				Sleep(2000);
				coal -= 3;
				flour -= 6;
				bread += 3;
				exs(6);
				save();
			}
			else {
				if (language) MessageBox::Show("Insufficient resources!", "Bakery", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Недостаточно ресурсов!", "Пекарня", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}

		grabe();
		if (sounds)WinExec("fire.exe", 1);
		this->butt_bakery_1->Cursor = System::Windows::Forms::Cursors::Hand;
		save();
	}

		   //protecion
	private: System::Void pictureButt_protection_Click(System::Object^ sender, System::EventArgs^ e) {
		if (le_protection != 0) {
			this->panel_vilage->Visible = false;
			this->panel_sawmill->Visible = false;
			this->panelMenuSetting->Visible = false;
			this->panel_mine->Visible = false;
			this->panel_market->Visible = false;
			this->panel_bake->Visible = false;
			this->panel_shop->Visible = false;
			this->panel_farm->Visible = false;
			this->panel_windmill->Visible = false;
			this->panel_bakery->Visible = false;
			this->panel_protect->Visible = !this->panel_protect->Visible;
			if (sounds)WinExec("mech.exe", 1);

			if (language) {
				if (le_protection == 1) this->label_protect_info->Text = L"Settlement defense level 1\r\n  30% protection against robberies";
				if (le_protection == 2) this->label_protect_info->Text = L"Settlement defense level 2\r\n  40% protection against robberies";
				if (le_protection == 3) this->label_protect_info->Text = L"Settlement defense level 3\r\n  60% protection against robberies";
				if (le_protection == 4) this->label_protect_info->Text = L"Settlement defense level 4\r\n  70% protection against robberies";
			}
			else {
				if (le_protection == 1) this->label_protect_info->Text = L"Оборона поселения 1 уровень\r\n  30% защиты от ограблений";
				if (le_protection == 2) this->label_protect_info->Text = L"Оборона поселения 2 уровень\r\n  40% защиты от ограблений";
				if (le_protection == 3) this->label_protect_info->Text = L"Оборона поселения 3 уровень\r\n  60% защиты от ограблений";
				if (le_protection == 4) this->label_protect_info->Text = L"Оборона поселения 4 уровень\r\n  70% защиты от ограблений";
			}

		}
		else {
			if (language) MessageBox::Show("Aw... Buy a defense in the store!", "Defense", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			else MessageBox::Show("Ой... Купите оборону в магазине!", "Оборона", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}


	private: System::Void labelButtSave_Click(System::Object^ sender, System::EventArgs^ e) {
		if (sounds)WinExec("good.exe", 1);
		save();
	}
		   void exs(int n) {
			   ex += n;
			   if (ex > 99) {
				   ex = 0;
				   level += 1;
				   if (language) MessageBox::Show("New level         \n Bonus:\n  Silver 200\n  Wood 10\n  Iron 5\n  Gold 1", "New Level!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				   else MessageBox::Show("Новый уровень          \n Бонус:\n  Серебро 200\n  Дерево 10\n  Железо 5\n  Золото 1", "Новый Уровень!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				   silver += 200;
				   wood += 10;
				   iron += 5;
				   gold += 1;
				   if (sounds)WinExec("good.exe", 1);
			   }
			   save();
		   }
		   bool loading_data()
		   {
			   using namespace std;
			   ifstream Data;
			   Data.open("data.txt");
			   if (!Data.is_open()) {
				   Data.close();
				   return false;
			   }
			   else {
				   Data.close();
				   Data.open("data.txt");

				   //wood
				   {
					   string* _wood = new string;

					   getline(Data, *_wood);
					   if (*_wood == "0") wood = 0;
					   else if (*_wood == "1") wood = 1;
					   else if (*_wood == "2") wood = 2;
					   else if (*_wood == "3") wood = 3;
					   else if (*_wood == "4") wood = 4;
					   else if (*_wood == "5") wood = 5;
					   else if (*_wood == "6") wood = 6;
					   else if (*_wood == "7") wood = 7;
					   else if (*_wood == "8") wood = 8;
					   else if (*_wood == "9") wood = 9;
					   else if (*_wood == "10") wood = 10;
					   else if (*_wood == "11") wood = 11;
					   else if (*_wood == "12") wood = 12;
					   else if (*_wood == "13") wood = 13;
					   else if (*_wood == "14") wood = 14;
					   else if (*_wood == "15") wood = 15;
					   else if (*_wood == "16") wood = 16;
					   else if (*_wood == "17") wood = 17;
					   else if (*_wood == "18") wood = 18;
					   else if (*_wood == "19") wood = 19;
					   else if (*_wood == "20") wood = 20;
					   else if (*_wood == "21") wood = 21;
					   else if (*_wood == "22") wood = 22;
					   else if (*_wood == "23") wood = 23;
					   else if (*_wood == "24") wood = 24;
					   else if (*_wood == "25") wood = 25;
					   else if (*_wood == "26") wood = 26;
					   else if (*_wood == "27") wood = 27;
					   else if (*_wood == "28") wood = 28;
					   else if (*_wood == "29") wood = 29;
					   else if (*_wood == "30") wood = 30;
					   else if (*_wood == "31") wood = 31;
					   else if (*_wood == "32") wood = 32;
					   else if (*_wood == "33") wood = 33;
					   else if (*_wood == "34") wood = 34;
					   else if (*_wood == "35") wood = 35;
					   else if (*_wood == "36") wood = 36;
					   else if (*_wood == "37") wood = 37;
					   else if (*_wood == "38") wood = 38;
					   else if (*_wood == "39") wood = 39;
					   else if (*_wood == "40") wood = 40;
					   else if (*_wood == "41") wood = 41;
					   else if (*_wood == "42") wood = 42;
					   else if (*_wood == "43") wood = 43;
					   else if (*_wood == "44") wood = 44;
					   else if (*_wood == "45") wood = 45;
					   else if (*_wood == "46") wood = 46;
					   else if (*_wood == "47") wood = 47;
					   else if (*_wood == "48") wood = 48;
					   else if (*_wood == "49") wood = 49;
					   else if (*_wood == "50") wood = 50;
					   else if (*_wood == "51") wood = 51;
					   else if (*_wood == "52") wood = 52;
					   else if (*_wood == "53") wood = 53;
					   else if (*_wood == "54") wood = 54;
					   else if (*_wood == "55") wood = 55;
					   else if (*_wood == "56") wood = 56;
					   else if (*_wood == "57") wood = 57;
					   else if (*_wood == "58") wood = 58;
					   else if (*_wood == "59") wood = 59;
					   else if (*_wood == "60") wood = 60;
					   else if (*_wood == "61") wood = 61;
					   else if (*_wood == "62") wood = 62;
					   else if (*_wood == "63") wood = 63;
					   else if (*_wood == "64") wood = 64;
					   else if (*_wood == "65") wood = 65;
					   else if (*_wood == "66") wood = 66;
					   else if (*_wood == "67") wood = 67;
					   else if (*_wood == "68") wood = 68;
					   else if (*_wood == "69") wood = 69;
					   else if (*_wood == "70") wood = 70;
					   else if (*_wood == "71") wood = 71;
					   else if (*_wood == "72") wood = 72;
					   else if (*_wood == "73") wood = 73;
					   else if (*_wood == "74") wood = 74;
					   else if (*_wood == "75") wood = 75;
					   else if (*_wood == "76") wood = 76;
					   else if (*_wood == "77") wood = 77;
					   else if (*_wood == "78") wood = 78;
					   else if (*_wood == "79") wood = 79;
					   else if (*_wood == "80") wood = 80;
					   else if (*_wood == "81") wood = 81;
					   else if (*_wood == "82") wood = 82;
					   else if (*_wood == "83") wood = 83;
					   else if (*_wood == "84") wood = 84;
					   else if (*_wood == "85") wood = 85;
					   else if (*_wood == "86") wood = 86;
					   else if (*_wood == "87") wood = 87;
					   else if (*_wood == "88") wood = 88;
					   else if (*_wood == "89") wood = 89;
					   else if (*_wood == "90") wood = 90;
					   else if (*_wood == "91") wood = 91;
					   else if (*_wood == "92") wood = 92;
					   else if (*_wood == "93") wood = 93;
					   else if (*_wood == "94") wood = 94;
					   else if (*_wood == "95") wood = 95;
					   else if (*_wood == "96") wood = 96;
					   else if (*_wood == "97") wood = 97;
					   else if (*_wood == "98") wood = 98;
					   else if (*_wood == "99") wood = 99;
					   else if (*_wood == "100") wood = 100;
					   else if (*_wood == "101") wood = 101;
					   else if (*_wood == "102") wood = 102;
					   else if (*_wood == "103") wood = 103;
					   else if (*_wood == "104") wood = 104;
					   else if (*_wood == "105") wood = 105;
					   else if (*_wood == "106") wood = 106;
					   else if (*_wood == "107") wood = 107;
					   else if (*_wood == "108") wood = 108;
					   else if (*_wood == "109") wood = 109;
					   else if (*_wood == "110") wood = 110;
					   else if (*_wood == "111") wood = 111;
					   else if (*_wood == "112") wood = 112;
					   else if (*_wood == "113") wood = 113;
					   else if (*_wood == "114") wood = 114;
					   else if (*_wood == "115") wood = 115;
					   else if (*_wood == "116") wood = 116;
					   else if (*_wood == "117") wood = 117;
					   else if (*_wood == "118") wood = 118;
					   else if (*_wood == "119") wood = 119;
					   else if (*_wood == "120") wood = 120;
					   if (*_wood == "121") wood = 121;
					   else if (*_wood == "122") wood = 122;
					   else if (*_wood == "123") wood = 123;
					   else if (*_wood == "124") wood = 124;
					   else if (*_wood == "125") wood = 125;
					   else if (*_wood == "126") wood = 126;
					   else if (*_wood == "127") wood = 127;
					   else if (*_wood == "128") wood = 128;
					   else if (*_wood == "129") wood = 129;
					   else if (*_wood == "130") wood = 130;
					   else if (*_wood == "131") wood = 131;
					   else if (*_wood == "132") wood = 132;
					   else if (*_wood == "133") wood = 133;
					   else if (*_wood == "134") wood = 134;
					   else if (*_wood == "135") wood = 135;
					   else if (*_wood == "136") wood = 136;
					   else if (*_wood == "137") wood = 137;
					   else if (*_wood == "138") wood = 138;
					   else if (*_wood == "139") wood = 139;
					   else if (*_wood == "140") wood = 140;
					   else if (*_wood == "141") wood = 141;
					   else if (*_wood == "142") wood = 142;
					   else if (*_wood == "143") wood = 143;
					   else if (*_wood == "144") wood = 144;
					   else if (*_wood == "145") wood = 145;
					   else if (*_wood == "146") wood = 146;
					   else if (*_wood == "147") wood = 147;
					   else if (*_wood == "148") wood = 148;
					   else if (*_wood == "149") wood = 149;
					   else if (*_wood == "150") wood = 150;
					   else if (*_wood == "151") wood = 151;
					   else if (*_wood == "152") wood = 152;
					   else if (*_wood == "153") wood = 153;
					   else if (*_wood == "154") wood = 154;
					   else if (*_wood == "155") wood = 155;
					   else if (*_wood == "156") wood = 156;
					   else if (*_wood == "157") wood = 157;
					   else if (*_wood == "158") wood = 158;
					   else if (*_wood == "159") wood = 159;
					   else if (*_wood == "160") wood = 160;
					   else if (*_wood == "161") wood = 161;
					   else if (*_wood == "162") wood = 162;
					   else if (*_wood == "163") wood = 163;
					   else if (*_wood == "164") wood = 164;
					   else if (*_wood == "165") wood = 165;
					   else if (*_wood == "166") wood = 166;
					   else if (*_wood == "167") wood = 167;
					   else if (*_wood == "168") wood = 168;
					   else if (*_wood == "169") wood = 169;
					   else if (*_wood == "170") wood = 170;
					   else if (*_wood == "171") wood = 171;
					   else if (*_wood == "172") wood = 172;
					   else if (*_wood == "173") wood = 173;
					   else if (*_wood == "174") wood = 174;
					   else if (*_wood == "175") wood = 175;
					   else if (*_wood == "176") wood = 176;
					   else if (*_wood == "177") wood = 177;
					   else if (*_wood == "178") wood = 178;
					   else if (*_wood == "179") wood = 179;
					   else if (*_wood == "180") wood = 180;
					   else if (*_wood == "181") wood = 181;
					   else if (*_wood == "182") wood = 182;
					   else if (*_wood == "183") wood = 183;
					   else if (*_wood == "184") wood = 184;
					   else if (*_wood == "185") wood = 185;
					   else if (*_wood == "186") wood = 186;
					   else if (*_wood == "187") wood = 187;
					   else if (*_wood == "188") wood = 188;
					   else if (*_wood == "189") wood = 189;
					   else if (*_wood == "190") wood = 190;
					   else if (*_wood == "191") wood = 191;
					   else if (*_wood == "192") wood = 192;
					   else if (*_wood == "193") wood = 193;
					   else if (*_wood == "194") wood = 194;
					   else if (*_wood == "195") wood = 195;
					   else if (*_wood == "196") wood = 196;
					   else if (*_wood == "197") wood = 197;
					   else if (*_wood == "198") wood = 198;
					   else if (*_wood == "199") wood = 199;
					   else if (*_wood == "200") wood = 200;
					   else if (*_wood == "201") wood = 201;
					   else if (*_wood == "202") wood = 202;
					   else if (*_wood == "203") wood = 203;
					   else if (*_wood == "204") wood = 204;
					   else if (*_wood == "205") wood = 205;
					   else if (*_wood == "206") wood = 206;
					   else if (*_wood == "207") wood = 207;
					   else if (*_wood == "208") wood = 208;
					   else if (*_wood == "209") wood = 209;
					   else if (*_wood == "210") wood = 210;
					   else if (*_wood == "211") wood = 211;
					   else if (*_wood == "212") wood = 212;
					   else if (*_wood == "213") wood = 213;
					   else if (*_wood == "214") wood = 214;
					   else if (*_wood == "215") wood = 215;
					   else if (*_wood == "216") wood = 216;
					   else if (*_wood == "217") wood = 217;
					   else if (*_wood == "218") wood = 218;
					   else if (*_wood == "219") wood = 219;
					   else if (*_wood == "220") wood = 220;
					   else if (*_wood == "221") wood = 221;
					   else if (*_wood == "222") wood = 222;
					   else if (*_wood == "223") wood = 223;
					   else if (*_wood == "224") wood = 224;
					   else if (*_wood == "225") wood = 225;
					   else if (*_wood == "226") wood = 226;
					   else if (*_wood == "227") wood = 227;
					   else if (*_wood == "228") wood = 228;
					   else if (*_wood == "229") wood = 229;
					   else if (*_wood == "230") wood = 230;
					   else if (*_wood == "231") wood = 231;
					   else if (*_wood == "232") wood = 232;
					   else if (*_wood == "233") wood = 233;
					   else if (*_wood == "234") wood = 234;
					   else if (*_wood == "235") wood = 235;
					   else if (*_wood == "236") wood = 236;
					   else if (*_wood == "237") wood = 237;
					   else if (*_wood == "238") wood = 238;
					   else if (*_wood == "239") wood = 239;
					   else if (*_wood == "240") wood = 240;
					   if (*_wood == "241") wood = 241;
					   else if (*_wood == "242") wood = 242;
					   else if (*_wood == "243") wood = 243;
					   else if (*_wood == "244") wood = 244;
					   else if (*_wood == "245") wood = 245;
					   else if (*_wood == "246") wood = 246;
					   else if (*_wood == "247") wood = 247;
					   else if (*_wood == "248") wood = 248;
					   else if (*_wood == "249") wood = 249;
					   else if (*_wood == "250") wood = 250;
					   else if (*_wood == "251") wood = 251;
					   else if (*_wood == "252") wood = 252;
					   else if (*_wood == "253") wood = 253;
					   else if (*_wood == "254") wood = 254;
					   else if (*_wood == "255") wood = 255;
					   else if (*_wood == "256") wood = 256;
					   else if (*_wood == "257") wood = 257;
					   else if (*_wood == "258") wood = 258;
					   else if (*_wood == "259") wood = 259;
					   else if (*_wood == "260") wood = 260;
					   else if (*_wood == "261") wood = 261;
					   else if (*_wood == "262") wood = 262;
					   else if (*_wood == "263") wood = 263;
					   else if (*_wood == "264") wood = 264;
					   else if (*_wood == "265") wood = 265;
					   else if (*_wood == "266") wood = 266;
					   else if (*_wood == "267") wood = 267;
					   else if (*_wood == "268") wood = 268;
					   else if (*_wood == "269") wood = 269;
					   else if (*_wood == "270") wood = 270;
					   else if (*_wood == "271") wood = 271;
					   else if (*_wood == "272") wood = 272;
					   else if (*_wood == "273") wood = 273;
					   else if (*_wood == "274") wood = 274;
					   else if (*_wood == "275") wood = 275;
					   else if (*_wood == "276") wood = 276;
					   else if (*_wood == "277") wood = 277;
					   else if (*_wood == "278") wood = 278;
					   else if (*_wood == "279") wood = 279;
					   else if (*_wood == "280") wood = 280;
					   else if (*_wood == "281") wood = 281;
					   else if (*_wood == "282") wood = 282;
					   else if (*_wood == "283") wood = 283;
					   else if (*_wood == "284") wood = 284;
					   else if (*_wood == "285") wood = 285;
					   else if (*_wood == "286") wood = 286;
					   else if (*_wood == "287") wood = 287;
					   else if (*_wood == "288") wood = 288;
					   else if (*_wood == "289") wood = 289;
					   else if (*_wood == "290") wood = 290;
					   else if (*_wood == "291") wood = 291;
					   else if (*_wood == "292") wood = 292;
					   else if (*_wood == "293") wood = 293;
					   else if (*_wood == "294") wood = 294;
					   else if (*_wood == "295") wood = 295;
					   else if (*_wood == "296") wood = 296;
					   else if (*_wood == "297") wood = 297;
					   else if (*_wood == "298") wood = 298;
					   else if (*_wood == "299") wood = 299;
					   else if (*_wood == "300") wood = 300;
					   else if (*_wood == "301") wood = 301;
					   else if (*_wood == "302") wood = 302;
					   else if (*_wood == "303") wood = 303;
					   else if (*_wood == "304") wood = 304;
					   else if (*_wood == "305") wood = 305;
					   else if (*_wood == "306") wood = 306;
					   else if (*_wood == "307") wood = 307;
					   else if (*_wood == "308") wood = 308;
					   else if (*_wood == "309") wood = 309;
					   else if (*_wood == "310") wood = 310;
					   else if (*_wood == "311") wood = 311;
					   else if (*_wood == "312") wood = 312;
					   else if (*_wood == "313") wood = 313;
					   else if (*_wood == "314") wood = 314;
					   else if (*_wood == "315") wood = 315;
					   else if (*_wood == "316") wood = 316;
					   else if (*_wood == "317") wood = 317;
					   else if (*_wood == "318") wood = 318;
					   else if (*_wood == "319") wood = 319;
					   else if (*_wood == "320") wood = 320;
					   else if (*_wood == "321") wood = 321;
					   else if (*_wood == "322") wood = 322;
					   else if (*_wood == "323") wood = 323;
					   else if (*_wood == "324") wood = 324;
					   else if (*_wood == "325") wood = 325;
					   else if (*_wood == "326") wood = 326;
					   else if (*_wood == "327") wood = 327;
					   else if (*_wood == "328") wood = 328;
					   else if (*_wood == "329") wood = 329;
					   else if (*_wood == "330") wood = 330;
					   else if (*_wood == "331") wood = 331;
					   else if (*_wood == "332") wood = 332;
					   else if (*_wood == "333") wood = 333;
					   else if (*_wood == "334") wood = 334;
					   else if (*_wood == "335") wood = 335;
					   else if (*_wood == "336") wood = 336;
					   else if (*_wood == "337") wood = 337;
					   else if (*_wood == "338") wood = 338;
					   else if (*_wood == "339") wood = 339;
					   else if (*_wood == "340") wood = 340;
					   else if (*_wood == "341") wood = 341;
					   else if (*_wood == "342") wood = 342;
					   else if (*_wood == "343") wood = 343;
					   else if (*_wood == "344") wood = 344;
					   else if (*_wood == "345") wood = 345;
					   else if (*_wood == "346") wood = 346;
					   else if (*_wood == "347") wood = 347;
					   else if (*_wood == "348") wood = 348;
					   else if (*_wood == "349") wood = 349;
					   else if (*_wood == "350") wood = 350;
					   else if (*_wood == "351") wood = 351;
					   else if (*_wood == "352") wood = 352;
					   else if (*_wood == "353") wood = 353;
					   else if (*_wood == "354") wood = 354;
					   else if (*_wood == "355") wood = 355;
					   else if (*_wood == "356") wood = 356;
					   else if (*_wood == "357") wood = 357;
					   else if (*_wood == "358") wood = 358;
					   else if (*_wood == "359") wood = 359;
					   else if (*_wood == "360") wood = 360;
					   if (*_wood == "361") wood = 361;
					   else if (*_wood == "362") wood = 362;
					   else if (*_wood == "363") wood = 363;
					   else if (*_wood == "364") wood = 364;
					   else if (*_wood == "365") wood = 365;
					   else if (*_wood == "366") wood = 366;
					   else if (*_wood == "367") wood = 367;
					   else if (*_wood == "368") wood = 368;
					   else if (*_wood == "369") wood = 369;
					   else if (*_wood == "370") wood = 370;
					   else if (*_wood == "371") wood = 371;
					   else if (*_wood == "372") wood = 372;
					   else if (*_wood == "373") wood = 373;
					   else if (*_wood == "374") wood = 374;
					   else if (*_wood == "375") wood = 375;
					   else if (*_wood == "376") wood = 376;
					   else if (*_wood == "377") wood = 377;
					   else if (*_wood == "378") wood = 378;
					   else if (*_wood == "379") wood = 379;
					   else if (*_wood == "380") wood = 380;
					   else if (*_wood == "381") wood = 381;
					   else if (*_wood == "382") wood = 382;
					   else if (*_wood == "383") wood = 383;
					   else if (*_wood == "384") wood = 384;
					   else if (*_wood == "385") wood = 385;
					   else if (*_wood == "386") wood = 386;
					   else if (*_wood == "387") wood = 387;
					   else if (*_wood == "388") wood = 388;
					   else if (*_wood == "389") wood = 389;
					   else if (*_wood == "390") wood = 390;
					   else if (*_wood == "391") wood = 391;
					   else if (*_wood == "392") wood = 392;
					   else if (*_wood == "393") wood = 393;
					   else if (*_wood == "394") wood = 394;
					   else if (*_wood == "395") wood = 395;
					   else if (*_wood == "396") wood = 396;
					   else if (*_wood == "397") wood = 397;
					   else if (*_wood == "398") wood = 398;
					   else if (*_wood == "399") wood = 399;
					   else if (*_wood == "400") wood = 400;
					   else if (*_wood == "401") wood = 401;
					   else if (*_wood == "402") wood = 402;
					   else if (*_wood == "403") wood = 403;
					   else if (*_wood == "404") wood = 404;
					   else if (*_wood == "405") wood = 405;
					   else if (*_wood == "406") wood = 406;
					   else if (*_wood == "407") wood = 407;
					   else if (*_wood == "408") wood = 408;
					   else if (*_wood == "409") wood = 409;
					   else if (*_wood == "410") wood = 410;
					   else if (*_wood == "411") wood = 411;
					   else if (*_wood == "412") wood = 412;
					   else if (*_wood == "413") wood = 413;
					   else if (*_wood == "414") wood = 414;
					   else if (*_wood == "415") wood = 415;
					   else if (*_wood == "416") wood = 416;
					   else if (*_wood == "417") wood = 417;
					   else if (*_wood == "418") wood = 418;
					   else if (*_wood == "419") wood = 419;
					   else if (*_wood == "420") wood = 420;
					   else if (*_wood == "421") wood = 421;
					   else if (*_wood == "422") wood = 422;
					   else if (*_wood == "423") wood = 423;
					   else if (*_wood == "424") wood = 424;
					   else if (*_wood == "425") wood = 425;
					   else if (*_wood == "426") wood = 426;
					   else if (*_wood == "427") wood = 427;
					   else if (*_wood == "428") wood = 428;
					   else if (*_wood == "429") wood = 429;
					   else if (*_wood == "430") wood = 430;
					   else if (*_wood == "431") wood = 431;
					   else if (*_wood == "432") wood = 432;
					   else if (*_wood == "433") wood = 433;
					   else if (*_wood == "434") wood = 434;
					   else if (*_wood == "435") wood = 435;
					   else if (*_wood == "436") wood = 436;
					   else if (*_wood == "437") wood = 437;
					   else if (*_wood == "438") wood = 438;
					   else if (*_wood == "439") wood = 439;
					   else if (*_wood == "440") wood = 440;
					   else if (*_wood == "441") wood = 441;
					   else if (*_wood == "442") wood = 442;
					   else if (*_wood == "443") wood = 443;
					   else if (*_wood == "444") wood = 444;
					   else if (*_wood == "445") wood = 445;
					   else if (*_wood == "446") wood = 446;
					   else if (*_wood == "447") wood = 447;
					   else if (*_wood == "448") wood = 448;
					   else if (*_wood == "449") wood = 449;
					   else if (*_wood == "450") wood = 450;
					   else if (*_wood == "451") wood = 451;
					   else if (*_wood == "452") wood = 452;
					   else if (*_wood == "453") wood = 453;
					   else if (*_wood == "454") wood = 454;
					   else if (*_wood == "455") wood = 455;
					   else if (*_wood == "456") wood = 456;
					   else if (*_wood == "457") wood = 457;
					   else if (*_wood == "458") wood = 458;
					   else if (*_wood == "459") wood = 459;
					   else if (*_wood == "460") wood = 460;
					   else if (*_wood == "461") wood = 461;
					   else if (*_wood == "462") wood = 462;
					   else if (*_wood == "463") wood = 463;
					   else if (*_wood == "464") wood = 464;
					   else if (*_wood == "465") wood = 465;
					   else if (*_wood == "466") wood = 466;
					   else if (*_wood == "467") wood = 467;
					   else if (*_wood == "468") wood = 468;
					   else if (*_wood == "469") wood = 469;
					   else if (*_wood == "470") wood = 470;
					   else if (*_wood == "471") wood = 471;
					   else if (*_wood == "472") wood = 472;
					   else if (*_wood == "473") wood = 473;
					   else if (*_wood == "474") wood = 474;
					   else if (*_wood == "475") wood = 475;
					   else if (*_wood == "476") wood = 476;
					   else if (*_wood == "477") wood = 477;
					   else if (*_wood == "478") wood = 478;
					   else if (*_wood == "479") wood = 479;
					   else if (*_wood == "480") wood = 480;
					   if (*_wood == "481") wood = 481;
					   else if (*_wood == "482") wood = 482;
					   else if (*_wood == "483") wood = 483;
					   else if (*_wood == "484") wood = 484;
					   else if (*_wood == "485") wood = 485;
					   else if (*_wood == "486") wood = 486;
					   else if (*_wood == "487") wood = 487;
					   else if (*_wood == "488") wood = 488;
					   else if (*_wood == "489") wood = 489;
					   else if (*_wood == "490") wood = 490;
					   else if (*_wood == "491") wood = 491;
					   else if (*_wood == "492") wood = 492;
					   else if (*_wood == "493") wood = 493;
					   else if (*_wood == "494") wood = 494;
					   else if (*_wood == "495") wood = 495;
					   else if (*_wood == "496") wood = 496;
					   else if (*_wood == "497") wood = 497;
					   else if (*_wood == "498") wood = 498;
					   else if (*_wood == "499") wood = 499;
					   else if (*_wood == "500") wood = 500;
					   else if (*_wood == "501") wood = 501;
					   else if (*_wood == "502") wood = 502;
					   else if (*_wood == "503") wood = 503;
					   else if (*_wood == "504") wood = 504;
					   else if (*_wood == "505") wood = 505;
					   else if (*_wood == "506") wood = 506;
					   else if (*_wood == "507") wood = 507;
					   else if (*_wood == "508") wood = 508;
					   else if (*_wood == "509") wood = 509;
					   else if (*_wood == "510") wood = 510;
					   else if (*_wood == "511") wood = 511;
					   else if (*_wood == "512") wood = 512;
					   else if (*_wood == "513") wood = 513;
					   else if (*_wood == "514") wood = 514;
					   else if (*_wood == "515") wood = 515;
					   else if (*_wood == "516") wood = 516;
					   else if (*_wood == "517") wood = 517;
					   else if (*_wood == "518") wood = 518;
					   else if (*_wood == "519") wood = 519;
					   else if (*_wood == "520") wood = 520;
					   else if (*_wood == "521") wood = 521;
					   else if (*_wood == "522") wood = 522;
					   else if (*_wood == "523") wood = 523;
					   else if (*_wood == "524") wood = 524;
					   else if (*_wood == "525") wood = 525;
					   else if (*_wood == "526") wood = 526;
					   else if (*_wood == "527") wood = 527;
					   else if (*_wood == "528") wood = 528;
					   else if (*_wood == "529") wood = 529;
					   else if (*_wood == "530") wood = 530;
					   else if (*_wood == "531") wood = 531;
					   else if (*_wood == "532") wood = 532;
					   else if (*_wood == "533") wood = 533;
					   else if (*_wood == "534") wood = 534;
					   else if (*_wood == "535") wood = 535;
					   else if (*_wood == "536") wood = 536;
					   else if (*_wood == "537") wood = 537;
					   else if (*_wood == "538") wood = 538;
					   else if (*_wood == "539") wood = 539;
					   else if (*_wood == "540") wood = 540;
					   else if (*_wood == "541") wood = 541;
					   else if (*_wood == "542") wood = 542;
					   else if (*_wood == "543") wood = 543;
					   else if (*_wood == "544") wood = 544;
					   else if (*_wood == "545") wood = 545;
					   else if (*_wood == "546") wood = 546;
					   else if (*_wood == "547") wood = 547;
					   else if (*_wood == "548") wood = 548;
					   else if (*_wood == "549") wood = 549;
					   else if (*_wood == "550") wood = 550;
					   else if (*_wood == "551") wood = 551;
					   else if (*_wood == "552") wood = 552;
					   else if (*_wood == "553") wood = 553;
					   else if (*_wood == "554") wood = 554;
					   else if (*_wood == "555") wood = 555;
					   else if (*_wood == "556") wood = 556;
					   else if (*_wood == "557") wood = 557;
					   else if (*_wood == "558") wood = 558;
					   else if (*_wood == "559") wood = 559;
					   else if (*_wood == "560") wood = 560;
					   else if (*_wood == "561") wood = 561;
					   else if (*_wood == "562") wood = 562;
					   else if (*_wood == "563") wood = 563;
					   else if (*_wood == "564") wood = 564;
					   else if (*_wood == "565") wood = 565;
					   else if (*_wood == "566") wood = 566;
					   else if (*_wood == "567") wood = 567;
					   else if (*_wood == "568") wood = 568;
					   else if (*_wood == "569") wood = 569;
					   else if (*_wood == "570") wood = 570;
					   else if (*_wood == "571") wood = 571;
					   else if (*_wood == "572") wood = 572;
					   else if (*_wood == "573") wood = 573;
					   else if (*_wood == "574") wood = 574;
					   else if (*_wood == "575") wood = 575;
					   else if (*_wood == "576") wood = 576;
					   else if (*_wood == "577") wood = 577;
					   else if (*_wood == "578") wood = 578;
					   else if (*_wood == "579") wood = 579;
					   else if (*_wood == "580") wood = 580;
					   else if (*_wood == "581") wood = 581;
					   else if (*_wood == "582") wood = 582;
					   else if (*_wood == "583") wood = 583;
					   else if (*_wood == "584") wood = 584;
					   else if (*_wood == "585") wood = 585;
					   else if (*_wood == "586") wood = 586;
					   else if (*_wood == "587") wood = 587;
					   else if (*_wood == "588") wood = 588;
					   else if (*_wood == "589") wood = 589;
					   else if (*_wood == "590") wood = 590;
					   else if (*_wood == "591") wood = 591;
					   else if (*_wood == "592") wood = 592;
					   else if (*_wood == "593") wood = 593;
					   else if (*_wood == "594") wood = 594;
					   else if (*_wood == "595") wood = 595;
					   else if (*_wood == "596") wood = 596;
					   else if (*_wood == "597") wood = 597;
					   else if (*_wood == "598") wood = 598;
					   else if (*_wood == "599") wood = 599;
					   else if (*_wood == "600") wood = 600;
					   if (*_wood == "601") wood = 601;
					   else if (*_wood == "602") wood = 602;
					   else if (*_wood == "603") wood = 603;
					   else if (*_wood == "604") wood = 604;
					   else if (*_wood == "605") wood = 605;
					   else if (*_wood == "606") wood = 606;
					   else if (*_wood == "607") wood = 607;
					   else if (*_wood == "608") wood = 608;
					   else if (*_wood == "609") wood = 609;
					   else if (*_wood == "610") wood = 610;
					   else if (*_wood == "611") wood = 611;
					   else if (*_wood == "612") wood = 612;
					   else if (*_wood == "613") wood = 613;
					   else if (*_wood == "614") wood = 614;
					   else if (*_wood == "615") wood = 615;
					   else if (*_wood == "616") wood = 616;
					   else if (*_wood == "617") wood = 617;
					   else if (*_wood == "618") wood = 618;
					   else if (*_wood == "619") wood = 619;
					   else if (*_wood == "620") wood = 620;
					   else if (*_wood == "621") wood = 621;
					   else if (*_wood == "622") wood = 622;
					   else if (*_wood == "623") wood = 623;
					   else if (*_wood == "624") wood = 624;
					   else if (*_wood == "625") wood = 625;
					   else if (*_wood == "626") wood = 626;
					   else if (*_wood == "627") wood = 627;
					   else if (*_wood == "628") wood = 628;
					   else if (*_wood == "629") wood = 629;
					   else if (*_wood == "630") wood = 630;
					   else if (*_wood == "631") wood = 631;
					   else if (*_wood == "632") wood = 632;
					   else if (*_wood == "633") wood = 633;
					   else if (*_wood == "634") wood = 634;
					   else if (*_wood == "635") wood = 635;
					   else if (*_wood == "636") wood = 636;
					   else if (*_wood == "637") wood = 637;
					   else if (*_wood == "638") wood = 638;
					   else if (*_wood == "639") wood = 639;
					   else if (*_wood == "640") wood = 640;
					   else if (*_wood == "641") wood = 641;
					   else if (*_wood == "642") wood = 642;
					   else if (*_wood == "643") wood = 643;
					   else if (*_wood == "644") wood = 644;
					   else if (*_wood == "645") wood = 645;
					   else if (*_wood == "646") wood = 646;
					   else if (*_wood == "647") wood = 647;
					   else if (*_wood == "648") wood = 648;
					   else if (*_wood == "649") wood = 649;
					   else if (*_wood == "650") wood = 650;
					   else if (*_wood == "651") wood = 651;
					   else if (*_wood == "652") wood = 652;
					   else if (*_wood == "653") wood = 653;
					   else if (*_wood == "654") wood = 654;
					   else if (*_wood == "655") wood = 655;
					   else if (*_wood == "656") wood = 656;
					   else if (*_wood == "657") wood = 657;
					   else if (*_wood == "658") wood = 658;
					   else if (*_wood == "659") wood = 659;
					   else if (*_wood == "660") wood = 660;
					   else if (*_wood == "661") wood = 661;
					   else if (*_wood == "662") wood = 662;
					   else if (*_wood == "663") wood = 663;
					   else if (*_wood == "664") wood = 664;
					   else if (*_wood == "665") wood = 665;
					   else if (*_wood == "666") wood = 666;
					   else if (*_wood == "667") wood = 667;
					   else if (*_wood == "668") wood = 668;
					   else if (*_wood == "669") wood = 669;
					   else if (*_wood == "670") wood = 670;
					   else if (*_wood == "671") wood = 671;
					   else if (*_wood == "672") wood = 672;
					   else if (*_wood == "673") wood = 673;
					   else if (*_wood == "674") wood = 674;
					   else if (*_wood == "675") wood = 675;
					   else if (*_wood == "676") wood = 676;
					   else if (*_wood == "677") wood = 677;
					   else if (*_wood == "678") wood = 678;
					   else if (*_wood == "679") wood = 679;
					   else if (*_wood == "680") wood = 680;
					   else if (*_wood == "681") wood = 681;
					   else if (*_wood == "682") wood = 682;
					   else if (*_wood == "683") wood = 683;
					   else if (*_wood == "684") wood = 684;
					   else if (*_wood == "685") wood = 685;
					   else if (*_wood == "686") wood = 686;
					   else if (*_wood == "687") wood = 687;
					   else if (*_wood == "688") wood = 688;
					   else if (*_wood == "689") wood = 689;
					   else if (*_wood == "690") wood = 690;
					   else if (*_wood == "691") wood = 691;
					   else if (*_wood == "692") wood = 692;
					   else if (*_wood == "693") wood = 693;
					   else if (*_wood == "694") wood = 694;
					   else if (*_wood == "695") wood = 695;
					   else if (*_wood == "696") wood = 696;
					   else if (*_wood == "697") wood = 697;
					   else if (*_wood == "698") wood = 698;
					   else if (*_wood == "699") wood = 699;
					   else if (*_wood == "700") wood = 700;

					   delete _wood;

				   }
				   {}
				   //gold
				   {
					   string* _gold = new string;

					   getline(Data, *_gold);
					   if (*_gold == "0") gold = 0;
					   else if (*_gold == "1") gold = 1;
					   else if (*_gold == "2") gold = 2;
					   else if (*_gold == "3") gold = 3;
					   else if (*_gold == "4") gold = 4;
					   else if (*_gold == "5") gold = 5;
					   else if (*_gold == "6") gold = 6;
					   else if (*_gold == "7") gold = 7;
					   else if (*_gold == "8") gold = 8;
					   else if (*_gold == "9") gold = 9;
					   else if (*_gold == "10") gold = 10;
					   else if (*_gold == "11") gold = 11;
					   else if (*_gold == "12") gold = 12;
					   else if (*_gold == "13") gold = 13;
					   else if (*_gold == "14") gold = 14;
					   else if (*_gold == "15") gold = 15;
					   else if (*_gold == "16") gold = 16;
					   else if (*_gold == "17") gold = 17;
					   else if (*_gold == "18") gold = 18;
					   else if (*_gold == "19") gold = 19;
					   else if (*_gold == "20") gold = 20;
					   else if (*_gold == "21") gold = 21;
					   else if (*_gold == "22") gold = 22;
					   else if (*_gold == "23") gold = 23;
					   else if (*_gold == "24") gold = 24;
					   else if (*_gold == "25") gold = 25;
					   else if (*_gold == "26") gold = 26;
					   else if (*_gold == "27") gold = 27;
					   else if (*_gold == "28") gold = 28;
					   else if (*_gold == "29") gold = 29;
					   else if (*_gold == "30") gold = 30;
					   else if (*_gold == "31") gold = 31;
					   else if (*_gold == "32") gold = 32;
					   else if (*_gold == "33") gold = 33;
					   else if (*_gold == "34") gold = 34;
					   else if (*_gold == "35") gold = 35;
					   else if (*_gold == "36") gold = 36;
					   else if (*_gold == "37") gold = 37;
					   else if (*_gold == "38") gold = 38;
					   else if (*_gold == "39") gold = 39;
					   else if (*_gold == "40") gold = 40;
					   else if (*_gold == "41") gold = 41;
					   else if (*_gold == "42") gold = 42;
					   else if (*_gold == "43") gold = 43;
					   else if (*_gold == "44") gold = 44;
					   else if (*_gold == "45") gold = 45;
					   else if (*_gold == "46") gold = 46;
					   else if (*_gold == "47") gold = 47;
					   else if (*_gold == "48") gold = 48;
					   else if (*_gold == "49") gold = 49;
					   else if (*_gold == "50") gold = 50;
					   else if (*_gold == "51") gold = 51;
					   else if (*_gold == "52") gold = 52;
					   else if (*_gold == "53") gold = 53;
					   else if (*_gold == "54") gold = 54;
					   else if (*_gold == "55") gold = 55;
					   else if (*_gold == "56") gold = 56;
					   else if (*_gold == "57") gold = 57;
					   else if (*_gold == "58") gold = 58;
					   else if (*_gold == "59") gold = 59;
					   else if (*_gold == "60") gold = 60;
					   else if (*_gold == "61") gold = 61;
					   else if (*_gold == "62") gold = 62;
					   else if (*_gold == "63") gold = 63;
					   else if (*_gold == "64") gold = 64;
					   else if (*_gold == "65") gold = 65;
					   else if (*_gold == "66") gold = 66;
					   else if (*_gold == "67") gold = 67;
					   else if (*_gold == "68") gold = 68;
					   else if (*_gold == "69") gold = 69;
					   else if (*_gold == "70") gold = 70;
					   else if (*_gold == "71") gold = 71;
					   else if (*_gold == "72") gold = 72;
					   else if (*_gold == "73") gold = 73;
					   else if (*_gold == "74") gold = 74;
					   else if (*_gold == "75") gold = 75;
					   else if (*_gold == "76") gold = 76;
					   else if (*_gold == "77") gold = 77;
					   else if (*_gold == "78") gold = 78;
					   else if (*_gold == "79") gold = 79;
					   else if (*_gold == "80") gold = 80;
					   else if (*_gold == "81") gold = 81;
					   else if (*_gold == "82") gold = 82;
					   else if (*_gold == "83") gold = 83;
					   else if (*_gold == "84") gold = 84;
					   else if (*_gold == "85") gold = 85;
					   else if (*_gold == "86") gold = 86;
					   else if (*_gold == "87") gold = 87;
					   else if (*_gold == "88") gold = 88;
					   else if (*_gold == "89") gold = 89;
					   else if (*_gold == "90") gold = 90;
					   else if (*_gold == "91") gold = 91;
					   else if (*_gold == "92") gold = 92;
					   else if (*_gold == "93") gold = 93;
					   else if (*_gold == "94") gold = 94;
					   else if (*_gold == "95") gold = 95;
					   else if (*_gold == "96") gold = 96;
					   else if (*_gold == "97") gold = 97;
					   else if (*_gold == "98") gold = 98;
					   else if (*_gold == "99") gold = 99;
					   else if (*_gold == "100") gold = 100;
					   else if (*_gold == "101") gold = 101;
					   else if (*_gold == "102") gold = 102;
					   else if (*_gold == "103") gold = 103;
					   else if (*_gold == "104") gold = 104;
					   else if (*_gold == "105") gold = 105;
					   else if (*_gold == "106") gold = 106;
					   else if (*_gold == "107") gold = 107;
					   else if (*_gold == "108") gold = 108;
					   else if (*_gold == "109") gold = 109;
					   else if (*_gold == "110") gold = 110;
					   else if (*_gold == "111") gold = 111;
					   else if (*_gold == "112") gold = 112;
					   else if (*_gold == "113") gold = 113;
					   else if (*_gold == "114") gold = 114;
					   else if (*_gold == "115") gold = 115;
					   else if (*_gold == "116") gold = 116;
					   else if (*_gold == "117") gold = 117;
					   else if (*_gold == "118") gold = 118;
					   else if (*_gold == "119") gold = 119;
					   else if (*_gold == "120") gold = 120;
					   if (*_gold == "121") gold = 121;
					   else if (*_gold == "122") gold = 122;
					   else if (*_gold == "123") gold = 123;
					   else if (*_gold == "124") gold = 124;
					   else if (*_gold == "125") gold = 125;
					   else if (*_gold == "126") gold = 126;
					   else if (*_gold == "127") gold = 127;
					   else if (*_gold == "128") gold = 128;
					   else if (*_gold == "129") gold = 129;
					   else if (*_gold == "130") gold = 130;
					   else if (*_gold == "131") gold = 131;
					   else if (*_gold == "132") gold = 132;
					   else if (*_gold == "133") gold = 133;
					   else if (*_gold == "134") gold = 134;
					   else if (*_gold == "135") gold = 135;
					   else if (*_gold == "136") gold = 136;
					   else if (*_gold == "137") gold = 137;
					   else if (*_gold == "138") gold = 138;
					   else if (*_gold == "139") gold = 139;
					   else if (*_gold == "140") gold = 140;
					   else if (*_gold == "141") gold = 141;
					   else if (*_gold == "142") gold = 142;
					   else if (*_gold == "143") gold = 143;
					   else if (*_gold == "144") gold = 144;
					   else if (*_gold == "145") gold = 145;
					   else if (*_gold == "146") gold = 146;
					   else if (*_gold == "147") gold = 147;
					   else if (*_gold == "148") gold = 148;
					   else if (*_gold == "149") gold = 149;
					   else if (*_gold == "150") gold = 150;
					   else if (*_gold == "151") gold = 151;
					   else if (*_gold == "152") gold = 152;
					   else if (*_gold == "153") gold = 153;
					   else if (*_gold == "154") gold = 154;
					   else if (*_gold == "155") gold = 155;
					   else if (*_gold == "156") gold = 156;
					   else if (*_gold == "157") gold = 157;
					   else if (*_gold == "158") gold = 158;
					   else if (*_gold == "159") gold = 159;
					   else if (*_gold == "160") gold = 160;
					   else if (*_gold == "161") gold = 161;
					   else if (*_gold == "162") gold = 162;
					   else if (*_gold == "163") gold = 163;
					   else if (*_gold == "164") gold = 164;
					   else if (*_gold == "165") gold = 165;
					   else if (*_gold == "166") gold = 166;
					   else if (*_gold == "167") gold = 167;
					   else if (*_gold == "168") gold = 168;
					   else if (*_gold == "169") gold = 169;
					   else if (*_gold == "170") gold = 170;
					   else if (*_gold == "171") gold = 171;
					   else if (*_gold == "172") gold = 172;
					   else if (*_gold == "173") gold = 173;
					   else if (*_gold == "174") gold = 174;
					   else if (*_gold == "175") gold = 175;
					   else if (*_gold == "176") gold = 176;
					   else if (*_gold == "177") gold = 177;
					   else if (*_gold == "178") gold = 178;
					   else if (*_gold == "179") gold = 179;
					   else if (*_gold == "180") gold = 180;
					   else if (*_gold == "181") gold = 181;
					   else if (*_gold == "182") gold = 182;
					   else if (*_gold == "183") gold = 183;
					   else if (*_gold == "184") gold = 184;
					   else if (*_gold == "185") gold = 185;
					   else if (*_gold == "186") gold = 186;
					   else if (*_gold == "187") gold = 187;
					   else if (*_gold == "188") gold = 188;
					   else if (*_gold == "189") gold = 189;
					   else if (*_gold == "190") gold = 190;
					   else if (*_gold == "191") gold = 191;
					   else if (*_gold == "192") gold = 192;
					   else if (*_gold == "193") gold = 193;
					   else if (*_gold == "194") gold = 194;
					   else if (*_gold == "195") gold = 195;
					   else if (*_gold == "196") gold = 196;
					   else if (*_gold == "197") gold = 197;
					   else if (*_gold == "198") gold = 198;
					   else if (*_gold == "199") gold = 199;
					   else if (*_gold == "200") gold = 200;
					   else if (*_gold == "201") gold = 201;
					   else if (*_gold == "202") gold = 202;
					   else if (*_gold == "203") gold = 203;
					   else if (*_gold == "204") gold = 204;
					   else if (*_gold == "205") gold = 205;
					   else if (*_gold == "206") gold = 206;
					   else if (*_gold == "207") gold = 207;
					   else if (*_gold == "208") gold = 208;
					   else if (*_gold == "209") gold = 209;
					   else if (*_gold == "210") gold = 210;
					   else if (*_gold == "211") gold = 211;
					   else if (*_gold == "212") gold = 212;
					   else if (*_gold == "213") gold = 213;
					   else if (*_gold == "214") gold = 214;
					   else if (*_gold == "215") gold = 215;
					   else if (*_gold == "216") gold = 216;
					   else if (*_gold == "217") gold = 217;
					   else if (*_gold == "218") gold = 218;
					   else if (*_gold == "219") gold = 219;
					   else if (*_gold == "220") gold = 220;
					   else if (*_gold == "221") gold = 221;
					   else if (*_gold == "222") gold = 222;
					   else if (*_gold == "223") gold = 223;
					   else if (*_gold == "224") gold = 224;
					   else if (*_gold == "225") gold = 225;
					   else if (*_gold == "226") gold = 226;
					   else if (*_gold == "227") gold = 227;
					   else if (*_gold == "228") gold = 228;
					   else if (*_gold == "229") gold = 229;
					   else if (*_gold == "230") gold = 230;
					   else if (*_gold == "231") gold = 231;
					   else if (*_gold == "232") gold = 232;
					   else if (*_gold == "233") gold = 233;
					   else if (*_gold == "234") gold = 234;
					   else if (*_gold == "235") gold = 235;
					   else if (*_gold == "236") gold = 236;
					   else if (*_gold == "237") gold = 237;
					   else if (*_gold == "238") gold = 238;
					   else if (*_gold == "239") gold = 239;
					   else if (*_gold == "240") gold = 240;
					   if (*_gold == "241") gold = 241;
					   else if (*_gold == "242") gold = 242;
					   else if (*_gold == "243") gold = 243;
					   else if (*_gold == "244") gold = 244;
					   else if (*_gold == "245") gold = 245;
					   else if (*_gold == "246") gold = 246;
					   else if (*_gold == "247") gold = 247;
					   else if (*_gold == "248") gold = 248;
					   else if (*_gold == "249") gold = 249;
					   else if (*_gold == "250") gold = 250;
					   else if (*_gold == "251") gold = 251;
					   else if (*_gold == "252") gold = 252;
					   else if (*_gold == "253") gold = 253;
					   else if (*_gold == "254") gold = 254;
					   else if (*_gold == "255") gold = 255;
					   else if (*_gold == "256") gold = 256;
					   else if (*_gold == "257") gold = 257;
					   else if (*_gold == "258") gold = 258;
					   else if (*_gold == "259") gold = 259;
					   else if (*_gold == "260") gold = 260;
					   else if (*_gold == "261") gold = 261;
					   else if (*_gold == "262") gold = 262;
					   else if (*_gold == "263") gold = 263;
					   else if (*_gold == "264") gold = 264;
					   else if (*_gold == "265") gold = 265;
					   else if (*_gold == "266") gold = 266;
					   else if (*_gold == "267") gold = 267;
					   else if (*_gold == "268") gold = 268;
					   else if (*_gold == "269") gold = 269;
					   else if (*_gold == "270") gold = 270;
					   else if (*_gold == "271") gold = 271;
					   else if (*_gold == "272") gold = 272;
					   else if (*_gold == "273") gold = 273;
					   else if (*_gold == "274") gold = 274;
					   else if (*_gold == "275") gold = 275;
					   else if (*_gold == "276") gold = 276;
					   else if (*_gold == "277") gold = 277;
					   else if (*_gold == "278") gold = 278;
					   else if (*_gold == "279") gold = 279;
					   else if (*_gold == "280") gold = 280;
					   else if (*_gold == "281") gold = 281;
					   else if (*_gold == "282") gold = 282;
					   else if (*_gold == "283") gold = 283;
					   else if (*_gold == "284") gold = 284;
					   else if (*_gold == "285") gold = 285;
					   else if (*_gold == "286") gold = 286;
					   else if (*_gold == "287") gold = 287;
					   else if (*_gold == "288") gold = 288;
					   else if (*_gold == "289") gold = 289;
					   else if (*_gold == "290") gold = 290;
					   else if (*_gold == "291") gold = 291;
					   else if (*_gold == "292") gold = 292;
					   else if (*_gold == "293") gold = 293;
					   else if (*_gold == "294") gold = 294;
					   else if (*_gold == "295") gold = 295;
					   else if (*_gold == "296") gold = 296;
					   else if (*_gold == "297") gold = 297;
					   else if (*_gold == "298") gold = 298;
					   else if (*_gold == "299") gold = 299;
					   else if (*_gold == "300") gold = 300;
					   else if (*_gold == "301") gold = 301;
					   else if (*_gold == "302") gold = 302;
					   else if (*_gold == "303") gold = 303;
					   else if (*_gold == "304") gold = 304;
					   else if (*_gold == "305") gold = 305;
					   else if (*_gold == "306") gold = 306;
					   else if (*_gold == "307") gold = 307;
					   else if (*_gold == "308") gold = 308;
					   else if (*_gold == "309") gold = 309;
					   else if (*_gold == "310") gold = 310;
					   else if (*_gold == "311") gold = 311;
					   else if (*_gold == "312") gold = 312;
					   else if (*_gold == "313") gold = 313;
					   else if (*_gold == "314") gold = 314;
					   else if (*_gold == "315") gold = 315;
					   else if (*_gold == "316") gold = 316;
					   else if (*_gold == "317") gold = 317;
					   else if (*_gold == "318") gold = 318;
					   else if (*_gold == "319") gold = 319;
					   else if (*_gold == "320") gold = 320;
					   else if (*_gold == "321") gold = 321;
					   else if (*_gold == "322") gold = 322;
					   else if (*_gold == "323") gold = 323;
					   else if (*_gold == "324") gold = 324;
					   else if (*_gold == "325") gold = 325;
					   else if (*_gold == "326") gold = 326;
					   else if (*_gold == "327") gold = 327;
					   else if (*_gold == "328") gold = 328;
					   else if (*_gold == "329") gold = 329;
					   else if (*_gold == "330") gold = 330;
					   else if (*_gold == "331") gold = 331;
					   else if (*_gold == "332") gold = 332;
					   else if (*_gold == "333") gold = 333;
					   else if (*_gold == "334") gold = 334;
					   else if (*_gold == "335") gold = 335;
					   else if (*_gold == "336") gold = 336;
					   else if (*_gold == "337") gold = 337;
					   else if (*_gold == "338") gold = 338;
					   else if (*_gold == "339") gold = 339;
					   else if (*_gold == "340") gold = 340;
					   else if (*_gold == "341") gold = 341;
					   else if (*_gold == "342") gold = 342;
					   else if (*_gold == "343") gold = 343;
					   else if (*_gold == "344") gold = 344;
					   else if (*_gold == "345") gold = 345;
					   else if (*_gold == "346") gold = 346;
					   else if (*_gold == "347") gold = 347;
					   else if (*_gold == "348") gold = 348;
					   else if (*_gold == "349") gold = 349;
					   else if (*_gold == "350") gold = 350;
					   else if (*_gold == "351") gold = 351;
					   else if (*_gold == "352") gold = 352;
					   else if (*_gold == "353") gold = 353;
					   else if (*_gold == "354") gold = 354;
					   else if (*_gold == "355") gold = 355;
					   else if (*_gold == "356") gold = 356;
					   else if (*_gold == "357") gold = 357;
					   else if (*_gold == "358") gold = 358;
					   else if (*_gold == "359") gold = 359;
					   else if (*_gold == "360") gold = 360;
					   if (*_gold == "361") gold = 361;
					   else if (*_gold == "362") gold = 362;
					   else if (*_gold == "363") gold = 363;
					   else if (*_gold == "364") gold = 364;
					   else if (*_gold == "365") gold = 365;
					   else if (*_gold == "366") gold = 366;
					   else if (*_gold == "367") gold = 367;
					   else if (*_gold == "368") gold = 368;
					   else if (*_gold == "369") gold = 369;
					   else if (*_gold == "370") gold = 370;
					   else if (*_gold == "371") gold = 371;
					   else if (*_gold == "372") gold = 372;
					   else if (*_gold == "373") gold = 373;
					   else if (*_gold == "374") gold = 374;
					   else if (*_gold == "375") gold = 375;
					   else if (*_gold == "376") gold = 376;
					   else if (*_gold == "377") gold = 377;
					   else if (*_gold == "378") gold = 378;
					   else if (*_gold == "379") gold = 379;
					   else if (*_gold == "380") gold = 380;
					   else if (*_gold == "381") gold = 381;
					   else if (*_gold == "382") gold = 382;
					   else if (*_gold == "383") gold = 383;
					   else if (*_gold == "384") gold = 384;
					   else if (*_gold == "385") gold = 385;
					   else if (*_gold == "386") gold = 386;
					   else if (*_gold == "387") gold = 387;
					   else if (*_gold == "388") gold = 388;
					   else if (*_gold == "389") gold = 389;
					   else if (*_gold == "390") gold = 390;
					   else if (*_gold == "391") gold = 391;
					   else if (*_gold == "392") gold = 392;
					   else if (*_gold == "393") gold = 393;
					   else if (*_gold == "394") gold = 394;
					   else if (*_gold == "395") gold = 395;
					   else if (*_gold == "396") gold = 396;
					   else if (*_gold == "397") gold = 397;
					   else if (*_gold == "398") gold = 398;
					   else if (*_gold == "399") gold = 399;
					   else if (*_gold == "400") gold = 400;
					   else if (*_gold == "401") gold = 401;
					   else if (*_gold == "402") gold = 402;
					   else if (*_gold == "403") gold = 403;
					   else if (*_gold == "404") gold = 404;
					   else if (*_gold == "405") gold = 405;
					   else if (*_gold == "406") gold = 406;
					   else if (*_gold == "407") gold = 407;
					   else if (*_gold == "408") gold = 408;
					   else if (*_gold == "409") gold = 409;
					   else if (*_gold == "410") gold = 410;
					   else if (*_gold == "411") gold = 411;
					   else if (*_gold == "412") gold = 412;
					   else if (*_gold == "413") gold = 413;
					   else if (*_gold == "414") gold = 414;
					   else if (*_gold == "415") gold = 415;
					   else if (*_gold == "416") gold = 416;
					   else if (*_gold == "417") gold = 417;
					   else if (*_gold == "418") gold = 418;
					   else if (*_gold == "419") gold = 419;
					   else if (*_gold == "420") gold = 420;
					   else if (*_gold == "421") gold = 421;
					   else if (*_gold == "422") gold = 422;
					   else if (*_gold == "423") gold = 423;
					   else if (*_gold == "424") gold = 424;
					   else if (*_gold == "425") gold = 425;
					   else if (*_gold == "426") gold = 426;
					   else if (*_gold == "427") gold = 427;
					   else if (*_gold == "428") gold = 428;
					   else if (*_gold == "429") gold = 429;
					   else if (*_gold == "430") gold = 430;
					   else if (*_gold == "431") gold = 431;
					   else if (*_gold == "432") gold = 432;
					   else if (*_gold == "433") gold = 433;
					   else if (*_gold == "434") gold = 434;
					   else if (*_gold == "435") gold = 435;
					   else if (*_gold == "436") gold = 436;
					   else if (*_gold == "437") gold = 437;
					   else if (*_gold == "438") gold = 438;
					   else if (*_gold == "439") gold = 439;
					   else if (*_gold == "440") gold = 440;
					   else if (*_gold == "441") gold = 441;
					   else if (*_gold == "442") gold = 442;
					   else if (*_gold == "443") gold = 443;
					   else if (*_gold == "444") gold = 444;
					   else if (*_gold == "445") gold = 445;
					   else if (*_gold == "446") gold = 446;
					   else if (*_gold == "447") gold = 447;
					   else if (*_gold == "448") gold = 448;
					   else if (*_gold == "449") gold = 449;
					   else if (*_gold == "450") gold = 450;
					   else if (*_gold == "451") gold = 451;
					   else if (*_gold == "452") gold = 452;
					   else if (*_gold == "453") gold = 453;
					   else if (*_gold == "454") gold = 454;
					   else if (*_gold == "455") gold = 455;
					   else if (*_gold == "456") gold = 456;
					   else if (*_gold == "457") gold = 457;
					   else if (*_gold == "458") gold = 458;
					   else if (*_gold == "459") gold = 459;
					   else if (*_gold == "460") gold = 460;
					   else if (*_gold == "461") gold = 461;
					   else if (*_gold == "462") gold = 462;
					   else if (*_gold == "463") gold = 463;
					   else if (*_gold == "464") gold = 464;
					   else if (*_gold == "465") gold = 465;
					   else if (*_gold == "466") gold = 466;
					   else if (*_gold == "467") gold = 467;
					   else if (*_gold == "468") gold = 468;
					   else if (*_gold == "469") gold = 469;
					   else if (*_gold == "470") gold = 470;
					   else if (*_gold == "471") gold = 471;
					   else if (*_gold == "472") gold = 472;
					   else if (*_gold == "473") gold = 473;
					   else if (*_gold == "474") gold = 474;
					   else if (*_gold == "475") gold = 475;
					   else if (*_gold == "476") gold = 476;
					   else if (*_gold == "477") gold = 477;
					   else if (*_gold == "478") gold = 478;
					   else if (*_gold == "479") gold = 479;
					   else if (*_gold == "480") gold = 480;
					   if (*_gold == "481") gold = 481;
					   else if (*_gold == "482") gold = 482;
					   else if (*_gold == "483") gold = 483;
					   else if (*_gold == "484") gold = 484;
					   else if (*_gold == "485") gold = 485;
					   else if (*_gold == "486") gold = 486;
					   else if (*_gold == "487") gold = 487;
					   else if (*_gold == "488") gold = 488;
					   else if (*_gold == "489") gold = 489;
					   else if (*_gold == "490") gold = 490;
					   else if (*_gold == "491") gold = 491;
					   else if (*_gold == "492") gold = 492;
					   else if (*_gold == "493") gold = 493;
					   else if (*_gold == "494") gold = 494;
					   else if (*_gold == "495") gold = 495;
					   else if (*_gold == "496") gold = 496;
					   else if (*_gold == "497") gold = 497;
					   else if (*_gold == "498") gold = 498;
					   else if (*_gold == "499") gold = 499;
					   else if (*_gold == "500") gold = 500;
					   else if (*_gold == "501") gold = 501;
					   else if (*_gold == "502") gold = 502;
					   else if (*_gold == "503") gold = 503;
					   else if (*_gold == "504") gold = 504;
					   else if (*_gold == "505") gold = 505;
					   else if (*_gold == "506") gold = 506;
					   else if (*_gold == "507") gold = 507;
					   else if (*_gold == "508") gold = 508;
					   else if (*_gold == "509") gold = 509;
					   else if (*_gold == "510") gold = 510;
					   else if (*_gold == "511") gold = 511;
					   else if (*_gold == "512") gold = 512;
					   else if (*_gold == "513") gold = 513;
					   else if (*_gold == "514") gold = 514;
					   else if (*_gold == "515") gold = 515;
					   else if (*_gold == "516") gold = 516;
					   else if (*_gold == "517") gold = 517;
					   else if (*_gold == "518") gold = 518;
					   else if (*_gold == "519") gold = 519;
					   else if (*_gold == "520") gold = 520;
					   else if (*_gold == "521") gold = 521;
					   else if (*_gold == "522") gold = 522;
					   else if (*_gold == "523") gold = 523;
					   else if (*_gold == "524") gold = 524;
					   else if (*_gold == "525") gold = 525;
					   else if (*_gold == "526") gold = 526;
					   else if (*_gold == "527") gold = 527;
					   else if (*_gold == "528") gold = 528;
					   else if (*_gold == "529") gold = 529;
					   else if (*_gold == "530") gold = 530;
					   else if (*_gold == "531") gold = 531;
					   else if (*_gold == "532") gold = 532;
					   else if (*_gold == "533") gold = 533;
					   else if (*_gold == "534") gold = 534;
					   else if (*_gold == "535") gold = 535;
					   else if (*_gold == "536") gold = 536;
					   else if (*_gold == "537") gold = 537;
					   else if (*_gold == "538") gold = 538;
					   else if (*_gold == "539") gold = 539;
					   else if (*_gold == "540") gold = 540;
					   else if (*_gold == "541") gold = 541;
					   else if (*_gold == "542") gold = 542;
					   else if (*_gold == "543") gold = 543;
					   else if (*_gold == "544") gold = 544;
					   else if (*_gold == "545") gold = 545;
					   else if (*_gold == "546") gold = 546;
					   else if (*_gold == "547") gold = 547;
					   else if (*_gold == "548") gold = 548;
					   else if (*_gold == "549") gold = 549;
					   else if (*_gold == "550") gold = 550;
					   else if (*_gold == "551") gold = 551;
					   else if (*_gold == "552") gold = 552;
					   else if (*_gold == "553") gold = 553;
					   else if (*_gold == "554") gold = 554;
					   else if (*_gold == "555") gold = 555;
					   else if (*_gold == "556") gold = 556;
					   else if (*_gold == "557") gold = 557;
					   else if (*_gold == "558") gold = 558;
					   else if (*_gold == "559") gold = 559;
					   else if (*_gold == "560") gold = 560;
					   else if (*_gold == "561") gold = 561;
					   else if (*_gold == "562") gold = 562;
					   else if (*_gold == "563") gold = 563;
					   else if (*_gold == "564") gold = 564;
					   else if (*_gold == "565") gold = 565;
					   else if (*_gold == "566") gold = 566;
					   else if (*_gold == "567") gold = 567;
					   else if (*_gold == "568") gold = 568;
					   else if (*_gold == "569") gold = 569;
					   else if (*_gold == "570") gold = 570;
					   else if (*_gold == "571") gold = 571;
					   else if (*_gold == "572") gold = 572;
					   else if (*_gold == "573") gold = 573;
					   else if (*_gold == "574") gold = 574;
					   else if (*_gold == "575") gold = 575;
					   else if (*_gold == "576") gold = 576;
					   else if (*_gold == "577") gold = 577;
					   else if (*_gold == "578") gold = 578;
					   else if (*_gold == "579") gold = 579;
					   else if (*_gold == "580") gold = 580;
					   else if (*_gold == "581") gold = 581;
					   else if (*_gold == "582") gold = 582;
					   else if (*_gold == "583") gold = 583;
					   else if (*_gold == "584") gold = 584;
					   else if (*_gold == "585") gold = 585;
					   else if (*_gold == "586") gold = 586;
					   else if (*_gold == "587") gold = 587;
					   else if (*_gold == "588") gold = 588;
					   else if (*_gold == "589") gold = 589;
					   else if (*_gold == "590") gold = 590;
					   else if (*_gold == "591") gold = 591;
					   else if (*_gold == "592") gold = 592;
					   else if (*_gold == "593") gold = 593;
					   else if (*_gold == "594") gold = 594;
					   else if (*_gold == "595") gold = 595;
					   else if (*_gold == "596") gold = 596;
					   else if (*_gold == "597") gold = 597;
					   else if (*_gold == "598") gold = 598;
					   else if (*_gold == "599") gold = 599;
					   else if (*_gold == "600") gold = 600;
					   if (*_gold == "601") gold = 601;
					   else if (*_gold == "602") gold = 602;
					   else if (*_gold == "603") gold = 603;
					   else if (*_gold == "604") gold = 604;
					   else if (*_gold == "605") gold = 605;
					   else if (*_gold == "606") gold = 606;
					   else if (*_gold == "607") gold = 607;
					   else if (*_gold == "608") gold = 608;
					   else if (*_gold == "609") gold = 609;
					   else if (*_gold == "610") gold = 610;
					   else if (*_gold == "611") gold = 611;
					   else if (*_gold == "612") gold = 612;
					   else if (*_gold == "613") gold = 613;
					   else if (*_gold == "614") gold = 614;
					   else if (*_gold == "615") gold = 615;
					   else if (*_gold == "616") gold = 616;
					   else if (*_gold == "617") gold = 617;
					   else if (*_gold == "618") gold = 618;
					   else if (*_gold == "619") gold = 619;
					   else if (*_gold == "620") gold = 620;
					   else if (*_gold == "621") gold = 621;
					   else if (*_gold == "622") gold = 622;
					   else if (*_gold == "623") gold = 623;
					   else if (*_gold == "624") gold = 624;
					   else if (*_gold == "625") gold = 625;
					   else if (*_gold == "626") gold = 626;
					   else if (*_gold == "627") gold = 627;
					   else if (*_gold == "628") gold = 628;
					   else if (*_gold == "629") gold = 629;
					   else if (*_gold == "630") gold = 630;
					   else if (*_gold == "631") gold = 631;
					   else if (*_gold == "632") gold = 632;
					   else if (*_gold == "633") gold = 633;
					   else if (*_gold == "634") gold = 634;
					   else if (*_gold == "635") gold = 635;
					   else if (*_gold == "636") gold = 636;
					   else if (*_gold == "637") gold = 637;
					   else if (*_gold == "638") gold = 638;
					   else if (*_gold == "639") gold = 639;
					   else if (*_gold == "640") gold = 640;
					   else if (*_gold == "641") gold = 641;
					   else if (*_gold == "642") gold = 642;
					   else if (*_gold == "643") gold = 643;
					   else if (*_gold == "644") gold = 644;
					   else if (*_gold == "645") gold = 645;
					   else if (*_gold == "646") gold = 646;
					   else if (*_gold == "647") gold = 647;
					   else if (*_gold == "648") gold = 648;
					   else if (*_gold == "649") gold = 649;
					   else if (*_gold == "650") gold = 650;
					   else if (*_gold == "651") gold = 651;
					   else if (*_gold == "652") gold = 652;
					   else if (*_gold == "653") gold = 653;
					   else if (*_gold == "654") gold = 654;
					   else if (*_gold == "655") gold = 655;
					   else if (*_gold == "656") gold = 656;
					   else if (*_gold == "657") gold = 657;
					   else if (*_gold == "658") gold = 658;
					   else if (*_gold == "659") gold = 659;
					   else if (*_gold == "660") gold = 660;
					   else if (*_gold == "661") gold = 661;
					   else if (*_gold == "662") gold = 662;
					   else if (*_gold == "663") gold = 663;
					   else if (*_gold == "664") gold = 664;
					   else if (*_gold == "665") gold = 665;
					   else if (*_gold == "666") gold = 666;
					   else if (*_gold == "667") gold = 667;
					   else if (*_gold == "668") gold = 668;
					   else if (*_gold == "669") gold = 669;
					   else if (*_gold == "670") gold = 670;
					   else if (*_gold == "671") gold = 671;
					   else if (*_gold == "672") gold = 672;
					   else if (*_gold == "673") gold = 673;
					   else if (*_gold == "674") gold = 674;
					   else if (*_gold == "675") gold = 675;
					   else if (*_gold == "676") gold = 676;
					   else if (*_gold == "677") gold = 677;
					   else if (*_gold == "678") gold = 678;
					   else if (*_gold == "679") gold = 679;
					   else if (*_gold == "680") gold = 680;
					   else if (*_gold == "681") gold = 681;
					   else if (*_gold == "682") gold = 682;
					   else if (*_gold == "683") gold = 683;
					   else if (*_gold == "684") gold = 684;
					   else if (*_gold == "685") gold = 685;
					   else if (*_gold == "686") gold = 686;
					   else if (*_gold == "687") gold = 687;
					   else if (*_gold == "688") gold = 688;
					   else if (*_gold == "689") gold = 689;
					   else if (*_gold == "690") gold = 690;
					   else if (*_gold == "691") gold = 691;
					   else if (*_gold == "692") gold = 692;
					   else if (*_gold == "693") gold = 693;
					   else if (*_gold == "694") gold = 694;
					   else if (*_gold == "695") gold = 695;
					   else if (*_gold == "696") gold = 696;
					   else if (*_gold == "697") gold = 697;
					   else if (*_gold == "698") gold = 698;
					   else if (*_gold == "699") gold = 699;
					   else if (*_gold == "700") gold = 700;

					   delete _gold;
				   }
				   {}
				   //silver
				   {
					   string* _silver = new string;

					   getline(Data, *_silver);
					   if (*_silver == "0") silver = 0;
					   else if (*_silver == "10") silver = 10;
					   else if (*_silver == "20") silver = 20;
					   else if (*_silver == "30") silver = 30;
					   else if (*_silver == "40") silver = 40;
					   else if (*_silver == "50") silver = 50;
					   else if (*_silver == "60") silver = 60;
					   else if (*_silver == "70") silver = 70;
					   else if (*_silver == "80") silver = 80;
					   else if (*_silver == "90") silver = 90;
					   else if (*_silver == "100") silver = 100;
					   else if (*_silver == "110") silver = 110;
					   else if (*_silver == "120") silver = 120;
					   else if (*_silver == "130") silver = 130;
					   else if (*_silver == "140") silver = 140;
					   else if (*_silver == "150") silver = 150;
					   else if (*_silver == "160") silver = 160;
					   else if (*_silver == "170") silver = 170;
					   else if (*_silver == "180") silver = 180;
					   else if (*_silver == "190") silver = 190;
					   else if (*_silver == "200") silver = 200;
					   else if (*_silver == "210") silver = 210;
					   else if (*_silver == "220") silver = 220;
					   else if (*_silver == "230") silver = 230;
					   else if (*_silver == "240") silver = 240;
					   else if (*_silver == "250") silver = 250;
					   else if (*_silver == "260") silver = 260;
					   else if (*_silver == "270") silver = 270;
					   else if (*_silver == "280") silver = 280;
					   else if (*_silver == "290") silver = 290;
					   else if (*_silver == "300") silver = 300;
					   else if (*_silver == "310") silver = 310;
					   else if (*_silver == "320") silver = 320;
					   else if (*_silver == "330") silver = 330;
					   else if (*_silver == "340") silver = 340;
					   else if (*_silver == "350") silver = 350;
					   else if (*_silver == "360") silver = 360;
					   else if (*_silver == "370") silver = 370;
					   else if (*_silver == "380") silver = 380;
					   else if (*_silver == "390") silver = 390;
					   else if (*_silver == "400") silver = 400;
					   else if (*_silver == "410") silver = 410;
					   else if (*_silver == "420") silver = 420;
					   else if (*_silver == "430") silver = 430;
					   else if (*_silver == "440") silver = 440;
					   else if (*_silver == "450") silver = 450;
					   else if (*_silver == "460") silver = 460;
					   else if (*_silver == "470") silver = 470;
					   else if (*_silver == "480") silver = 480;
					   else if (*_silver == "490") silver = 490;
					   else if (*_silver == "500") silver = 500;
					   else if (*_silver == "510") silver = 510;
					   else if (*_silver == "520") silver = 520;
					   else if (*_silver == "530") silver = 530;
					   else if (*_silver == "540") silver = 540;
					   else if (*_silver == "550") silver = 550;
					   else if (*_silver == "560") silver = 560;
					   else if (*_silver == "570") silver = 570;
					   else if (*_silver == "580") silver = 580;
					   else if (*_silver == "590") silver = 590;
					   else if (*_silver == "600") silver = 600;
					   else if (*_silver == "610") silver = 610;
					   else if (*_silver == "620") silver = 620;
					   else if (*_silver == "630") silver = 630;
					   else if (*_silver == "640") silver = 640;
					   else if (*_silver == "650") silver = 650;
					   else if (*_silver == "660") silver = 660;
					   else if (*_silver == "670") silver = 670;
					   else if (*_silver == "680") silver = 680;
					   else if (*_silver == "690") silver = 690;
					   else if (*_silver == "700") silver = 700;
					   else if (*_silver == "710") silver = 710;
					   else if (*_silver == "720") silver = 720;
					   else if (*_silver == "730") silver = 730;
					   else if (*_silver == "740") silver = 740;
					   else if (*_silver == "750") silver = 750;
					   else if (*_silver == "760") silver = 760;
					   else if (*_silver == "770") silver = 770;
					   else if (*_silver == "780") silver = 780;
					   else if (*_silver == "790") silver = 790;
					   else if (*_silver == "800") silver = 800;
					   else if (*_silver == "810") silver = 810;
					   else if (*_silver == "820") silver = 820;
					   else if (*_silver == "830") silver = 830;
					   else if (*_silver == "840") silver = 840;
					   else if (*_silver == "850") silver = 850;
					   else if (*_silver == "860") silver = 860;
					   else if (*_silver == "870") silver = 870;
					   else if (*_silver == "880") silver = 880;
					   else if (*_silver == "890") silver = 890;
					   else if (*_silver == "900") silver = 900;
					   else if (*_silver == "910") silver = 910;
					   else if (*_silver == "920") silver = 920;
					   else if (*_silver == "930") silver = 930;
					   else if (*_silver == "940") silver = 940;
					   else if (*_silver == "950") silver = 950;
					   else if (*_silver == "960") silver = 960;
					   else if (*_silver == "970") silver = 970;
					   else if (*_silver == "980") silver = 980;
					   else if (*_silver == "990") silver = 990;
					   else if (*_silver == "1000") silver = 1000;
					   else if (*_silver == "1010") silver = 1010;
					   else if (*_silver == "1020") silver = 1020;
					   else if (*_silver == "1030") silver = 1030;
					   else if (*_silver == "1040") silver = 1040;
					   else if (*_silver == "1050") silver = 1050;
					   else if (*_silver == "1060") silver = 1060;
					   else if (*_silver == "1070") silver = 1070;
					   else if (*_silver == "1080") silver = 1080;
					   else if (*_silver == "1090") silver = 1090;
					   else if (*_silver == "1100") silver = 1100;
					   else if (*_silver == "1110") silver = 1110;
					   else if (*_silver == "1120") silver = 1120;
					   else if (*_silver == "1130") silver = 1130;
					   else if (*_silver == "1140") silver = 1140;
					   else if (*_silver == "1150") silver = 1150;
					   else if (*_silver == "1160") silver = 1160;
					   else if (*_silver == "1170") silver = 1170;
					   else if (*_silver == "1180") silver = 1180;
					   else if (*_silver == "1190") silver = 1190;
					   else if (*_silver == "1200") silver = 1200;
					   if (*_silver == "1210") silver = 1210;
					   else if (*_silver == "1220") silver = 1220;
					   else if (*_silver == "1230") silver = 1230;
					   else if (*_silver == "1240") silver = 1240;
					   else if (*_silver == "1250") silver = 1250;
					   else if (*_silver == "1260") silver = 1260;
					   else if (*_silver == "1270") silver = 1270;
					   else if (*_silver == "1280") silver = 1280;
					   else if (*_silver == "1290") silver = 1290;
					   else if (*_silver == "1300") silver = 1300;
					   else if (*_silver == "1310") silver = 1310;
					   else if (*_silver == "1320") silver = 1320;
					   else if (*_silver == "1330") silver = 1330;
					   else if (*_silver == "1340") silver = 1340;
					   else if (*_silver == "1350") silver = 1350;
					   else if (*_silver == "1360") silver = 1360;
					   else if (*_silver == "1370") silver = 1370;
					   else if (*_silver == "1380") silver = 1380;
					   else if (*_silver == "1390") silver = 1390;
					   else if (*_silver == "1400") silver = 1400;
					   else if (*_silver == "1410") silver = 1410;
					   else if (*_silver == "1420") silver = 1420;
					   else if (*_silver == "1430") silver = 1430;
					   else if (*_silver == "1440") silver = 1440;
					   else if (*_silver == "1450") silver = 1450;
					   else if (*_silver == "1460") silver = 1460;
					   else if (*_silver == "1470") silver = 1470;
					   else if (*_silver == "1480") silver = 1480;
					   else if (*_silver == "1490") silver = 1490;
					   else if (*_silver == "1500") silver = 1500;
					   else if (*_silver == "1510") silver = 1510;
					   else if (*_silver == "1520") silver = 1520;
					   else if (*_silver == "1530") silver = 1530;
					   else if (*_silver == "1540") silver = 1540;
					   else if (*_silver == "1550") silver = 1550;
					   else if (*_silver == "1560") silver = 1560;
					   else if (*_silver == "1570") silver = 1570;
					   else if (*_silver == "1580") silver = 1580;
					   else if (*_silver == "1590") silver = 1590;
					   else if (*_silver == "1600") silver = 1600;
					   else if (*_silver == "1610") silver = 1610;
					   else if (*_silver == "1620") silver = 1620;
					   else if (*_silver == "1630") silver = 1630;
					   else if (*_silver == "1640") silver = 1640;
					   else if (*_silver == "1650") silver = 1650;
					   else if (*_silver == "1660") silver = 1660;
					   else if (*_silver == "1670") silver = 1670;
					   else if (*_silver == "1680") silver = 1680;
					   else if (*_silver == "1690") silver = 1690;
					   else if (*_silver == "1700") silver = 1700;
					   else if (*_silver == "1710") silver = 1710;
					   else if (*_silver == "1720") silver = 1720;
					   else if (*_silver == "1730") silver = 1730;
					   else if (*_silver == "1740") silver = 1740;
					   else if (*_silver == "1750") silver = 1750;
					   else if (*_silver == "1760") silver = 1760;
					   else if (*_silver == "1770") silver = 1770;
					   else if (*_silver == "1780") silver = 1780;
					   else if (*_silver == "1790") silver = 1790;
					   else if (*_silver == "1800") silver = 1800;
					   else if (*_silver == "1810") silver = 1810;
					   else if (*_silver == "1820") silver = 1820;
					   else if (*_silver == "1830") silver = 1830;
					   else if (*_silver == "1840") silver = 1840;
					   else if (*_silver == "1850") silver = 1850;
					   else if (*_silver == "1860") silver = 1860;
					   else if (*_silver == "1870") silver = 1870;
					   else if (*_silver == "1880") silver = 1880;
					   else if (*_silver == "1890") silver = 1890;
					   else if (*_silver == "1900") silver = 1900;
					   else if (*_silver == "1910") silver = 1910;
					   else if (*_silver == "1920") silver = 1920;
					   else if (*_silver == "1930") silver = 1930;
					   else if (*_silver == "1940") silver = 1940;
					   else if (*_silver == "1950") silver = 1950;
					   else if (*_silver == "1960") silver = 1960;
					   else if (*_silver == "1970") silver = 1970;
					   else if (*_silver == "1980") silver = 1980;
					   else if (*_silver == "1990") silver = 1990;
					   else if (*_silver == "2000") silver = 2000;
					   else if (*_silver == "2010") silver = 2010;
					   else if (*_silver == "2020") silver = 2020;
					   else if (*_silver == "2030") silver = 2030;
					   else if (*_silver == "2040") silver = 2040;
					   else if (*_silver == "2050") silver = 2050;
					   else if (*_silver == "2060") silver = 2060;
					   else if (*_silver == "2070") silver = 2070;
					   else if (*_silver == "2080") silver = 2080;
					   else if (*_silver == "2090") silver = 2090;
					   else if (*_silver == "2100") silver = 2100;
					   else if (*_silver == "2110") silver = 2110;
					   else if (*_silver == "2120") silver = 2120;
					   else if (*_silver == "2130") silver = 2130;
					   else if (*_silver == "2140") silver = 2140;
					   else if (*_silver == "2150") silver = 2150;
					   else if (*_silver == "2160") silver = 2160;
					   else if (*_silver == "2170") silver = 2170;
					   else if (*_silver == "2180") silver = 2180;
					   else if (*_silver == "2190") silver = 2190;
					   else if (*_silver == "2200") silver = 2200;
					   else if (*_silver == "2210") silver = 2210;
					   else if (*_silver == "2220") silver = 2220;
					   else if (*_silver == "2230") silver = 2230;
					   else if (*_silver == "2240") silver = 2240;
					   else if (*_silver == "2250") silver = 2250;
					   else if (*_silver == "2260") silver = 2260;
					   else if (*_silver == "2270") silver = 2270;
					   else if (*_silver == "2280") silver = 2280;
					   else if (*_silver == "2290") silver = 2290;
					   else if (*_silver == "2300") silver = 2300;
					   else if (*_silver == "2310") silver = 2310;
					   else if (*_silver == "2320") silver = 2320;
					   else if (*_silver == "2330") silver = 2330;
					   else if (*_silver == "2340") silver = 2340;
					   else if (*_silver == "2350") silver = 2350;
					   else if (*_silver == "2360") silver = 2360;
					   else if (*_silver == "2370") silver = 2370;
					   else if (*_silver == "2380") silver = 2380;
					   else if (*_silver == "2390") silver = 2390;
					   else if (*_silver == "2400") silver = 2400;
					   if (*_silver == "2410") silver = 2410;
					   else if (*_silver == "2420") silver = 2420;
					   else if (*_silver == "2430") silver = 2430;
					   else if (*_silver == "2440") silver = 2440;
					   else if (*_silver == "2450") silver = 2450;
					   else if (*_silver == "2460") silver = 2460;
					   else if (*_silver == "2470") silver = 2470;
					   else if (*_silver == "2480") silver = 2480;
					   else if (*_silver == "2490") silver = 2490;
					   else if (*_silver == "2500") silver = 2500;
					   else if (*_silver == "2510") silver = 2510;
					   else if (*_silver == "2520") silver = 2520;
					   else if (*_silver == "2530") silver = 2530;
					   else if (*_silver == "2540") silver = 2540;
					   else if (*_silver == "2550") silver = 2550;
					   else if (*_silver == "2560") silver = 2560;
					   else if (*_silver == "2570") silver = 2570;
					   else if (*_silver == "2580") silver = 2580;
					   else if (*_silver == "2590") silver = 2590;
					   else if (*_silver == "2600") silver = 2600;
					   else if (*_silver == "2610") silver = 2610;
					   else if (*_silver == "2620") silver = 2620;
					   else if (*_silver == "2630") silver = 2630;
					   else if (*_silver == "2640") silver = 2640;
					   else if (*_silver == "2650") silver = 2650;
					   else if (*_silver == "2660") silver = 2660;
					   else if (*_silver == "2670") silver = 2670;
					   else if (*_silver == "2680") silver = 2680;
					   else if (*_silver == "2690") silver = 2690;
					   else if (*_silver == "2700") silver = 2700;
					   else if (*_silver == "2710") silver = 2710;
					   else if (*_silver == "2720") silver = 2720;
					   else if (*_silver == "2730") silver = 2730;
					   else if (*_silver == "2740") silver = 2740;
					   else if (*_silver == "2750") silver = 2750;
					   else if (*_silver == "2760") silver = 2760;
					   else if (*_silver == "2770") silver = 2770;
					   else if (*_silver == "2780") silver = 2780;
					   else if (*_silver == "2790") silver = 2790;
					   else if (*_silver == "2800") silver = 2800;
					   else if (*_silver == "2810") silver = 2810;
					   else if (*_silver == "2820") silver = 2820;
					   else if (*_silver == "2830") silver = 2830;
					   else if (*_silver == "2840") silver = 2840;
					   else if (*_silver == "2850") silver = 2850;
					   else if (*_silver == "2860") silver = 2860;
					   else if (*_silver == "2870") silver = 2870;
					   else if (*_silver == "2880") silver = 2880;
					   else if (*_silver == "2890") silver = 2890;
					   else if (*_silver == "2900") silver = 2900;
					   else if (*_silver == "2910") silver = 2910;
					   else if (*_silver == "2920") silver = 2920;
					   else if (*_silver == "2930") silver = 2930;
					   else if (*_silver == "2940") silver = 2940;
					   else if (*_silver == "2950") silver = 2950;
					   else if (*_silver == "2960") silver = 2960;
					   else if (*_silver == "2970") silver = 2970;
					   else if (*_silver == "2980") silver = 2980;
					   else if (*_silver == "2990") silver = 2990;
					   else if (*_silver == "3000") silver = 3000;
					   else if (*_silver == "3010") silver = 3010;
					   else if (*_silver == "3020") silver = 3020;
					   else if (*_silver == "3030") silver = 3030;
					   else if (*_silver == "3040") silver = 3040;
					   else if (*_silver == "3050") silver = 3050;
					   else if (*_silver == "3060") silver = 3060;
					   else if (*_silver == "3070") silver = 3070;
					   else if (*_silver == "3080") silver = 3080;
					   else if (*_silver == "3090") silver = 3090;
					   else if (*_silver == "3100") silver = 3100;
					   else if (*_silver == "3110") silver = 3110;
					   else if (*_silver == "3120") silver = 3120;
					   else if (*_silver == "3130") silver = 3130;
					   else if (*_silver == "3140") silver = 3140;
					   else if (*_silver == "3150") silver = 3150;
					   else if (*_silver == "3160") silver = 3160;
					   else if (*_silver == "3170") silver = 3170;
					   else if (*_silver == "3180") silver = 3180;
					   else if (*_silver == "3190") silver = 3190;
					   else if (*_silver == "3200") silver = 3200;
					   else if (*_silver == "3210") silver = 3210;
					   else if (*_silver == "3220") silver = 3220;
					   else if (*_silver == "3230") silver = 3230;
					   else if (*_silver == "3240") silver = 3240;
					   else if (*_silver == "3250") silver = 3250;
					   else if (*_silver == "3260") silver = 3260;
					   else if (*_silver == "3270") silver = 3270;
					   else if (*_silver == "3280") silver = 3280;
					   else if (*_silver == "3290") silver = 3290;
					   else if (*_silver == "3300") silver = 3300;
					   else if (*_silver == "3310") silver = 3310;
					   else if (*_silver == "3320") silver = 3320;
					   else if (*_silver == "3330") silver = 3330;
					   else if (*_silver == "3340") silver = 3340;
					   else if (*_silver == "3350") silver = 3350;
					   else if (*_silver == "3360") silver = 3360;
					   else if (*_silver == "3370") silver = 3370;
					   else if (*_silver == "3380") silver = 3380;
					   else if (*_silver == "3390") silver = 3390;
					   else if (*_silver == "3400") silver = 3400;
					   else if (*_silver == "3410") silver = 3410;
					   else if (*_silver == "3420") silver = 3420;
					   else if (*_silver == "3430") silver = 3430;
					   else if (*_silver == "3440") silver = 3440;
					   else if (*_silver == "3450") silver = 3450;
					   else if (*_silver == "3460") silver = 3460;
					   else if (*_silver == "3470") silver = 3470;
					   else if (*_silver == "3480") silver = 3480;
					   else if (*_silver == "3490") silver = 3490;
					   else if (*_silver == "3500") silver = 3500;
					   else if (*_silver == "3510") silver = 3510;
					   else if (*_silver == "3520") silver = 3520;
					   else if (*_silver == "3530") silver = 3530;
					   else if (*_silver == "3540") silver = 3540;
					   else if (*_silver == "3550") silver = 3550;
					   else if (*_silver == "3560") silver = 3560;
					   else if (*_silver == "3570") silver = 3570;
					   else if (*_silver == "3580") silver = 3580;
					   else if (*_silver == "3590") silver = 3590;
					   else if (*_silver == "3600") silver = 3600;
					   if (*_silver == "3610") silver = 3610;
					   else if (*_silver == "3620") silver = 3620;
					   else if (*_silver == "3630") silver = 3630;
					   else if (*_silver == "3640") silver = 3640;
					   else if (*_silver == "3650") silver = 3650;
					   else if (*_silver == "3660") silver = 3660;
					   else if (*_silver == "3670") silver = 3670;
					   else if (*_silver == "3680") silver = 3680;
					   else if (*_silver == "3690") silver = 3690;
					   else if (*_silver == "3700") silver = 3700;
					   else if (*_silver == "3710") silver = 3710;
					   else if (*_silver == "3720") silver = 3720;
					   else if (*_silver == "3730") silver = 3730;
					   else if (*_silver == "3740") silver = 3740;
					   else if (*_silver == "3750") silver = 3750;
					   else if (*_silver == "3760") silver = 3760;
					   else if (*_silver == "3770") silver = 3770;
					   else if (*_silver == "3780") silver = 3780;
					   else if (*_silver == "3790") silver = 3790;
					   else if (*_silver == "3800") silver = 3800;
					   else if (*_silver == "3810") silver = 3810;
					   else if (*_silver == "3820") silver = 3820;
					   else if (*_silver == "3830") silver = 3830;
					   else if (*_silver == "3840") silver = 3840;
					   else if (*_silver == "3850") silver = 3850;
					   else if (*_silver == "3860") silver = 3860;
					   else if (*_silver == "3870") silver = 3870;
					   else if (*_silver == "3880") silver = 3880;
					   else if (*_silver == "3890") silver = 3890;
					   else if (*_silver == "3900") silver = 3900;
					   else if (*_silver == "3910") silver = 3910;
					   else if (*_silver == "3920") silver = 3920;
					   else if (*_silver == "3930") silver = 3930;
					   else if (*_silver == "3940") silver = 3940;
					   else if (*_silver == "3950") silver = 3950;
					   else if (*_silver == "3960") silver = 3960;
					   else if (*_silver == "3970") silver = 3970;
					   else if (*_silver == "3980") silver = 3980;
					   else if (*_silver == "3990") silver = 3990;
					   else if (*_silver == "4000") silver = 4000;
					   else if (*_silver == "4010") silver = 4010;
					   else if (*_silver == "4020") silver = 4020;
					   else if (*_silver == "4030") silver = 4030;
					   else if (*_silver == "4040") silver = 4040;
					   else if (*_silver == "4050") silver = 4050;
					   else if (*_silver == "4060") silver = 4060;
					   else if (*_silver == "4070") silver = 4070;
					   else if (*_silver == "4080") silver = 4080;
					   else if (*_silver == "4090") silver = 4090;
					   else if (*_silver == "4100") silver = 4100;
					   else if (*_silver == "4110") silver = 4110;
					   else if (*_silver == "4120") silver = 4120;
					   else if (*_silver == "4130") silver = 4130;
					   else if (*_silver == "4140") silver = 4140;
					   else if (*_silver == "4150") silver = 4150;
					   else if (*_silver == "4160") silver = 4160;
					   else if (*_silver == "4170") silver = 4170;
					   else if (*_silver == "4180") silver = 4180;
					   else if (*_silver == "4190") silver = 4190;
					   else if (*_silver == "4200") silver = 4200;
					   else if (*_silver == "4210") silver = 4210;
					   else if (*_silver == "4220") silver = 4220;
					   else if (*_silver == "4230") silver = 4230;
					   else if (*_silver == "4240") silver = 4240;
					   else if (*_silver == "4250") silver = 4250;
					   else if (*_silver == "4260") silver = 4260;
					   else if (*_silver == "4270") silver = 4270;
					   else if (*_silver == "4280") silver = 4280;
					   else if (*_silver == "4290") silver = 4290;
					   else if (*_silver == "4300") silver = 4300;
					   else if (*_silver == "4310") silver = 4310;
					   else if (*_silver == "4320") silver = 4320;
					   else if (*_silver == "4330") silver = 4330;
					   else if (*_silver == "4340") silver = 4340;
					   else if (*_silver == "4350") silver = 4350;
					   else if (*_silver == "4360") silver = 4360;
					   else if (*_silver == "4370") silver = 4370;
					   else if (*_silver == "4380") silver = 4380;
					   else if (*_silver == "4390") silver = 4390;
					   else if (*_silver == "4400") silver = 4400;
					   else if (*_silver == "4410") silver = 4410;
					   else if (*_silver == "4420") silver = 4420;
					   else if (*_silver == "4430") silver = 4430;
					   else if (*_silver == "4440") silver = 4440;
					   else if (*_silver == "4450") silver = 4450;
					   else if (*_silver == "4460") silver = 4460;
					   else if (*_silver == "4470") silver = 4470;
					   else if (*_silver == "4480") silver = 4480;
					   else if (*_silver == "4490") silver = 4490;
					   else if (*_silver == "4500") silver = 4500;
					   else if (*_silver == "4510") silver = 4510;
					   else if (*_silver == "4520") silver = 4520;
					   else if (*_silver == "4530") silver = 4530;
					   else if (*_silver == "4540") silver = 4540;
					   else if (*_silver == "4550") silver = 4550;
					   else if (*_silver == "4560") silver = 4560;
					   else if (*_silver == "4570") silver = 4570;
					   else if (*_silver == "4580") silver = 4580;
					   else if (*_silver == "4590") silver = 4590;
					   else if (*_silver == "4600") silver = 4600;
					   else if (*_silver == "4610") silver = 4610;
					   else if (*_silver == "4620") silver = 4620;
					   else if (*_silver == "4630") silver = 4630;
					   else if (*_silver == "4640") silver = 4640;
					   else if (*_silver == "4650") silver = 4650;
					   else if (*_silver == "4660") silver = 4660;
					   else if (*_silver == "4670") silver = 4670;
					   else if (*_silver == "4680") silver = 4680;
					   else if (*_silver == "4690") silver = 4690;
					   else if (*_silver == "4700") silver = 4700;
					   else if (*_silver == "4710") silver = 4710;
					   else if (*_silver == "4720") silver = 4720;
					   else if (*_silver == "4730") silver = 4730;
					   else if (*_silver == "4740") silver = 4740;
					   else if (*_silver == "4750") silver = 4750;
					   else if (*_silver == "4760") silver = 4760;
					   else if (*_silver == "4770") silver = 4770;
					   else if (*_silver == "4780") silver = 4780;
					   else if (*_silver == "4790") silver = 4790;
					   else if (*_silver == "4800") silver = 4800;
					   if (*_silver == "4810") silver = 4810;
					   else if (*_silver == "4820") silver = 4820;
					   else if (*_silver == "4830") silver = 4830;
					   else if (*_silver == "4840") silver = 4840;
					   else if (*_silver == "4850") silver = 4850;
					   else if (*_silver == "4860") silver = 4860;
					   else if (*_silver == "4870") silver = 4870;
					   else if (*_silver == "4880") silver = 4880;
					   else if (*_silver == "4890") silver = 4890;
					   else if (*_silver == "4900") silver = 4900;
					   else if (*_silver == "4910") silver = 4910;
					   else if (*_silver == "4920") silver = 4920;
					   else if (*_silver == "4930") silver = 4930;
					   else if (*_silver == "4940") silver = 4940;
					   else if (*_silver == "4950") silver = 4950;
					   else if (*_silver == "4960") silver = 4960;
					   else if (*_silver == "4970") silver = 4970;
					   else if (*_silver == "4980") silver = 4980;
					   else if (*_silver == "4990") silver = 4990;
					   else if (*_silver == "5000") silver = 5000;
					   else if (*_silver == "5010") silver = 5010;
					   else if (*_silver == "5020") silver = 5020;
					   else if (*_silver == "5030") silver = 5030;
					   else if (*_silver == "5040") silver = 5040;
					   else if (*_silver == "5050") silver = 5050;
					   else if (*_silver == "5060") silver = 5060;
					   else if (*_silver == "5070") silver = 5070;
					   else if (*_silver == "5080") silver = 5080;
					   else if (*_silver == "5090") silver = 5090;
					   else if (*_silver == "5100") silver = 5100;
					   else if (*_silver == "5110") silver = 5110;
					   else if (*_silver == "5120") silver = 5120;
					   else if (*_silver == "5130") silver = 5130;
					   else if (*_silver == "5140") silver = 5140;
					   else if (*_silver == "5150") silver = 5150;
					   else if (*_silver == "5160") silver = 5160;
					   else if (*_silver == "5170") silver = 5170;
					   else if (*_silver == "5180") silver = 5180;
					   else if (*_silver == "5190") silver = 5190;
					   else if (*_silver == "5200") silver = 5200;
					   else if (*_silver == "5210") silver = 5210;
					   else if (*_silver == "5220") silver = 5220;
					   else if (*_silver == "5230") silver = 5230;
					   else if (*_silver == "5240") silver = 5240;
					   else if (*_silver == "5250") silver = 5250;
					   else if (*_silver == "5260") silver = 5260;
					   else if (*_silver == "5270") silver = 5270;
					   else if (*_silver == "5280") silver = 5280;
					   else if (*_silver == "5290") silver = 5290;
					   else if (*_silver == "5300") silver = 5300;
					   else if (*_silver == "5310") silver = 5310;
					   else if (*_silver == "5320") silver = 5320;
					   else if (*_silver == "5330") silver = 5330;
					   else if (*_silver == "5340") silver = 5340;
					   else if (*_silver == "5350") silver = 5350;
					   else if (*_silver == "5360") silver = 5360;
					   else if (*_silver == "5370") silver = 5370;
					   else if (*_silver == "5380") silver = 5380;
					   else if (*_silver == "5390") silver = 5390;
					   else if (*_silver == "5400") silver = 5400;
					   else if (*_silver == "5410") silver = 5410;
					   else if (*_silver == "5420") silver = 5420;
					   else if (*_silver == "5430") silver = 5430;
					   else if (*_silver == "5440") silver = 5440;
					   else if (*_silver == "5450") silver = 5450;
					   else if (*_silver == "5460") silver = 5460;
					   else if (*_silver == "5470") silver = 5470;
					   else if (*_silver == "5480") silver = 5480;
					   else if (*_silver == "5490") silver = 5490;
					   else if (*_silver == "5500") silver = 5500;
					   else if (*_silver == "5510") silver = 5510;
					   else if (*_silver == "5520") silver = 5520;
					   else if (*_silver == "5530") silver = 5530;
					   else if (*_silver == "5540") silver = 5540;
					   else if (*_silver == "5550") silver = 5550;
					   else if (*_silver == "5560") silver = 5560;
					   else if (*_silver == "5570") silver = 5570;
					   else if (*_silver == "5580") silver = 5580;
					   else if (*_silver == "5590") silver = 5590;
					   else if (*_silver == "5600") silver = 5600;
					   else if (*_silver == "5610") silver = 5610;
					   else if (*_silver == "5620") silver = 5620;
					   else if (*_silver == "5630") silver = 5630;
					   else if (*_silver == "5640") silver = 5640;
					   else if (*_silver == "5650") silver = 5650;
					   else if (*_silver == "5660") silver = 5660;
					   else if (*_silver == "5670") silver = 5670;
					   else if (*_silver == "5680") silver = 5680;
					   else if (*_silver == "5690") silver = 5690;
					   else if (*_silver == "5700") silver = 5700;
					   else if (*_silver == "5710") silver = 5710;
					   else if (*_silver == "5720") silver = 5720;
					   else if (*_silver == "5730") silver = 5730;
					   else if (*_silver == "5740") silver = 5740;
					   else if (*_silver == "5750") silver = 5750;
					   else if (*_silver == "5760") silver = 5760;
					   else if (*_silver == "5770") silver = 5770;
					   else if (*_silver == "5780") silver = 5780;
					   else if (*_silver == "5790") silver = 5790;
					   else if (*_silver == "5800") silver = 5800;
					   else if (*_silver == "5810") silver = 5810;
					   else if (*_silver == "5820") silver = 5820;
					   else if (*_silver == "5830") silver = 5830;
					   else if (*_silver == "5840") silver = 5840;
					   else if (*_silver == "5850") silver = 5850;
					   else if (*_silver == "5860") silver = 5860;
					   else if (*_silver == "5870") silver = 5870;
					   else if (*_silver == "5880") silver = 5880;
					   else if (*_silver == "5890") silver = 5890;
					   else if (*_silver == "5900") silver = 5900;
					   else if (*_silver == "5910") silver = 5910;
					   else if (*_silver == "5920") silver = 5920;
					   else if (*_silver == "5930") silver = 5930;
					   else if (*_silver == "5940") silver = 5940;
					   else if (*_silver == "5950") silver = 5950;
					   else if (*_silver == "5960") silver = 5960;
					   else if (*_silver == "5970") silver = 5970;
					   else if (*_silver == "5980") silver = 5980;
					   else if (*_silver == "5990") silver = 5990;
					   else if (*_silver == "6000") silver = 6000;
					   if (*_silver == "6010") silver = 6010;
					   else if (*_silver == "6020") silver = 6020;
					   else if (*_silver == "6030") silver = 6030;
					   else if (*_silver == "6040") silver = 6040;
					   else if (*_silver == "6050") silver = 6050;
					   else if (*_silver == "6060") silver = 6060;
					   else if (*_silver == "6070") silver = 6070;
					   else if (*_silver == "6080") silver = 6080;
					   else if (*_silver == "6090") silver = 6090;
					   else if (*_silver == "6100") silver = 6100;
					   else if (*_silver == "6110") silver = 6110;
					   else if (*_silver == "6120") silver = 6120;
					   else if (*_silver == "6130") silver = 6130;
					   else if (*_silver == "6140") silver = 6140;
					   else if (*_silver == "6150") silver = 6150;
					   else if (*_silver == "6160") silver = 6160;
					   else if (*_silver == "6170") silver = 6170;
					   else if (*_silver == "6180") silver = 6180;
					   else if (*_silver == "6190") silver = 6190;
					   else if (*_silver == "6200") silver = 6200;
					   else if (*_silver == "6210") silver = 6210;
					   else if (*_silver == "6220") silver = 6220;
					   else if (*_silver == "6230") silver = 6230;
					   else if (*_silver == "6240") silver = 6240;
					   else if (*_silver == "6250") silver = 6250;
					   else if (*_silver == "6260") silver = 6260;
					   else if (*_silver == "6270") silver = 6270;
					   else if (*_silver == "6280") silver = 6280;
					   else if (*_silver == "6290") silver = 6290;
					   else if (*_silver == "6300") silver = 6300;
					   else if (*_silver == "6310") silver = 6310;
					   else if (*_silver == "6320") silver = 6320;
					   else if (*_silver == "6330") silver = 6330;
					   else if (*_silver == "6340") silver = 6340;
					   else if (*_silver == "6350") silver = 6350;
					   else if (*_silver == "6360") silver = 6360;
					   else if (*_silver == "6370") silver = 6370;
					   else if (*_silver == "6380") silver = 6380;
					   else if (*_silver == "6390") silver = 6390;
					   else if (*_silver == "6400") silver = 6400;
					   else if (*_silver == "6410") silver = 6410;
					   else if (*_silver == "6420") silver = 6420;
					   else if (*_silver == "6430") silver = 6430;
					   else if (*_silver == "6440") silver = 6440;
					   else if (*_silver == "6450") silver = 6450;
					   else if (*_silver == "6460") silver = 6460;
					   else if (*_silver == "6470") silver = 6470;
					   else if (*_silver == "6480") silver = 6480;
					   else if (*_silver == "6490") silver = 6490;
					   else if (*_silver == "6500") silver = 6500;
					   else if (*_silver == "6510") silver = 6510;
					   else if (*_silver == "6520") silver = 6520;
					   else if (*_silver == "6530") silver = 6530;
					   else if (*_silver == "6540") silver = 6540;
					   else if (*_silver == "6550") silver = 6550;
					   else if (*_silver == "6560") silver = 6560;
					   else if (*_silver == "6570") silver = 6570;
					   else if (*_silver == "6580") silver = 6580;
					   else if (*_silver == "6590") silver = 6590;
					   else if (*_silver == "6600") silver = 6600;
					   else if (*_silver == "6610") silver = 6610;
					   else if (*_silver == "6620") silver = 6620;
					   else if (*_silver == "6630") silver = 6630;
					   else if (*_silver == "6640") silver = 6640;
					   else if (*_silver == "6650") silver = 6650;
					   else if (*_silver == "6660") silver = 6660;
					   else if (*_silver == "6670") silver = 6670;
					   else if (*_silver == "6680") silver = 6680;
					   else if (*_silver == "6690") silver = 6690;
					   else if (*_silver == "6700") silver = 6700;
					   else if (*_silver == "6710") silver = 6710;
					   else if (*_silver == "6720") silver = 6720;
					   else if (*_silver == "6730") silver = 6730;
					   else if (*_silver == "6740") silver = 6740;
					   else if (*_silver == "6750") silver = 6750;
					   else if (*_silver == "6760") silver = 6760;
					   else if (*_silver == "6770") silver = 6770;
					   else if (*_silver == "6780") silver = 6780;
					   else if (*_silver == "6790") silver = 6790;
					   else if (*_silver == "6800") silver = 6800;
					   else if (*_silver == "6810") silver = 6810;
					   else if (*_silver == "6820") silver = 6820;
					   else if (*_silver == "6830") silver = 6830;
					   else if (*_silver == "6840") silver = 6840;
					   else if (*_silver == "6850") silver = 6850;
					   else if (*_silver == "6860") silver = 6860;
					   else if (*_silver == "6870") silver = 6870;
					   else if (*_silver == "6880") silver = 6880;
					   else if (*_silver == "6890") silver = 6890;
					   else if (*_silver == "6900") silver = 6900;
					   else if (*_silver == "6910") silver = 6910;
					   else if (*_silver == "6920") silver = 6920;
					   else if (*_silver == "6930") silver = 6930;
					   else if (*_silver == "6940") silver = 6940;
					   else if (*_silver == "6950") silver = 6950;
					   else if (*_silver == "6960") silver = 6960;
					   else if (*_silver == "6970") silver = 6970;
					   else if (*_silver == "6980") silver = 6980;
					   else if (*_silver == "6990") silver = 6990;
					   else if (*_silver == "7000") silver = 7000;

					   delete _silver;
				   }
				   {}
				   //iron_ore
				   {
					   string* _iron_ore = new string;

					   getline(Data, *_iron_ore);
					   if (*_iron_ore == "0") iron_ore = 0;
					   else if (*_iron_ore == "1") iron_ore = 1;
					   else if (*_iron_ore == "2") iron_ore = 2;
					   else if (*_iron_ore == "3") iron_ore = 3;
					   else if (*_iron_ore == "4") iron_ore = 4;
					   else if (*_iron_ore == "5") iron_ore = 5;
					   else if (*_iron_ore == "6") iron_ore = 6;
					   else if (*_iron_ore == "7") iron_ore = 7;
					   else if (*_iron_ore == "8") iron_ore = 8;
					   else if (*_iron_ore == "9") iron_ore = 9;
					   else if (*_iron_ore == "10") iron_ore = 10;
					   else if (*_iron_ore == "11") iron_ore = 11;
					   else if (*_iron_ore == "12") iron_ore = 12;
					   else if (*_iron_ore == "13") iron_ore = 13;
					   else if (*_iron_ore == "14") iron_ore = 14;
					   else if (*_iron_ore == "15") iron_ore = 15;
					   else if (*_iron_ore == "16") iron_ore = 16;
					   else if (*_iron_ore == "17") iron_ore = 17;
					   else if (*_iron_ore == "18") iron_ore = 18;
					   else if (*_iron_ore == "19") iron_ore = 19;
					   else if (*_iron_ore == "20") iron_ore = 20;
					   else if (*_iron_ore == "21") iron_ore = 21;
					   else if (*_iron_ore == "22") iron_ore = 22;
					   else if (*_iron_ore == "23") iron_ore = 23;
					   else if (*_iron_ore == "24") iron_ore = 24;
					   else if (*_iron_ore == "25") iron_ore = 25;
					   else if (*_iron_ore == "26") iron_ore = 26;
					   else if (*_iron_ore == "27") iron_ore = 27;
					   else if (*_iron_ore == "28") iron_ore = 28;
					   else if (*_iron_ore == "29") iron_ore = 29;
					   else if (*_iron_ore == "30") iron_ore = 30;
					   else if (*_iron_ore == "31") iron_ore = 31;
					   else if (*_iron_ore == "32") iron_ore = 32;
					   else if (*_iron_ore == "33") iron_ore = 33;
					   else if (*_iron_ore == "34") iron_ore = 34;
					   else if (*_iron_ore == "35") iron_ore = 35;
					   else if (*_iron_ore == "36") iron_ore = 36;
					   else if (*_iron_ore == "37") iron_ore = 37;
					   else if (*_iron_ore == "38") iron_ore = 38;
					   else if (*_iron_ore == "39") iron_ore = 39;
					   else if (*_iron_ore == "40") iron_ore = 40;
					   else if (*_iron_ore == "41") iron_ore = 41;
					   else if (*_iron_ore == "42") iron_ore = 42;
					   else if (*_iron_ore == "43") iron_ore = 43;
					   else if (*_iron_ore == "44") iron_ore = 44;
					   else if (*_iron_ore == "45") iron_ore = 45;
					   else if (*_iron_ore == "46") iron_ore = 46;
					   else if (*_iron_ore == "47") iron_ore = 47;
					   else if (*_iron_ore == "48") iron_ore = 48;
					   else if (*_iron_ore == "49") iron_ore = 49;
					   else if (*_iron_ore == "50") iron_ore = 50;
					   else if (*_iron_ore == "51") iron_ore = 51;
					   else if (*_iron_ore == "52") iron_ore = 52;
					   else if (*_iron_ore == "53") iron_ore = 53;
					   else if (*_iron_ore == "54") iron_ore = 54;
					   else if (*_iron_ore == "55") iron_ore = 55;
					   else if (*_iron_ore == "56") iron_ore = 56;
					   else if (*_iron_ore == "57") iron_ore = 57;
					   else if (*_iron_ore == "58") iron_ore = 58;
					   else if (*_iron_ore == "59") iron_ore = 59;
					   else if (*_iron_ore == "60") iron_ore = 60;
					   else if (*_iron_ore == "61") iron_ore = 61;
					   else if (*_iron_ore == "62") iron_ore = 62;
					   else if (*_iron_ore == "63") iron_ore = 63;
					   else if (*_iron_ore == "64") iron_ore = 64;
					   else if (*_iron_ore == "65") iron_ore = 65;
					   else if (*_iron_ore == "66") iron_ore = 66;
					   else if (*_iron_ore == "67") iron_ore = 67;
					   else if (*_iron_ore == "68") iron_ore = 68;
					   else if (*_iron_ore == "69") iron_ore = 69;
					   else if (*_iron_ore == "70") iron_ore = 70;
					   else if (*_iron_ore == "71") iron_ore = 71;
					   else if (*_iron_ore == "72") iron_ore = 72;
					   else if (*_iron_ore == "73") iron_ore = 73;
					   else if (*_iron_ore == "74") iron_ore = 74;
					   else if (*_iron_ore == "75") iron_ore = 75;
					   else if (*_iron_ore == "76") iron_ore = 76;
					   else if (*_iron_ore == "77") iron_ore = 77;
					   else if (*_iron_ore == "78") iron_ore = 78;
					   else if (*_iron_ore == "79") iron_ore = 79;
					   else if (*_iron_ore == "80") iron_ore = 80;
					   else if (*_iron_ore == "81") iron_ore = 81;
					   else if (*_iron_ore == "82") iron_ore = 82;
					   else if (*_iron_ore == "83") iron_ore = 83;
					   else if (*_iron_ore == "84") iron_ore = 84;
					   else if (*_iron_ore == "85") iron_ore = 85;
					   else if (*_iron_ore == "86") iron_ore = 86;
					   else if (*_iron_ore == "87") iron_ore = 87;
					   else if (*_iron_ore == "88") iron_ore = 88;
					   else if (*_iron_ore == "89") iron_ore = 89;
					   else if (*_iron_ore == "90") iron_ore = 90;
					   else if (*_iron_ore == "91") iron_ore = 91;
					   else if (*_iron_ore == "92") iron_ore = 92;
					   else if (*_iron_ore == "93") iron_ore = 93;
					   else if (*_iron_ore == "94") iron_ore = 94;
					   else if (*_iron_ore == "95") iron_ore = 95;
					   else if (*_iron_ore == "96") iron_ore = 96;
					   else if (*_iron_ore == "97") iron_ore = 97;
					   else if (*_iron_ore == "98") iron_ore = 98;
					   else if (*_iron_ore == "99") iron_ore = 99;
					   else if (*_iron_ore == "100") iron_ore = 100;
					   else if (*_iron_ore == "101") iron_ore = 101;
					   else if (*_iron_ore == "102") iron_ore = 102;
					   else if (*_iron_ore == "103") iron_ore = 103;
					   else if (*_iron_ore == "104") iron_ore = 104;
					   else if (*_iron_ore == "105") iron_ore = 105;
					   else if (*_iron_ore == "106") iron_ore = 106;
					   else if (*_iron_ore == "107") iron_ore = 107;
					   else if (*_iron_ore == "108") iron_ore = 108;
					   else if (*_iron_ore == "109") iron_ore = 109;
					   else if (*_iron_ore == "110") iron_ore = 110;
					   else if (*_iron_ore == "111") iron_ore = 111;
					   else if (*_iron_ore == "112") iron_ore = 112;
					   else if (*_iron_ore == "113") iron_ore = 113;
					   else if (*_iron_ore == "114") iron_ore = 114;
					   else if (*_iron_ore == "115") iron_ore = 115;
					   else if (*_iron_ore == "116") iron_ore = 116;
					   else if (*_iron_ore == "117") iron_ore = 117;
					   else if (*_iron_ore == "118") iron_ore = 118;
					   else if (*_iron_ore == "119") iron_ore = 119;
					   else if (*_iron_ore == "120") iron_ore = 120;
					   if (*_iron_ore == "121") iron_ore = 121;
					   else if (*_iron_ore == "122") iron_ore = 122;
					   else if (*_iron_ore == "123") iron_ore = 123;
					   else if (*_iron_ore == "124") iron_ore = 124;
					   else if (*_iron_ore == "125") iron_ore = 125;
					   else if (*_iron_ore == "126") iron_ore = 126;
					   else if (*_iron_ore == "127") iron_ore = 127;
					   else if (*_iron_ore == "128") iron_ore = 128;
					   else if (*_iron_ore == "129") iron_ore = 129;
					   else if (*_iron_ore == "130") iron_ore = 130;
					   else if (*_iron_ore == "131") iron_ore = 131;
					   else if (*_iron_ore == "132") iron_ore = 132;
					   else if (*_iron_ore == "133") iron_ore = 133;
					   else if (*_iron_ore == "134") iron_ore = 134;
					   else if (*_iron_ore == "135") iron_ore = 135;
					   else if (*_iron_ore == "136") iron_ore = 136;
					   else if (*_iron_ore == "137") iron_ore = 137;
					   else if (*_iron_ore == "138") iron_ore = 138;
					   else if (*_iron_ore == "139") iron_ore = 139;
					   else if (*_iron_ore == "140") iron_ore = 140;
					   else if (*_iron_ore == "141") iron_ore = 141;
					   else if (*_iron_ore == "142") iron_ore = 142;
					   else if (*_iron_ore == "143") iron_ore = 143;
					   else if (*_iron_ore == "144") iron_ore = 144;
					   else if (*_iron_ore == "145") iron_ore = 145;
					   else if (*_iron_ore == "146") iron_ore = 146;
					   else if (*_iron_ore == "147") iron_ore = 147;
					   else if (*_iron_ore == "148") iron_ore = 148;
					   else if (*_iron_ore == "149") iron_ore = 149;
					   else if (*_iron_ore == "150") iron_ore = 150;
					   else if (*_iron_ore == "151") iron_ore = 151;
					   else if (*_iron_ore == "152") iron_ore = 152;
					   else if (*_iron_ore == "153") iron_ore = 153;
					   else if (*_iron_ore == "154") iron_ore = 154;
					   else if (*_iron_ore == "155") iron_ore = 155;
					   else if (*_iron_ore == "156") iron_ore = 156;
					   else if (*_iron_ore == "157") iron_ore = 157;
					   else if (*_iron_ore == "158") iron_ore = 158;
					   else if (*_iron_ore == "159") iron_ore = 159;
					   else if (*_iron_ore == "160") iron_ore = 160;
					   else if (*_iron_ore == "161") iron_ore = 161;
					   else if (*_iron_ore == "162") iron_ore = 162;
					   else if (*_iron_ore == "163") iron_ore = 163;
					   else if (*_iron_ore == "164") iron_ore = 164;
					   else if (*_iron_ore == "165") iron_ore = 165;
					   else if (*_iron_ore == "166") iron_ore = 166;
					   else if (*_iron_ore == "167") iron_ore = 167;
					   else if (*_iron_ore == "168") iron_ore = 168;
					   else if (*_iron_ore == "169") iron_ore = 169;
					   else if (*_iron_ore == "170") iron_ore = 170;
					   else if (*_iron_ore == "171") iron_ore = 171;
					   else if (*_iron_ore == "172") iron_ore = 172;
					   else if (*_iron_ore == "173") iron_ore = 173;
					   else if (*_iron_ore == "174") iron_ore = 174;
					   else if (*_iron_ore == "175") iron_ore = 175;
					   else if (*_iron_ore == "176") iron_ore = 176;
					   else if (*_iron_ore == "177") iron_ore = 177;
					   else if (*_iron_ore == "178") iron_ore = 178;
					   else if (*_iron_ore == "179") iron_ore = 179;
					   else if (*_iron_ore == "180") iron_ore = 180;
					   else if (*_iron_ore == "181") iron_ore = 181;
					   else if (*_iron_ore == "182") iron_ore = 182;
					   else if (*_iron_ore == "183") iron_ore = 183;
					   else if (*_iron_ore == "184") iron_ore = 184;
					   else if (*_iron_ore == "185") iron_ore = 185;
					   else if (*_iron_ore == "186") iron_ore = 186;
					   else if (*_iron_ore == "187") iron_ore = 187;
					   else if (*_iron_ore == "188") iron_ore = 188;
					   else if (*_iron_ore == "189") iron_ore = 189;
					   else if (*_iron_ore == "190") iron_ore = 190;
					   else if (*_iron_ore == "191") iron_ore = 191;
					   else if (*_iron_ore == "192") iron_ore = 192;
					   else if (*_iron_ore == "193") iron_ore = 193;
					   else if (*_iron_ore == "194") iron_ore = 194;
					   else if (*_iron_ore == "195") iron_ore = 195;
					   else if (*_iron_ore == "196") iron_ore = 196;
					   else if (*_iron_ore == "197") iron_ore = 197;
					   else if (*_iron_ore == "198") iron_ore = 198;
					   else if (*_iron_ore == "199") iron_ore = 199;
					   else if (*_iron_ore == "200") iron_ore = 200;
					   else if (*_iron_ore == "201") iron_ore = 201;
					   else if (*_iron_ore == "202") iron_ore = 202;
					   else if (*_iron_ore == "203") iron_ore = 203;
					   else if (*_iron_ore == "204") iron_ore = 204;
					   else if (*_iron_ore == "205") iron_ore = 205;
					   else if (*_iron_ore == "206") iron_ore = 206;
					   else if (*_iron_ore == "207") iron_ore = 207;
					   else if (*_iron_ore == "208") iron_ore = 208;
					   else if (*_iron_ore == "209") iron_ore = 209;
					   else if (*_iron_ore == "210") iron_ore = 210;
					   else if (*_iron_ore == "211") iron_ore = 211;
					   else if (*_iron_ore == "212") iron_ore = 212;
					   else if (*_iron_ore == "213") iron_ore = 213;
					   else if (*_iron_ore == "214") iron_ore = 214;
					   else if (*_iron_ore == "215") iron_ore = 215;
					   else if (*_iron_ore == "216") iron_ore = 216;
					   else if (*_iron_ore == "217") iron_ore = 217;
					   else if (*_iron_ore == "218") iron_ore = 218;
					   else if (*_iron_ore == "219") iron_ore = 219;
					   else if (*_iron_ore == "220") iron_ore = 220;
					   else if (*_iron_ore == "221") iron_ore = 221;
					   else if (*_iron_ore == "222") iron_ore = 222;
					   else if (*_iron_ore == "223") iron_ore = 223;
					   else if (*_iron_ore == "224") iron_ore = 224;
					   else if (*_iron_ore == "225") iron_ore = 225;
					   else if (*_iron_ore == "226") iron_ore = 226;
					   else if (*_iron_ore == "227") iron_ore = 227;
					   else if (*_iron_ore == "228") iron_ore = 228;
					   else if (*_iron_ore == "229") iron_ore = 229;
					   else if (*_iron_ore == "230") iron_ore = 230;
					   else if (*_iron_ore == "231") iron_ore = 231;
					   else if (*_iron_ore == "232") iron_ore = 232;
					   else if (*_iron_ore == "233") iron_ore = 233;
					   else if (*_iron_ore == "234") iron_ore = 234;
					   else if (*_iron_ore == "235") iron_ore = 235;
					   else if (*_iron_ore == "236") iron_ore = 236;
					   else if (*_iron_ore == "237") iron_ore = 237;
					   else if (*_iron_ore == "238") iron_ore = 238;
					   else if (*_iron_ore == "239") iron_ore = 239;
					   else if (*_iron_ore == "240") iron_ore = 240;
					   if (*_iron_ore == "241") iron_ore = 241;
					   else if (*_iron_ore == "242") iron_ore = 242;
					   else if (*_iron_ore == "243") iron_ore = 243;
					   else if (*_iron_ore == "244") iron_ore = 244;
					   else if (*_iron_ore == "245") iron_ore = 245;
					   else if (*_iron_ore == "246") iron_ore = 246;
					   else if (*_iron_ore == "247") iron_ore = 247;
					   else if (*_iron_ore == "248") iron_ore = 248;
					   else if (*_iron_ore == "249") iron_ore = 249;
					   else if (*_iron_ore == "250") iron_ore = 250;
					   else if (*_iron_ore == "251") iron_ore = 251;
					   else if (*_iron_ore == "252") iron_ore = 252;
					   else if (*_iron_ore == "253") iron_ore = 253;
					   else if (*_iron_ore == "254") iron_ore = 254;
					   else if (*_iron_ore == "255") iron_ore = 255;
					   else if (*_iron_ore == "256") iron_ore = 256;
					   else if (*_iron_ore == "257") iron_ore = 257;
					   else if (*_iron_ore == "258") iron_ore = 258;
					   else if (*_iron_ore == "259") iron_ore = 259;
					   else if (*_iron_ore == "260") iron_ore = 260;
					   else if (*_iron_ore == "261") iron_ore = 261;
					   else if (*_iron_ore == "262") iron_ore = 262;
					   else if (*_iron_ore == "263") iron_ore = 263;
					   else if (*_iron_ore == "264") iron_ore = 264;
					   else if (*_iron_ore == "265") iron_ore = 265;
					   else if (*_iron_ore == "266") iron_ore = 266;
					   else if (*_iron_ore == "267") iron_ore = 267;
					   else if (*_iron_ore == "268") iron_ore = 268;
					   else if (*_iron_ore == "269") iron_ore = 269;
					   else if (*_iron_ore == "270") iron_ore = 270;
					   else if (*_iron_ore == "271") iron_ore = 271;
					   else if (*_iron_ore == "272") iron_ore = 272;
					   else if (*_iron_ore == "273") iron_ore = 273;
					   else if (*_iron_ore == "274") iron_ore = 274;
					   else if (*_iron_ore == "275") iron_ore = 275;
					   else if (*_iron_ore == "276") iron_ore = 276;
					   else if (*_iron_ore == "277") iron_ore = 277;
					   else if (*_iron_ore == "278") iron_ore = 278;
					   else if (*_iron_ore == "279") iron_ore = 279;
					   else if (*_iron_ore == "280") iron_ore = 280;
					   else if (*_iron_ore == "281") iron_ore = 281;
					   else if (*_iron_ore == "282") iron_ore = 282;
					   else if (*_iron_ore == "283") iron_ore = 283;
					   else if (*_iron_ore == "284") iron_ore = 284;
					   else if (*_iron_ore == "285") iron_ore = 285;
					   else if (*_iron_ore == "286") iron_ore = 286;
					   else if (*_iron_ore == "287") iron_ore = 287;
					   else if (*_iron_ore == "288") iron_ore = 288;
					   else if (*_iron_ore == "289") iron_ore = 289;
					   else if (*_iron_ore == "290") iron_ore = 290;
					   else if (*_iron_ore == "291") iron_ore = 291;
					   else if (*_iron_ore == "292") iron_ore = 292;
					   else if (*_iron_ore == "293") iron_ore = 293;
					   else if (*_iron_ore == "294") iron_ore = 294;
					   else if (*_iron_ore == "295") iron_ore = 295;
					   else if (*_iron_ore == "296") iron_ore = 296;
					   else if (*_iron_ore == "297") iron_ore = 297;
					   else if (*_iron_ore == "298") iron_ore = 298;
					   else if (*_iron_ore == "299") iron_ore = 299;
					   else if (*_iron_ore == "300") iron_ore = 300;
					   else if (*_iron_ore == "301") iron_ore = 301;
					   else if (*_iron_ore == "302") iron_ore = 302;
					   else if (*_iron_ore == "303") iron_ore = 303;
					   else if (*_iron_ore == "304") iron_ore = 304;
					   else if (*_iron_ore == "305") iron_ore = 305;
					   else if (*_iron_ore == "306") iron_ore = 306;
					   else if (*_iron_ore == "307") iron_ore = 307;
					   else if (*_iron_ore == "308") iron_ore = 308;
					   else if (*_iron_ore == "309") iron_ore = 309;
					   else if (*_iron_ore == "310") iron_ore = 310;
					   else if (*_iron_ore == "311") iron_ore = 311;
					   else if (*_iron_ore == "312") iron_ore = 312;
					   else if (*_iron_ore == "313") iron_ore = 313;
					   else if (*_iron_ore == "314") iron_ore = 314;
					   else if (*_iron_ore == "315") iron_ore = 315;
					   else if (*_iron_ore == "316") iron_ore = 316;
					   else if (*_iron_ore == "317") iron_ore = 317;
					   else if (*_iron_ore == "318") iron_ore = 318;
					   else if (*_iron_ore == "319") iron_ore = 319;
					   else if (*_iron_ore == "320") iron_ore = 320;
					   else if (*_iron_ore == "321") iron_ore = 321;
					   else if (*_iron_ore == "322") iron_ore = 322;
					   else if (*_iron_ore == "323") iron_ore = 323;
					   else if (*_iron_ore == "324") iron_ore = 324;
					   else if (*_iron_ore == "325") iron_ore = 325;
					   else if (*_iron_ore == "326") iron_ore = 326;
					   else if (*_iron_ore == "327") iron_ore = 327;
					   else if (*_iron_ore == "328") iron_ore = 328;
					   else if (*_iron_ore == "329") iron_ore = 329;
					   else if (*_iron_ore == "330") iron_ore = 330;
					   else if (*_iron_ore == "331") iron_ore = 331;
					   else if (*_iron_ore == "332") iron_ore = 332;
					   else if (*_iron_ore == "333") iron_ore = 333;
					   else if (*_iron_ore == "334") iron_ore = 334;
					   else if (*_iron_ore == "335") iron_ore = 335;
					   else if (*_iron_ore == "336") iron_ore = 336;
					   else if (*_iron_ore == "337") iron_ore = 337;
					   else if (*_iron_ore == "338") iron_ore = 338;
					   else if (*_iron_ore == "339") iron_ore = 339;
					   else if (*_iron_ore == "340") iron_ore = 340;
					   else if (*_iron_ore == "341") iron_ore = 341;
					   else if (*_iron_ore == "342") iron_ore = 342;
					   else if (*_iron_ore == "343") iron_ore = 343;
					   else if (*_iron_ore == "344") iron_ore = 344;
					   else if (*_iron_ore == "345") iron_ore = 345;
					   else if (*_iron_ore == "346") iron_ore = 346;
					   else if (*_iron_ore == "347") iron_ore = 347;
					   else if (*_iron_ore == "348") iron_ore = 348;
					   else if (*_iron_ore == "349") iron_ore = 349;
					   else if (*_iron_ore == "350") iron_ore = 350;
					   else if (*_iron_ore == "351") iron_ore = 351;
					   else if (*_iron_ore == "352") iron_ore = 352;
					   else if (*_iron_ore == "353") iron_ore = 353;
					   else if (*_iron_ore == "354") iron_ore = 354;
					   else if (*_iron_ore == "355") iron_ore = 355;
					   else if (*_iron_ore == "356") iron_ore = 356;
					   else if (*_iron_ore == "357") iron_ore = 357;
					   else if (*_iron_ore == "358") iron_ore = 358;
					   else if (*_iron_ore == "359") iron_ore = 359;
					   else if (*_iron_ore == "360") iron_ore = 360;
					   if (*_iron_ore == "361") iron_ore = 361;
					   else if (*_iron_ore == "362") iron_ore = 362;
					   else if (*_iron_ore == "363") iron_ore = 363;
					   else if (*_iron_ore == "364") iron_ore = 364;
					   else if (*_iron_ore == "365") iron_ore = 365;
					   else if (*_iron_ore == "366") iron_ore = 366;
					   else if (*_iron_ore == "367") iron_ore = 367;
					   else if (*_iron_ore == "368") iron_ore = 368;
					   else if (*_iron_ore == "369") iron_ore = 369;
					   else if (*_iron_ore == "370") iron_ore = 370;
					   else if (*_iron_ore == "371") iron_ore = 371;
					   else if (*_iron_ore == "372") iron_ore = 372;
					   else if (*_iron_ore == "373") iron_ore = 373;
					   else if (*_iron_ore == "374") iron_ore = 374;
					   else if (*_iron_ore == "375") iron_ore = 375;
					   else if (*_iron_ore == "376") iron_ore = 376;
					   else if (*_iron_ore == "377") iron_ore = 377;
					   else if (*_iron_ore == "378") iron_ore = 378;
					   else if (*_iron_ore == "379") iron_ore = 379;
					   else if (*_iron_ore == "380") iron_ore = 380;
					   else if (*_iron_ore == "381") iron_ore = 381;
					   else if (*_iron_ore == "382") iron_ore = 382;
					   else if (*_iron_ore == "383") iron_ore = 383;
					   else if (*_iron_ore == "384") iron_ore = 384;
					   else if (*_iron_ore == "385") iron_ore = 385;
					   else if (*_iron_ore == "386") iron_ore = 386;
					   else if (*_iron_ore == "387") iron_ore = 387;
					   else if (*_iron_ore == "388") iron_ore = 388;
					   else if (*_iron_ore == "389") iron_ore = 389;
					   else if (*_iron_ore == "390") iron_ore = 390;
					   else if (*_iron_ore == "391") iron_ore = 391;
					   else if (*_iron_ore == "392") iron_ore = 392;
					   else if (*_iron_ore == "393") iron_ore = 393;
					   else if (*_iron_ore == "394") iron_ore = 394;
					   else if (*_iron_ore == "395") iron_ore = 395;
					   else if (*_iron_ore == "396") iron_ore = 396;
					   else if (*_iron_ore == "397") iron_ore = 397;
					   else if (*_iron_ore == "398") iron_ore = 398;
					   else if (*_iron_ore == "399") iron_ore = 399;
					   else if (*_iron_ore == "400") iron_ore = 400;
					   else if (*_iron_ore == "401") iron_ore = 401;
					   else if (*_iron_ore == "402") iron_ore = 402;
					   else if (*_iron_ore == "403") iron_ore = 403;
					   else if (*_iron_ore == "404") iron_ore = 404;
					   else if (*_iron_ore == "405") iron_ore = 405;
					   else if (*_iron_ore == "406") iron_ore = 406;
					   else if (*_iron_ore == "407") iron_ore = 407;
					   else if (*_iron_ore == "408") iron_ore = 408;
					   else if (*_iron_ore == "409") iron_ore = 409;
					   else if (*_iron_ore == "410") iron_ore = 410;
					   else if (*_iron_ore == "411") iron_ore = 411;
					   else if (*_iron_ore == "412") iron_ore = 412;
					   else if (*_iron_ore == "413") iron_ore = 413;
					   else if (*_iron_ore == "414") iron_ore = 414;
					   else if (*_iron_ore == "415") iron_ore = 415;
					   else if (*_iron_ore == "416") iron_ore = 416;
					   else if (*_iron_ore == "417") iron_ore = 417;
					   else if (*_iron_ore == "418") iron_ore = 418;
					   else if (*_iron_ore == "419") iron_ore = 419;
					   else if (*_iron_ore == "420") iron_ore = 420;
					   else if (*_iron_ore == "421") iron_ore = 421;
					   else if (*_iron_ore == "422") iron_ore = 422;
					   else if (*_iron_ore == "423") iron_ore = 423;
					   else if (*_iron_ore == "424") iron_ore = 424;
					   else if (*_iron_ore == "425") iron_ore = 425;
					   else if (*_iron_ore == "426") iron_ore = 426;
					   else if (*_iron_ore == "427") iron_ore = 427;
					   else if (*_iron_ore == "428") iron_ore = 428;
					   else if (*_iron_ore == "429") iron_ore = 429;
					   else if (*_iron_ore == "430") iron_ore = 430;
					   else if (*_iron_ore == "431") iron_ore = 431;
					   else if (*_iron_ore == "432") iron_ore = 432;
					   else if (*_iron_ore == "433") iron_ore = 433;
					   else if (*_iron_ore == "434") iron_ore = 434;
					   else if (*_iron_ore == "435") iron_ore = 435;
					   else if (*_iron_ore == "436") iron_ore = 436;
					   else if (*_iron_ore == "437") iron_ore = 437;
					   else if (*_iron_ore == "438") iron_ore = 438;
					   else if (*_iron_ore == "439") iron_ore = 439;
					   else if (*_iron_ore == "440") iron_ore = 440;
					   else if (*_iron_ore == "441") iron_ore = 441;
					   else if (*_iron_ore == "442") iron_ore = 442;
					   else if (*_iron_ore == "443") iron_ore = 443;
					   else if (*_iron_ore == "444") iron_ore = 444;
					   else if (*_iron_ore == "445") iron_ore = 445;
					   else if (*_iron_ore == "446") iron_ore = 446;
					   else if (*_iron_ore == "447") iron_ore = 447;
					   else if (*_iron_ore == "448") iron_ore = 448;
					   else if (*_iron_ore == "449") iron_ore = 449;
					   else if (*_iron_ore == "450") iron_ore = 450;
					   else if (*_iron_ore == "451") iron_ore = 451;
					   else if (*_iron_ore == "452") iron_ore = 452;
					   else if (*_iron_ore == "453") iron_ore = 453;
					   else if (*_iron_ore == "454") iron_ore = 454;
					   else if (*_iron_ore == "455") iron_ore = 455;
					   else if (*_iron_ore == "456") iron_ore = 456;
					   else if (*_iron_ore == "457") iron_ore = 457;
					   else if (*_iron_ore == "458") iron_ore = 458;
					   else if (*_iron_ore == "459") iron_ore = 459;
					   else if (*_iron_ore == "460") iron_ore = 460;
					   else if (*_iron_ore == "461") iron_ore = 461;
					   else if (*_iron_ore == "462") iron_ore = 462;
					   else if (*_iron_ore == "463") iron_ore = 463;
					   else if (*_iron_ore == "464") iron_ore = 464;
					   else if (*_iron_ore == "465") iron_ore = 465;
					   else if (*_iron_ore == "466") iron_ore = 466;
					   else if (*_iron_ore == "467") iron_ore = 467;
					   else if (*_iron_ore == "468") iron_ore = 468;
					   else if (*_iron_ore == "469") iron_ore = 469;
					   else if (*_iron_ore == "470") iron_ore = 470;
					   else if (*_iron_ore == "471") iron_ore = 471;
					   else if (*_iron_ore == "472") iron_ore = 472;
					   else if (*_iron_ore == "473") iron_ore = 473;
					   else if (*_iron_ore == "474") iron_ore = 474;
					   else if (*_iron_ore == "475") iron_ore = 475;
					   else if (*_iron_ore == "476") iron_ore = 476;
					   else if (*_iron_ore == "477") iron_ore = 477;
					   else if (*_iron_ore == "478") iron_ore = 478;
					   else if (*_iron_ore == "479") iron_ore = 479;
					   else if (*_iron_ore == "480") iron_ore = 480;
					   if (*_iron_ore == "481") iron_ore = 481;
					   else if (*_iron_ore == "482") iron_ore = 482;
					   else if (*_iron_ore == "483") iron_ore = 483;
					   else if (*_iron_ore == "484") iron_ore = 484;
					   else if (*_iron_ore == "485") iron_ore = 485;
					   else if (*_iron_ore == "486") iron_ore = 486;
					   else if (*_iron_ore == "487") iron_ore = 487;
					   else if (*_iron_ore == "488") iron_ore = 488;
					   else if (*_iron_ore == "489") iron_ore = 489;
					   else if (*_iron_ore == "490") iron_ore = 490;
					   else if (*_iron_ore == "491") iron_ore = 491;
					   else if (*_iron_ore == "492") iron_ore = 492;
					   else if (*_iron_ore == "493") iron_ore = 493;
					   else if (*_iron_ore == "494") iron_ore = 494;
					   else if (*_iron_ore == "495") iron_ore = 495;
					   else if (*_iron_ore == "496") iron_ore = 496;
					   else if (*_iron_ore == "497") iron_ore = 497;
					   else if (*_iron_ore == "498") iron_ore = 498;
					   else if (*_iron_ore == "499") iron_ore = 499;
					   else if (*_iron_ore == "500") iron_ore = 500;
					   else if (*_iron_ore == "501") iron_ore = 501;
					   else if (*_iron_ore == "502") iron_ore = 502;
					   else if (*_iron_ore == "503") iron_ore = 503;
					   else if (*_iron_ore == "504") iron_ore = 504;
					   else if (*_iron_ore == "505") iron_ore = 505;
					   else if (*_iron_ore == "506") iron_ore = 506;
					   else if (*_iron_ore == "507") iron_ore = 507;
					   else if (*_iron_ore == "508") iron_ore = 508;
					   else if (*_iron_ore == "509") iron_ore = 509;
					   else if (*_iron_ore == "510") iron_ore = 510;
					   else if (*_iron_ore == "511") iron_ore = 511;
					   else if (*_iron_ore == "512") iron_ore = 512;
					   else if (*_iron_ore == "513") iron_ore = 513;
					   else if (*_iron_ore == "514") iron_ore = 514;
					   else if (*_iron_ore == "515") iron_ore = 515;
					   else if (*_iron_ore == "516") iron_ore = 516;
					   else if (*_iron_ore == "517") iron_ore = 517;
					   else if (*_iron_ore == "518") iron_ore = 518;
					   else if (*_iron_ore == "519") iron_ore = 519;
					   else if (*_iron_ore == "520") iron_ore = 520;
					   else if (*_iron_ore == "521") iron_ore = 521;
					   else if (*_iron_ore == "522") iron_ore = 522;
					   else if (*_iron_ore == "523") iron_ore = 523;
					   else if (*_iron_ore == "524") iron_ore = 524;
					   else if (*_iron_ore == "525") iron_ore = 525;
					   else if (*_iron_ore == "526") iron_ore = 526;
					   else if (*_iron_ore == "527") iron_ore = 527;
					   else if (*_iron_ore == "528") iron_ore = 528;
					   else if (*_iron_ore == "529") iron_ore = 529;
					   else if (*_iron_ore == "530") iron_ore = 530;
					   else if (*_iron_ore == "531") iron_ore = 531;
					   else if (*_iron_ore == "532") iron_ore = 532;
					   else if (*_iron_ore == "533") iron_ore = 533;
					   else if (*_iron_ore == "534") iron_ore = 534;
					   else if (*_iron_ore == "535") iron_ore = 535;
					   else if (*_iron_ore == "536") iron_ore = 536;
					   else if (*_iron_ore == "537") iron_ore = 537;
					   else if (*_iron_ore == "538") iron_ore = 538;
					   else if (*_iron_ore == "539") iron_ore = 539;
					   else if (*_iron_ore == "540") iron_ore = 540;
					   else if (*_iron_ore == "541") iron_ore = 541;
					   else if (*_iron_ore == "542") iron_ore = 542;
					   else if (*_iron_ore == "543") iron_ore = 543;
					   else if (*_iron_ore == "544") iron_ore = 544;
					   else if (*_iron_ore == "545") iron_ore = 545;
					   else if (*_iron_ore == "546") iron_ore = 546;
					   else if (*_iron_ore == "547") iron_ore = 547;
					   else if (*_iron_ore == "548") iron_ore = 548;
					   else if (*_iron_ore == "549") iron_ore = 549;
					   else if (*_iron_ore == "550") iron_ore = 550;
					   else if (*_iron_ore == "551") iron_ore = 551;
					   else if (*_iron_ore == "552") iron_ore = 552;
					   else if (*_iron_ore == "553") iron_ore = 553;
					   else if (*_iron_ore == "554") iron_ore = 554;
					   else if (*_iron_ore == "555") iron_ore = 555;
					   else if (*_iron_ore == "556") iron_ore = 556;
					   else if (*_iron_ore == "557") iron_ore = 557;
					   else if (*_iron_ore == "558") iron_ore = 558;
					   else if (*_iron_ore == "559") iron_ore = 559;
					   else if (*_iron_ore == "560") iron_ore = 560;
					   else if (*_iron_ore == "561") iron_ore = 561;
					   else if (*_iron_ore == "562") iron_ore = 562;
					   else if (*_iron_ore == "563") iron_ore = 563;
					   else if (*_iron_ore == "564") iron_ore = 564;
					   else if (*_iron_ore == "565") iron_ore = 565;
					   else if (*_iron_ore == "566") iron_ore = 566;
					   else if (*_iron_ore == "567") iron_ore = 567;
					   else if (*_iron_ore == "568") iron_ore = 568;
					   else if (*_iron_ore == "569") iron_ore = 569;
					   else if (*_iron_ore == "570") iron_ore = 570;
					   else if (*_iron_ore == "571") iron_ore = 571;
					   else if (*_iron_ore == "572") iron_ore = 572;
					   else if (*_iron_ore == "573") iron_ore = 573;
					   else if (*_iron_ore == "574") iron_ore = 574;
					   else if (*_iron_ore == "575") iron_ore = 575;
					   else if (*_iron_ore == "576") iron_ore = 576;
					   else if (*_iron_ore == "577") iron_ore = 577;
					   else if (*_iron_ore == "578") iron_ore = 578;
					   else if (*_iron_ore == "579") iron_ore = 579;
					   else if (*_iron_ore == "580") iron_ore = 580;
					   else if (*_iron_ore == "581") iron_ore = 581;
					   else if (*_iron_ore == "582") iron_ore = 582;
					   else if (*_iron_ore == "583") iron_ore = 583;
					   else if (*_iron_ore == "584") iron_ore = 584;
					   else if (*_iron_ore == "585") iron_ore = 585;
					   else if (*_iron_ore == "586") iron_ore = 586;
					   else if (*_iron_ore == "587") iron_ore = 587;
					   else if (*_iron_ore == "588") iron_ore = 588;
					   else if (*_iron_ore == "589") iron_ore = 589;
					   else if (*_iron_ore == "590") iron_ore = 590;
					   else if (*_iron_ore == "591") iron_ore = 591;
					   else if (*_iron_ore == "592") iron_ore = 592;
					   else if (*_iron_ore == "593") iron_ore = 593;
					   else if (*_iron_ore == "594") iron_ore = 594;
					   else if (*_iron_ore == "595") iron_ore = 595;
					   else if (*_iron_ore == "596") iron_ore = 596;
					   else if (*_iron_ore == "597") iron_ore = 597;
					   else if (*_iron_ore == "598") iron_ore = 598;
					   else if (*_iron_ore == "599") iron_ore = 599;
					   else if (*_iron_ore == "600") iron_ore = 600;
					   if (*_iron_ore == "601") iron_ore = 601;
					   else if (*_iron_ore == "602") iron_ore = 602;
					   else if (*_iron_ore == "603") iron_ore = 603;
					   else if (*_iron_ore == "604") iron_ore = 604;
					   else if (*_iron_ore == "605") iron_ore = 605;
					   else if (*_iron_ore == "606") iron_ore = 606;
					   else if (*_iron_ore == "607") iron_ore = 607;
					   else if (*_iron_ore == "608") iron_ore = 608;
					   else if (*_iron_ore == "609") iron_ore = 609;
					   else if (*_iron_ore == "610") iron_ore = 610;
					   else if (*_iron_ore == "611") iron_ore = 611;
					   else if (*_iron_ore == "612") iron_ore = 612;
					   else if (*_iron_ore == "613") iron_ore = 613;
					   else if (*_iron_ore == "614") iron_ore = 614;
					   else if (*_iron_ore == "615") iron_ore = 615;
					   else if (*_iron_ore == "616") iron_ore = 616;
					   else if (*_iron_ore == "617") iron_ore = 617;
					   else if (*_iron_ore == "618") iron_ore = 618;
					   else if (*_iron_ore == "619") iron_ore = 619;
					   else if (*_iron_ore == "620") iron_ore = 620;
					   else if (*_iron_ore == "621") iron_ore = 621;
					   else if (*_iron_ore == "622") iron_ore = 622;
					   else if (*_iron_ore == "623") iron_ore = 623;
					   else if (*_iron_ore == "624") iron_ore = 624;
					   else if (*_iron_ore == "625") iron_ore = 625;
					   else if (*_iron_ore == "626") iron_ore = 626;
					   else if (*_iron_ore == "627") iron_ore = 627;
					   else if (*_iron_ore == "628") iron_ore = 628;
					   else if (*_iron_ore == "629") iron_ore = 629;
					   else if (*_iron_ore == "630") iron_ore = 630;
					   else if (*_iron_ore == "631") iron_ore = 631;
					   else if (*_iron_ore == "632") iron_ore = 632;
					   else if (*_iron_ore == "633") iron_ore = 633;
					   else if (*_iron_ore == "634") iron_ore = 634;
					   else if (*_iron_ore == "635") iron_ore = 635;
					   else if (*_iron_ore == "636") iron_ore = 636;
					   else if (*_iron_ore == "637") iron_ore = 637;
					   else if (*_iron_ore == "638") iron_ore = 638;
					   else if (*_iron_ore == "639") iron_ore = 639;
					   else if (*_iron_ore == "640") iron_ore = 640;
					   else if (*_iron_ore == "641") iron_ore = 641;
					   else if (*_iron_ore == "642") iron_ore = 642;
					   else if (*_iron_ore == "643") iron_ore = 643;
					   else if (*_iron_ore == "644") iron_ore = 644;
					   else if (*_iron_ore == "645") iron_ore = 645;
					   else if (*_iron_ore == "646") iron_ore = 646;
					   else if (*_iron_ore == "647") iron_ore = 647;
					   else if (*_iron_ore == "648") iron_ore = 648;
					   else if (*_iron_ore == "649") iron_ore = 649;
					   else if (*_iron_ore == "650") iron_ore = 650;
					   else if (*_iron_ore == "651") iron_ore = 651;
					   else if (*_iron_ore == "652") iron_ore = 652;
					   else if (*_iron_ore == "653") iron_ore = 653;
					   else if (*_iron_ore == "654") iron_ore = 654;
					   else if (*_iron_ore == "655") iron_ore = 655;
					   else if (*_iron_ore == "656") iron_ore = 656;
					   else if (*_iron_ore == "657") iron_ore = 657;
					   else if (*_iron_ore == "658") iron_ore = 658;
					   else if (*_iron_ore == "659") iron_ore = 659;
					   else if (*_iron_ore == "660") iron_ore = 660;
					   else if (*_iron_ore == "661") iron_ore = 661;
					   else if (*_iron_ore == "662") iron_ore = 662;
					   else if (*_iron_ore == "663") iron_ore = 663;
					   else if (*_iron_ore == "664") iron_ore = 664;
					   else if (*_iron_ore == "665") iron_ore = 665;
					   else if (*_iron_ore == "666") iron_ore = 666;
					   else if (*_iron_ore == "667") iron_ore = 667;
					   else if (*_iron_ore == "668") iron_ore = 668;
					   else if (*_iron_ore == "669") iron_ore = 669;
					   else if (*_iron_ore == "670") iron_ore = 670;
					   else if (*_iron_ore == "671") iron_ore = 671;
					   else if (*_iron_ore == "672") iron_ore = 672;
					   else if (*_iron_ore == "673") iron_ore = 673;
					   else if (*_iron_ore == "674") iron_ore = 674;
					   else if (*_iron_ore == "675") iron_ore = 675;
					   else if (*_iron_ore == "676") iron_ore = 676;
					   else if (*_iron_ore == "677") iron_ore = 677;
					   else if (*_iron_ore == "678") iron_ore = 678;
					   else if (*_iron_ore == "679") iron_ore = 679;
					   else if (*_iron_ore == "680") iron_ore = 680;
					   else if (*_iron_ore == "681") iron_ore = 681;
					   else if (*_iron_ore == "682") iron_ore = 682;
					   else if (*_iron_ore == "683") iron_ore = 683;
					   else if (*_iron_ore == "684") iron_ore = 684;
					   else if (*_iron_ore == "685") iron_ore = 685;
					   else if (*_iron_ore == "686") iron_ore = 686;
					   else if (*_iron_ore == "687") iron_ore = 687;
					   else if (*_iron_ore == "688") iron_ore = 688;
					   else if (*_iron_ore == "689") iron_ore = 689;
					   else if (*_iron_ore == "690") iron_ore = 690;
					   else if (*_iron_ore == "691") iron_ore = 691;
					   else if (*_iron_ore == "692") iron_ore = 692;
					   else if (*_iron_ore == "693") iron_ore = 693;
					   else if (*_iron_ore == "694") iron_ore = 694;
					   else if (*_iron_ore == "695") iron_ore = 695;
					   else if (*_iron_ore == "696") iron_ore = 696;
					   else if (*_iron_ore == "697") iron_ore = 697;
					   else if (*_iron_ore == "698") iron_ore = 698;
					   else if (*_iron_ore == "699") iron_ore = 699;
					   else if (*_iron_ore == "700") iron_ore = 700;

					   delete _iron_ore;
				   }
				   {}
				   //iron
				   {
					   string* _iron = new string;

					   getline(Data, *_iron);
					   if (*_iron == "0") iron = 0;
					   else if (*_iron == "1") iron = 1;
					   else if (*_iron == "2") iron = 2;
					   else if (*_iron == "3") iron = 3;
					   else if (*_iron == "4") iron = 4;
					   else if (*_iron == "5") iron = 5;
					   else if (*_iron == "6") iron = 6;
					   else if (*_iron == "7") iron = 7;
					   else if (*_iron == "8") iron = 8;
					   else if (*_iron == "9") iron = 9;
					   else if (*_iron == "10") iron = 10;
					   else if (*_iron == "11") iron = 11;
					   else if (*_iron == "12") iron = 12;
					   else if (*_iron == "13") iron = 13;
					   else if (*_iron == "14") iron = 14;
					   else if (*_iron == "15") iron = 15;
					   else if (*_iron == "16") iron = 16;
					   else if (*_iron == "17") iron = 17;
					   else if (*_iron == "18") iron = 18;
					   else if (*_iron == "19") iron = 19;
					   else if (*_iron == "20") iron = 20;
					   else if (*_iron == "21") iron = 21;
					   else if (*_iron == "22") iron = 22;
					   else if (*_iron == "23") iron = 23;
					   else if (*_iron == "24") iron = 24;
					   else if (*_iron == "25") iron = 25;
					   else if (*_iron == "26") iron = 26;
					   else if (*_iron == "27") iron = 27;
					   else if (*_iron == "28") iron = 28;
					   else if (*_iron == "29") iron = 29;
					   else if (*_iron == "30") iron = 30;
					   else if (*_iron == "31") iron = 31;
					   else if (*_iron == "32") iron = 32;
					   else if (*_iron == "33") iron = 33;
					   else if (*_iron == "34") iron = 34;
					   else if (*_iron == "35") iron = 35;
					   else if (*_iron == "36") iron = 36;
					   else if (*_iron == "37") iron = 37;
					   else if (*_iron == "38") iron = 38;
					   else if (*_iron == "39") iron = 39;
					   else if (*_iron == "40") iron = 40;
					   else if (*_iron == "41") iron = 41;
					   else if (*_iron == "42") iron = 42;
					   else if (*_iron == "43") iron = 43;
					   else if (*_iron == "44") iron = 44;
					   else if (*_iron == "45") iron = 45;
					   else if (*_iron == "46") iron = 46;
					   else if (*_iron == "47") iron = 47;
					   else if (*_iron == "48") iron = 48;
					   else if (*_iron == "49") iron = 49;
					   else if (*_iron == "50") iron = 50;
					   else if (*_iron == "51") iron = 51;
					   else if (*_iron == "52") iron = 52;
					   else if (*_iron == "53") iron = 53;
					   else if (*_iron == "54") iron = 54;
					   else if (*_iron == "55") iron = 55;
					   else if (*_iron == "56") iron = 56;
					   else if (*_iron == "57") iron = 57;
					   else if (*_iron == "58") iron = 58;
					   else if (*_iron == "59") iron = 59;
					   else if (*_iron == "60") iron = 60;
					   else if (*_iron == "61") iron = 61;
					   else if (*_iron == "62") iron = 62;
					   else if (*_iron == "63") iron = 63;
					   else if (*_iron == "64") iron = 64;
					   else if (*_iron == "65") iron = 65;
					   else if (*_iron == "66") iron = 66;
					   else if (*_iron == "67") iron = 67;
					   else if (*_iron == "68") iron = 68;
					   else if (*_iron == "69") iron = 69;
					   else if (*_iron == "70") iron = 70;
					   else if (*_iron == "71") iron = 71;
					   else if (*_iron == "72") iron = 72;
					   else if (*_iron == "73") iron = 73;
					   else if (*_iron == "74") iron = 74;
					   else if (*_iron == "75") iron = 75;
					   else if (*_iron == "76") iron = 76;
					   else if (*_iron == "77") iron = 77;
					   else if (*_iron == "78") iron = 78;
					   else if (*_iron == "79") iron = 79;
					   else if (*_iron == "80") iron = 80;
					   else if (*_iron == "81") iron = 81;
					   else if (*_iron == "82") iron = 82;
					   else if (*_iron == "83") iron = 83;
					   else if (*_iron == "84") iron = 84;
					   else if (*_iron == "85") iron = 85;
					   else if (*_iron == "86") iron = 86;
					   else if (*_iron == "87") iron = 87;
					   else if (*_iron == "88") iron = 88;
					   else if (*_iron == "89") iron = 89;
					   else if (*_iron == "90") iron = 90;
					   else if (*_iron == "91") iron = 91;
					   else if (*_iron == "92") iron = 92;
					   else if (*_iron == "93") iron = 93;
					   else if (*_iron == "94") iron = 94;
					   else if (*_iron == "95") iron = 95;
					   else if (*_iron == "96") iron = 96;
					   else if (*_iron == "97") iron = 97;
					   else if (*_iron == "98") iron = 98;
					   else if (*_iron == "99") iron = 99;
					   else if (*_iron == "100") iron = 100;
					   else if (*_iron == "101") iron = 101;
					   else if (*_iron == "102") iron = 102;
					   else if (*_iron == "103") iron = 103;
					   else if (*_iron == "104") iron = 104;
					   else if (*_iron == "105") iron = 105;
					   else if (*_iron == "106") iron = 106;
					   else if (*_iron == "107") iron = 107;
					   else if (*_iron == "108") iron = 108;
					   else if (*_iron == "109") iron = 109;
					   else if (*_iron == "110") iron = 110;
					   else if (*_iron == "111") iron = 111;
					   else if (*_iron == "112") iron = 112;
					   else if (*_iron == "113") iron = 113;
					   else if (*_iron == "114") iron = 114;
					   else if (*_iron == "115") iron = 115;
					   else if (*_iron == "116") iron = 116;
					   else if (*_iron == "117") iron = 117;
					   else if (*_iron == "118") iron = 118;
					   else if (*_iron == "119") iron = 119;
					   else if (*_iron == "120") iron = 120;
					   if (*_iron == "121") iron = 121;
					   else if (*_iron == "122") iron = 122;
					   else if (*_iron == "123") iron = 123;
					   else if (*_iron == "124") iron = 124;
					   else if (*_iron == "125") iron = 125;
					   else if (*_iron == "126") iron = 126;
					   else if (*_iron == "127") iron = 127;
					   else if (*_iron == "128") iron = 128;
					   else if (*_iron == "129") iron = 129;
					   else if (*_iron == "130") iron = 130;
					   else if (*_iron == "131") iron = 131;
					   else if (*_iron == "132") iron = 132;
					   else if (*_iron == "133") iron = 133;
					   else if (*_iron == "134") iron = 134;
					   else if (*_iron == "135") iron = 135;
					   else if (*_iron == "136") iron = 136;
					   else if (*_iron == "137") iron = 137;
					   else if (*_iron == "138") iron = 138;
					   else if (*_iron == "139") iron = 139;
					   else if (*_iron == "140") iron = 140;
					   else if (*_iron == "141") iron = 141;
					   else if (*_iron == "142") iron = 142;
					   else if (*_iron == "143") iron = 143;
					   else if (*_iron == "144") iron = 144;
					   else if (*_iron == "145") iron = 145;
					   else if (*_iron == "146") iron = 146;
					   else if (*_iron == "147") iron = 147;
					   else if (*_iron == "148") iron = 148;
					   else if (*_iron == "149") iron = 149;
					   else if (*_iron == "150") iron = 150;
					   else if (*_iron == "151") iron = 151;
					   else if (*_iron == "152") iron = 152;
					   else if (*_iron == "153") iron = 153;
					   else if (*_iron == "154") iron = 154;
					   else if (*_iron == "155") iron = 155;
					   else if (*_iron == "156") iron = 156;
					   else if (*_iron == "157") iron = 157;
					   else if (*_iron == "158") iron = 158;
					   else if (*_iron == "159") iron = 159;
					   else if (*_iron == "160") iron = 160;
					   else if (*_iron == "161") iron = 161;
					   else if (*_iron == "162") iron = 162;
					   else if (*_iron == "163") iron = 163;
					   else if (*_iron == "164") iron = 164;
					   else if (*_iron == "165") iron = 165;
					   else if (*_iron == "166") iron = 166;
					   else if (*_iron == "167") iron = 167;
					   else if (*_iron == "168") iron = 168;
					   else if (*_iron == "169") iron = 169;
					   else if (*_iron == "170") iron = 170;
					   else if (*_iron == "171") iron = 171;
					   else if (*_iron == "172") iron = 172;
					   else if (*_iron == "173") iron = 173;
					   else if (*_iron == "174") iron = 174;
					   else if (*_iron == "175") iron = 175;
					   else if (*_iron == "176") iron = 176;
					   else if (*_iron == "177") iron = 177;
					   else if (*_iron == "178") iron = 178;
					   else if (*_iron == "179") iron = 179;
					   else if (*_iron == "180") iron = 180;
					   else if (*_iron == "181") iron = 181;
					   else if (*_iron == "182") iron = 182;
					   else if (*_iron == "183") iron = 183;
					   else if (*_iron == "184") iron = 184;
					   else if (*_iron == "185") iron = 185;
					   else if (*_iron == "186") iron = 186;
					   else if (*_iron == "187") iron = 187;
					   else if (*_iron == "188") iron = 188;
					   else if (*_iron == "189") iron = 189;
					   else if (*_iron == "190") iron = 190;
					   else if (*_iron == "191") iron = 191;
					   else if (*_iron == "192") iron = 192;
					   else if (*_iron == "193") iron = 193;
					   else if (*_iron == "194") iron = 194;
					   else if (*_iron == "195") iron = 195;
					   else if (*_iron == "196") iron = 196;
					   else if (*_iron == "197") iron = 197;
					   else if (*_iron == "198") iron = 198;
					   else if (*_iron == "199") iron = 199;
					   else if (*_iron == "200") iron = 200;
					   else if (*_iron == "201") iron = 201;
					   else if (*_iron == "202") iron = 202;
					   else if (*_iron == "203") iron = 203;
					   else if (*_iron == "204") iron = 204;
					   else if (*_iron == "205") iron = 205;
					   else if (*_iron == "206") iron = 206;
					   else if (*_iron == "207") iron = 207;
					   else if (*_iron == "208") iron = 208;
					   else if (*_iron == "209") iron = 209;
					   else if (*_iron == "210") iron = 210;
					   else if (*_iron == "211") iron = 211;
					   else if (*_iron == "212") iron = 212;
					   else if (*_iron == "213") iron = 213;
					   else if (*_iron == "214") iron = 214;
					   else if (*_iron == "215") iron = 215;
					   else if (*_iron == "216") iron = 216;
					   else if (*_iron == "217") iron = 217;
					   else if (*_iron == "218") iron = 218;
					   else if (*_iron == "219") iron = 219;
					   else if (*_iron == "220") iron = 220;
					   else if (*_iron == "221") iron = 221;
					   else if (*_iron == "222") iron = 222;
					   else if (*_iron == "223") iron = 223;
					   else if (*_iron == "224") iron = 224;
					   else if (*_iron == "225") iron = 225;
					   else if (*_iron == "226") iron = 226;
					   else if (*_iron == "227") iron = 227;
					   else if (*_iron == "228") iron = 228;
					   else if (*_iron == "229") iron = 229;
					   else if (*_iron == "230") iron = 230;
					   else if (*_iron == "231") iron = 231;
					   else if (*_iron == "232") iron = 232;
					   else if (*_iron == "233") iron = 233;
					   else if (*_iron == "234") iron = 234;
					   else if (*_iron == "235") iron = 235;
					   else if (*_iron == "236") iron = 236;
					   else if (*_iron == "237") iron = 237;
					   else if (*_iron == "238") iron = 238;
					   else if (*_iron == "239") iron = 239;
					   else if (*_iron == "240") iron = 240;
					   if (*_iron == "241") iron = 241;
					   else if (*_iron == "242") iron = 242;
					   else if (*_iron == "243") iron = 243;
					   else if (*_iron == "244") iron = 244;
					   else if (*_iron == "245") iron = 245;
					   else if (*_iron == "246") iron = 246;
					   else if (*_iron == "247") iron = 247;
					   else if (*_iron == "248") iron = 248;
					   else if (*_iron == "249") iron = 249;
					   else if (*_iron == "250") iron = 250;
					   else if (*_iron == "251") iron = 251;
					   else if (*_iron == "252") iron = 252;
					   else if (*_iron == "253") iron = 253;
					   else if (*_iron == "254") iron = 254;
					   else if (*_iron == "255") iron = 255;
					   else if (*_iron == "256") iron = 256;
					   else if (*_iron == "257") iron = 257;
					   else if (*_iron == "258") iron = 258;
					   else if (*_iron == "259") iron = 259;
					   else if (*_iron == "260") iron = 260;
					   else if (*_iron == "261") iron = 261;
					   else if (*_iron == "262") iron = 262;
					   else if (*_iron == "263") iron = 263;
					   else if (*_iron == "264") iron = 264;
					   else if (*_iron == "265") iron = 265;
					   else if (*_iron == "266") iron = 266;
					   else if (*_iron == "267") iron = 267;
					   else if (*_iron == "268") iron = 268;
					   else if (*_iron == "269") iron = 269;
					   else if (*_iron == "270") iron = 270;
					   else if (*_iron == "271") iron = 271;
					   else if (*_iron == "272") iron = 272;
					   else if (*_iron == "273") iron = 273;
					   else if (*_iron == "274") iron = 274;
					   else if (*_iron == "275") iron = 275;
					   else if (*_iron == "276") iron = 276;
					   else if (*_iron == "277") iron = 277;
					   else if (*_iron == "278") iron = 278;
					   else if (*_iron == "279") iron = 279;
					   else if (*_iron == "280") iron = 280;
					   else if (*_iron == "281") iron = 281;
					   else if (*_iron == "282") iron = 282;
					   else if (*_iron == "283") iron = 283;
					   else if (*_iron == "284") iron = 284;
					   else if (*_iron == "285") iron = 285;
					   else if (*_iron == "286") iron = 286;
					   else if (*_iron == "287") iron = 287;
					   else if (*_iron == "288") iron = 288;
					   else if (*_iron == "289") iron = 289;
					   else if (*_iron == "290") iron = 290;
					   else if (*_iron == "291") iron = 291;
					   else if (*_iron == "292") iron = 292;
					   else if (*_iron == "293") iron = 293;
					   else if (*_iron == "294") iron = 294;
					   else if (*_iron == "295") iron = 295;
					   else if (*_iron == "296") iron = 296;
					   else if (*_iron == "297") iron = 297;
					   else if (*_iron == "298") iron = 298;
					   else if (*_iron == "299") iron = 299;
					   else if (*_iron == "300") iron = 300;
					   else if (*_iron == "301") iron = 301;
					   else if (*_iron == "302") iron = 302;
					   else if (*_iron == "303") iron = 303;
					   else if (*_iron == "304") iron = 304;
					   else if (*_iron == "305") iron = 305;
					   else if (*_iron == "306") iron = 306;
					   else if (*_iron == "307") iron = 307;
					   else if (*_iron == "308") iron = 308;
					   else if (*_iron == "309") iron = 309;
					   else if (*_iron == "310") iron = 310;
					   else if (*_iron == "311") iron = 311;
					   else if (*_iron == "312") iron = 312;
					   else if (*_iron == "313") iron = 313;
					   else if (*_iron == "314") iron = 314;
					   else if (*_iron == "315") iron = 315;
					   else if (*_iron == "316") iron = 316;
					   else if (*_iron == "317") iron = 317;
					   else if (*_iron == "318") iron = 318;
					   else if (*_iron == "319") iron = 319;
					   else if (*_iron == "320") iron = 320;
					   else if (*_iron == "321") iron = 321;
					   else if (*_iron == "322") iron = 322;
					   else if (*_iron == "323") iron = 323;
					   else if (*_iron == "324") iron = 324;
					   else if (*_iron == "325") iron = 325;
					   else if (*_iron == "326") iron = 326;
					   else if (*_iron == "327") iron = 327;
					   else if (*_iron == "328") iron = 328;
					   else if (*_iron == "329") iron = 329;
					   else if (*_iron == "330") iron = 330;
					   else if (*_iron == "331") iron = 331;
					   else if (*_iron == "332") iron = 332;
					   else if (*_iron == "333") iron = 333;
					   else if (*_iron == "334") iron = 334;
					   else if (*_iron == "335") iron = 335;
					   else if (*_iron == "336") iron = 336;
					   else if (*_iron == "337") iron = 337;
					   else if (*_iron == "338") iron = 338;
					   else if (*_iron == "339") iron = 339;
					   else if (*_iron == "340") iron = 340;
					   else if (*_iron == "341") iron = 341;
					   else if (*_iron == "342") iron = 342;
					   else if (*_iron == "343") iron = 343;
					   else if (*_iron == "344") iron = 344;
					   else if (*_iron == "345") iron = 345;
					   else if (*_iron == "346") iron = 346;
					   else if (*_iron == "347") iron = 347;
					   else if (*_iron == "348") iron = 348;
					   else if (*_iron == "349") iron = 349;
					   else if (*_iron == "350") iron = 350;
					   else if (*_iron == "351") iron = 351;
					   else if (*_iron == "352") iron = 352;
					   else if (*_iron == "353") iron = 353;
					   else if (*_iron == "354") iron = 354;
					   else if (*_iron == "355") iron = 355;
					   else if (*_iron == "356") iron = 356;
					   else if (*_iron == "357") iron = 357;
					   else if (*_iron == "358") iron = 358;
					   else if (*_iron == "359") iron = 359;
					   else if (*_iron == "360") iron = 360;
					   if (*_iron == "361") iron = 361;
					   else if (*_iron == "362") iron = 362;
					   else if (*_iron == "363") iron = 363;
					   else if (*_iron == "364") iron = 364;
					   else if (*_iron == "365") iron = 365;
					   else if (*_iron == "366") iron = 366;
					   else if (*_iron == "367") iron = 367;
					   else if (*_iron == "368") iron = 368;
					   else if (*_iron == "369") iron = 369;
					   else if (*_iron == "370") iron = 370;
					   else if (*_iron == "371") iron = 371;
					   else if (*_iron == "372") iron = 372;
					   else if (*_iron == "373") iron = 373;
					   else if (*_iron == "374") iron = 374;
					   else if (*_iron == "375") iron = 375;
					   else if (*_iron == "376") iron = 376;
					   else if (*_iron == "377") iron = 377;
					   else if (*_iron == "378") iron = 378;
					   else if (*_iron == "379") iron = 379;
					   else if (*_iron == "380") iron = 380;
					   else if (*_iron == "381") iron = 381;
					   else if (*_iron == "382") iron = 382;
					   else if (*_iron == "383") iron = 383;
					   else if (*_iron == "384") iron = 384;
					   else if (*_iron == "385") iron = 385;
					   else if (*_iron == "386") iron = 386;
					   else if (*_iron == "387") iron = 387;
					   else if (*_iron == "388") iron = 388;
					   else if (*_iron == "389") iron = 389;
					   else if (*_iron == "390") iron = 390;
					   else if (*_iron == "391") iron = 391;
					   else if (*_iron == "392") iron = 392;
					   else if (*_iron == "393") iron = 393;
					   else if (*_iron == "394") iron = 394;
					   else if (*_iron == "395") iron = 395;
					   else if (*_iron == "396") iron = 396;
					   else if (*_iron == "397") iron = 397;
					   else if (*_iron == "398") iron = 398;
					   else if (*_iron == "399") iron = 399;
					   else if (*_iron == "400") iron = 400;
					   else if (*_iron == "401") iron = 401;
					   else if (*_iron == "402") iron = 402;
					   else if (*_iron == "403") iron = 403;
					   else if (*_iron == "404") iron = 404;
					   else if (*_iron == "405") iron = 405;
					   else if (*_iron == "406") iron = 406;
					   else if (*_iron == "407") iron = 407;
					   else if (*_iron == "408") iron = 408;
					   else if (*_iron == "409") iron = 409;
					   else if (*_iron == "410") iron = 410;
					   else if (*_iron == "411") iron = 411;
					   else if (*_iron == "412") iron = 412;
					   else if (*_iron == "413") iron = 413;
					   else if (*_iron == "414") iron = 414;
					   else if (*_iron == "415") iron = 415;
					   else if (*_iron == "416") iron = 416;
					   else if (*_iron == "417") iron = 417;
					   else if (*_iron == "418") iron = 418;
					   else if (*_iron == "419") iron = 419;
					   else if (*_iron == "420") iron = 420;
					   else if (*_iron == "421") iron = 421;
					   else if (*_iron == "422") iron = 422;
					   else if (*_iron == "423") iron = 423;
					   else if (*_iron == "424") iron = 424;
					   else if (*_iron == "425") iron = 425;
					   else if (*_iron == "426") iron = 426;
					   else if (*_iron == "427") iron = 427;
					   else if (*_iron == "428") iron = 428;
					   else if (*_iron == "429") iron = 429;
					   else if (*_iron == "430") iron = 430;
					   else if (*_iron == "431") iron = 431;
					   else if (*_iron == "432") iron = 432;
					   else if (*_iron == "433") iron = 433;
					   else if (*_iron == "434") iron = 434;
					   else if (*_iron == "435") iron = 435;
					   else if (*_iron == "436") iron = 436;
					   else if (*_iron == "437") iron = 437;
					   else if (*_iron == "438") iron = 438;
					   else if (*_iron == "439") iron = 439;
					   else if (*_iron == "440") iron = 440;
					   else if (*_iron == "441") iron = 441;
					   else if (*_iron == "442") iron = 442;
					   else if (*_iron == "443") iron = 443;
					   else if (*_iron == "444") iron = 444;
					   else if (*_iron == "445") iron = 445;
					   else if (*_iron == "446") iron = 446;
					   else if (*_iron == "447") iron = 447;
					   else if (*_iron == "448") iron = 448;
					   else if (*_iron == "449") iron = 449;
					   else if (*_iron == "450") iron = 450;
					   else if (*_iron == "451") iron = 451;
					   else if (*_iron == "452") iron = 452;
					   else if (*_iron == "453") iron = 453;
					   else if (*_iron == "454") iron = 454;
					   else if (*_iron == "455") iron = 455;
					   else if (*_iron == "456") iron = 456;
					   else if (*_iron == "457") iron = 457;
					   else if (*_iron == "458") iron = 458;
					   else if (*_iron == "459") iron = 459;
					   else if (*_iron == "460") iron = 460;
					   else if (*_iron == "461") iron = 461;
					   else if (*_iron == "462") iron = 462;
					   else if (*_iron == "463") iron = 463;
					   else if (*_iron == "464") iron = 464;
					   else if (*_iron == "465") iron = 465;
					   else if (*_iron == "466") iron = 466;
					   else if (*_iron == "467") iron = 467;
					   else if (*_iron == "468") iron = 468;
					   else if (*_iron == "469") iron = 469;
					   else if (*_iron == "470") iron = 470;
					   else if (*_iron == "471") iron = 471;
					   else if (*_iron == "472") iron = 472;
					   else if (*_iron == "473") iron = 473;
					   else if (*_iron == "474") iron = 474;
					   else if (*_iron == "475") iron = 475;
					   else if (*_iron == "476") iron = 476;
					   else if (*_iron == "477") iron = 477;
					   else if (*_iron == "478") iron = 478;
					   else if (*_iron == "479") iron = 479;
					   else if (*_iron == "480") iron = 480;
					   if (*_iron == "481") iron = 481;
					   else if (*_iron == "482") iron = 482;
					   else if (*_iron == "483") iron = 483;
					   else if (*_iron == "484") iron = 484;
					   else if (*_iron == "485") iron = 485;
					   else if (*_iron == "486") iron = 486;
					   else if (*_iron == "487") iron = 487;
					   else if (*_iron == "488") iron = 488;
					   else if (*_iron == "489") iron = 489;
					   else if (*_iron == "490") iron = 490;
					   else if (*_iron == "491") iron = 491;
					   else if (*_iron == "492") iron = 492;
					   else if (*_iron == "493") iron = 493;
					   else if (*_iron == "494") iron = 494;
					   else if (*_iron == "495") iron = 495;
					   else if (*_iron == "496") iron = 496;
					   else if (*_iron == "497") iron = 497;
					   else if (*_iron == "498") iron = 498;
					   else if (*_iron == "499") iron = 499;
					   else if (*_iron == "500") iron = 500;
					   else if (*_iron == "501") iron = 501;
					   else if (*_iron == "502") iron = 502;
					   else if (*_iron == "503") iron = 503;
					   else if (*_iron == "504") iron = 504;
					   else if (*_iron == "505") iron = 505;
					   else if (*_iron == "506") iron = 506;
					   else if (*_iron == "507") iron = 507;
					   else if (*_iron == "508") iron = 508;
					   else if (*_iron == "509") iron = 509;
					   else if (*_iron == "510") iron = 510;
					   else if (*_iron == "511") iron = 511;
					   else if (*_iron == "512") iron = 512;
					   else if (*_iron == "513") iron = 513;
					   else if (*_iron == "514") iron = 514;
					   else if (*_iron == "515") iron = 515;
					   else if (*_iron == "516") iron = 516;
					   else if (*_iron == "517") iron = 517;
					   else if (*_iron == "518") iron = 518;
					   else if (*_iron == "519") iron = 519;
					   else if (*_iron == "520") iron = 520;
					   else if (*_iron == "521") iron = 521;
					   else if (*_iron == "522") iron = 522;
					   else if (*_iron == "523") iron = 523;
					   else if (*_iron == "524") iron = 524;
					   else if (*_iron == "525") iron = 525;
					   else if (*_iron == "526") iron = 526;
					   else if (*_iron == "527") iron = 527;
					   else if (*_iron == "528") iron = 528;
					   else if (*_iron == "529") iron = 529;
					   else if (*_iron == "530") iron = 530;
					   else if (*_iron == "531") iron = 531;
					   else if (*_iron == "532") iron = 532;
					   else if (*_iron == "533") iron = 533;
					   else if (*_iron == "534") iron = 534;
					   else if (*_iron == "535") iron = 535;
					   else if (*_iron == "536") iron = 536;
					   else if (*_iron == "537") iron = 537;
					   else if (*_iron == "538") iron = 538;
					   else if (*_iron == "539") iron = 539;
					   else if (*_iron == "540") iron = 540;
					   else if (*_iron == "541") iron = 541;
					   else if (*_iron == "542") iron = 542;
					   else if (*_iron == "543") iron = 543;
					   else if (*_iron == "544") iron = 544;
					   else if (*_iron == "545") iron = 545;
					   else if (*_iron == "546") iron = 546;
					   else if (*_iron == "547") iron = 547;
					   else if (*_iron == "548") iron = 548;
					   else if (*_iron == "549") iron = 549;
					   else if (*_iron == "550") iron = 550;
					   else if (*_iron == "551") iron = 551;
					   else if (*_iron == "552") iron = 552;
					   else if (*_iron == "553") iron = 553;
					   else if (*_iron == "554") iron = 554;
					   else if (*_iron == "555") iron = 555;
					   else if (*_iron == "556") iron = 556;
					   else if (*_iron == "557") iron = 557;
					   else if (*_iron == "558") iron = 558;
					   else if (*_iron == "559") iron = 559;
					   else if (*_iron == "560") iron = 560;
					   else if (*_iron == "561") iron = 561;
					   else if (*_iron == "562") iron = 562;
					   else if (*_iron == "563") iron = 563;
					   else if (*_iron == "564") iron = 564;
					   else if (*_iron == "565") iron = 565;
					   else if (*_iron == "566") iron = 566;
					   else if (*_iron == "567") iron = 567;
					   else if (*_iron == "568") iron = 568;
					   else if (*_iron == "569") iron = 569;
					   else if (*_iron == "570") iron = 570;
					   else if (*_iron == "571") iron = 571;
					   else if (*_iron == "572") iron = 572;
					   else if (*_iron == "573") iron = 573;
					   else if (*_iron == "574") iron = 574;
					   else if (*_iron == "575") iron = 575;
					   else if (*_iron == "576") iron = 576;
					   else if (*_iron == "577") iron = 577;
					   else if (*_iron == "578") iron = 578;
					   else if (*_iron == "579") iron = 579;
					   else if (*_iron == "580") iron = 580;
					   else if (*_iron == "581") iron = 581;
					   else if (*_iron == "582") iron = 582;
					   else if (*_iron == "583") iron = 583;
					   else if (*_iron == "584") iron = 584;
					   else if (*_iron == "585") iron = 585;
					   else if (*_iron == "586") iron = 586;
					   else if (*_iron == "587") iron = 587;
					   else if (*_iron == "588") iron = 588;
					   else if (*_iron == "589") iron = 589;
					   else if (*_iron == "590") iron = 590;
					   else if (*_iron == "591") iron = 591;
					   else if (*_iron == "592") iron = 592;
					   else if (*_iron == "593") iron = 593;
					   else if (*_iron == "594") iron = 594;
					   else if (*_iron == "595") iron = 595;
					   else if (*_iron == "596") iron = 596;
					   else if (*_iron == "597") iron = 597;
					   else if (*_iron == "598") iron = 598;
					   else if (*_iron == "599") iron = 599;
					   else if (*_iron == "600") iron = 600;
					   if (*_iron == "601") iron = 601;
					   else if (*_iron == "602") iron = 602;
					   else if (*_iron == "603") iron = 603;
					   else if (*_iron == "604") iron = 604;
					   else if (*_iron == "605") iron = 605;
					   else if (*_iron == "606") iron = 606;
					   else if (*_iron == "607") iron = 607;
					   else if (*_iron == "608") iron = 608;
					   else if (*_iron == "609") iron = 609;
					   else if (*_iron == "610") iron = 610;
					   else if (*_iron == "611") iron = 611;
					   else if (*_iron == "612") iron = 612;
					   else if (*_iron == "613") iron = 613;
					   else if (*_iron == "614") iron = 614;
					   else if (*_iron == "615") iron = 615;
					   else if (*_iron == "616") iron = 616;
					   else if (*_iron == "617") iron = 617;
					   else if (*_iron == "618") iron = 618;
					   else if (*_iron == "619") iron = 619;
					   else if (*_iron == "620") iron = 620;
					   else if (*_iron == "621") iron = 621;
					   else if (*_iron == "622") iron = 622;
					   else if (*_iron == "623") iron = 623;
					   else if (*_iron == "624") iron = 624;
					   else if (*_iron == "625") iron = 625;
					   else if (*_iron == "626") iron = 626;
					   else if (*_iron == "627") iron = 627;
					   else if (*_iron == "628") iron = 628;
					   else if (*_iron == "629") iron = 629;
					   else if (*_iron == "630") iron = 630;
					   else if (*_iron == "631") iron = 631;
					   else if (*_iron == "632") iron = 632;
					   else if (*_iron == "633") iron = 633;
					   else if (*_iron == "634") iron = 634;
					   else if (*_iron == "635") iron = 635;
					   else if (*_iron == "636") iron = 636;
					   else if (*_iron == "637") iron = 637;
					   else if (*_iron == "638") iron = 638;
					   else if (*_iron == "639") iron = 639;
					   else if (*_iron == "640") iron = 640;
					   else if (*_iron == "641") iron = 641;
					   else if (*_iron == "642") iron = 642;
					   else if (*_iron == "643") iron = 643;
					   else if (*_iron == "644") iron = 644;
					   else if (*_iron == "645") iron = 645;
					   else if (*_iron == "646") iron = 646;
					   else if (*_iron == "647") iron = 647;
					   else if (*_iron == "648") iron = 648;
					   else if (*_iron == "649") iron = 649;
					   else if (*_iron == "650") iron = 650;
					   else if (*_iron == "651") iron = 651;
					   else if (*_iron == "652") iron = 652;
					   else if (*_iron == "653") iron = 653;
					   else if (*_iron == "654") iron = 654;
					   else if (*_iron == "655") iron = 655;
					   else if (*_iron == "656") iron = 656;
					   else if (*_iron == "657") iron = 657;
					   else if (*_iron == "658") iron = 658;
					   else if (*_iron == "659") iron = 659;
					   else if (*_iron == "660") iron = 660;
					   else if (*_iron == "661") iron = 661;
					   else if (*_iron == "662") iron = 662;
					   else if (*_iron == "663") iron = 663;
					   else if (*_iron == "664") iron = 664;
					   else if (*_iron == "665") iron = 665;
					   else if (*_iron == "666") iron = 666;
					   else if (*_iron == "667") iron = 667;
					   else if (*_iron == "668") iron = 668;
					   else if (*_iron == "669") iron = 669;
					   else if (*_iron == "670") iron = 670;
					   else if (*_iron == "671") iron = 671;
					   else if (*_iron == "672") iron = 672;
					   else if (*_iron == "673") iron = 673;
					   else if (*_iron == "674") iron = 674;
					   else if (*_iron == "675") iron = 675;
					   else if (*_iron == "676") iron = 676;
					   else if (*_iron == "677") iron = 677;
					   else if (*_iron == "678") iron = 678;
					   else if (*_iron == "679") iron = 679;
					   else if (*_iron == "680") iron = 680;
					   else if (*_iron == "681") iron = 681;
					   else if (*_iron == "682") iron = 682;
					   else if (*_iron == "683") iron = 683;
					   else if (*_iron == "684") iron = 684;
					   else if (*_iron == "685") iron = 685;
					   else if (*_iron == "686") iron = 686;
					   else if (*_iron == "687") iron = 687;
					   else if (*_iron == "688") iron = 688;
					   else if (*_iron == "689") iron = 689;
					   else if (*_iron == "690") iron = 690;
					   else if (*_iron == "691") iron = 691;
					   else if (*_iron == "692") iron = 692;
					   else if (*_iron == "693") iron = 693;
					   else if (*_iron == "694") iron = 694;
					   else if (*_iron == "695") iron = 695;
					   else if (*_iron == "696") iron = 696;
					   else if (*_iron == "697") iron = 697;
					   else if (*_iron == "698") iron = 698;
					   else if (*_iron == "699") iron = 699;
					   else if (*_iron == "700") iron = 700;

					   delete _iron;
				   }
				   {}
				   //coal
				   {
					   string* _coal = new string;

					   getline(Data, *_coal);
					   if (*_coal == "0") coal = 0;
					   else if (*_coal == "1") coal = 1;
					   else if (*_coal == "2") coal = 2;
					   else if (*_coal == "3") coal = 3;
					   else if (*_coal == "4") coal = 4;
					   else if (*_coal == "5") coal = 5;
					   else if (*_coal == "6") coal = 6;
					   else if (*_coal == "7") coal = 7;
					   else if (*_coal == "8") coal = 8;
					   else if (*_coal == "9") coal = 9;
					   else if (*_coal == "10") coal = 10;
					   else if (*_coal == "11") coal = 11;
					   else if (*_coal == "12") coal = 12;
					   else if (*_coal == "13") coal = 13;
					   else if (*_coal == "14") coal = 14;
					   else if (*_coal == "15") coal = 15;
					   else if (*_coal == "16") coal = 16;
					   else if (*_coal == "17") coal = 17;
					   else if (*_coal == "18") coal = 18;
					   else if (*_coal == "19") coal = 19;
					   else if (*_coal == "20") coal = 20;
					   else if (*_coal == "21") coal = 21;
					   else if (*_coal == "22") coal = 22;
					   else if (*_coal == "23") coal = 23;
					   else if (*_coal == "24") coal = 24;
					   else if (*_coal == "25") coal = 25;
					   else if (*_coal == "26") coal = 26;
					   else if (*_coal == "27") coal = 27;
					   else if (*_coal == "28") coal = 28;
					   else if (*_coal == "29") coal = 29;
					   else if (*_coal == "30") coal = 30;
					   else if (*_coal == "31") coal = 31;
					   else if (*_coal == "32") coal = 32;
					   else if (*_coal == "33") coal = 33;
					   else if (*_coal == "34") coal = 34;
					   else if (*_coal == "35") coal = 35;
					   else if (*_coal == "36") coal = 36;
					   else if (*_coal == "37") coal = 37;
					   else if (*_coal == "38") coal = 38;
					   else if (*_coal == "39") coal = 39;
					   else if (*_coal == "40") coal = 40;
					   else if (*_coal == "41") coal = 41;
					   else if (*_coal == "42") coal = 42;
					   else if (*_coal == "43") coal = 43;
					   else if (*_coal == "44") coal = 44;
					   else if (*_coal == "45") coal = 45;
					   else if (*_coal == "46") coal = 46;
					   else if (*_coal == "47") coal = 47;
					   else if (*_coal == "48") coal = 48;
					   else if (*_coal == "49") coal = 49;
					   else if (*_coal == "50") coal = 50;
					   else if (*_coal == "51") coal = 51;
					   else if (*_coal == "52") coal = 52;
					   else if (*_coal == "53") coal = 53;
					   else if (*_coal == "54") coal = 54;
					   else if (*_coal == "55") coal = 55;
					   else if (*_coal == "56") coal = 56;
					   else if (*_coal == "57") coal = 57;
					   else if (*_coal == "58") coal = 58;
					   else if (*_coal == "59") coal = 59;
					   else if (*_coal == "60") coal = 60;
					   else if (*_coal == "61") coal = 61;
					   else if (*_coal == "62") coal = 62;
					   else if (*_coal == "63") coal = 63;
					   else if (*_coal == "64") coal = 64;
					   else if (*_coal == "65") coal = 65;
					   else if (*_coal == "66") coal = 66;
					   else if (*_coal == "67") coal = 67;
					   else if (*_coal == "68") coal = 68;
					   else if (*_coal == "69") coal = 69;
					   else if (*_coal == "70") coal = 70;
					   else if (*_coal == "71") coal = 71;
					   else if (*_coal == "72") coal = 72;
					   else if (*_coal == "73") coal = 73;
					   else if (*_coal == "74") coal = 74;
					   else if (*_coal == "75") coal = 75;
					   else if (*_coal == "76") coal = 76;
					   else if (*_coal == "77") coal = 77;
					   else if (*_coal == "78") coal = 78;
					   else if (*_coal == "79") coal = 79;
					   else if (*_coal == "80") coal = 80;
					   else if (*_coal == "81") coal = 81;
					   else if (*_coal == "82") coal = 82;
					   else if (*_coal == "83") coal = 83;
					   else if (*_coal == "84") coal = 84;
					   else if (*_coal == "85") coal = 85;
					   else if (*_coal == "86") coal = 86;
					   else if (*_coal == "87") coal = 87;
					   else if (*_coal == "88") coal = 88;
					   else if (*_coal == "89") coal = 89;
					   else if (*_coal == "90") coal = 90;
					   else if (*_coal == "91") coal = 91;
					   else if (*_coal == "92") coal = 92;
					   else if (*_coal == "93") coal = 93;
					   else if (*_coal == "94") coal = 94;
					   else if (*_coal == "95") coal = 95;
					   else if (*_coal == "96") coal = 96;
					   else if (*_coal == "97") coal = 97;
					   else if (*_coal == "98") coal = 98;
					   else if (*_coal == "99") coal = 99;
					   else if (*_coal == "100") coal = 100;
					   else if (*_coal == "101") coal = 101;
					   else if (*_coal == "102") coal = 102;
					   else if (*_coal == "103") coal = 103;
					   else if (*_coal == "104") coal = 104;
					   else if (*_coal == "105") coal = 105;
					   else if (*_coal == "106") coal = 106;
					   else if (*_coal == "107") coal = 107;
					   else if (*_coal == "108") coal = 108;
					   else if (*_coal == "109") coal = 109;
					   else if (*_coal == "110") coal = 110;
					   else if (*_coal == "111") coal = 111;
					   else if (*_coal == "112") coal = 112;
					   else if (*_coal == "113") coal = 113;
					   else if (*_coal == "114") coal = 114;
					   else if (*_coal == "115") coal = 115;
					   else if (*_coal == "116") coal = 116;
					   else if (*_coal == "117") coal = 117;
					   else if (*_coal == "118") coal = 118;
					   else if (*_coal == "119") coal = 119;
					   else if (*_coal == "120") coal = 120;
					   if (*_coal == "121") coal = 121;
					   else if (*_coal == "122") coal = 122;
					   else if (*_coal == "123") coal = 123;
					   else if (*_coal == "124") coal = 124;
					   else if (*_coal == "125") coal = 125;
					   else if (*_coal == "126") coal = 126;
					   else if (*_coal == "127") coal = 127;
					   else if (*_coal == "128") coal = 128;
					   else if (*_coal == "129") coal = 129;
					   else if (*_coal == "130") coal = 130;
					   else if (*_coal == "131") coal = 131;
					   else if (*_coal == "132") coal = 132;
					   else if (*_coal == "133") coal = 133;
					   else if (*_coal == "134") coal = 134;
					   else if (*_coal == "135") coal = 135;
					   else if (*_coal == "136") coal = 136;
					   else if (*_coal == "137") coal = 137;
					   else if (*_coal == "138") coal = 138;
					   else if (*_coal == "139") coal = 139;
					   else if (*_coal == "140") coal = 140;
					   else if (*_coal == "141") coal = 141;
					   else if (*_coal == "142") coal = 142;
					   else if (*_coal == "143") coal = 143;
					   else if (*_coal == "144") coal = 144;
					   else if (*_coal == "145") coal = 145;
					   else if (*_coal == "146") coal = 146;
					   else if (*_coal == "147") coal = 147;
					   else if (*_coal == "148") coal = 148;
					   else if (*_coal == "149") coal = 149;
					   else if (*_coal == "150") coal = 150;
					   else if (*_coal == "151") coal = 151;
					   else if (*_coal == "152") coal = 152;
					   else if (*_coal == "153") coal = 153;
					   else if (*_coal == "154") coal = 154;
					   else if (*_coal == "155") coal = 155;
					   else if (*_coal == "156") coal = 156;
					   else if (*_coal == "157") coal = 157;
					   else if (*_coal == "158") coal = 158;
					   else if (*_coal == "159") coal = 159;
					   else if (*_coal == "160") coal = 160;
					   else if (*_coal == "161") coal = 161;
					   else if (*_coal == "162") coal = 162;
					   else if (*_coal == "163") coal = 163;
					   else if (*_coal == "164") coal = 164;
					   else if (*_coal == "165") coal = 165;
					   else if (*_coal == "166") coal = 166;
					   else if (*_coal == "167") coal = 167;
					   else if (*_coal == "168") coal = 168;
					   else if (*_coal == "169") coal = 169;
					   else if (*_coal == "170") coal = 170;
					   else if (*_coal == "171") coal = 171;
					   else if (*_coal == "172") coal = 172;
					   else if (*_coal == "173") coal = 173;
					   else if (*_coal == "174") coal = 174;
					   else if (*_coal == "175") coal = 175;
					   else if (*_coal == "176") coal = 176;
					   else if (*_coal == "177") coal = 177;
					   else if (*_coal == "178") coal = 178;
					   else if (*_coal == "179") coal = 179;
					   else if (*_coal == "180") coal = 180;
					   else if (*_coal == "181") coal = 181;
					   else if (*_coal == "182") coal = 182;
					   else if (*_coal == "183") coal = 183;
					   else if (*_coal == "184") coal = 184;
					   else if (*_coal == "185") coal = 185;
					   else if (*_coal == "186") coal = 186;
					   else if (*_coal == "187") coal = 187;
					   else if (*_coal == "188") coal = 188;
					   else if (*_coal == "189") coal = 189;
					   else if (*_coal == "190") coal = 190;
					   else if (*_coal == "191") coal = 191;
					   else if (*_coal == "192") coal = 192;
					   else if (*_coal == "193") coal = 193;
					   else if (*_coal == "194") coal = 194;
					   else if (*_coal == "195") coal = 195;
					   else if (*_coal == "196") coal = 196;
					   else if (*_coal == "197") coal = 197;
					   else if (*_coal == "198") coal = 198;
					   else if (*_coal == "199") coal = 199;
					   else if (*_coal == "200") coal = 200;
					   else if (*_coal == "201") coal = 201;
					   else if (*_coal == "202") coal = 202;
					   else if (*_coal == "203") coal = 203;
					   else if (*_coal == "204") coal = 204;
					   else if (*_coal == "205") coal = 205;
					   else if (*_coal == "206") coal = 206;
					   else if (*_coal == "207") coal = 207;
					   else if (*_coal == "208") coal = 208;
					   else if (*_coal == "209") coal = 209;
					   else if (*_coal == "210") coal = 210;
					   else if (*_coal == "211") coal = 211;
					   else if (*_coal == "212") coal = 212;
					   else if (*_coal == "213") coal = 213;
					   else if (*_coal == "214") coal = 214;
					   else if (*_coal == "215") coal = 215;
					   else if (*_coal == "216") coal = 216;
					   else if (*_coal == "217") coal = 217;
					   else if (*_coal == "218") coal = 218;
					   else if (*_coal == "219") coal = 219;
					   else if (*_coal == "220") coal = 220;
					   else if (*_coal == "221") coal = 221;
					   else if (*_coal == "222") coal = 222;
					   else if (*_coal == "223") coal = 223;
					   else if (*_coal == "224") coal = 224;
					   else if (*_coal == "225") coal = 225;
					   else if (*_coal == "226") coal = 226;
					   else if (*_coal == "227") coal = 227;
					   else if (*_coal == "228") coal = 228;
					   else if (*_coal == "229") coal = 229;
					   else if (*_coal == "230") coal = 230;
					   else if (*_coal == "231") coal = 231;
					   else if (*_coal == "232") coal = 232;
					   else if (*_coal == "233") coal = 233;
					   else if (*_coal == "234") coal = 234;
					   else if (*_coal == "235") coal = 235;
					   else if (*_coal == "236") coal = 236;
					   else if (*_coal == "237") coal = 237;
					   else if (*_coal == "238") coal = 238;
					   else if (*_coal == "239") coal = 239;
					   else if (*_coal == "240") coal = 240;
					   if (*_coal == "241") coal = 241;
					   else if (*_coal == "242") coal = 242;
					   else if (*_coal == "243") coal = 243;
					   else if (*_coal == "244") coal = 244;
					   else if (*_coal == "245") coal = 245;
					   else if (*_coal == "246") coal = 246;
					   else if (*_coal == "247") coal = 247;
					   else if (*_coal == "248") coal = 248;
					   else if (*_coal == "249") coal = 249;
					   else if (*_coal == "250") coal = 250;
					   else if (*_coal == "251") coal = 251;
					   else if (*_coal == "252") coal = 252;
					   else if (*_coal == "253") coal = 253;
					   else if (*_coal == "254") coal = 254;
					   else if (*_coal == "255") coal = 255;
					   else if (*_coal == "256") coal = 256;
					   else if (*_coal == "257") coal = 257;
					   else if (*_coal == "258") coal = 258;
					   else if (*_coal == "259") coal = 259;
					   else if (*_coal == "260") coal = 260;
					   else if (*_coal == "261") coal = 261;
					   else if (*_coal == "262") coal = 262;
					   else if (*_coal == "263") coal = 263;
					   else if (*_coal == "264") coal = 264;
					   else if (*_coal == "265") coal = 265;
					   else if (*_coal == "266") coal = 266;
					   else if (*_coal == "267") coal = 267;
					   else if (*_coal == "268") coal = 268;
					   else if (*_coal == "269") coal = 269;
					   else if (*_coal == "270") coal = 270;
					   else if (*_coal == "271") coal = 271;
					   else if (*_coal == "272") coal = 272;
					   else if (*_coal == "273") coal = 273;
					   else if (*_coal == "274") coal = 274;
					   else if (*_coal == "275") coal = 275;
					   else if (*_coal == "276") coal = 276;
					   else if (*_coal == "277") coal = 277;
					   else if (*_coal == "278") coal = 278;
					   else if (*_coal == "279") coal = 279;
					   else if (*_coal == "280") coal = 280;
					   else if (*_coal == "281") coal = 281;
					   else if (*_coal == "282") coal = 282;
					   else if (*_coal == "283") coal = 283;
					   else if (*_coal == "284") coal = 284;
					   else if (*_coal == "285") coal = 285;
					   else if (*_coal == "286") coal = 286;
					   else if (*_coal == "287") coal = 287;
					   else if (*_coal == "288") coal = 288;
					   else if (*_coal == "289") coal = 289;
					   else if (*_coal == "290") coal = 290;
					   else if (*_coal == "291") coal = 291;
					   else if (*_coal == "292") coal = 292;
					   else if (*_coal == "293") coal = 293;
					   else if (*_coal == "294") coal = 294;
					   else if (*_coal == "295") coal = 295;
					   else if (*_coal == "296") coal = 296;
					   else if (*_coal == "297") coal = 297;
					   else if (*_coal == "298") coal = 298;
					   else if (*_coal == "299") coal = 299;
					   else if (*_coal == "300") coal = 300;
					   else if (*_coal == "301") coal = 301;
					   else if (*_coal == "302") coal = 302;
					   else if (*_coal == "303") coal = 303;
					   else if (*_coal == "304") coal = 304;
					   else if (*_coal == "305") coal = 305;
					   else if (*_coal == "306") coal = 306;
					   else if (*_coal == "307") coal = 307;
					   else if (*_coal == "308") coal = 308;
					   else if (*_coal == "309") coal = 309;
					   else if (*_coal == "310") coal = 310;
					   else if (*_coal == "311") coal = 311;
					   else if (*_coal == "312") coal = 312;
					   else if (*_coal == "313") coal = 313;
					   else if (*_coal == "314") coal = 314;
					   else if (*_coal == "315") coal = 315;
					   else if (*_coal == "316") coal = 316;
					   else if (*_coal == "317") coal = 317;
					   else if (*_coal == "318") coal = 318;
					   else if (*_coal == "319") coal = 319;
					   else if (*_coal == "320") coal = 320;
					   else if (*_coal == "321") coal = 321;
					   else if (*_coal == "322") coal = 322;
					   else if (*_coal == "323") coal = 323;
					   else if (*_coal == "324") coal = 324;
					   else if (*_coal == "325") coal = 325;
					   else if (*_coal == "326") coal = 326;
					   else if (*_coal == "327") coal = 327;
					   else if (*_coal == "328") coal = 328;
					   else if (*_coal == "329") coal = 329;
					   else if (*_coal == "330") coal = 330;
					   else if (*_coal == "331") coal = 331;
					   else if (*_coal == "332") coal = 332;
					   else if (*_coal == "333") coal = 333;
					   else if (*_coal == "334") coal = 334;
					   else if (*_coal == "335") coal = 335;
					   else if (*_coal == "336") coal = 336;
					   else if (*_coal == "337") coal = 337;
					   else if (*_coal == "338") coal = 338;
					   else if (*_coal == "339") coal = 339;
					   else if (*_coal == "340") coal = 340;
					   else if (*_coal == "341") coal = 341;
					   else if (*_coal == "342") coal = 342;
					   else if (*_coal == "343") coal = 343;
					   else if (*_coal == "344") coal = 344;
					   else if (*_coal == "345") coal = 345;
					   else if (*_coal == "346") coal = 346;
					   else if (*_coal == "347") coal = 347;
					   else if (*_coal == "348") coal = 348;
					   else if (*_coal == "349") coal = 349;
					   else if (*_coal == "350") coal = 350;
					   else if (*_coal == "351") coal = 351;
					   else if (*_coal == "352") coal = 352;
					   else if (*_coal == "353") coal = 353;
					   else if (*_coal == "354") coal = 354;
					   else if (*_coal == "355") coal = 355;
					   else if (*_coal == "356") coal = 356;
					   else if (*_coal == "357") coal = 357;
					   else if (*_coal == "358") coal = 358;
					   else if (*_coal == "359") coal = 359;
					   else if (*_coal == "360") coal = 360;
					   if (*_coal == "361") coal = 361;
					   else if (*_coal == "362") coal = 362;
					   else if (*_coal == "363") coal = 363;
					   else if (*_coal == "364") coal = 364;
					   else if (*_coal == "365") coal = 365;
					   else if (*_coal == "366") coal = 366;
					   else if (*_coal == "367") coal = 367;
					   else if (*_coal == "368") coal = 368;
					   else if (*_coal == "369") coal = 369;
					   else if (*_coal == "370") coal = 370;
					   else if (*_coal == "371") coal = 371;
					   else if (*_coal == "372") coal = 372;
					   else if (*_coal == "373") coal = 373;
					   else if (*_coal == "374") coal = 374;
					   else if (*_coal == "375") coal = 375;
					   else if (*_coal == "376") coal = 376;
					   else if (*_coal == "377") coal = 377;
					   else if (*_coal == "378") coal = 378;
					   else if (*_coal == "379") coal = 379;
					   else if (*_coal == "380") coal = 380;
					   else if (*_coal == "381") coal = 381;
					   else if (*_coal == "382") coal = 382;
					   else if (*_coal == "383") coal = 383;
					   else if (*_coal == "384") coal = 384;
					   else if (*_coal == "385") coal = 385;
					   else if (*_coal == "386") coal = 386;
					   else if (*_coal == "387") coal = 387;
					   else if (*_coal == "388") coal = 388;
					   else if (*_coal == "389") coal = 389;
					   else if (*_coal == "390") coal = 390;
					   else if (*_coal == "391") coal = 391;
					   else if (*_coal == "392") coal = 392;
					   else if (*_coal == "393") coal = 393;
					   else if (*_coal == "394") coal = 394;
					   else if (*_coal == "395") coal = 395;
					   else if (*_coal == "396") coal = 396;
					   else if (*_coal == "397") coal = 397;
					   else if (*_coal == "398") coal = 398;
					   else if (*_coal == "399") coal = 399;
					   else if (*_coal == "400") coal = 400;
					   else if (*_coal == "401") coal = 401;
					   else if (*_coal == "402") coal = 402;
					   else if (*_coal == "403") coal = 403;
					   else if (*_coal == "404") coal = 404;
					   else if (*_coal == "405") coal = 405;
					   else if (*_coal == "406") coal = 406;
					   else if (*_coal == "407") coal = 407;
					   else if (*_coal == "408") coal = 408;
					   else if (*_coal == "409") coal = 409;
					   else if (*_coal == "410") coal = 410;
					   else if (*_coal == "411") coal = 411;
					   else if (*_coal == "412") coal = 412;
					   else if (*_coal == "413") coal = 413;
					   else if (*_coal == "414") coal = 414;
					   else if (*_coal == "415") coal = 415;
					   else if (*_coal == "416") coal = 416;
					   else if (*_coal == "417") coal = 417;
					   else if (*_coal == "418") coal = 418;
					   else if (*_coal == "419") coal = 419;
					   else if (*_coal == "420") coal = 420;
					   else if (*_coal == "421") coal = 421;
					   else if (*_coal == "422") coal = 422;
					   else if (*_coal == "423") coal = 423;
					   else if (*_coal == "424") coal = 424;
					   else if (*_coal == "425") coal = 425;
					   else if (*_coal == "426") coal = 426;
					   else if (*_coal == "427") coal = 427;
					   else if (*_coal == "428") coal = 428;
					   else if (*_coal == "429") coal = 429;
					   else if (*_coal == "430") coal = 430;
					   else if (*_coal == "431") coal = 431;
					   else if (*_coal == "432") coal = 432;
					   else if (*_coal == "433") coal = 433;
					   else if (*_coal == "434") coal = 434;
					   else if (*_coal == "435") coal = 435;
					   else if (*_coal == "436") coal = 436;
					   else if (*_coal == "437") coal = 437;
					   else if (*_coal == "438") coal = 438;
					   else if (*_coal == "439") coal = 439;
					   else if (*_coal == "440") coal = 440;
					   else if (*_coal == "441") coal = 441;
					   else if (*_coal == "442") coal = 442;
					   else if (*_coal == "443") coal = 443;
					   else if (*_coal == "444") coal = 444;
					   else if (*_coal == "445") coal = 445;
					   else if (*_coal == "446") coal = 446;
					   else if (*_coal == "447") coal = 447;
					   else if (*_coal == "448") coal = 448;
					   else if (*_coal == "449") coal = 449;
					   else if (*_coal == "450") coal = 450;
					   else if (*_coal == "451") coal = 451;
					   else if (*_coal == "452") coal = 452;
					   else if (*_coal == "453") coal = 453;
					   else if (*_coal == "454") coal = 454;
					   else if (*_coal == "455") coal = 455;
					   else if (*_coal == "456") coal = 456;
					   else if (*_coal == "457") coal = 457;
					   else if (*_coal == "458") coal = 458;
					   else if (*_coal == "459") coal = 459;
					   else if (*_coal == "460") coal = 460;
					   else if (*_coal == "461") coal = 461;
					   else if (*_coal == "462") coal = 462;
					   else if (*_coal == "463") coal = 463;
					   else if (*_coal == "464") coal = 464;
					   else if (*_coal == "465") coal = 465;
					   else if (*_coal == "466") coal = 466;
					   else if (*_coal == "467") coal = 467;
					   else if (*_coal == "468") coal = 468;
					   else if (*_coal == "469") coal = 469;
					   else if (*_coal == "470") coal = 470;
					   else if (*_coal == "471") coal = 471;
					   else if (*_coal == "472") coal = 472;
					   else if (*_coal == "473") coal = 473;
					   else if (*_coal == "474") coal = 474;
					   else if (*_coal == "475") coal = 475;
					   else if (*_coal == "476") coal = 476;
					   else if (*_coal == "477") coal = 477;
					   else if (*_coal == "478") coal = 478;
					   else if (*_coal == "479") coal = 479;
					   else if (*_coal == "480") coal = 480;
					   if (*_coal == "481") coal = 481;
					   else if (*_coal == "482") coal = 482;
					   else if (*_coal == "483") coal = 483;
					   else if (*_coal == "484") coal = 484;
					   else if (*_coal == "485") coal = 485;
					   else if (*_coal == "486") coal = 486;
					   else if (*_coal == "487") coal = 487;
					   else if (*_coal == "488") coal = 488;
					   else if (*_coal == "489") coal = 489;
					   else if (*_coal == "490") coal = 490;
					   else if (*_coal == "491") coal = 491;
					   else if (*_coal == "492") coal = 492;
					   else if (*_coal == "493") coal = 493;
					   else if (*_coal == "494") coal = 494;
					   else if (*_coal == "495") coal = 495;
					   else if (*_coal == "496") coal = 496;
					   else if (*_coal == "497") coal = 497;
					   else if (*_coal == "498") coal = 498;
					   else if (*_coal == "499") coal = 499;
					   else if (*_coal == "500") coal = 500;
					   else if (*_coal == "501") coal = 501;
					   else if (*_coal == "502") coal = 502;
					   else if (*_coal == "503") coal = 503;
					   else if (*_coal == "504") coal = 504;
					   else if (*_coal == "505") coal = 505;
					   else if (*_coal == "506") coal = 506;
					   else if (*_coal == "507") coal = 507;
					   else if (*_coal == "508") coal = 508;
					   else if (*_coal == "509") coal = 509;
					   else if (*_coal == "510") coal = 510;
					   else if (*_coal == "511") coal = 511;
					   else if (*_coal == "512") coal = 512;
					   else if (*_coal == "513") coal = 513;
					   else if (*_coal == "514") coal = 514;
					   else if (*_coal == "515") coal = 515;
					   else if (*_coal == "516") coal = 516;
					   else if (*_coal == "517") coal = 517;
					   else if (*_coal == "518") coal = 518;
					   else if (*_coal == "519") coal = 519;
					   else if (*_coal == "520") coal = 520;
					   else if (*_coal == "521") coal = 521;
					   else if (*_coal == "522") coal = 522;
					   else if (*_coal == "523") coal = 523;
					   else if (*_coal == "524") coal = 524;
					   else if (*_coal == "525") coal = 525;
					   else if (*_coal == "526") coal = 526;
					   else if (*_coal == "527") coal = 527;
					   else if (*_coal == "528") coal = 528;
					   else if (*_coal == "529") coal = 529;
					   else if (*_coal == "530") coal = 530;
					   else if (*_coal == "531") coal = 531;
					   else if (*_coal == "532") coal = 532;
					   else if (*_coal == "533") coal = 533;
					   else if (*_coal == "534") coal = 534;
					   else if (*_coal == "535") coal = 535;
					   else if (*_coal == "536") coal = 536;
					   else if (*_coal == "537") coal = 537;
					   else if (*_coal == "538") coal = 538;
					   else if (*_coal == "539") coal = 539;
					   else if (*_coal == "540") coal = 540;
					   else if (*_coal == "541") coal = 541;
					   else if (*_coal == "542") coal = 542;
					   else if (*_coal == "543") coal = 543;
					   else if (*_coal == "544") coal = 544;
					   else if (*_coal == "545") coal = 545;
					   else if (*_coal == "546") coal = 546;
					   else if (*_coal == "547") coal = 547;
					   else if (*_coal == "548") coal = 548;
					   else if (*_coal == "549") coal = 549;
					   else if (*_coal == "550") coal = 550;
					   else if (*_coal == "551") coal = 551;
					   else if (*_coal == "552") coal = 552;
					   else if (*_coal == "553") coal = 553;
					   else if (*_coal == "554") coal = 554;
					   else if (*_coal == "555") coal = 555;
					   else if (*_coal == "556") coal = 556;
					   else if (*_coal == "557") coal = 557;
					   else if (*_coal == "558") coal = 558;
					   else if (*_coal == "559") coal = 559;
					   else if (*_coal == "560") coal = 560;
					   else if (*_coal == "561") coal = 561;
					   else if (*_coal == "562") coal = 562;
					   else if (*_coal == "563") coal = 563;
					   else if (*_coal == "564") coal = 564;
					   else if (*_coal == "565") coal = 565;
					   else if (*_coal == "566") coal = 566;
					   else if (*_coal == "567") coal = 567;
					   else if (*_coal == "568") coal = 568;
					   else if (*_coal == "569") coal = 569;
					   else if (*_coal == "570") coal = 570;
					   else if (*_coal == "571") coal = 571;
					   else if (*_coal == "572") coal = 572;
					   else if (*_coal == "573") coal = 573;
					   else if (*_coal == "574") coal = 574;
					   else if (*_coal == "575") coal = 575;
					   else if (*_coal == "576") coal = 576;
					   else if (*_coal == "577") coal = 577;
					   else if (*_coal == "578") coal = 578;
					   else if (*_coal == "579") coal = 579;
					   else if (*_coal == "580") coal = 580;
					   else if (*_coal == "581") coal = 581;
					   else if (*_coal == "582") coal = 582;
					   else if (*_coal == "583") coal = 583;
					   else if (*_coal == "584") coal = 584;
					   else if (*_coal == "585") coal = 585;
					   else if (*_coal == "586") coal = 586;
					   else if (*_coal == "587") coal = 587;
					   else if (*_coal == "588") coal = 588;
					   else if (*_coal == "589") coal = 589;
					   else if (*_coal == "590") coal = 590;
					   else if (*_coal == "591") coal = 591;
					   else if (*_coal == "592") coal = 592;
					   else if (*_coal == "593") coal = 593;
					   else if (*_coal == "594") coal = 594;
					   else if (*_coal == "595") coal = 595;
					   else if (*_coal == "596") coal = 596;
					   else if (*_coal == "597") coal = 597;
					   else if (*_coal == "598") coal = 598;
					   else if (*_coal == "599") coal = 599;
					   else if (*_coal == "600") coal = 600;
					   if (*_coal == "601") coal = 601;
					   else if (*_coal == "602") coal = 602;
					   else if (*_coal == "603") coal = 603;
					   else if (*_coal == "604") coal = 604;
					   else if (*_coal == "605") coal = 605;
					   else if (*_coal == "606") coal = 606;
					   else if (*_coal == "607") coal = 607;
					   else if (*_coal == "608") coal = 608;
					   else if (*_coal == "609") coal = 609;
					   else if (*_coal == "610") coal = 610;
					   else if (*_coal == "611") coal = 611;
					   else if (*_coal == "612") coal = 612;
					   else if (*_coal == "613") coal = 613;
					   else if (*_coal == "614") coal = 614;
					   else if (*_coal == "615") coal = 615;
					   else if (*_coal == "616") coal = 616;
					   else if (*_coal == "617") coal = 617;
					   else if (*_coal == "618") coal = 618;
					   else if (*_coal == "619") coal = 619;
					   else if (*_coal == "620") coal = 620;
					   else if (*_coal == "621") coal = 621;
					   else if (*_coal == "622") coal = 622;
					   else if (*_coal == "623") coal = 623;
					   else if (*_coal == "624") coal = 624;
					   else if (*_coal == "625") coal = 625;
					   else if (*_coal == "626") coal = 626;
					   else if (*_coal == "627") coal = 627;
					   else if (*_coal == "628") coal = 628;
					   else if (*_coal == "629") coal = 629;
					   else if (*_coal == "630") coal = 630;
					   else if (*_coal == "631") coal = 631;
					   else if (*_coal == "632") coal = 632;
					   else if (*_coal == "633") coal = 633;
					   else if (*_coal == "634") coal = 634;
					   else if (*_coal == "635") coal = 635;
					   else if (*_coal == "636") coal = 636;
					   else if (*_coal == "637") coal = 637;
					   else if (*_coal == "638") coal = 638;
					   else if (*_coal == "639") coal = 639;
					   else if (*_coal == "640") coal = 640;
					   else if (*_coal == "641") coal = 641;
					   else if (*_coal == "642") coal = 642;
					   else if (*_coal == "643") coal = 643;
					   else if (*_coal == "644") coal = 644;
					   else if (*_coal == "645") coal = 645;
					   else if (*_coal == "646") coal = 646;
					   else if (*_coal == "647") coal = 647;
					   else if (*_coal == "648") coal = 648;
					   else if (*_coal == "649") coal = 649;
					   else if (*_coal == "650") coal = 650;
					   else if (*_coal == "651") coal = 651;
					   else if (*_coal == "652") coal = 652;
					   else if (*_coal == "653") coal = 653;
					   else if (*_coal == "654") coal = 654;
					   else if (*_coal == "655") coal = 655;
					   else if (*_coal == "656") coal = 656;
					   else if (*_coal == "657") coal = 657;
					   else if (*_coal == "658") coal = 658;
					   else if (*_coal == "659") coal = 659;
					   else if (*_coal == "660") coal = 660;
					   else if (*_coal == "661") coal = 661;
					   else if (*_coal == "662") coal = 662;
					   else if (*_coal == "663") coal = 663;
					   else if (*_coal == "664") coal = 664;
					   else if (*_coal == "665") coal = 665;
					   else if (*_coal == "666") coal = 666;
					   else if (*_coal == "667") coal = 667;
					   else if (*_coal == "668") coal = 668;
					   else if (*_coal == "669") coal = 669;
					   else if (*_coal == "670") coal = 670;
					   else if (*_coal == "671") coal = 671;
					   else if (*_coal == "672") coal = 672;
					   else if (*_coal == "673") coal = 673;
					   else if (*_coal == "674") coal = 674;
					   else if (*_coal == "675") coal = 675;
					   else if (*_coal == "676") coal = 676;
					   else if (*_coal == "677") coal = 677;
					   else if (*_coal == "678") coal = 678;
					   else if (*_coal == "679") coal = 679;
					   else if (*_coal == "680") coal = 680;
					   else if (*_coal == "681") coal = 681;
					   else if (*_coal == "682") coal = 682;
					   else if (*_coal == "683") coal = 683;
					   else if (*_coal == "684") coal = 684;
					   else if (*_coal == "685") coal = 685;
					   else if (*_coal == "686") coal = 686;
					   else if (*_coal == "687") coal = 687;
					   else if (*_coal == "688") coal = 688;
					   else if (*_coal == "689") coal = 689;
					   else if (*_coal == "690") coal = 690;
					   else if (*_coal == "691") coal = 691;
					   else if (*_coal == "692") coal = 692;
					   else if (*_coal == "693") coal = 693;
					   else if (*_coal == "694") coal = 694;
					   else if (*_coal == "695") coal = 695;
					   else if (*_coal == "696") coal = 696;
					   else if (*_coal == "697") coal = 697;
					   else if (*_coal == "698") coal = 698;
					   else if (*_coal == "699") coal = 699;
					   else if (*_coal == "700") coal = 700;

					   delete _coal;
				   }
				   {}
				   //human
				   {
					   string* _human = new string;

					   getline(Data, *_human);
					   if (*_human == "0") human = 0;
					   else if (*_human == "1") human = 1;
					   else if (*_human == "2") human = 2;
					   else if (*_human == "3") human = 3;
					   else if (*_human == "4") human = 4;
					   else if (*_human == "5") human = 5;
					   else if (*_human == "6") human = 6;
					   else if (*_human == "7") human = 7;
					   else if (*_human == "8") human = 8;
					   else if (*_human == "9") human = 9;
					   else if (*_human == "10") human = 10;
					   else if (*_human == "11") human = 11;
					   else if (*_human == "12") human = 12;
					   else if (*_human == "13") human = 13;
					   else if (*_human == "14") human = 14;
					   else if (*_human == "15") human = 15;
					   else if (*_human == "16") human = 16;
					   else if (*_human == "17") human = 17;
					   else if (*_human == "18") human = 18;
					   else if (*_human == "19") human = 19;
					   else if (*_human == "20") human = 20;
					   else if (*_human == "21") human = 21;
					   else if (*_human == "22") human = 22;
					   else if (*_human == "23") human = 23;
					   else if (*_human == "24") human = 24;
					   else if (*_human == "25") human = 25;
					   else if (*_human == "26") human = 26;
					   else if (*_human == "27") human = 27;
					   else if (*_human == "28") human = 28;
					   else if (*_human == "29") human = 29;
					   else if (*_human == "30") human = 30;
					   else if (*_human == "31") human = 31;
					   else if (*_human == "32") human = 32;
					   else if (*_human == "33") human = 33;
					   else if (*_human == "34") human = 34;
					   else if (*_human == "35") human = 35;
					   else if (*_human == "36") human = 36;
					   else if (*_human == "37") human = 37;
					   else if (*_human == "38") human = 38;
					   else if (*_human == "39") human = 39;
					   else if (*_human == "40") human = 40;
					   else if (*_human == "41") human = 41;
					   else if (*_human == "42") human = 42;
					   else if (*_human == "43") human = 43;
					   else if (*_human == "44") human = 44;
					   else if (*_human == "45") human = 45;
					   else if (*_human == "46") human = 46;
					   else if (*_human == "47") human = 47;
					   else if (*_human == "48") human = 48;
					   else if (*_human == "49") human = 49;
					   else if (*_human == "50") human = 50;
					   else if (*_human == "51") human = 51;
					   else if (*_human == "52") human = 52;
					   else if (*_human == "53") human = 53;
					   else if (*_human == "54") human = 54;
					   else if (*_human == "55") human = 55;
					   else if (*_human == "56") human = 56;
					   else if (*_human == "57") human = 57;
					   else if (*_human == "58") human = 58;
					   else if (*_human == "59") human = 59;
					   else if (*_human == "60") human = 60;
					   else if (*_human == "61") human = 61;
					   else if (*_human == "62") human = 62;
					   else if (*_human == "63") human = 63;
					   else if (*_human == "64") human = 64;
					   else if (*_human == "65") human = 65;
					   else if (*_human == "66") human = 66;
					   else if (*_human == "67") human = 67;
					   else if (*_human == "68") human = 68;
					   else if (*_human == "69") human = 69;
					   else if (*_human == "70") human = 70;
					   else if (*_human == "71") human = 71;
					   else if (*_human == "72") human = 72;
					   else if (*_human == "73") human = 73;
					   else if (*_human == "74") human = 74;
					   else if (*_human == "75") human = 75;
					   else if (*_human == "76") human = 76;
					   else if (*_human == "77") human = 77;
					   else if (*_human == "78") human = 78;
					   else if (*_human == "79") human = 79;
					   else if (*_human == "80") human = 80;
					   else if (*_human == "81") human = 81;
					   else if (*_human == "82") human = 82;
					   else if (*_human == "83") human = 83;
					   else if (*_human == "84") human = 84;
					   else if (*_human == "85") human = 85;
					   else if (*_human == "86") human = 86;
					   else if (*_human == "87") human = 87;
					   else if (*_human == "88") human = 88;
					   else if (*_human == "89") human = 89;
					   else if (*_human == "90") human = 90;
					   else if (*_human == "91") human = 91;
					   else if (*_human == "92") human = 92;
					   else if (*_human == "93") human = 93;
					   else if (*_human == "94") human = 94;
					   else if (*_human == "95") human = 95;
					   else if (*_human == "96") human = 96;
					   else if (*_human == "97") human = 97;
					   else if (*_human == "98") human = 98;
					   else if (*_human == "99") human = 99;
					   else if (*_human == "100") human = 100;
					   else if (*_human == "101") human = 101;
					   else if (*_human == "102") human = 102;
					   else if (*_human == "103") human = 103;
					   else if (*_human == "104") human = 104;
					   else if (*_human == "105") human = 105;
					   else if (*_human == "106") human = 106;
					   else if (*_human == "107") human = 107;
					   else if (*_human == "108") human = 108;
					   else if (*_human == "109") human = 109;
					   else if (*_human == "110") human = 110;
					   else if (*_human == "111") human = 111;
					   else if (*_human == "112") human = 112;
					   else if (*_human == "113") human = 113;
					   else if (*_human == "114") human = 114;
					   else if (*_human == "115") human = 115;
					   else if (*_human == "116") human = 116;
					   else if (*_human == "117") human = 117;
					   else if (*_human == "118") human = 118;
					   else if (*_human == "119") human = 119;
					   else if (*_human == "120") human = 120;
					   if (*_human == "121") human = 121;
					   else if (*_human == "122") human = 122;
					   else if (*_human == "123") human = 123;
					   else if (*_human == "124") human = 124;
					   else if (*_human == "125") human = 125;
					   else if (*_human == "126") human = 126;
					   else if (*_human == "127") human = 127;
					   else if (*_human == "128") human = 128;
					   else if (*_human == "129") human = 129;
					   else if (*_human == "130") human = 130;
					   else if (*_human == "131") human = 131;
					   else if (*_human == "132") human = 132;
					   else if (*_human == "133") human = 133;
					   else if (*_human == "134") human = 134;
					   else if (*_human == "135") human = 135;
					   else if (*_human == "136") human = 136;
					   else if (*_human == "137") human = 137;
					   else if (*_human == "138") human = 138;
					   else if (*_human == "139") human = 139;
					   else if (*_human == "140") human = 140;
					   else if (*_human == "141") human = 141;
					   else if (*_human == "142") human = 142;
					   else if (*_human == "143") human = 143;
					   else if (*_human == "144") human = 144;
					   else if (*_human == "145") human = 145;
					   else if (*_human == "146") human = 146;
					   else if (*_human == "147") human = 147;
					   else if (*_human == "148") human = 148;
					   else if (*_human == "149") human = 149;
					   else if (*_human == "150") human = 150;
					   else if (*_human == "151") human = 151;
					   else if (*_human == "152") human = 152;
					   else if (*_human == "153") human = 153;
					   else if (*_human == "154") human = 154;
					   else if (*_human == "155") human = 155;
					   else if (*_human == "156") human = 156;
					   else if (*_human == "157") human = 157;
					   else if (*_human == "158") human = 158;
					   else if (*_human == "159") human = 159;
					   else if (*_human == "160") human = 160;
					   else if (*_human == "161") human = 161;
					   else if (*_human == "162") human = 162;
					   else if (*_human == "163") human = 163;
					   else if (*_human == "164") human = 164;
					   else if (*_human == "165") human = 165;
					   else if (*_human == "166") human = 166;
					   else if (*_human == "167") human = 167;
					   else if (*_human == "168") human = 168;
					   else if (*_human == "169") human = 169;
					   else if (*_human == "170") human = 170;
					   else if (*_human == "171") human = 171;
					   else if (*_human == "172") human = 172;
					   else if (*_human == "173") human = 173;
					   else if (*_human == "174") human = 174;
					   else if (*_human == "175") human = 175;
					   else if (*_human == "176") human = 176;
					   else if (*_human == "177") human = 177;
					   else if (*_human == "178") human = 178;
					   else if (*_human == "179") human = 179;
					   else if (*_human == "180") human = 180;
					   else if (*_human == "181") human = 181;
					   else if (*_human == "182") human = 182;
					   else if (*_human == "183") human = 183;
					   else if (*_human == "184") human = 184;
					   else if (*_human == "185") human = 185;
					   else if (*_human == "186") human = 186;
					   else if (*_human == "187") human = 187;
					   else if (*_human == "188") human = 188;
					   else if (*_human == "189") human = 189;
					   else if (*_human == "190") human = 190;
					   else if (*_human == "191") human = 191;
					   else if (*_human == "192") human = 192;
					   else if (*_human == "193") human = 193;
					   else if (*_human == "194") human = 194;
					   else if (*_human == "195") human = 195;
					   else if (*_human == "196") human = 196;
					   else if (*_human == "197") human = 197;
					   else if (*_human == "198") human = 198;
					   else if (*_human == "199") human = 199;
					   else if (*_human == "200") human = 200;
					   else if (*_human == "201") human = 201;
					   else if (*_human == "202") human = 202;
					   else if (*_human == "203") human = 203;
					   else if (*_human == "204") human = 204;
					   else if (*_human == "205") human = 205;
					   else if (*_human == "206") human = 206;
					   else if (*_human == "207") human = 207;
					   else if (*_human == "208") human = 208;
					   else if (*_human == "209") human = 209;
					   else if (*_human == "210") human = 210;
					   else if (*_human == "211") human = 211;
					   else if (*_human == "212") human = 212;
					   else if (*_human == "213") human = 213;
					   else if (*_human == "214") human = 214;
					   else if (*_human == "215") human = 215;
					   else if (*_human == "216") human = 216;
					   else if (*_human == "217") human = 217;
					   else if (*_human == "218") human = 218;
					   else if (*_human == "219") human = 219;
					   else if (*_human == "220") human = 220;
					   else if (*_human == "221") human = 221;
					   else if (*_human == "222") human = 222;
					   else if (*_human == "223") human = 223;
					   else if (*_human == "224") human = 224;
					   else if (*_human == "225") human = 225;
					   else if (*_human == "226") human = 226;
					   else if (*_human == "227") human = 227;
					   else if (*_human == "228") human = 228;
					   else if (*_human == "229") human = 229;
					   else if (*_human == "230") human = 230;
					   else if (*_human == "231") human = 231;
					   else if (*_human == "232") human = 232;
					   else if (*_human == "233") human = 233;
					   else if (*_human == "234") human = 234;
					   else if (*_human == "235") human = 235;
					   else if (*_human == "236") human = 236;
					   else if (*_human == "237") human = 237;
					   else if (*_human == "238") human = 238;
					   else if (*_human == "239") human = 239;
					   else if (*_human == "240") human = 240;
					   if (*_human == "241") human = 241;
					   else if (*_human == "242") human = 242;
					   else if (*_human == "243") human = 243;
					   else if (*_human == "244") human = 244;
					   else if (*_human == "245") human = 245;
					   else if (*_human == "246") human = 246;
					   else if (*_human == "247") human = 247;
					   else if (*_human == "248") human = 248;
					   else if (*_human == "249") human = 249;
					   else if (*_human == "250") human = 250;
					   else if (*_human == "251") human = 251;
					   else if (*_human == "252") human = 252;
					   else if (*_human == "253") human = 253;
					   else if (*_human == "254") human = 254;
					   else if (*_human == "255") human = 255;
					   else if (*_human == "256") human = 256;
					   else if (*_human == "257") human = 257;
					   else if (*_human == "258") human = 258;
					   else if (*_human == "259") human = 259;
					   else if (*_human == "260") human = 260;
					   else if (*_human == "261") human = 261;
					   else if (*_human == "262") human = 262;
					   else if (*_human == "263") human = 263;
					   else if (*_human == "264") human = 264;
					   else if (*_human == "265") human = 265;
					   else if (*_human == "266") human = 266;
					   else if (*_human == "267") human = 267;
					   else if (*_human == "268") human = 268;
					   else if (*_human == "269") human = 269;
					   else if (*_human == "270") human = 270;
					   else if (*_human == "271") human = 271;
					   else if (*_human == "272") human = 272;
					   else if (*_human == "273") human = 273;
					   else if (*_human == "274") human = 274;
					   else if (*_human == "275") human = 275;
					   else if (*_human == "276") human = 276;
					   else if (*_human == "277") human = 277;
					   else if (*_human == "278") human = 278;
					   else if (*_human == "279") human = 279;
					   else if (*_human == "280") human = 280;
					   else if (*_human == "281") human = 281;
					   else if (*_human == "282") human = 282;
					   else if (*_human == "283") human = 283;
					   else if (*_human == "284") human = 284;
					   else if (*_human == "285") human = 285;
					   else if (*_human == "286") human = 286;
					   else if (*_human == "287") human = 287;
					   else if (*_human == "288") human = 288;
					   else if (*_human == "289") human = 289;
					   else if (*_human == "290") human = 290;
					   else if (*_human == "291") human = 291;
					   else if (*_human == "292") human = 292;
					   else if (*_human == "293") human = 293;
					   else if (*_human == "294") human = 294;
					   else if (*_human == "295") human = 295;
					   else if (*_human == "296") human = 296;
					   else if (*_human == "297") human = 297;
					   else if (*_human == "298") human = 298;
					   else if (*_human == "299") human = 299;
					   else if (*_human == "300") human = 300;
					   else if (*_human == "301") human = 301;
					   else if (*_human == "302") human = 302;
					   else if (*_human == "303") human = 303;
					   else if (*_human == "304") human = 304;
					   else if (*_human == "305") human = 305;
					   else if (*_human == "306") human = 306;
					   else if (*_human == "307") human = 307;
					   else if (*_human == "308") human = 308;
					   else if (*_human == "309") human = 309;
					   else if (*_human == "310") human = 310;
					   else if (*_human == "311") human = 311;
					   else if (*_human == "312") human = 312;
					   else if (*_human == "313") human = 313;
					   else if (*_human == "314") human = 314;
					   else if (*_human == "315") human = 315;
					   else if (*_human == "316") human = 316;
					   else if (*_human == "317") human = 317;
					   else if (*_human == "318") human = 318;
					   else if (*_human == "319") human = 319;
					   else if (*_human == "320") human = 320;
					   else if (*_human == "321") human = 321;
					   else if (*_human == "322") human = 322;
					   else if (*_human == "323") human = 323;
					   else if (*_human == "324") human = 324;
					   else if (*_human == "325") human = 325;
					   else if (*_human == "326") human = 326;
					   else if (*_human == "327") human = 327;
					   else if (*_human == "328") human = 328;
					   else if (*_human == "329") human = 329;
					   else if (*_human == "330") human = 330;
					   else if (*_human == "331") human = 331;
					   else if (*_human == "332") human = 332;
					   else if (*_human == "333") human = 333;
					   else if (*_human == "334") human = 334;
					   else if (*_human == "335") human = 335;
					   else if (*_human == "336") human = 336;
					   else if (*_human == "337") human = 337;
					   else if (*_human == "338") human = 338;
					   else if (*_human == "339") human = 339;
					   else if (*_human == "340") human = 340;
					   else if (*_human == "341") human = 341;
					   else if (*_human == "342") human = 342;
					   else if (*_human == "343") human = 343;
					   else if (*_human == "344") human = 344;
					   else if (*_human == "345") human = 345;
					   else if (*_human == "346") human = 346;
					   else if (*_human == "347") human = 347;
					   else if (*_human == "348") human = 348;
					   else if (*_human == "349") human = 349;
					   else if (*_human == "350") human = 350;
					   else if (*_human == "351") human = 351;
					   else if (*_human == "352") human = 352;
					   else if (*_human == "353") human = 353;
					   else if (*_human == "354") human = 354;
					   else if (*_human == "355") human = 355;
					   else if (*_human == "356") human = 356;
					   else if (*_human == "357") human = 357;
					   else if (*_human == "358") human = 358;
					   else if (*_human == "359") human = 359;
					   else if (*_human == "360") human = 360;
					   if (*_human == "361") human = 361;
					   else if (*_human == "362") human = 362;
					   else if (*_human == "363") human = 363;
					   else if (*_human == "364") human = 364;
					   else if (*_human == "365") human = 365;
					   else if (*_human == "366") human = 366;
					   else if (*_human == "367") human = 367;
					   else if (*_human == "368") human = 368;
					   else if (*_human == "369") human = 369;
					   else if (*_human == "370") human = 370;
					   else if (*_human == "371") human = 371;
					   else if (*_human == "372") human = 372;
					   else if (*_human == "373") human = 373;
					   else if (*_human == "374") human = 374;
					   else if (*_human == "375") human = 375;
					   else if (*_human == "376") human = 376;
					   else if (*_human == "377") human = 377;
					   else if (*_human == "378") human = 378;
					   else if (*_human == "379") human = 379;
					   else if (*_human == "380") human = 380;
					   else if (*_human == "381") human = 381;
					   else if (*_human == "382") human = 382;
					   else if (*_human == "383") human = 383;
					   else if (*_human == "384") human = 384;
					   else if (*_human == "385") human = 385;
					   else if (*_human == "386") human = 386;
					   else if (*_human == "387") human = 387;
					   else if (*_human == "388") human = 388;
					   else if (*_human == "389") human = 389;
					   else if (*_human == "390") human = 390;
					   else if (*_human == "391") human = 391;
					   else if (*_human == "392") human = 392;
					   else if (*_human == "393") human = 393;
					   else if (*_human == "394") human = 394;
					   else if (*_human == "395") human = 395;
					   else if (*_human == "396") human = 396;
					   else if (*_human == "397") human = 397;
					   else if (*_human == "398") human = 398;
					   else if (*_human == "399") human = 399;
					   else if (*_human == "400") human = 400;
					   else if (*_human == "401") human = 401;
					   else if (*_human == "402") human = 402;
					   else if (*_human == "403") human = 403;
					   else if (*_human == "404") human = 404;
					   else if (*_human == "405") human = 405;
					   else if (*_human == "406") human = 406;
					   else if (*_human == "407") human = 407;
					   else if (*_human == "408") human = 408;
					   else if (*_human == "409") human = 409;
					   else if (*_human == "410") human = 410;
					   else if (*_human == "411") human = 411;
					   else if (*_human == "412") human = 412;
					   else if (*_human == "413") human = 413;
					   else if (*_human == "414") human = 414;
					   else if (*_human == "415") human = 415;
					   else if (*_human == "416") human = 416;
					   else if (*_human == "417") human = 417;
					   else if (*_human == "418") human = 418;
					   else if (*_human == "419") human = 419;
					   else if (*_human == "420") human = 420;
					   else if (*_human == "421") human = 421;
					   else if (*_human == "422") human = 422;
					   else if (*_human == "423") human = 423;
					   else if (*_human == "424") human = 424;
					   else if (*_human == "425") human = 425;
					   else if (*_human == "426") human = 426;
					   else if (*_human == "427") human = 427;
					   else if (*_human == "428") human = 428;
					   else if (*_human == "429") human = 429;
					   else if (*_human == "430") human = 430;
					   else if (*_human == "431") human = 431;
					   else if (*_human == "432") human = 432;
					   else if (*_human == "433") human = 433;
					   else if (*_human == "434") human = 434;
					   else if (*_human == "435") human = 435;
					   else if (*_human == "436") human = 436;
					   else if (*_human == "437") human = 437;
					   else if (*_human == "438") human = 438;
					   else if (*_human == "439") human = 439;
					   else if (*_human == "440") human = 440;
					   else if (*_human == "441") human = 441;
					   else if (*_human == "442") human = 442;
					   else if (*_human == "443") human = 443;
					   else if (*_human == "444") human = 444;
					   else if (*_human == "445") human = 445;
					   else if (*_human == "446") human = 446;
					   else if (*_human == "447") human = 447;
					   else if (*_human == "448") human = 448;
					   else if (*_human == "449") human = 449;
					   else if (*_human == "450") human = 450;
					   else if (*_human == "451") human = 451;
					   else if (*_human == "452") human = 452;
					   else if (*_human == "453") human = 453;
					   else if (*_human == "454") human = 454;
					   else if (*_human == "455") human = 455;
					   else if (*_human == "456") human = 456;
					   else if (*_human == "457") human = 457;
					   else if (*_human == "458") human = 458;
					   else if (*_human == "459") human = 459;
					   else if (*_human == "460") human = 460;
					   else if (*_human == "461") human = 461;
					   else if (*_human == "462") human = 462;
					   else if (*_human == "463") human = 463;
					   else if (*_human == "464") human = 464;
					   else if (*_human == "465") human = 465;
					   else if (*_human == "466") human = 466;
					   else if (*_human == "467") human = 467;
					   else if (*_human == "468") human = 468;
					   else if (*_human == "469") human = 469;
					   else if (*_human == "470") human = 470;
					   else if (*_human == "471") human = 471;
					   else if (*_human == "472") human = 472;
					   else if (*_human == "473") human = 473;
					   else if (*_human == "474") human = 474;
					   else if (*_human == "475") human = 475;
					   else if (*_human == "476") human = 476;
					   else if (*_human == "477") human = 477;
					   else if (*_human == "478") human = 478;
					   else if (*_human == "479") human = 479;
					   else if (*_human == "480") human = 480;
					   if (*_human == "481") human = 481;
					   else if (*_human == "482") human = 482;
					   else if (*_human == "483") human = 483;
					   else if (*_human == "484") human = 484;
					   else if (*_human == "485") human = 485;
					   else if (*_human == "486") human = 486;
					   else if (*_human == "487") human = 487;
					   else if (*_human == "488") human = 488;
					   else if (*_human == "489") human = 489;
					   else if (*_human == "490") human = 490;
					   else if (*_human == "491") human = 491;
					   else if (*_human == "492") human = 492;
					   else if (*_human == "493") human = 493;
					   else if (*_human == "494") human = 494;
					   else if (*_human == "495") human = 495;
					   else if (*_human == "496") human = 496;
					   else if (*_human == "497") human = 497;
					   else if (*_human == "498") human = 498;
					   else if (*_human == "499") human = 499;
					   else if (*_human == "500") human = 500;
					   else if (*_human == "501") human = 501;
					   else if (*_human == "502") human = 502;
					   else if (*_human == "503") human = 503;
					   else if (*_human == "504") human = 504;
					   else if (*_human == "505") human = 505;
					   else if (*_human == "506") human = 506;
					   else if (*_human == "507") human = 507;
					   else if (*_human == "508") human = 508;
					   else if (*_human == "509") human = 509;
					   else if (*_human == "510") human = 510;
					   else if (*_human == "511") human = 511;
					   else if (*_human == "512") human = 512;
					   else if (*_human == "513") human = 513;
					   else if (*_human == "514") human = 514;
					   else if (*_human == "515") human = 515;
					   else if (*_human == "516") human = 516;
					   else if (*_human == "517") human = 517;
					   else if (*_human == "518") human = 518;
					   else if (*_human == "519") human = 519;
					   else if (*_human == "520") human = 520;
					   else if (*_human == "521") human = 521;
					   else if (*_human == "522") human = 522;
					   else if (*_human == "523") human = 523;
					   else if (*_human == "524") human = 524;
					   else if (*_human == "525") human = 525;
					   else if (*_human == "526") human = 526;
					   else if (*_human == "527") human = 527;
					   else if (*_human == "528") human = 528;
					   else if (*_human == "529") human = 529;
					   else if (*_human == "530") human = 530;
					   else if (*_human == "531") human = 531;
					   else if (*_human == "532") human = 532;
					   else if (*_human == "533") human = 533;
					   else if (*_human == "534") human = 534;
					   else if (*_human == "535") human = 535;
					   else if (*_human == "536") human = 536;
					   else if (*_human == "537") human = 537;
					   else if (*_human == "538") human = 538;
					   else if (*_human == "539") human = 539;
					   else if (*_human == "540") human = 540;
					   else if (*_human == "541") human = 541;
					   else if (*_human == "542") human = 542;
					   else if (*_human == "543") human = 543;
					   else if (*_human == "544") human = 544;
					   else if (*_human == "545") human = 545;
					   else if (*_human == "546") human = 546;
					   else if (*_human == "547") human = 547;
					   else if (*_human == "548") human = 548;
					   else if (*_human == "549") human = 549;
					   else if (*_human == "550") human = 550;
					   else if (*_human == "551") human = 551;
					   else if (*_human == "552") human = 552;
					   else if (*_human == "553") human = 553;
					   else if (*_human == "554") human = 554;
					   else if (*_human == "555") human = 555;
					   else if (*_human == "556") human = 556;
					   else if (*_human == "557") human = 557;
					   else if (*_human == "558") human = 558;
					   else if (*_human == "559") human = 559;
					   else if (*_human == "560") human = 560;
					   else if (*_human == "561") human = 561;
					   else if (*_human == "562") human = 562;
					   else if (*_human == "563") human = 563;
					   else if (*_human == "564") human = 564;
					   else if (*_human == "565") human = 565;
					   else if (*_human == "566") human = 566;
					   else if (*_human == "567") human = 567;
					   else if (*_human == "568") human = 568;
					   else if (*_human == "569") human = 569;
					   else if (*_human == "570") human = 570;
					   else if (*_human == "571") human = 571;
					   else if (*_human == "572") human = 572;
					   else if (*_human == "573") human = 573;
					   else if (*_human == "574") human = 574;
					   else if (*_human == "575") human = 575;
					   else if (*_human == "576") human = 576;
					   else if (*_human == "577") human = 577;
					   else if (*_human == "578") human = 578;
					   else if (*_human == "579") human = 579;
					   else if (*_human == "580") human = 580;
					   else if (*_human == "581") human = 581;
					   else if (*_human == "582") human = 582;
					   else if (*_human == "583") human = 583;
					   else if (*_human == "584") human = 584;
					   else if (*_human == "585") human = 585;
					   else if (*_human == "586") human = 586;
					   else if (*_human == "587") human = 587;
					   else if (*_human == "588") human = 588;
					   else if (*_human == "589") human = 589;
					   else if (*_human == "590") human = 590;
					   else if (*_human == "591") human = 591;
					   else if (*_human == "592") human = 592;
					   else if (*_human == "593") human = 593;
					   else if (*_human == "594") human = 594;
					   else if (*_human == "595") human = 595;
					   else if (*_human == "596") human = 596;
					   else if (*_human == "597") human = 597;
					   else if (*_human == "598") human = 598;
					   else if (*_human == "599") human = 599;
					   else if (*_human == "600") human = 600;
					   if (*_human == "601") human = 601;
					   else if (*_human == "602") human = 602;
					   else if (*_human == "603") human = 603;
					   else if (*_human == "604") human = 604;
					   else if (*_human == "605") human = 605;
					   else if (*_human == "606") human = 606;
					   else if (*_human == "607") human = 607;
					   else if (*_human == "608") human = 608;
					   else if (*_human == "609") human = 609;
					   else if (*_human == "610") human = 610;
					   else if (*_human == "611") human = 611;
					   else if (*_human == "612") human = 612;
					   else if (*_human == "613") human = 613;
					   else if (*_human == "614") human = 614;
					   else if (*_human == "615") human = 615;
					   else if (*_human == "616") human = 616;
					   else if (*_human == "617") human = 617;
					   else if (*_human == "618") human = 618;
					   else if (*_human == "619") human = 619;
					   else if (*_human == "620") human = 620;
					   else if (*_human == "621") human = 621;
					   else if (*_human == "622") human = 622;
					   else if (*_human == "623") human = 623;
					   else if (*_human == "624") human = 624;
					   else if (*_human == "625") human = 625;
					   else if (*_human == "626") human = 626;
					   else if (*_human == "627") human = 627;
					   else if (*_human == "628") human = 628;
					   else if (*_human == "629") human = 629;
					   else if (*_human == "630") human = 630;
					   else if (*_human == "631") human = 631;
					   else if (*_human == "632") human = 632;
					   else if (*_human == "633") human = 633;
					   else if (*_human == "634") human = 634;
					   else if (*_human == "635") human = 635;
					   else if (*_human == "636") human = 636;
					   else if (*_human == "637") human = 637;
					   else if (*_human == "638") human = 638;
					   else if (*_human == "639") human = 639;
					   else if (*_human == "640") human = 640;
					   else if (*_human == "641") human = 641;
					   else if (*_human == "642") human = 642;
					   else if (*_human == "643") human = 643;
					   else if (*_human == "644") human = 644;
					   else if (*_human == "645") human = 645;
					   else if (*_human == "646") human = 646;
					   else if (*_human == "647") human = 647;
					   else if (*_human == "648") human = 648;
					   else if (*_human == "649") human = 649;
					   else if (*_human == "650") human = 650;
					   else if (*_human == "651") human = 651;
					   else if (*_human == "652") human = 652;
					   else if (*_human == "653") human = 653;
					   else if (*_human == "654") human = 654;
					   else if (*_human == "655") human = 655;
					   else if (*_human == "656") human = 656;
					   else if (*_human == "657") human = 657;
					   else if (*_human == "658") human = 658;
					   else if (*_human == "659") human = 659;
					   else if (*_human == "660") human = 660;
					   else if (*_human == "661") human = 661;
					   else if (*_human == "662") human = 662;
					   else if (*_human == "663") human = 663;
					   else if (*_human == "664") human = 664;
					   else if (*_human == "665") human = 665;
					   else if (*_human == "666") human = 666;
					   else if (*_human == "667") human = 667;
					   else if (*_human == "668") human = 668;
					   else if (*_human == "669") human = 669;
					   else if (*_human == "670") human = 670;
					   else if (*_human == "671") human = 671;
					   else if (*_human == "672") human = 672;
					   else if (*_human == "673") human = 673;
					   else if (*_human == "674") human = 674;
					   else if (*_human == "675") human = 675;
					   else if (*_human == "676") human = 676;
					   else if (*_human == "677") human = 677;
					   else if (*_human == "678") human = 678;
					   else if (*_human == "679") human = 679;
					   else if (*_human == "680") human = 680;
					   else if (*_human == "681") human = 681;
					   else if (*_human == "682") human = 682;
					   else if (*_human == "683") human = 683;
					   else if (*_human == "684") human = 684;
					   else if (*_human == "685") human = 685;
					   else if (*_human == "686") human = 686;
					   else if (*_human == "687") human = 687;
					   else if (*_human == "688") human = 688;
					   else if (*_human == "689") human = 689;
					   else if (*_human == "690") human = 690;
					   else if (*_human == "691") human = 691;
					   else if (*_human == "692") human = 692;
					   else if (*_human == "693") human = 693;
					   else if (*_human == "694") human = 694;
					   else if (*_human == "695") human = 695;
					   else if (*_human == "696") human = 696;
					   else if (*_human == "697") human = 697;
					   else if (*_human == "698") human = 698;
					   else if (*_human == "699") human = 699;
					   else if (*_human == "700") human = 700;
					   if (*_human == "701") human = 701;
					   else if (*_human == "702") human = 702;
					   else if (*_human == "703") human = 703;
					   else if (*_human == "704") human = 704;
					   else if (*_human == "705") human = 705;
					   else if (*_human == "706") human = 706;
					   else if (*_human == "707") human = 707;
					   else if (*_human == "708") human = 708;
					   else if (*_human == "709") human = 709;
					   else if (*_human == "710") human = 710;
					   else if (*_human == "711") human = 711;
					   else if (*_human == "712") human = 712;
					   else if (*_human == "713") human = 713;
					   else if (*_human == "714") human = 714;
					   else if (*_human == "715") human = 715;
					   else if (*_human == "716") human = 716;
					   else if (*_human == "717") human = 717;
					   else if (*_human == "718") human = 718;
					   else if (*_human == "719") human = 719;
					   else if (*_human == "720") human = 720;
					   else if (*_human == "721") human = 721;
					   else if (*_human == "722") human = 722;
					   else if (*_human == "723") human = 723;
					   else if (*_human == "724") human = 724;
					   else if (*_human == "725") human = 725;
					   else if (*_human == "726") human = 726;
					   else if (*_human == "727") human = 727;
					   else if (*_human == "728") human = 728;
					   else if (*_human == "729") human = 729;
					   else if (*_human == "730") human = 730;
					   else if (*_human == "731") human = 731;
					   else if (*_human == "732") human = 732;
					   else if (*_human == "733") human = 733;
					   else if (*_human == "734") human = 734;
					   else if (*_human == "735") human = 735;
					   else if (*_human == "736") human = 736;
					   else if (*_human == "737") human = 737;
					   else if (*_human == "738") human = 738;
					   else if (*_human == "739") human = 739;
					   else if (*_human == "740") human = 740;
					   else if (*_human == "741") human = 741;
					   else if (*_human == "742") human = 742;
					   else if (*_human == "743") human = 743;
					   else if (*_human == "744") human = 744;
					   else if (*_human == "745") human = 745;
					   else if (*_human == "746") human = 746;
					   else if (*_human == "747") human = 747;
					   else if (*_human == "748") human = 748;
					   else if (*_human == "749") human = 749;
					   else if (*_human == "750") human = 750;
					   else if (*_human == "751") human = 751;
					   else if (*_human == "752") human = 752;
					   else if (*_human == "753") human = 753;
					   else if (*_human == "754") human = 754;
					   else if (*_human == "755") human = 755;
					   else if (*_human == "756") human = 756;
					   else if (*_human == "757") human = 757;
					   else if (*_human == "758") human = 758;
					   else if (*_human == "759") human = 759;
					   else if (*_human == "760") human = 760;
					   else if (*_human == "761") human = 761;
					   else if (*_human == "762") human = 762;
					   else if (*_human == "763") human = 763;
					   else if (*_human == "764") human = 764;
					   else if (*_human == "765") human = 765;
					   else if (*_human == "766") human = 766;
					   else if (*_human == "767") human = 767;
					   else if (*_human == "768") human = 768;
					   else if (*_human == "769") human = 769;
					   else if (*_human == "770") human = 770;
					   else if (*_human == "771") human = 771;
					   else if (*_human == "772") human = 772;
					   else if (*_human == "773") human = 773;
					   else if (*_human == "774") human = 774;
					   else if (*_human == "775") human = 775;
					   else if (*_human == "776") human = 776;
					   else if (*_human == "777") human = 777;
					   else if (*_human == "778") human = 778;
					   else if (*_human == "779") human = 779;
					   else if (*_human == "780") human = 780;
					   else if (*_human == "781") human = 781;
					   else if (*_human == "782") human = 782;
					   else if (*_human == "783") human = 783;
					   else if (*_human == "784") human = 784;
					   else if (*_human == "785") human = 785;
					   else if (*_human == "786") human = 786;
					   else if (*_human == "787") human = 787;
					   else if (*_human == "788") human = 788;
					   else if (*_human == "789") human = 789;
					   else if (*_human == "790") human = 790;
					   else if (*_human == "791") human = 791;
					   else if (*_human == "792") human = 792;
					   else if (*_human == "793") human = 793;
					   else if (*_human == "794") human = 794;
					   else if (*_human == "795") human = 795;
					   else if (*_human == "796") human = 796;
					   else if (*_human == "797") human = 797;
					   else if (*_human == "798") human = 798;
					   else if (*_human == "799") human = 799;
					   else if (*_human == "800") human = 800;

					   delete _human;
				   }
				   {}
				   //wheat
				   {
					   string* _wheat = new string;

					   getline(Data, *_wheat);
					   if (*_wheat == "0") wheat = 0;
					   else if (*_wheat == "1") wheat = 1;
					   else if (*_wheat == "2") wheat = 2;
					   else if (*_wheat == "3") wheat = 3;
					   else if (*_wheat == "4") wheat = 4;
					   else if (*_wheat == "5") wheat = 5;
					   else if (*_wheat == "6") wheat = 6;
					   else if (*_wheat == "7") wheat = 7;
					   else if (*_wheat == "8") wheat = 8;
					   else if (*_wheat == "9") wheat = 9;
					   else if (*_wheat == "10") wheat = 10;
					   else if (*_wheat == "11") wheat = 11;
					   else if (*_wheat == "12") wheat = 12;
					   else if (*_wheat == "13") wheat = 13;
					   else if (*_wheat == "14") wheat = 14;
					   else if (*_wheat == "15") wheat = 15;
					   else if (*_wheat == "16") wheat = 16;
					   else if (*_wheat == "17") wheat = 17;
					   else if (*_wheat == "18") wheat = 18;
					   else if (*_wheat == "19") wheat = 19;
					   else if (*_wheat == "20") wheat = 20;
					   else if (*_wheat == "21") wheat = 21;
					   else if (*_wheat == "22") wheat = 22;
					   else if (*_wheat == "23") wheat = 23;
					   else if (*_wheat == "24") wheat = 24;
					   else if (*_wheat == "25") wheat = 25;
					   else if (*_wheat == "26") wheat = 26;
					   else if (*_wheat == "27") wheat = 27;
					   else if (*_wheat == "28") wheat = 28;
					   else if (*_wheat == "29") wheat = 29;
					   else if (*_wheat == "30") wheat = 30;
					   else if (*_wheat == "31") wheat = 31;
					   else if (*_wheat == "32") wheat = 32;
					   else if (*_wheat == "33") wheat = 33;
					   else if (*_wheat == "34") wheat = 34;
					   else if (*_wheat == "35") wheat = 35;
					   else if (*_wheat == "36") wheat = 36;
					   else if (*_wheat == "37") wheat = 37;
					   else if (*_wheat == "38") wheat = 38;
					   else if (*_wheat == "39") wheat = 39;
					   else if (*_wheat == "40") wheat = 40;
					   else if (*_wheat == "41") wheat = 41;
					   else if (*_wheat == "42") wheat = 42;
					   else if (*_wheat == "43") wheat = 43;
					   else if (*_wheat == "44") wheat = 44;
					   else if (*_wheat == "45") wheat = 45;
					   else if (*_wheat == "46") wheat = 46;
					   else if (*_wheat == "47") wheat = 47;
					   else if (*_wheat == "48") wheat = 48;
					   else if (*_wheat == "49") wheat = 49;
					   else if (*_wheat == "50") wheat = 50;
					   else if (*_wheat == "51") wheat = 51;
					   else if (*_wheat == "52") wheat = 52;
					   else if (*_wheat == "53") wheat = 53;
					   else if (*_wheat == "54") wheat = 54;
					   else if (*_wheat == "55") wheat = 55;
					   else if (*_wheat == "56") wheat = 56;
					   else if (*_wheat == "57") wheat = 57;
					   else if (*_wheat == "58") wheat = 58;
					   else if (*_wheat == "59") wheat = 59;
					   else if (*_wheat == "60") wheat = 60;
					   else if (*_wheat == "61") wheat = 61;
					   else if (*_wheat == "62") wheat = 62;
					   else if (*_wheat == "63") wheat = 63;
					   else if (*_wheat == "64") wheat = 64;
					   else if (*_wheat == "65") wheat = 65;
					   else if (*_wheat == "66") wheat = 66;
					   else if (*_wheat == "67") wheat = 67;
					   else if (*_wheat == "68") wheat = 68;
					   else if (*_wheat == "69") wheat = 69;
					   else if (*_wheat == "70") wheat = 70;
					   else if (*_wheat == "71") wheat = 71;
					   else if (*_wheat == "72") wheat = 72;
					   else if (*_wheat == "73") wheat = 73;
					   else if (*_wheat == "74") wheat = 74;
					   else if (*_wheat == "75") wheat = 75;
					   else if (*_wheat == "76") wheat = 76;
					   else if (*_wheat == "77") wheat = 77;
					   else if (*_wheat == "78") wheat = 78;
					   else if (*_wheat == "79") wheat = 79;
					   else if (*_wheat == "80") wheat = 80;
					   else if (*_wheat == "81") wheat = 81;
					   else if (*_wheat == "82") wheat = 82;
					   else if (*_wheat == "83") wheat = 83;
					   else if (*_wheat == "84") wheat = 84;
					   else if (*_wheat == "85") wheat = 85;
					   else if (*_wheat == "86") wheat = 86;
					   else if (*_wheat == "87") wheat = 87;
					   else if (*_wheat == "88") wheat = 88;
					   else if (*_wheat == "89") wheat = 89;
					   else if (*_wheat == "90") wheat = 90;
					   else if (*_wheat == "91") wheat = 91;
					   else if (*_wheat == "92") wheat = 92;
					   else if (*_wheat == "93") wheat = 93;
					   else if (*_wheat == "94") wheat = 94;
					   else if (*_wheat == "95") wheat = 95;
					   else if (*_wheat == "96") wheat = 96;
					   else if (*_wheat == "97") wheat = 97;
					   else if (*_wheat == "98") wheat = 98;
					   else if (*_wheat == "99") wheat = 99;
					   else if (*_wheat == "100") wheat = 100;
					   else if (*_wheat == "101") wheat = 101;
					   else if (*_wheat == "102") wheat = 102;
					   else if (*_wheat == "103") wheat = 103;
					   else if (*_wheat == "104") wheat = 104;
					   else if (*_wheat == "105") wheat = 105;
					   else if (*_wheat == "106") wheat = 106;
					   else if (*_wheat == "107") wheat = 107;
					   else if (*_wheat == "108") wheat = 108;
					   else if (*_wheat == "109") wheat = 109;
					   else if (*_wheat == "110") wheat = 110;
					   else if (*_wheat == "111") wheat = 111;
					   else if (*_wheat == "112") wheat = 112;
					   else if (*_wheat == "113") wheat = 113;
					   else if (*_wheat == "114") wheat = 114;
					   else if (*_wheat == "115") wheat = 115;
					   else if (*_wheat == "116") wheat = 116;
					   else if (*_wheat == "117") wheat = 117;
					   else if (*_wheat == "118") wheat = 118;
					   else if (*_wheat == "119") wheat = 119;
					   else if (*_wheat == "120") wheat = 120;
					   if (*_wheat == "121") wheat = 121;
					   else if (*_wheat == "122") wheat = 122;
					   else if (*_wheat == "123") wheat = 123;
					   else if (*_wheat == "124") wheat = 124;
					   else if (*_wheat == "125") wheat = 125;
					   else if (*_wheat == "126") wheat = 126;
					   else if (*_wheat == "127") wheat = 127;
					   else if (*_wheat == "128") wheat = 128;
					   else if (*_wheat == "129") wheat = 129;
					   else if (*_wheat == "130") wheat = 130;
					   else if (*_wheat == "131") wheat = 131;
					   else if (*_wheat == "132") wheat = 132;
					   else if (*_wheat == "133") wheat = 133;
					   else if (*_wheat == "134") wheat = 134;
					   else if (*_wheat == "135") wheat = 135;
					   else if (*_wheat == "136") wheat = 136;
					   else if (*_wheat == "137") wheat = 137;
					   else if (*_wheat == "138") wheat = 138;
					   else if (*_wheat == "139") wheat = 139;
					   else if (*_wheat == "140") wheat = 140;
					   else if (*_wheat == "141") wheat = 141;
					   else if (*_wheat == "142") wheat = 142;
					   else if (*_wheat == "143") wheat = 143;
					   else if (*_wheat == "144") wheat = 144;
					   else if (*_wheat == "145") wheat = 145;
					   else if (*_wheat == "146") wheat = 146;
					   else if (*_wheat == "147") wheat = 147;
					   else if (*_wheat == "148") wheat = 148;
					   else if (*_wheat == "149") wheat = 149;
					   else if (*_wheat == "150") wheat = 150;
					   else if (*_wheat == "151") wheat = 151;
					   else if (*_wheat == "152") wheat = 152;
					   else if (*_wheat == "153") wheat = 153;
					   else if (*_wheat == "154") wheat = 154;
					   else if (*_wheat == "155") wheat = 155;
					   else if (*_wheat == "156") wheat = 156;
					   else if (*_wheat == "157") wheat = 157;
					   else if (*_wheat == "158") wheat = 158;
					   else if (*_wheat == "159") wheat = 159;
					   else if (*_wheat == "160") wheat = 160;
					   else if (*_wheat == "161") wheat = 161;
					   else if (*_wheat == "162") wheat = 162;
					   else if (*_wheat == "163") wheat = 163;
					   else if (*_wheat == "164") wheat = 164;
					   else if (*_wheat == "165") wheat = 165;
					   else if (*_wheat == "166") wheat = 166;
					   else if (*_wheat == "167") wheat = 167;
					   else if (*_wheat == "168") wheat = 168;
					   else if (*_wheat == "169") wheat = 169;
					   else if (*_wheat == "170") wheat = 170;
					   else if (*_wheat == "171") wheat = 171;
					   else if (*_wheat == "172") wheat = 172;
					   else if (*_wheat == "173") wheat = 173;
					   else if (*_wheat == "174") wheat = 174;
					   else if (*_wheat == "175") wheat = 175;
					   else if (*_wheat == "176") wheat = 176;
					   else if (*_wheat == "177") wheat = 177;
					   else if (*_wheat == "178") wheat = 178;
					   else if (*_wheat == "179") wheat = 179;
					   else if (*_wheat == "180") wheat = 180;
					   else if (*_wheat == "181") wheat = 181;
					   else if (*_wheat == "182") wheat = 182;
					   else if (*_wheat == "183") wheat = 183;
					   else if (*_wheat == "184") wheat = 184;
					   else if (*_wheat == "185") wheat = 185;
					   else if (*_wheat == "186") wheat = 186;
					   else if (*_wheat == "187") wheat = 187;
					   else if (*_wheat == "188") wheat = 188;
					   else if (*_wheat == "189") wheat = 189;
					   else if (*_wheat == "190") wheat = 190;
					   else if (*_wheat == "191") wheat = 191;
					   else if (*_wheat == "192") wheat = 192;
					   else if (*_wheat == "193") wheat = 193;
					   else if (*_wheat == "194") wheat = 194;
					   else if (*_wheat == "195") wheat = 195;
					   else if (*_wheat == "196") wheat = 196;
					   else if (*_wheat == "197") wheat = 197;
					   else if (*_wheat == "198") wheat = 198;
					   else if (*_wheat == "199") wheat = 199;
					   else if (*_wheat == "200") wheat = 200;
					   else if (*_wheat == "201") wheat = 201;
					   else if (*_wheat == "202") wheat = 202;
					   else if (*_wheat == "203") wheat = 203;
					   else if (*_wheat == "204") wheat = 204;
					   else if (*_wheat == "205") wheat = 205;
					   else if (*_wheat == "206") wheat = 206;
					   else if (*_wheat == "207") wheat = 207;
					   else if (*_wheat == "208") wheat = 208;
					   else if (*_wheat == "209") wheat = 209;
					   else if (*_wheat == "210") wheat = 210;
					   else if (*_wheat == "211") wheat = 211;
					   else if (*_wheat == "212") wheat = 212;
					   else if (*_wheat == "213") wheat = 213;
					   else if (*_wheat == "214") wheat = 214;
					   else if (*_wheat == "215") wheat = 215;
					   else if (*_wheat == "216") wheat = 216;
					   else if (*_wheat == "217") wheat = 217;
					   else if (*_wheat == "218") wheat = 218;
					   else if (*_wheat == "219") wheat = 219;
					   else if (*_wheat == "220") wheat = 220;
					   else if (*_wheat == "221") wheat = 221;
					   else if (*_wheat == "222") wheat = 222;
					   else if (*_wheat == "223") wheat = 223;
					   else if (*_wheat == "224") wheat = 224;
					   else if (*_wheat == "225") wheat = 225;
					   else if (*_wheat == "226") wheat = 226;
					   else if (*_wheat == "227") wheat = 227;
					   else if (*_wheat == "228") wheat = 228;
					   else if (*_wheat == "229") wheat = 229;
					   else if (*_wheat == "230") wheat = 230;
					   else if (*_wheat == "231") wheat = 231;
					   else if (*_wheat == "232") wheat = 232;
					   else if (*_wheat == "233") wheat = 233;
					   else if (*_wheat == "234") wheat = 234;
					   else if (*_wheat == "235") wheat = 235;
					   else if (*_wheat == "236") wheat = 236;
					   else if (*_wheat == "237") wheat = 237;
					   else if (*_wheat == "238") wheat = 238;
					   else if (*_wheat == "239") wheat = 239;
					   else if (*_wheat == "240") wheat = 240;
					   if (*_wheat == "241") wheat = 241;
					   else if (*_wheat == "242") wheat = 242;
					   else if (*_wheat == "243") wheat = 243;
					   else if (*_wheat == "244") wheat = 244;
					   else if (*_wheat == "245") wheat = 245;
					   else if (*_wheat == "246") wheat = 246;
					   else if (*_wheat == "247") wheat = 247;
					   else if (*_wheat == "248") wheat = 248;
					   else if (*_wheat == "249") wheat = 249;
					   else if (*_wheat == "250") wheat = 250;
					   else if (*_wheat == "251") wheat = 251;
					   else if (*_wheat == "252") wheat = 252;
					   else if (*_wheat == "253") wheat = 253;
					   else if (*_wheat == "254") wheat = 254;
					   else if (*_wheat == "255") wheat = 255;
					   else if (*_wheat == "256") wheat = 256;
					   else if (*_wheat == "257") wheat = 257;
					   else if (*_wheat == "258") wheat = 258;
					   else if (*_wheat == "259") wheat = 259;
					   else if (*_wheat == "260") wheat = 260;
					   else if (*_wheat == "261") wheat = 261;
					   else if (*_wheat == "262") wheat = 262;
					   else if (*_wheat == "263") wheat = 263;
					   else if (*_wheat == "264") wheat = 264;
					   else if (*_wheat == "265") wheat = 265;
					   else if (*_wheat == "266") wheat = 266;
					   else if (*_wheat == "267") wheat = 267;
					   else if (*_wheat == "268") wheat = 268;
					   else if (*_wheat == "269") wheat = 269;
					   else if (*_wheat == "270") wheat = 270;
					   else if (*_wheat == "271") wheat = 271;
					   else if (*_wheat == "272") wheat = 272;
					   else if (*_wheat == "273") wheat = 273;
					   else if (*_wheat == "274") wheat = 274;
					   else if (*_wheat == "275") wheat = 275;
					   else if (*_wheat == "276") wheat = 276;
					   else if (*_wheat == "277") wheat = 277;
					   else if (*_wheat == "278") wheat = 278;
					   else if (*_wheat == "279") wheat = 279;
					   else if (*_wheat == "280") wheat = 280;
					   else if (*_wheat == "281") wheat = 281;
					   else if (*_wheat == "282") wheat = 282;
					   else if (*_wheat == "283") wheat = 283;
					   else if (*_wheat == "284") wheat = 284;
					   else if (*_wheat == "285") wheat = 285;
					   else if (*_wheat == "286") wheat = 286;
					   else if (*_wheat == "287") wheat = 287;
					   else if (*_wheat == "288") wheat = 288;
					   else if (*_wheat == "289") wheat = 289;
					   else if (*_wheat == "290") wheat = 290;
					   else if (*_wheat == "291") wheat = 291;
					   else if (*_wheat == "292") wheat = 292;
					   else if (*_wheat == "293") wheat = 293;
					   else if (*_wheat == "294") wheat = 294;
					   else if (*_wheat == "295") wheat = 295;
					   else if (*_wheat == "296") wheat = 296;
					   else if (*_wheat == "297") wheat = 297;
					   else if (*_wheat == "298") wheat = 298;
					   else if (*_wheat == "299") wheat = 299;
					   else if (*_wheat == "300") wheat = 300;
					   else if (*_wheat == "301") wheat = 301;
					   else if (*_wheat == "302") wheat = 302;
					   else if (*_wheat == "303") wheat = 303;
					   else if (*_wheat == "304") wheat = 304;
					   else if (*_wheat == "305") wheat = 305;
					   else if (*_wheat == "306") wheat = 306;
					   else if (*_wheat == "307") wheat = 307;
					   else if (*_wheat == "308") wheat = 308;
					   else if (*_wheat == "309") wheat = 309;
					   else if (*_wheat == "310") wheat = 310;
					   else if (*_wheat == "311") wheat = 311;
					   else if (*_wheat == "312") wheat = 312;
					   else if (*_wheat == "313") wheat = 313;
					   else if (*_wheat == "314") wheat = 314;
					   else if (*_wheat == "315") wheat = 315;
					   else if (*_wheat == "316") wheat = 316;
					   else if (*_wheat == "317") wheat = 317;
					   else if (*_wheat == "318") wheat = 318;
					   else if (*_wheat == "319") wheat = 319;
					   else if (*_wheat == "320") wheat = 320;
					   else if (*_wheat == "321") wheat = 321;
					   else if (*_wheat == "322") wheat = 322;
					   else if (*_wheat == "323") wheat = 323;
					   else if (*_wheat == "324") wheat = 324;
					   else if (*_wheat == "325") wheat = 325;
					   else if (*_wheat == "326") wheat = 326;
					   else if (*_wheat == "327") wheat = 327;
					   else if (*_wheat == "328") wheat = 328;
					   else if (*_wheat == "329") wheat = 329;
					   else if (*_wheat == "330") wheat = 330;
					   else if (*_wheat == "331") wheat = 331;
					   else if (*_wheat == "332") wheat = 332;
					   else if (*_wheat == "333") wheat = 333;
					   else if (*_wheat == "334") wheat = 334;
					   else if (*_wheat == "335") wheat = 335;
					   else if (*_wheat == "336") wheat = 336;
					   else if (*_wheat == "337") wheat = 337;
					   else if (*_wheat == "338") wheat = 338;
					   else if (*_wheat == "339") wheat = 339;
					   else if (*_wheat == "340") wheat = 340;
					   else if (*_wheat == "341") wheat = 341;
					   else if (*_wheat == "342") wheat = 342;
					   else if (*_wheat == "343") wheat = 343;
					   else if (*_wheat == "344") wheat = 344;
					   else if (*_wheat == "345") wheat = 345;
					   else if (*_wheat == "346") wheat = 346;
					   else if (*_wheat == "347") wheat = 347;
					   else if (*_wheat == "348") wheat = 348;
					   else if (*_wheat == "349") wheat = 349;
					   else if (*_wheat == "350") wheat = 350;
					   else if (*_wheat == "351") wheat = 351;
					   else if (*_wheat == "352") wheat = 352;
					   else if (*_wheat == "353") wheat = 353;
					   else if (*_wheat == "354") wheat = 354;
					   else if (*_wheat == "355") wheat = 355;
					   else if (*_wheat == "356") wheat = 356;
					   else if (*_wheat == "357") wheat = 357;
					   else if (*_wheat == "358") wheat = 358;
					   else if (*_wheat == "359") wheat = 359;
					   else if (*_wheat == "360") wheat = 360;
					   if (*_wheat == "361") wheat = 361;
					   else if (*_wheat == "362") wheat = 362;
					   else if (*_wheat == "363") wheat = 363;
					   else if (*_wheat == "364") wheat = 364;
					   else if (*_wheat == "365") wheat = 365;
					   else if (*_wheat == "366") wheat = 366;
					   else if (*_wheat == "367") wheat = 367;
					   else if (*_wheat == "368") wheat = 368;
					   else if (*_wheat == "369") wheat = 369;
					   else if (*_wheat == "370") wheat = 370;
					   else if (*_wheat == "371") wheat = 371;
					   else if (*_wheat == "372") wheat = 372;
					   else if (*_wheat == "373") wheat = 373;
					   else if (*_wheat == "374") wheat = 374;
					   else if (*_wheat == "375") wheat = 375;
					   else if (*_wheat == "376") wheat = 376;
					   else if (*_wheat == "377") wheat = 377;
					   else if (*_wheat == "378") wheat = 378;
					   else if (*_wheat == "379") wheat = 379;
					   else if (*_wheat == "380") wheat = 380;
					   else if (*_wheat == "381") wheat = 381;
					   else if (*_wheat == "382") wheat = 382;
					   else if (*_wheat == "383") wheat = 383;
					   else if (*_wheat == "384") wheat = 384;
					   else if (*_wheat == "385") wheat = 385;
					   else if (*_wheat == "386") wheat = 386;
					   else if (*_wheat == "387") wheat = 387;
					   else if (*_wheat == "388") wheat = 388;
					   else if (*_wheat == "389") wheat = 389;
					   else if (*_wheat == "390") wheat = 390;
					   else if (*_wheat == "391") wheat = 391;
					   else if (*_wheat == "392") wheat = 392;
					   else if (*_wheat == "393") wheat = 393;
					   else if (*_wheat == "394") wheat = 394;
					   else if (*_wheat == "395") wheat = 395;
					   else if (*_wheat == "396") wheat = 396;
					   else if (*_wheat == "397") wheat = 397;
					   else if (*_wheat == "398") wheat = 398;
					   else if (*_wheat == "399") wheat = 399;
					   else if (*_wheat == "400") wheat = 400;
					   else if (*_wheat == "401") wheat = 401;
					   else if (*_wheat == "402") wheat = 402;
					   else if (*_wheat == "403") wheat = 403;
					   else if (*_wheat == "404") wheat = 404;
					   else if (*_wheat == "405") wheat = 405;
					   else if (*_wheat == "406") wheat = 406;
					   else if (*_wheat == "407") wheat = 407;
					   else if (*_wheat == "408") wheat = 408;
					   else if (*_wheat == "409") wheat = 409;
					   else if (*_wheat == "410") wheat = 410;
					   else if (*_wheat == "411") wheat = 411;
					   else if (*_wheat == "412") wheat = 412;
					   else if (*_wheat == "413") wheat = 413;
					   else if (*_wheat == "414") wheat = 414;
					   else if (*_wheat == "415") wheat = 415;
					   else if (*_wheat == "416") wheat = 416;
					   else if (*_wheat == "417") wheat = 417;
					   else if (*_wheat == "418") wheat = 418;
					   else if (*_wheat == "419") wheat = 419;
					   else if (*_wheat == "420") wheat = 420;
					   else if (*_wheat == "421") wheat = 421;
					   else if (*_wheat == "422") wheat = 422;
					   else if (*_wheat == "423") wheat = 423;
					   else if (*_wheat == "424") wheat = 424;
					   else if (*_wheat == "425") wheat = 425;
					   else if (*_wheat == "426") wheat = 426;
					   else if (*_wheat == "427") wheat = 427;
					   else if (*_wheat == "428") wheat = 428;
					   else if (*_wheat == "429") wheat = 429;
					   else if (*_wheat == "430") wheat = 430;
					   else if (*_wheat == "431") wheat = 431;
					   else if (*_wheat == "432") wheat = 432;
					   else if (*_wheat == "433") wheat = 433;
					   else if (*_wheat == "434") wheat = 434;
					   else if (*_wheat == "435") wheat = 435;
					   else if (*_wheat == "436") wheat = 436;
					   else if (*_wheat == "437") wheat = 437;
					   else if (*_wheat == "438") wheat = 438;
					   else if (*_wheat == "439") wheat = 439;
					   else if (*_wheat == "440") wheat = 440;
					   else if (*_wheat == "441") wheat = 441;
					   else if (*_wheat == "442") wheat = 442;
					   else if (*_wheat == "443") wheat = 443;
					   else if (*_wheat == "444") wheat = 444;
					   else if (*_wheat == "445") wheat = 445;
					   else if (*_wheat == "446") wheat = 446;
					   else if (*_wheat == "447") wheat = 447;
					   else if (*_wheat == "448") wheat = 448;
					   else if (*_wheat == "449") wheat = 449;
					   else if (*_wheat == "450") wheat = 450;
					   else if (*_wheat == "451") wheat = 451;
					   else if (*_wheat == "452") wheat = 452;
					   else if (*_wheat == "453") wheat = 453;
					   else if (*_wheat == "454") wheat = 454;
					   else if (*_wheat == "455") wheat = 455;
					   else if (*_wheat == "456") wheat = 456;
					   else if (*_wheat == "457") wheat = 457;
					   else if (*_wheat == "458") wheat = 458;
					   else if (*_wheat == "459") wheat = 459;
					   else if (*_wheat == "460") wheat = 460;
					   else if (*_wheat == "461") wheat = 461;
					   else if (*_wheat == "462") wheat = 462;
					   else if (*_wheat == "463") wheat = 463;
					   else if (*_wheat == "464") wheat = 464;
					   else if (*_wheat == "465") wheat = 465;
					   else if (*_wheat == "466") wheat = 466;
					   else if (*_wheat == "467") wheat = 467;
					   else if (*_wheat == "468") wheat = 468;
					   else if (*_wheat == "469") wheat = 469;
					   else if (*_wheat == "470") wheat = 470;
					   else if (*_wheat == "471") wheat = 471;
					   else if (*_wheat == "472") wheat = 472;
					   else if (*_wheat == "473") wheat = 473;
					   else if (*_wheat == "474") wheat = 474;
					   else if (*_wheat == "475") wheat = 475;
					   else if (*_wheat == "476") wheat = 476;
					   else if (*_wheat == "477") wheat = 477;
					   else if (*_wheat == "478") wheat = 478;
					   else if (*_wheat == "479") wheat = 479;
					   else if (*_wheat == "480") wheat = 480;
					   if (*_wheat == "481") wheat = 481;
					   else if (*_wheat == "482") wheat = 482;
					   else if (*_wheat == "483") wheat = 483;
					   else if (*_wheat == "484") wheat = 484;
					   else if (*_wheat == "485") wheat = 485;
					   else if (*_wheat == "486") wheat = 486;
					   else if (*_wheat == "487") wheat = 487;
					   else if (*_wheat == "488") wheat = 488;
					   else if (*_wheat == "489") wheat = 489;
					   else if (*_wheat == "490") wheat = 490;
					   else if (*_wheat == "491") wheat = 491;
					   else if (*_wheat == "492") wheat = 492;
					   else if (*_wheat == "493") wheat = 493;
					   else if (*_wheat == "494") wheat = 494;
					   else if (*_wheat == "495") wheat = 495;
					   else if (*_wheat == "496") wheat = 496;
					   else if (*_wheat == "497") wheat = 497;
					   else if (*_wheat == "498") wheat = 498;
					   else if (*_wheat == "499") wheat = 499;
					   else if (*_wheat == "500") wheat = 500;
					   else if (*_wheat == "501") wheat = 501;
					   else if (*_wheat == "502") wheat = 502;
					   else if (*_wheat == "503") wheat = 503;
					   else if (*_wheat == "504") wheat = 504;
					   else if (*_wheat == "505") wheat = 505;
					   else if (*_wheat == "506") wheat = 506;
					   else if (*_wheat == "507") wheat = 507;
					   else if (*_wheat == "508") wheat = 508;
					   else if (*_wheat == "509") wheat = 509;
					   else if (*_wheat == "510") wheat = 510;
					   else if (*_wheat == "511") wheat = 511;
					   else if (*_wheat == "512") wheat = 512;
					   else if (*_wheat == "513") wheat = 513;
					   else if (*_wheat == "514") wheat = 514;
					   else if (*_wheat == "515") wheat = 515;
					   else if (*_wheat == "516") wheat = 516;
					   else if (*_wheat == "517") wheat = 517;
					   else if (*_wheat == "518") wheat = 518;
					   else if (*_wheat == "519") wheat = 519;
					   else if (*_wheat == "520") wheat = 520;
					   else if (*_wheat == "521") wheat = 521;
					   else if (*_wheat == "522") wheat = 522;
					   else if (*_wheat == "523") wheat = 523;
					   else if (*_wheat == "524") wheat = 524;
					   else if (*_wheat == "525") wheat = 525;
					   else if (*_wheat == "526") wheat = 526;
					   else if (*_wheat == "527") wheat = 527;
					   else if (*_wheat == "528") wheat = 528;
					   else if (*_wheat == "529") wheat = 529;
					   else if (*_wheat == "530") wheat = 530;
					   else if (*_wheat == "531") wheat = 531;
					   else if (*_wheat == "532") wheat = 532;
					   else if (*_wheat == "533") wheat = 533;
					   else if (*_wheat == "534") wheat = 534;
					   else if (*_wheat == "535") wheat = 535;
					   else if (*_wheat == "536") wheat = 536;
					   else if (*_wheat == "537") wheat = 537;
					   else if (*_wheat == "538") wheat = 538;
					   else if (*_wheat == "539") wheat = 539;
					   else if (*_wheat == "540") wheat = 540;
					   else if (*_wheat == "541") wheat = 541;
					   else if (*_wheat == "542") wheat = 542;
					   else if (*_wheat == "543") wheat = 543;
					   else if (*_wheat == "544") wheat = 544;
					   else if (*_wheat == "545") wheat = 545;
					   else if (*_wheat == "546") wheat = 546;
					   else if (*_wheat == "547") wheat = 547;
					   else if (*_wheat == "548") wheat = 548;
					   else if (*_wheat == "549") wheat = 549;
					   else if (*_wheat == "550") wheat = 550;
					   else if (*_wheat == "551") wheat = 551;
					   else if (*_wheat == "552") wheat = 552;
					   else if (*_wheat == "553") wheat = 553;
					   else if (*_wheat == "554") wheat = 554;
					   else if (*_wheat == "555") wheat = 555;
					   else if (*_wheat == "556") wheat = 556;
					   else if (*_wheat == "557") wheat = 557;
					   else if (*_wheat == "558") wheat = 558;
					   else if (*_wheat == "559") wheat = 559;
					   else if (*_wheat == "560") wheat = 560;
					   else if (*_wheat == "561") wheat = 561;
					   else if (*_wheat == "562") wheat = 562;
					   else if (*_wheat == "563") wheat = 563;
					   else if (*_wheat == "564") wheat = 564;
					   else if (*_wheat == "565") wheat = 565;
					   else if (*_wheat == "566") wheat = 566;
					   else if (*_wheat == "567") wheat = 567;
					   else if (*_wheat == "568") wheat = 568;
					   else if (*_wheat == "569") wheat = 569;
					   else if (*_wheat == "570") wheat = 570;
					   else if (*_wheat == "571") wheat = 571;
					   else if (*_wheat == "572") wheat = 572;
					   else if (*_wheat == "573") wheat = 573;
					   else if (*_wheat == "574") wheat = 574;
					   else if (*_wheat == "575") wheat = 575;
					   else if (*_wheat == "576") wheat = 576;
					   else if (*_wheat == "577") wheat = 577;
					   else if (*_wheat == "578") wheat = 578;
					   else if (*_wheat == "579") wheat = 579;
					   else if (*_wheat == "580") wheat = 580;
					   else if (*_wheat == "581") wheat = 581;
					   else if (*_wheat == "582") wheat = 582;
					   else if (*_wheat == "583") wheat = 583;
					   else if (*_wheat == "584") wheat = 584;
					   else if (*_wheat == "585") wheat = 585;
					   else if (*_wheat == "586") wheat = 586;
					   else if (*_wheat == "587") wheat = 587;
					   else if (*_wheat == "588") wheat = 588;
					   else if (*_wheat == "589") wheat = 589;
					   else if (*_wheat == "590") wheat = 590;
					   else if (*_wheat == "591") wheat = 591;
					   else if (*_wheat == "592") wheat = 592;
					   else if (*_wheat == "593") wheat = 593;
					   else if (*_wheat == "594") wheat = 594;
					   else if (*_wheat == "595") wheat = 595;
					   else if (*_wheat == "596") wheat = 596;
					   else if (*_wheat == "597") wheat = 597;
					   else if (*_wheat == "598") wheat = 598;
					   else if (*_wheat == "599") wheat = 599;
					   else if (*_wheat == "600") wheat = 600;
					   if (*_wheat == "601") wheat = 601;
					   else if (*_wheat == "602") wheat = 602;
					   else if (*_wheat == "603") wheat = 603;
					   else if (*_wheat == "604") wheat = 604;
					   else if (*_wheat == "605") wheat = 605;
					   else if (*_wheat == "606") wheat = 606;
					   else if (*_wheat == "607") wheat = 607;
					   else if (*_wheat == "608") wheat = 608;
					   else if (*_wheat == "609") wheat = 609;
					   else if (*_wheat == "610") wheat = 610;
					   else if (*_wheat == "611") wheat = 611;
					   else if (*_wheat == "612") wheat = 612;
					   else if (*_wheat == "613") wheat = 613;
					   else if (*_wheat == "614") wheat = 614;
					   else if (*_wheat == "615") wheat = 615;
					   else if (*_wheat == "616") wheat = 616;
					   else if (*_wheat == "617") wheat = 617;
					   else if (*_wheat == "618") wheat = 618;
					   else if (*_wheat == "619") wheat = 619;
					   else if (*_wheat == "620") wheat = 620;
					   else if (*_wheat == "621") wheat = 621;
					   else if (*_wheat == "622") wheat = 622;
					   else if (*_wheat == "623") wheat = 623;
					   else if (*_wheat == "624") wheat = 624;
					   else if (*_wheat == "625") wheat = 625;
					   else if (*_wheat == "626") wheat = 626;
					   else if (*_wheat == "627") wheat = 627;
					   else if (*_wheat == "628") wheat = 628;
					   else if (*_wheat == "629") wheat = 629;
					   else if (*_wheat == "630") wheat = 630;
					   else if (*_wheat == "631") wheat = 631;
					   else if (*_wheat == "632") wheat = 632;
					   else if (*_wheat == "633") wheat = 633;
					   else if (*_wheat == "634") wheat = 634;
					   else if (*_wheat == "635") wheat = 635;
					   else if (*_wheat == "636") wheat = 636;
					   else if (*_wheat == "637") wheat = 637;
					   else if (*_wheat == "638") wheat = 638;
					   else if (*_wheat == "639") wheat = 639;
					   else if (*_wheat == "640") wheat = 640;
					   else if (*_wheat == "641") wheat = 641;
					   else if (*_wheat == "642") wheat = 642;
					   else if (*_wheat == "643") wheat = 643;
					   else if (*_wheat == "644") wheat = 644;
					   else if (*_wheat == "645") wheat = 645;
					   else if (*_wheat == "646") wheat = 646;
					   else if (*_wheat == "647") wheat = 647;
					   else if (*_wheat == "648") wheat = 648;
					   else if (*_wheat == "649") wheat = 649;
					   else if (*_wheat == "650") wheat = 650;
					   else if (*_wheat == "651") wheat = 651;
					   else if (*_wheat == "652") wheat = 652;
					   else if (*_wheat == "653") wheat = 653;
					   else if (*_wheat == "654") wheat = 654;
					   else if (*_wheat == "655") wheat = 655;
					   else if (*_wheat == "656") wheat = 656;
					   else if (*_wheat == "657") wheat = 657;
					   else if (*_wheat == "658") wheat = 658;
					   else if (*_wheat == "659") wheat = 659;
					   else if (*_wheat == "660") wheat = 660;
					   else if (*_wheat == "661") wheat = 661;
					   else if (*_wheat == "662") wheat = 662;
					   else if (*_wheat == "663") wheat = 663;
					   else if (*_wheat == "664") wheat = 664;
					   else if (*_wheat == "665") wheat = 665;
					   else if (*_wheat == "666") wheat = 666;
					   else if (*_wheat == "667") wheat = 667;
					   else if (*_wheat == "668") wheat = 668;
					   else if (*_wheat == "669") wheat = 669;
					   else if (*_wheat == "670") wheat = 670;
					   else if (*_wheat == "671") wheat = 671;
					   else if (*_wheat == "672") wheat = 672;
					   else if (*_wheat == "673") wheat = 673;
					   else if (*_wheat == "674") wheat = 674;
					   else if (*_wheat == "675") wheat = 675;
					   else if (*_wheat == "676") wheat = 676;
					   else if (*_wheat == "677") wheat = 677;
					   else if (*_wheat == "678") wheat = 678;
					   else if (*_wheat == "679") wheat = 679;
					   else if (*_wheat == "680") wheat = 680;
					   else if (*_wheat == "681") wheat = 681;
					   else if (*_wheat == "682") wheat = 682;
					   else if (*_wheat == "683") wheat = 683;
					   else if (*_wheat == "684") wheat = 684;
					   else if (*_wheat == "685") wheat = 685;
					   else if (*_wheat == "686") wheat = 686;
					   else if (*_wheat == "687") wheat = 687;
					   else if (*_wheat == "688") wheat = 688;
					   else if (*_wheat == "689") wheat = 689;
					   else if (*_wheat == "690") wheat = 690;
					   else if (*_wheat == "691") wheat = 691;
					   else if (*_wheat == "692") wheat = 692;
					   else if (*_wheat == "693") wheat = 693;
					   else if (*_wheat == "694") wheat = 694;
					   else if (*_wheat == "695") wheat = 695;
					   else if (*_wheat == "696") wheat = 696;
					   else if (*_wheat == "697") wheat = 697;
					   else if (*_wheat == "698") wheat = 698;
					   else if (*_wheat == "699") wheat = 699;
					   else if (*_wheat == "700") wheat = 700;

					   delete _wheat;
				   }
				   {}
				   //flour
				   {
					   string* _flour = new string;

					   getline(Data, *_flour);
					   if (*_flour == "0") flour = 0;
					   else if (*_flour == "1") flour = 1;
					   else if (*_flour == "2") flour = 2;
					   else if (*_flour == "3") flour = 3;
					   else if (*_flour == "4") flour = 4;
					   else if (*_flour == "5") flour = 5;
					   else if (*_flour == "6") flour = 6;
					   else if (*_flour == "7") flour = 7;
					   else if (*_flour == "8") flour = 8;
					   else if (*_flour == "9") flour = 9;
					   else if (*_flour == "10") flour = 10;
					   else if (*_flour == "11") flour = 11;
					   else if (*_flour == "12") flour = 12;
					   else if (*_flour == "13") flour = 13;
					   else if (*_flour == "14") flour = 14;
					   else if (*_flour == "15") flour = 15;
					   else if (*_flour == "16") flour = 16;
					   else if (*_flour == "17") flour = 17;
					   else if (*_flour == "18") flour = 18;
					   else if (*_flour == "19") flour = 19;
					   else if (*_flour == "20") flour = 20;
					   else if (*_flour == "21") flour = 21;
					   else if (*_flour == "22") flour = 22;
					   else if (*_flour == "23") flour = 23;
					   else if (*_flour == "24") flour = 24;
					   else if (*_flour == "25") flour = 25;
					   else if (*_flour == "26") flour = 26;
					   else if (*_flour == "27") flour = 27;
					   else if (*_flour == "28") flour = 28;
					   else if (*_flour == "29") flour = 29;
					   else if (*_flour == "30") flour = 30;
					   else if (*_flour == "31") flour = 31;
					   else if (*_flour == "32") flour = 32;
					   else if (*_flour == "33") flour = 33;
					   else if (*_flour == "34") flour = 34;
					   else if (*_flour == "35") flour = 35;
					   else if (*_flour == "36") flour = 36;
					   else if (*_flour == "37") flour = 37;
					   else if (*_flour == "38") flour = 38;
					   else if (*_flour == "39") flour = 39;
					   else if (*_flour == "40") flour = 40;
					   else if (*_flour == "41") flour = 41;
					   else if (*_flour == "42") flour = 42;
					   else if (*_flour == "43") flour = 43;
					   else if (*_flour == "44") flour = 44;
					   else if (*_flour == "45") flour = 45;
					   else if (*_flour == "46") flour = 46;
					   else if (*_flour == "47") flour = 47;
					   else if (*_flour == "48") flour = 48;
					   else if (*_flour == "49") flour = 49;
					   else if (*_flour == "50") flour = 50;
					   else if (*_flour == "51") flour = 51;
					   else if (*_flour == "52") flour = 52;
					   else if (*_flour == "53") flour = 53;
					   else if (*_flour == "54") flour = 54;
					   else if (*_flour == "55") flour = 55;
					   else if (*_flour == "56") flour = 56;
					   else if (*_flour == "57") flour = 57;
					   else if (*_flour == "58") flour = 58;
					   else if (*_flour == "59") flour = 59;
					   else if (*_flour == "60") flour = 60;
					   else if (*_flour == "61") flour = 61;
					   else if (*_flour == "62") flour = 62;
					   else if (*_flour == "63") flour = 63;
					   else if (*_flour == "64") flour = 64;
					   else if (*_flour == "65") flour = 65;
					   else if (*_flour == "66") flour = 66;
					   else if (*_flour == "67") flour = 67;
					   else if (*_flour == "68") flour = 68;
					   else if (*_flour == "69") flour = 69;
					   else if (*_flour == "70") flour = 70;
					   else if (*_flour == "71") flour = 71;
					   else if (*_flour == "72") flour = 72;
					   else if (*_flour == "73") flour = 73;
					   else if (*_flour == "74") flour = 74;
					   else if (*_flour == "75") flour = 75;
					   else if (*_flour == "76") flour = 76;
					   else if (*_flour == "77") flour = 77;
					   else if (*_flour == "78") flour = 78;
					   else if (*_flour == "79") flour = 79;
					   else if (*_flour == "80") flour = 80;
					   else if (*_flour == "81") flour = 81;
					   else if (*_flour == "82") flour = 82;
					   else if (*_flour == "83") flour = 83;
					   else if (*_flour == "84") flour = 84;
					   else if (*_flour == "85") flour = 85;
					   else if (*_flour == "86") flour = 86;
					   else if (*_flour == "87") flour = 87;
					   else if (*_flour == "88") flour = 88;
					   else if (*_flour == "89") flour = 89;
					   else if (*_flour == "90") flour = 90;
					   else if (*_flour == "91") flour = 91;
					   else if (*_flour == "92") flour = 92;
					   else if (*_flour == "93") flour = 93;
					   else if (*_flour == "94") flour = 94;
					   else if (*_flour == "95") flour = 95;
					   else if (*_flour == "96") flour = 96;
					   else if (*_flour == "97") flour = 97;
					   else if (*_flour == "98") flour = 98;
					   else if (*_flour == "99") flour = 99;
					   else if (*_flour == "100") flour = 100;
					   else if (*_flour == "101") flour = 101;
					   else if (*_flour == "102") flour = 102;
					   else if (*_flour == "103") flour = 103;
					   else if (*_flour == "104") flour = 104;
					   else if (*_flour == "105") flour = 105;
					   else if (*_flour == "106") flour = 106;
					   else if (*_flour == "107") flour = 107;
					   else if (*_flour == "108") flour = 108;
					   else if (*_flour == "109") flour = 109;
					   else if (*_flour == "110") flour = 110;
					   else if (*_flour == "111") flour = 111;
					   else if (*_flour == "112") flour = 112;
					   else if (*_flour == "113") flour = 113;
					   else if (*_flour == "114") flour = 114;
					   else if (*_flour == "115") flour = 115;
					   else if (*_flour == "116") flour = 116;
					   else if (*_flour == "117") flour = 117;
					   else if (*_flour == "118") flour = 118;
					   else if (*_flour == "119") flour = 119;
					   else if (*_flour == "120") flour = 120;
					   if (*_flour == "121") flour = 121;
					   else if (*_flour == "122") flour = 122;
					   else if (*_flour == "123") flour = 123;
					   else if (*_flour == "124") flour = 124;
					   else if (*_flour == "125") flour = 125;
					   else if (*_flour == "126") flour = 126;
					   else if (*_flour == "127") flour = 127;
					   else if (*_flour == "128") flour = 128;
					   else if (*_flour == "129") flour = 129;
					   else if (*_flour == "130") flour = 130;
					   else if (*_flour == "131") flour = 131;
					   else if (*_flour == "132") flour = 132;
					   else if (*_flour == "133") flour = 133;
					   else if (*_flour == "134") flour = 134;
					   else if (*_flour == "135") flour = 135;
					   else if (*_flour == "136") flour = 136;
					   else if (*_flour == "137") flour = 137;
					   else if (*_flour == "138") flour = 138;
					   else if (*_flour == "139") flour = 139;
					   else if (*_flour == "140") flour = 140;
					   else if (*_flour == "141") flour = 141;
					   else if (*_flour == "142") flour = 142;
					   else if (*_flour == "143") flour = 143;
					   else if (*_flour == "144") flour = 144;
					   else if (*_flour == "145") flour = 145;
					   else if (*_flour == "146") flour = 146;
					   else if (*_flour == "147") flour = 147;
					   else if (*_flour == "148") flour = 148;
					   else if (*_flour == "149") flour = 149;
					   else if (*_flour == "150") flour = 150;
					   else if (*_flour == "151") flour = 151;
					   else if (*_flour == "152") flour = 152;
					   else if (*_flour == "153") flour = 153;
					   else if (*_flour == "154") flour = 154;
					   else if (*_flour == "155") flour = 155;
					   else if (*_flour == "156") flour = 156;
					   else if (*_flour == "157") flour = 157;
					   else if (*_flour == "158") flour = 158;
					   else if (*_flour == "159") flour = 159;
					   else if (*_flour == "160") flour = 160;
					   else if (*_flour == "161") flour = 161;
					   else if (*_flour == "162") flour = 162;
					   else if (*_flour == "163") flour = 163;
					   else if (*_flour == "164") flour = 164;
					   else if (*_flour == "165") flour = 165;
					   else if (*_flour == "166") flour = 166;
					   else if (*_flour == "167") flour = 167;
					   else if (*_flour == "168") flour = 168;
					   else if (*_flour == "169") flour = 169;
					   else if (*_flour == "170") flour = 170;
					   else if (*_flour == "171") flour = 171;
					   else if (*_flour == "172") flour = 172;
					   else if (*_flour == "173") flour = 173;
					   else if (*_flour == "174") flour = 174;
					   else if (*_flour == "175") flour = 175;
					   else if (*_flour == "176") flour = 176;
					   else if (*_flour == "177") flour = 177;
					   else if (*_flour == "178") flour = 178;
					   else if (*_flour == "179") flour = 179;
					   else if (*_flour == "180") flour = 180;
					   else if (*_flour == "181") flour = 181;
					   else if (*_flour == "182") flour = 182;
					   else if (*_flour == "183") flour = 183;
					   else if (*_flour == "184") flour = 184;
					   else if (*_flour == "185") flour = 185;
					   else if (*_flour == "186") flour = 186;
					   else if (*_flour == "187") flour = 187;
					   else if (*_flour == "188") flour = 188;
					   else if (*_flour == "189") flour = 189;
					   else if (*_flour == "190") flour = 190;
					   else if (*_flour == "191") flour = 191;
					   else if (*_flour == "192") flour = 192;
					   else if (*_flour == "193") flour = 193;
					   else if (*_flour == "194") flour = 194;
					   else if (*_flour == "195") flour = 195;
					   else if (*_flour == "196") flour = 196;
					   else if (*_flour == "197") flour = 197;
					   else if (*_flour == "198") flour = 198;
					   else if (*_flour == "199") flour = 199;
					   else if (*_flour == "200") flour = 200;
					   else if (*_flour == "201") flour = 201;
					   else if (*_flour == "202") flour = 202;
					   else if (*_flour == "203") flour = 203;
					   else if (*_flour == "204") flour = 204;
					   else if (*_flour == "205") flour = 205;
					   else if (*_flour == "206") flour = 206;
					   else if (*_flour == "207") flour = 207;
					   else if (*_flour == "208") flour = 208;
					   else if (*_flour == "209") flour = 209;
					   else if (*_flour == "210") flour = 210;
					   else if (*_flour == "211") flour = 211;
					   else if (*_flour == "212") flour = 212;
					   else if (*_flour == "213") flour = 213;
					   else if (*_flour == "214") flour = 214;
					   else if (*_flour == "215") flour = 215;
					   else if (*_flour == "216") flour = 216;
					   else if (*_flour == "217") flour = 217;
					   else if (*_flour == "218") flour = 218;
					   else if (*_flour == "219") flour = 219;
					   else if (*_flour == "220") flour = 220;
					   else if (*_flour == "221") flour = 221;
					   else if (*_flour == "222") flour = 222;
					   else if (*_flour == "223") flour = 223;
					   else if (*_flour == "224") flour = 224;
					   else if (*_flour == "225") flour = 225;
					   else if (*_flour == "226") flour = 226;
					   else if (*_flour == "227") flour = 227;
					   else if (*_flour == "228") flour = 228;
					   else if (*_flour == "229") flour = 229;
					   else if (*_flour == "230") flour = 230;
					   else if (*_flour == "231") flour = 231;
					   else if (*_flour == "232") flour = 232;
					   else if (*_flour == "233") flour = 233;
					   else if (*_flour == "234") flour = 234;
					   else if (*_flour == "235") flour = 235;
					   else if (*_flour == "236") flour = 236;
					   else if (*_flour == "237") flour = 237;
					   else if (*_flour == "238") flour = 238;
					   else if (*_flour == "239") flour = 239;
					   else if (*_flour == "240") flour = 240;
					   if (*_flour == "241") flour = 241;
					   else if (*_flour == "242") flour = 242;
					   else if (*_flour == "243") flour = 243;
					   else if (*_flour == "244") flour = 244;
					   else if (*_flour == "245") flour = 245;
					   else if (*_flour == "246") flour = 246;
					   else if (*_flour == "247") flour = 247;
					   else if (*_flour == "248") flour = 248;
					   else if (*_flour == "249") flour = 249;
					   else if (*_flour == "250") flour = 250;
					   else if (*_flour == "251") flour = 251;
					   else if (*_flour == "252") flour = 252;
					   else if (*_flour == "253") flour = 253;
					   else if (*_flour == "254") flour = 254;
					   else if (*_flour == "255") flour = 255;
					   else if (*_flour == "256") flour = 256;
					   else if (*_flour == "257") flour = 257;
					   else if (*_flour == "258") flour = 258;
					   else if (*_flour == "259") flour = 259;
					   else if (*_flour == "260") flour = 260;
					   else if (*_flour == "261") flour = 261;
					   else if (*_flour == "262") flour = 262;
					   else if (*_flour == "263") flour = 263;
					   else if (*_flour == "264") flour = 264;
					   else if (*_flour == "265") flour = 265;
					   else if (*_flour == "266") flour = 266;
					   else if (*_flour == "267") flour = 267;
					   else if (*_flour == "268") flour = 268;
					   else if (*_flour == "269") flour = 269;
					   else if (*_flour == "270") flour = 270;
					   else if (*_flour == "271") flour = 271;
					   else if (*_flour == "272") flour = 272;
					   else if (*_flour == "273") flour = 273;
					   else if (*_flour == "274") flour = 274;
					   else if (*_flour == "275") flour = 275;
					   else if (*_flour == "276") flour = 276;
					   else if (*_flour == "277") flour = 277;
					   else if (*_flour == "278") flour = 278;
					   else if (*_flour == "279") flour = 279;
					   else if (*_flour == "280") flour = 280;
					   else if (*_flour == "281") flour = 281;
					   else if (*_flour == "282") flour = 282;
					   else if (*_flour == "283") flour = 283;
					   else if (*_flour == "284") flour = 284;
					   else if (*_flour == "285") flour = 285;
					   else if (*_flour == "286") flour = 286;
					   else if (*_flour == "287") flour = 287;
					   else if (*_flour == "288") flour = 288;
					   else if (*_flour == "289") flour = 289;
					   else if (*_flour == "290") flour = 290;
					   else if (*_flour == "291") flour = 291;
					   else if (*_flour == "292") flour = 292;
					   else if (*_flour == "293") flour = 293;
					   else if (*_flour == "294") flour = 294;
					   else if (*_flour == "295") flour = 295;
					   else if (*_flour == "296") flour = 296;
					   else if (*_flour == "297") flour = 297;
					   else if (*_flour == "298") flour = 298;
					   else if (*_flour == "299") flour = 299;
					   else if (*_flour == "300") flour = 300;
					   else if (*_flour == "301") flour = 301;
					   else if (*_flour == "302") flour = 302;
					   else if (*_flour == "303") flour = 303;
					   else if (*_flour == "304") flour = 304;
					   else if (*_flour == "305") flour = 305;
					   else if (*_flour == "306") flour = 306;
					   else if (*_flour == "307") flour = 307;
					   else if (*_flour == "308") flour = 308;
					   else if (*_flour == "309") flour = 309;
					   else if (*_flour == "310") flour = 310;
					   else if (*_flour == "311") flour = 311;
					   else if (*_flour == "312") flour = 312;
					   else if (*_flour == "313") flour = 313;
					   else if (*_flour == "314") flour = 314;
					   else if (*_flour == "315") flour = 315;
					   else if (*_flour == "316") flour = 316;
					   else if (*_flour == "317") flour = 317;
					   else if (*_flour == "318") flour = 318;
					   else if (*_flour == "319") flour = 319;
					   else if (*_flour == "320") flour = 320;
					   else if (*_flour == "321") flour = 321;
					   else if (*_flour == "322") flour = 322;
					   else if (*_flour == "323") flour = 323;
					   else if (*_flour == "324") flour = 324;
					   else if (*_flour == "325") flour = 325;
					   else if (*_flour == "326") flour = 326;
					   else if (*_flour == "327") flour = 327;
					   else if (*_flour == "328") flour = 328;
					   else if (*_flour == "329") flour = 329;
					   else if (*_flour == "330") flour = 330;
					   else if (*_flour == "331") flour = 331;
					   else if (*_flour == "332") flour = 332;
					   else if (*_flour == "333") flour = 333;
					   else if (*_flour == "334") flour = 334;
					   else if (*_flour == "335") flour = 335;
					   else if (*_flour == "336") flour = 336;
					   else if (*_flour == "337") flour = 337;
					   else if (*_flour == "338") flour = 338;
					   else if (*_flour == "339") flour = 339;
					   else if (*_flour == "340") flour = 340;
					   else if (*_flour == "341") flour = 341;
					   else if (*_flour == "342") flour = 342;
					   else if (*_flour == "343") flour = 343;
					   else if (*_flour == "344") flour = 344;
					   else if (*_flour == "345") flour = 345;
					   else if (*_flour == "346") flour = 346;
					   else if (*_flour == "347") flour = 347;
					   else if (*_flour == "348") flour = 348;
					   else if (*_flour == "349") flour = 349;
					   else if (*_flour == "350") flour = 350;
					   else if (*_flour == "351") flour = 351;
					   else if (*_flour == "352") flour = 352;
					   else if (*_flour == "353") flour = 353;
					   else if (*_flour == "354") flour = 354;
					   else if (*_flour == "355") flour = 355;
					   else if (*_flour == "356") flour = 356;
					   else if (*_flour == "357") flour = 357;
					   else if (*_flour == "358") flour = 358;
					   else if (*_flour == "359") flour = 359;
					   else if (*_flour == "360") flour = 360;
					   if (*_flour == "361") flour = 361;
					   else if (*_flour == "362") flour = 362;
					   else if (*_flour == "363") flour = 363;
					   else if (*_flour == "364") flour = 364;
					   else if (*_flour == "365") flour = 365;
					   else if (*_flour == "366") flour = 366;
					   else if (*_flour == "367") flour = 367;
					   else if (*_flour == "368") flour = 368;
					   else if (*_flour == "369") flour = 369;
					   else if (*_flour == "370") flour = 370;
					   else if (*_flour == "371") flour = 371;
					   else if (*_flour == "372") flour = 372;
					   else if (*_flour == "373") flour = 373;
					   else if (*_flour == "374") flour = 374;
					   else if (*_flour == "375") flour = 375;
					   else if (*_flour == "376") flour = 376;
					   else if (*_flour == "377") flour = 377;
					   else if (*_flour == "378") flour = 378;
					   else if (*_flour == "379") flour = 379;
					   else if (*_flour == "380") flour = 380;
					   else if (*_flour == "381") flour = 381;
					   else if (*_flour == "382") flour = 382;
					   else if (*_flour == "383") flour = 383;
					   else if (*_flour == "384") flour = 384;
					   else if (*_flour == "385") flour = 385;
					   else if (*_flour == "386") flour = 386;
					   else if (*_flour == "387") flour = 387;
					   else if (*_flour == "388") flour = 388;
					   else if (*_flour == "389") flour = 389;
					   else if (*_flour == "390") flour = 390;
					   else if (*_flour == "391") flour = 391;
					   else if (*_flour == "392") flour = 392;
					   else if (*_flour == "393") flour = 393;
					   else if (*_flour == "394") flour = 394;
					   else if (*_flour == "395") flour = 395;
					   else if (*_flour == "396") flour = 396;
					   else if (*_flour == "397") flour = 397;
					   else if (*_flour == "398") flour = 398;
					   else if (*_flour == "399") flour = 399;
					   else if (*_flour == "400") flour = 400;
					   else if (*_flour == "401") flour = 401;
					   else if (*_flour == "402") flour = 402;
					   else if (*_flour == "403") flour = 403;
					   else if (*_flour == "404") flour = 404;
					   else if (*_flour == "405") flour = 405;
					   else if (*_flour == "406") flour = 406;
					   else if (*_flour == "407") flour = 407;
					   else if (*_flour == "408") flour = 408;
					   else if (*_flour == "409") flour = 409;
					   else if (*_flour == "410") flour = 410;
					   else if (*_flour == "411") flour = 411;
					   else if (*_flour == "412") flour = 412;
					   else if (*_flour == "413") flour = 413;
					   else if (*_flour == "414") flour = 414;
					   else if (*_flour == "415") flour = 415;
					   else if (*_flour == "416") flour = 416;
					   else if (*_flour == "417") flour = 417;
					   else if (*_flour == "418") flour = 418;
					   else if (*_flour == "419") flour = 419;
					   else if (*_flour == "420") flour = 420;
					   else if (*_flour == "421") flour = 421;
					   else if (*_flour == "422") flour = 422;
					   else if (*_flour == "423") flour = 423;
					   else if (*_flour == "424") flour = 424;
					   else if (*_flour == "425") flour = 425;
					   else if (*_flour == "426") flour = 426;
					   else if (*_flour == "427") flour = 427;
					   else if (*_flour == "428") flour = 428;
					   else if (*_flour == "429") flour = 429;
					   else if (*_flour == "430") flour = 430;
					   else if (*_flour == "431") flour = 431;
					   else if (*_flour == "432") flour = 432;
					   else if (*_flour == "433") flour = 433;
					   else if (*_flour == "434") flour = 434;
					   else if (*_flour == "435") flour = 435;
					   else if (*_flour == "436") flour = 436;
					   else if (*_flour == "437") flour = 437;
					   else if (*_flour == "438") flour = 438;
					   else if (*_flour == "439") flour = 439;
					   else if (*_flour == "440") flour = 440;
					   else if (*_flour == "441") flour = 441;
					   else if (*_flour == "442") flour = 442;
					   else if (*_flour == "443") flour = 443;
					   else if (*_flour == "444") flour = 444;
					   else if (*_flour == "445") flour = 445;
					   else if (*_flour == "446") flour = 446;
					   else if (*_flour == "447") flour = 447;
					   else if (*_flour == "448") flour = 448;
					   else if (*_flour == "449") flour = 449;
					   else if (*_flour == "450") flour = 450;
					   else if (*_flour == "451") flour = 451;
					   else if (*_flour == "452") flour = 452;
					   else if (*_flour == "453") flour = 453;
					   else if (*_flour == "454") flour = 454;
					   else if (*_flour == "455") flour = 455;
					   else if (*_flour == "456") flour = 456;
					   else if (*_flour == "457") flour = 457;
					   else if (*_flour == "458") flour = 458;
					   else if (*_flour == "459") flour = 459;
					   else if (*_flour == "460") flour = 460;
					   else if (*_flour == "461") flour = 461;
					   else if (*_flour == "462") flour = 462;
					   else if (*_flour == "463") flour = 463;
					   else if (*_flour == "464") flour = 464;
					   else if (*_flour == "465") flour = 465;
					   else if (*_flour == "466") flour = 466;
					   else if (*_flour == "467") flour = 467;
					   else if (*_flour == "468") flour = 468;
					   else if (*_flour == "469") flour = 469;
					   else if (*_flour == "470") flour = 470;
					   else if (*_flour == "471") flour = 471;
					   else if (*_flour == "472") flour = 472;
					   else if (*_flour == "473") flour = 473;
					   else if (*_flour == "474") flour = 474;
					   else if (*_flour == "475") flour = 475;
					   else if (*_flour == "476") flour = 476;
					   else if (*_flour == "477") flour = 477;
					   else if (*_flour == "478") flour = 478;
					   else if (*_flour == "479") flour = 479;
					   else if (*_flour == "480") flour = 480;
					   if (*_flour == "481") flour = 481;
					   else if (*_flour == "482") flour = 482;
					   else if (*_flour == "483") flour = 483;
					   else if (*_flour == "484") flour = 484;
					   else if (*_flour == "485") flour = 485;
					   else if (*_flour == "486") flour = 486;
					   else if (*_flour == "487") flour = 487;
					   else if (*_flour == "488") flour = 488;
					   else if (*_flour == "489") flour = 489;
					   else if (*_flour == "490") flour = 490;
					   else if (*_flour == "491") flour = 491;
					   else if (*_flour == "492") flour = 492;
					   else if (*_flour == "493") flour = 493;
					   else if (*_flour == "494") flour = 494;
					   else if (*_flour == "495") flour = 495;
					   else if (*_flour == "496") flour = 496;
					   else if (*_flour == "497") flour = 497;
					   else if (*_flour == "498") flour = 498;
					   else if (*_flour == "499") flour = 499;
					   else if (*_flour == "500") flour = 500;
					   else if (*_flour == "501") flour = 501;
					   else if (*_flour == "502") flour = 502;
					   else if (*_flour == "503") flour = 503;
					   else if (*_flour == "504") flour = 504;
					   else if (*_flour == "505") flour = 505;
					   else if (*_flour == "506") flour = 506;
					   else if (*_flour == "507") flour = 507;
					   else if (*_flour == "508") flour = 508;
					   else if (*_flour == "509") flour = 509;
					   else if (*_flour == "510") flour = 510;
					   else if (*_flour == "511") flour = 511;
					   else if (*_flour == "512") flour = 512;
					   else if (*_flour == "513") flour = 513;
					   else if (*_flour == "514") flour = 514;
					   else if (*_flour == "515") flour = 515;
					   else if (*_flour == "516") flour = 516;
					   else if (*_flour == "517") flour = 517;
					   else if (*_flour == "518") flour = 518;
					   else if (*_flour == "519") flour = 519;
					   else if (*_flour == "520") flour = 520;
					   else if (*_flour == "521") flour = 521;
					   else if (*_flour == "522") flour = 522;
					   else if (*_flour == "523") flour = 523;
					   else if (*_flour == "524") flour = 524;
					   else if (*_flour == "525") flour = 525;
					   else if (*_flour == "526") flour = 526;
					   else if (*_flour == "527") flour = 527;
					   else if (*_flour == "528") flour = 528;
					   else if (*_flour == "529") flour = 529;
					   else if (*_flour == "530") flour = 530;
					   else if (*_flour == "531") flour = 531;
					   else if (*_flour == "532") flour = 532;
					   else if (*_flour == "533") flour = 533;
					   else if (*_flour == "534") flour = 534;
					   else if (*_flour == "535") flour = 535;
					   else if (*_flour == "536") flour = 536;
					   else if (*_flour == "537") flour = 537;
					   else if (*_flour == "538") flour = 538;
					   else if (*_flour == "539") flour = 539;
					   else if (*_flour == "540") flour = 540;
					   else if (*_flour == "541") flour = 541;
					   else if (*_flour == "542") flour = 542;
					   else if (*_flour == "543") flour = 543;
					   else if (*_flour == "544") flour = 544;
					   else if (*_flour == "545") flour = 545;
					   else if (*_flour == "546") flour = 546;
					   else if (*_flour == "547") flour = 547;
					   else if (*_flour == "548") flour = 548;
					   else if (*_flour == "549") flour = 549;
					   else if (*_flour == "550") flour = 550;
					   else if (*_flour == "551") flour = 551;
					   else if (*_flour == "552") flour = 552;
					   else if (*_flour == "553") flour = 553;
					   else if (*_flour == "554") flour = 554;
					   else if (*_flour == "555") flour = 555;
					   else if (*_flour == "556") flour = 556;
					   else if (*_flour == "557") flour = 557;
					   else if (*_flour == "558") flour = 558;
					   else if (*_flour == "559") flour = 559;
					   else if (*_flour == "560") flour = 560;
					   else if (*_flour == "561") flour = 561;
					   else if (*_flour == "562") flour = 562;
					   else if (*_flour == "563") flour = 563;
					   else if (*_flour == "564") flour = 564;
					   else if (*_flour == "565") flour = 565;
					   else if (*_flour == "566") flour = 566;
					   else if (*_flour == "567") flour = 567;
					   else if (*_flour == "568") flour = 568;
					   else if (*_flour == "569") flour = 569;
					   else if (*_flour == "570") flour = 570;
					   else if (*_flour == "571") flour = 571;
					   else if (*_flour == "572") flour = 572;
					   else if (*_flour == "573") flour = 573;
					   else if (*_flour == "574") flour = 574;
					   else if (*_flour == "575") flour = 575;
					   else if (*_flour == "576") flour = 576;
					   else if (*_flour == "577") flour = 577;
					   else if (*_flour == "578") flour = 578;
					   else if (*_flour == "579") flour = 579;
					   else if (*_flour == "580") flour = 580;
					   else if (*_flour == "581") flour = 581;
					   else if (*_flour == "582") flour = 582;
					   else if (*_flour == "583") flour = 583;
					   else if (*_flour == "584") flour = 584;
					   else if (*_flour == "585") flour = 585;
					   else if (*_flour == "586") flour = 586;
					   else if (*_flour == "587") flour = 587;
					   else if (*_flour == "588") flour = 588;
					   else if (*_flour == "589") flour = 589;
					   else if (*_flour == "590") flour = 590;
					   else if (*_flour == "591") flour = 591;
					   else if (*_flour == "592") flour = 592;
					   else if (*_flour == "593") flour = 593;
					   else if (*_flour == "594") flour = 594;
					   else if (*_flour == "595") flour = 595;
					   else if (*_flour == "596") flour = 596;
					   else if (*_flour == "597") flour = 597;
					   else if (*_flour == "598") flour = 598;
					   else if (*_flour == "599") flour = 599;
					   else if (*_flour == "600") flour = 600;
					   if (*_flour == "601") flour = 601;
					   else if (*_flour == "602") flour = 602;
					   else if (*_flour == "603") flour = 603;
					   else if (*_flour == "604") flour = 604;
					   else if (*_flour == "605") flour = 605;
					   else if (*_flour == "606") flour = 606;
					   else if (*_flour == "607") flour = 607;
					   else if (*_flour == "608") flour = 608;
					   else if (*_flour == "609") flour = 609;
					   else if (*_flour == "610") flour = 610;
					   else if (*_flour == "611") flour = 611;
					   else if (*_flour == "612") flour = 612;
					   else if (*_flour == "613") flour = 613;
					   else if (*_flour == "614") flour = 614;
					   else if (*_flour == "615") flour = 615;
					   else if (*_flour == "616") flour = 616;
					   else if (*_flour == "617") flour = 617;
					   else if (*_flour == "618") flour = 618;
					   else if (*_flour == "619") flour = 619;
					   else if (*_flour == "620") flour = 620;
					   else if (*_flour == "621") flour = 621;
					   else if (*_flour == "622") flour = 622;
					   else if (*_flour == "623") flour = 623;
					   else if (*_flour == "624") flour = 624;
					   else if (*_flour == "625") flour = 625;
					   else if (*_flour == "626") flour = 626;
					   else if (*_flour == "627") flour = 627;
					   else if (*_flour == "628") flour = 628;
					   else if (*_flour == "629") flour = 629;
					   else if (*_flour == "630") flour = 630;
					   else if (*_flour == "631") flour = 631;
					   else if (*_flour == "632") flour = 632;
					   else if (*_flour == "633") flour = 633;
					   else if (*_flour == "634") flour = 634;
					   else if (*_flour == "635") flour = 635;
					   else if (*_flour == "636") flour = 636;
					   else if (*_flour == "637") flour = 637;
					   else if (*_flour == "638") flour = 638;
					   else if (*_flour == "639") flour = 639;
					   else if (*_flour == "640") flour = 640;
					   else if (*_flour == "641") flour = 641;
					   else if (*_flour == "642") flour = 642;
					   else if (*_flour == "643") flour = 643;
					   else if (*_flour == "644") flour = 644;
					   else if (*_flour == "645") flour = 645;
					   else if (*_flour == "646") flour = 646;
					   else if (*_flour == "647") flour = 647;
					   else if (*_flour == "648") flour = 648;
					   else if (*_flour == "649") flour = 649;
					   else if (*_flour == "650") flour = 650;
					   else if (*_flour == "651") flour = 651;
					   else if (*_flour == "652") flour = 652;
					   else if (*_flour == "653") flour = 653;
					   else if (*_flour == "654") flour = 654;
					   else if (*_flour == "655") flour = 655;
					   else if (*_flour == "656") flour = 656;
					   else if (*_flour == "657") flour = 657;
					   else if (*_flour == "658") flour = 658;
					   else if (*_flour == "659") flour = 659;
					   else if (*_flour == "660") flour = 660;
					   else if (*_flour == "661") flour = 661;
					   else if (*_flour == "662") flour = 662;
					   else if (*_flour == "663") flour = 663;
					   else if (*_flour == "664") flour = 664;
					   else if (*_flour == "665") flour = 665;
					   else if (*_flour == "666") flour = 666;
					   else if (*_flour == "667") flour = 667;
					   else if (*_flour == "668") flour = 668;
					   else if (*_flour == "669") flour = 669;
					   else if (*_flour == "670") flour = 670;
					   else if (*_flour == "671") flour = 671;
					   else if (*_flour == "672") flour = 672;
					   else if (*_flour == "673") flour = 673;
					   else if (*_flour == "674") flour = 674;
					   else if (*_flour == "675") flour = 675;
					   else if (*_flour == "676") flour = 676;
					   else if (*_flour == "677") flour = 677;
					   else if (*_flour == "678") flour = 678;
					   else if (*_flour == "679") flour = 679;
					   else if (*_flour == "680") flour = 680;
					   else if (*_flour == "681") flour = 681;
					   else if (*_flour == "682") flour = 682;
					   else if (*_flour == "683") flour = 683;
					   else if (*_flour == "684") flour = 684;
					   else if (*_flour == "685") flour = 685;
					   else if (*_flour == "686") flour = 686;
					   else if (*_flour == "687") flour = 687;
					   else if (*_flour == "688") flour = 688;
					   else if (*_flour == "689") flour = 689;
					   else if (*_flour == "690") flour = 690;
					   else if (*_flour == "691") flour = 691;
					   else if (*_flour == "692") flour = 692;
					   else if (*_flour == "693") flour = 693;
					   else if (*_flour == "694") flour = 694;
					   else if (*_flour == "695") flour = 695;
					   else if (*_flour == "696") flour = 696;
					   else if (*_flour == "697") flour = 697;
					   else if (*_flour == "698") flour = 698;
					   else if (*_flour == "699") flour = 699;
					   else if (*_flour == "700") flour = 700;

					   delete _flour;
				   }
				   {}
				   //bread
				   {
					   string* _bread = new string;

					   getline(Data, *_bread);
					   if (*_bread == "0") bread = 0;
					   else if (*_bread == "1") bread = 1;
					   else if (*_bread == "2") bread = 2;
					   else if (*_bread == "3") bread = 3;
					   else if (*_bread == "4") bread = 4;
					   else if (*_bread == "5") bread = 5;
					   else if (*_bread == "6") bread = 6;
					   else if (*_bread == "7") bread = 7;
					   else if (*_bread == "8") bread = 8;
					   else if (*_bread == "9") bread = 9;
					   else if (*_bread == "10") bread = 10;
					   else if (*_bread == "11") bread = 11;
					   else if (*_bread == "12") bread = 12;
					   else if (*_bread == "13") bread = 13;
					   else if (*_bread == "14") bread = 14;
					   else if (*_bread == "15") bread = 15;
					   else if (*_bread == "16") bread = 16;
					   else if (*_bread == "17") bread = 17;
					   else if (*_bread == "18") bread = 18;
					   else if (*_bread == "19") bread = 19;
					   else if (*_bread == "20") bread = 20;
					   else if (*_bread == "21") bread = 21;
					   else if (*_bread == "22") bread = 22;
					   else if (*_bread == "23") bread = 23;
					   else if (*_bread == "24") bread = 24;
					   else if (*_bread == "25") bread = 25;
					   else if (*_bread == "26") bread = 26;
					   else if (*_bread == "27") bread = 27;
					   else if (*_bread == "28") bread = 28;
					   else if (*_bread == "29") bread = 29;
					   else if (*_bread == "30") bread = 30;
					   else if (*_bread == "31") bread = 31;
					   else if (*_bread == "32") bread = 32;
					   else if (*_bread == "33") bread = 33;
					   else if (*_bread == "34") bread = 34;
					   else if (*_bread == "35") bread = 35;
					   else if (*_bread == "36") bread = 36;
					   else if (*_bread == "37") bread = 37;
					   else if (*_bread == "38") bread = 38;
					   else if (*_bread == "39") bread = 39;
					   else if (*_bread == "40") bread = 40;
					   else if (*_bread == "41") bread = 41;
					   else if (*_bread == "42") bread = 42;
					   else if (*_bread == "43") bread = 43;
					   else if (*_bread == "44") bread = 44;
					   else if (*_bread == "45") bread = 45;
					   else if (*_bread == "46") bread = 46;
					   else if (*_bread == "47") bread = 47;
					   else if (*_bread == "48") bread = 48;
					   else if (*_bread == "49") bread = 49;
					   else if (*_bread == "50") bread = 50;
					   else if (*_bread == "51") bread = 51;
					   else if (*_bread == "52") bread = 52;
					   else if (*_bread == "53") bread = 53;
					   else if (*_bread == "54") bread = 54;
					   else if (*_bread == "55") bread = 55;
					   else if (*_bread == "56") bread = 56;
					   else if (*_bread == "57") bread = 57;
					   else if (*_bread == "58") bread = 58;
					   else if (*_bread == "59") bread = 59;
					   else if (*_bread == "60") bread = 60;
					   else if (*_bread == "61") bread = 61;
					   else if (*_bread == "62") bread = 62;
					   else if (*_bread == "63") bread = 63;
					   else if (*_bread == "64") bread = 64;
					   else if (*_bread == "65") bread = 65;
					   else if (*_bread == "66") bread = 66;
					   else if (*_bread == "67") bread = 67;
					   else if (*_bread == "68") bread = 68;
					   else if (*_bread == "69") bread = 69;
					   else if (*_bread == "70") bread = 70;
					   else if (*_bread == "71") bread = 71;
					   else if (*_bread == "72") bread = 72;
					   else if (*_bread == "73") bread = 73;
					   else if (*_bread == "74") bread = 74;
					   else if (*_bread == "75") bread = 75;
					   else if (*_bread == "76") bread = 76;
					   else if (*_bread == "77") bread = 77;
					   else if (*_bread == "78") bread = 78;
					   else if (*_bread == "79") bread = 79;
					   else if (*_bread == "80") bread = 80;
					   else if (*_bread == "81") bread = 81;
					   else if (*_bread == "82") bread = 82;
					   else if (*_bread == "83") bread = 83;
					   else if (*_bread == "84") bread = 84;
					   else if (*_bread == "85") bread = 85;
					   else if (*_bread == "86") bread = 86;
					   else if (*_bread == "87") bread = 87;
					   else if (*_bread == "88") bread = 88;
					   else if (*_bread == "89") bread = 89;
					   else if (*_bread == "90") bread = 90;
					   else if (*_bread == "91") bread = 91;
					   else if (*_bread == "92") bread = 92;
					   else if (*_bread == "93") bread = 93;
					   else if (*_bread == "94") bread = 94;
					   else if (*_bread == "95") bread = 95;
					   else if (*_bread == "96") bread = 96;
					   else if (*_bread == "97") bread = 97;
					   else if (*_bread == "98") bread = 98;
					   else if (*_bread == "99") bread = 99;
					   else if (*_bread == "100") bread = 100;
					   else if (*_bread == "101") bread = 101;
					   else if (*_bread == "102") bread = 102;
					   else if (*_bread == "103") bread = 103;
					   else if (*_bread == "104") bread = 104;
					   else if (*_bread == "105") bread = 105;
					   else if (*_bread == "106") bread = 106;
					   else if (*_bread == "107") bread = 107;
					   else if (*_bread == "108") bread = 108;
					   else if (*_bread == "109") bread = 109;
					   else if (*_bread == "110") bread = 110;
					   else if (*_bread == "111") bread = 111;
					   else if (*_bread == "112") bread = 112;
					   else if (*_bread == "113") bread = 113;
					   else if (*_bread == "114") bread = 114;
					   else if (*_bread == "115") bread = 115;
					   else if (*_bread == "116") bread = 116;
					   else if (*_bread == "117") bread = 117;
					   else if (*_bread == "118") bread = 118;
					   else if (*_bread == "119") bread = 119;
					   else if (*_bread == "120") bread = 120;
					   if (*_bread == "121") bread = 121;
					   else if (*_bread == "122") bread = 122;
					   else if (*_bread == "123") bread = 123;
					   else if (*_bread == "124") bread = 124;
					   else if (*_bread == "125") bread = 125;
					   else if (*_bread == "126") bread = 126;
					   else if (*_bread == "127") bread = 127;
					   else if (*_bread == "128") bread = 128;
					   else if (*_bread == "129") bread = 129;
					   else if (*_bread == "130") bread = 130;
					   else if (*_bread == "131") bread = 131;
					   else if (*_bread == "132") bread = 132;
					   else if (*_bread == "133") bread = 133;
					   else if (*_bread == "134") bread = 134;
					   else if (*_bread == "135") bread = 135;
					   else if (*_bread == "136") bread = 136;
					   else if (*_bread == "137") bread = 137;
					   else if (*_bread == "138") bread = 138;
					   else if (*_bread == "139") bread = 139;
					   else if (*_bread == "140") bread = 140;
					   else if (*_bread == "141") bread = 141;
					   else if (*_bread == "142") bread = 142;
					   else if (*_bread == "143") bread = 143;
					   else if (*_bread == "144") bread = 144;
					   else if (*_bread == "145") bread = 145;
					   else if (*_bread == "146") bread = 146;
					   else if (*_bread == "147") bread = 147;
					   else if (*_bread == "148") bread = 148;
					   else if (*_bread == "149") bread = 149;
					   else if (*_bread == "150") bread = 150;
					   else if (*_bread == "151") bread = 151;
					   else if (*_bread == "152") bread = 152;
					   else if (*_bread == "153") bread = 153;
					   else if (*_bread == "154") bread = 154;
					   else if (*_bread == "155") bread = 155;
					   else if (*_bread == "156") bread = 156;
					   else if (*_bread == "157") bread = 157;
					   else if (*_bread == "158") bread = 158;
					   else if (*_bread == "159") bread = 159;
					   else if (*_bread == "160") bread = 160;
					   else if (*_bread == "161") bread = 161;
					   else if (*_bread == "162") bread = 162;
					   else if (*_bread == "163") bread = 163;
					   else if (*_bread == "164") bread = 164;
					   else if (*_bread == "165") bread = 165;
					   else if (*_bread == "166") bread = 166;
					   else if (*_bread == "167") bread = 167;
					   else if (*_bread == "168") bread = 168;
					   else if (*_bread == "169") bread = 169;
					   else if (*_bread == "170") bread = 170;
					   else if (*_bread == "171") bread = 171;
					   else if (*_bread == "172") bread = 172;
					   else if (*_bread == "173") bread = 173;
					   else if (*_bread == "174") bread = 174;
					   else if (*_bread == "175") bread = 175;
					   else if (*_bread == "176") bread = 176;
					   else if (*_bread == "177") bread = 177;
					   else if (*_bread == "178") bread = 178;
					   else if (*_bread == "179") bread = 179;
					   else if (*_bread == "180") bread = 180;
					   else if (*_bread == "181") bread = 181;
					   else if (*_bread == "182") bread = 182;
					   else if (*_bread == "183") bread = 183;
					   else if (*_bread == "184") bread = 184;
					   else if (*_bread == "185") bread = 185;
					   else if (*_bread == "186") bread = 186;
					   else if (*_bread == "187") bread = 187;
					   else if (*_bread == "188") bread = 188;
					   else if (*_bread == "189") bread = 189;
					   else if (*_bread == "190") bread = 190;
					   else if (*_bread == "191") bread = 191;
					   else if (*_bread == "192") bread = 192;
					   else if (*_bread == "193") bread = 193;
					   else if (*_bread == "194") bread = 194;
					   else if (*_bread == "195") bread = 195;
					   else if (*_bread == "196") bread = 196;
					   else if (*_bread == "197") bread = 197;
					   else if (*_bread == "198") bread = 198;
					   else if (*_bread == "199") bread = 199;
					   else if (*_bread == "200") bread = 200;
					   else if (*_bread == "201") bread = 201;
					   else if (*_bread == "202") bread = 202;
					   else if (*_bread == "203") bread = 203;
					   else if (*_bread == "204") bread = 204;
					   else if (*_bread == "205") bread = 205;
					   else if (*_bread == "206") bread = 206;
					   else if (*_bread == "207") bread = 207;
					   else if (*_bread == "208") bread = 208;
					   else if (*_bread == "209") bread = 209;
					   else if (*_bread == "210") bread = 210;
					   else if (*_bread == "211") bread = 211;
					   else if (*_bread == "212") bread = 212;
					   else if (*_bread == "213") bread = 213;
					   else if (*_bread == "214") bread = 214;
					   else if (*_bread == "215") bread = 215;
					   else if (*_bread == "216") bread = 216;
					   else if (*_bread == "217") bread = 217;
					   else if (*_bread == "218") bread = 218;
					   else if (*_bread == "219") bread = 219;
					   else if (*_bread == "220") bread = 220;
					   else if (*_bread == "221") bread = 221;
					   else if (*_bread == "222") bread = 222;
					   else if (*_bread == "223") bread = 223;
					   else if (*_bread == "224") bread = 224;
					   else if (*_bread == "225") bread = 225;
					   else if (*_bread == "226") bread = 226;
					   else if (*_bread == "227") bread = 227;
					   else if (*_bread == "228") bread = 228;
					   else if (*_bread == "229") bread = 229;
					   else if (*_bread == "230") bread = 230;
					   else if (*_bread == "231") bread = 231;
					   else if (*_bread == "232") bread = 232;
					   else if (*_bread == "233") bread = 233;
					   else if (*_bread == "234") bread = 234;
					   else if (*_bread == "235") bread = 235;
					   else if (*_bread == "236") bread = 236;
					   else if (*_bread == "237") bread = 237;
					   else if (*_bread == "238") bread = 238;
					   else if (*_bread == "239") bread = 239;
					   else if (*_bread == "240") bread = 240;
					   if (*_bread == "241") bread = 241;
					   else if (*_bread == "242") bread = 242;
					   else if (*_bread == "243") bread = 243;
					   else if (*_bread == "244") bread = 244;
					   else if (*_bread == "245") bread = 245;
					   else if (*_bread == "246") bread = 246;
					   else if (*_bread == "247") bread = 247;
					   else if (*_bread == "248") bread = 248;
					   else if (*_bread == "249") bread = 249;
					   else if (*_bread == "250") bread = 250;
					   else if (*_bread == "251") bread = 251;
					   else if (*_bread == "252") bread = 252;
					   else if (*_bread == "253") bread = 253;
					   else if (*_bread == "254") bread = 254;
					   else if (*_bread == "255") bread = 255;
					   else if (*_bread == "256") bread = 256;
					   else if (*_bread == "257") bread = 257;
					   else if (*_bread == "258") bread = 258;
					   else if (*_bread == "259") bread = 259;
					   else if (*_bread == "260") bread = 260;
					   else if (*_bread == "261") bread = 261;
					   else if (*_bread == "262") bread = 262;
					   else if (*_bread == "263") bread = 263;
					   else if (*_bread == "264") bread = 264;
					   else if (*_bread == "265") bread = 265;
					   else if (*_bread == "266") bread = 266;
					   else if (*_bread == "267") bread = 267;
					   else if (*_bread == "268") bread = 268;
					   else if (*_bread == "269") bread = 269;
					   else if (*_bread == "270") bread = 270;
					   else if (*_bread == "271") bread = 271;
					   else if (*_bread == "272") bread = 272;
					   else if (*_bread == "273") bread = 273;
					   else if (*_bread == "274") bread = 274;
					   else if (*_bread == "275") bread = 275;
					   else if (*_bread == "276") bread = 276;
					   else if (*_bread == "277") bread = 277;
					   else if (*_bread == "278") bread = 278;
					   else if (*_bread == "279") bread = 279;
					   else if (*_bread == "280") bread = 280;
					   else if (*_bread == "281") bread = 281;
					   else if (*_bread == "282") bread = 282;
					   else if (*_bread == "283") bread = 283;
					   else if (*_bread == "284") bread = 284;
					   else if (*_bread == "285") bread = 285;
					   else if (*_bread == "286") bread = 286;
					   else if (*_bread == "287") bread = 287;
					   else if (*_bread == "288") bread = 288;
					   else if (*_bread == "289") bread = 289;
					   else if (*_bread == "290") bread = 290;
					   else if (*_bread == "291") bread = 291;
					   else if (*_bread == "292") bread = 292;
					   else if (*_bread == "293") bread = 293;
					   else if (*_bread == "294") bread = 294;
					   else if (*_bread == "295") bread = 295;
					   else if (*_bread == "296") bread = 296;
					   else if (*_bread == "297") bread = 297;
					   else if (*_bread == "298") bread = 298;
					   else if (*_bread == "299") bread = 299;
					   else if (*_bread == "300") bread = 300;
					   else if (*_bread == "301") bread = 301;
					   else if (*_bread == "302") bread = 302;
					   else if (*_bread == "303") bread = 303;
					   else if (*_bread == "304") bread = 304;
					   else if (*_bread == "305") bread = 305;
					   else if (*_bread == "306") bread = 306;
					   else if (*_bread == "307") bread = 307;
					   else if (*_bread == "308") bread = 308;
					   else if (*_bread == "309") bread = 309;
					   else if (*_bread == "310") bread = 310;
					   else if (*_bread == "311") bread = 311;
					   else if (*_bread == "312") bread = 312;
					   else if (*_bread == "313") bread = 313;
					   else if (*_bread == "314") bread = 314;
					   else if (*_bread == "315") bread = 315;
					   else if (*_bread == "316") bread = 316;
					   else if (*_bread == "317") bread = 317;
					   else if (*_bread == "318") bread = 318;
					   else if (*_bread == "319") bread = 319;
					   else if (*_bread == "320") bread = 320;
					   else if (*_bread == "321") bread = 321;
					   else if (*_bread == "322") bread = 322;
					   else if (*_bread == "323") bread = 323;
					   else if (*_bread == "324") bread = 324;
					   else if (*_bread == "325") bread = 325;
					   else if (*_bread == "326") bread = 326;
					   else if (*_bread == "327") bread = 327;
					   else if (*_bread == "328") bread = 328;
					   else if (*_bread == "329") bread = 329;
					   else if (*_bread == "330") bread = 330;
					   else if (*_bread == "331") bread = 331;
					   else if (*_bread == "332") bread = 332;
					   else if (*_bread == "333") bread = 333;
					   else if (*_bread == "334") bread = 334;
					   else if (*_bread == "335") bread = 335;
					   else if (*_bread == "336") bread = 336;
					   else if (*_bread == "337") bread = 337;
					   else if (*_bread == "338") bread = 338;
					   else if (*_bread == "339") bread = 339;
					   else if (*_bread == "340") bread = 340;
					   else if (*_bread == "341") bread = 341;
					   else if (*_bread == "342") bread = 342;
					   else if (*_bread == "343") bread = 343;
					   else if (*_bread == "344") bread = 344;
					   else if (*_bread == "345") bread = 345;
					   else if (*_bread == "346") bread = 346;
					   else if (*_bread == "347") bread = 347;
					   else if (*_bread == "348") bread = 348;
					   else if (*_bread == "349") bread = 349;
					   else if (*_bread == "350") bread = 350;
					   else if (*_bread == "351") bread = 351;
					   else if (*_bread == "352") bread = 352;
					   else if (*_bread == "353") bread = 353;
					   else if (*_bread == "354") bread = 354;
					   else if (*_bread == "355") bread = 355;
					   else if (*_bread == "356") bread = 356;
					   else if (*_bread == "357") bread = 357;
					   else if (*_bread == "358") bread = 358;
					   else if (*_bread == "359") bread = 359;
					   else if (*_bread == "360") bread = 360;
					   if (*_bread == "361") bread = 361;
					   else if (*_bread == "362") bread = 362;
					   else if (*_bread == "363") bread = 363;
					   else if (*_bread == "364") bread = 364;
					   else if (*_bread == "365") bread = 365;
					   else if (*_bread == "366") bread = 366;
					   else if (*_bread == "367") bread = 367;
					   else if (*_bread == "368") bread = 368;
					   else if (*_bread == "369") bread = 369;
					   else if (*_bread == "370") bread = 370;
					   else if (*_bread == "371") bread = 371;
					   else if (*_bread == "372") bread = 372;
					   else if (*_bread == "373") bread = 373;
					   else if (*_bread == "374") bread = 374;
					   else if (*_bread == "375") bread = 375;
					   else if (*_bread == "376") bread = 376;
					   else if (*_bread == "377") bread = 377;
					   else if (*_bread == "378") bread = 378;
					   else if (*_bread == "379") bread = 379;
					   else if (*_bread == "380") bread = 380;
					   else if (*_bread == "381") bread = 381;
					   else if (*_bread == "382") bread = 382;
					   else if (*_bread == "383") bread = 383;
					   else if (*_bread == "384") bread = 384;
					   else if (*_bread == "385") bread = 385;
					   else if (*_bread == "386") bread = 386;
					   else if (*_bread == "387") bread = 387;
					   else if (*_bread == "388") bread = 388;
					   else if (*_bread == "389") bread = 389;
					   else if (*_bread == "390") bread = 390;
					   else if (*_bread == "391") bread = 391;
					   else if (*_bread == "392") bread = 392;
					   else if (*_bread == "393") bread = 393;
					   else if (*_bread == "394") bread = 394;
					   else if (*_bread == "395") bread = 395;
					   else if (*_bread == "396") bread = 396;
					   else if (*_bread == "397") bread = 397;
					   else if (*_bread == "398") bread = 398;
					   else if (*_bread == "399") bread = 399;
					   else if (*_bread == "400") bread = 400;
					   else if (*_bread == "401") bread = 401;
					   else if (*_bread == "402") bread = 402;
					   else if (*_bread == "403") bread = 403;
					   else if (*_bread == "404") bread = 404;
					   else if (*_bread == "405") bread = 405;
					   else if (*_bread == "406") bread = 406;
					   else if (*_bread == "407") bread = 407;
					   else if (*_bread == "408") bread = 408;
					   else if (*_bread == "409") bread = 409;
					   else if (*_bread == "410") bread = 410;
					   else if (*_bread == "411") bread = 411;
					   else if (*_bread == "412") bread = 412;
					   else if (*_bread == "413") bread = 413;
					   else if (*_bread == "414") bread = 414;
					   else if (*_bread == "415") bread = 415;
					   else if (*_bread == "416") bread = 416;
					   else if (*_bread == "417") bread = 417;
					   else if (*_bread == "418") bread = 418;
					   else if (*_bread == "419") bread = 419;
					   else if (*_bread == "420") bread = 420;
					   else if (*_bread == "421") bread = 421;
					   else if (*_bread == "422") bread = 422;
					   else if (*_bread == "423") bread = 423;
					   else if (*_bread == "424") bread = 424;
					   else if (*_bread == "425") bread = 425;
					   else if (*_bread == "426") bread = 426;
					   else if (*_bread == "427") bread = 427;
					   else if (*_bread == "428") bread = 428;
					   else if (*_bread == "429") bread = 429;
					   else if (*_bread == "430") bread = 430;
					   else if (*_bread == "431") bread = 431;
					   else if (*_bread == "432") bread = 432;
					   else if (*_bread == "433") bread = 433;
					   else if (*_bread == "434") bread = 434;
					   else if (*_bread == "435") bread = 435;
					   else if (*_bread == "436") bread = 436;
					   else if (*_bread == "437") bread = 437;
					   else if (*_bread == "438") bread = 438;
					   else if (*_bread == "439") bread = 439;
					   else if (*_bread == "440") bread = 440;
					   else if (*_bread == "441") bread = 441;
					   else if (*_bread == "442") bread = 442;
					   else if (*_bread == "443") bread = 443;
					   else if (*_bread == "444") bread = 444;
					   else if (*_bread == "445") bread = 445;
					   else if (*_bread == "446") bread = 446;
					   else if (*_bread == "447") bread = 447;
					   else if (*_bread == "448") bread = 448;
					   else if (*_bread == "449") bread = 449;
					   else if (*_bread == "450") bread = 450;
					   else if (*_bread == "451") bread = 451;
					   else if (*_bread == "452") bread = 452;
					   else if (*_bread == "453") bread = 453;
					   else if (*_bread == "454") bread = 454;
					   else if (*_bread == "455") bread = 455;
					   else if (*_bread == "456") bread = 456;
					   else if (*_bread == "457") bread = 457;
					   else if (*_bread == "458") bread = 458;
					   else if (*_bread == "459") bread = 459;
					   else if (*_bread == "460") bread = 460;
					   else if (*_bread == "461") bread = 461;
					   else if (*_bread == "462") bread = 462;
					   else if (*_bread == "463") bread = 463;
					   else if (*_bread == "464") bread = 464;
					   else if (*_bread == "465") bread = 465;
					   else if (*_bread == "466") bread = 466;
					   else if (*_bread == "467") bread = 467;
					   else if (*_bread == "468") bread = 468;
					   else if (*_bread == "469") bread = 469;
					   else if (*_bread == "470") bread = 470;
					   else if (*_bread == "471") bread = 471;
					   else if (*_bread == "472") bread = 472;
					   else if (*_bread == "473") bread = 473;
					   else if (*_bread == "474") bread = 474;
					   else if (*_bread == "475") bread = 475;
					   else if (*_bread == "476") bread = 476;
					   else if (*_bread == "477") bread = 477;
					   else if (*_bread == "478") bread = 478;
					   else if (*_bread == "479") bread = 479;
					   else if (*_bread == "480") bread = 480;
					   if (*_bread == "481") bread = 481;
					   else if (*_bread == "482") bread = 482;
					   else if (*_bread == "483") bread = 483;
					   else if (*_bread == "484") bread = 484;
					   else if (*_bread == "485") bread = 485;
					   else if (*_bread == "486") bread = 486;
					   else if (*_bread == "487") bread = 487;
					   else if (*_bread == "488") bread = 488;
					   else if (*_bread == "489") bread = 489;
					   else if (*_bread == "490") bread = 490;
					   else if (*_bread == "491") bread = 491;
					   else if (*_bread == "492") bread = 492;
					   else if (*_bread == "493") bread = 493;
					   else if (*_bread == "494") bread = 494;
					   else if (*_bread == "495") bread = 495;
					   else if (*_bread == "496") bread = 496;
					   else if (*_bread == "497") bread = 497;
					   else if (*_bread == "498") bread = 498;
					   else if (*_bread == "499") bread = 499;
					   else if (*_bread == "500") bread = 500;
					   else if (*_bread == "501") bread = 501;
					   else if (*_bread == "502") bread = 502;
					   else if (*_bread == "503") bread = 503;
					   else if (*_bread == "504") bread = 504;
					   else if (*_bread == "505") bread = 505;
					   else if (*_bread == "506") bread = 506;
					   else if (*_bread == "507") bread = 507;
					   else if (*_bread == "508") bread = 508;
					   else if (*_bread == "509") bread = 509;
					   else if (*_bread == "510") bread = 510;
					   else if (*_bread == "511") bread = 511;
					   else if (*_bread == "512") bread = 512;
					   else if (*_bread == "513") bread = 513;
					   else if (*_bread == "514") bread = 514;
					   else if (*_bread == "515") bread = 515;
					   else if (*_bread == "516") bread = 516;
					   else if (*_bread == "517") bread = 517;
					   else if (*_bread == "518") bread = 518;
					   else if (*_bread == "519") bread = 519;
					   else if (*_bread == "520") bread = 520;
					   else if (*_bread == "521") bread = 521;
					   else if (*_bread == "522") bread = 522;
					   else if (*_bread == "523") bread = 523;
					   else if (*_bread == "524") bread = 524;
					   else if (*_bread == "525") bread = 525;
					   else if (*_bread == "526") bread = 526;
					   else if (*_bread == "527") bread = 527;
					   else if (*_bread == "528") bread = 528;
					   else if (*_bread == "529") bread = 529;
					   else if (*_bread == "530") bread = 530;
					   else if (*_bread == "531") bread = 531;
					   else if (*_bread == "532") bread = 532;
					   else if (*_bread == "533") bread = 533;
					   else if (*_bread == "534") bread = 534;
					   else if (*_bread == "535") bread = 535;
					   else if (*_bread == "536") bread = 536;
					   else if (*_bread == "537") bread = 537;
					   else if (*_bread == "538") bread = 538;
					   else if (*_bread == "539") bread = 539;
					   else if (*_bread == "540") bread = 540;
					   else if (*_bread == "541") bread = 541;
					   else if (*_bread == "542") bread = 542;
					   else if (*_bread == "543") bread = 543;
					   else if (*_bread == "544") bread = 544;
					   else if (*_bread == "545") bread = 545;
					   else if (*_bread == "546") bread = 546;
					   else if (*_bread == "547") bread = 547;
					   else if (*_bread == "548") bread = 548;
					   else if (*_bread == "549") bread = 549;
					   else if (*_bread == "550") bread = 550;
					   else if (*_bread == "551") bread = 551;
					   else if (*_bread == "552") bread = 552;
					   else if (*_bread == "553") bread = 553;
					   else if (*_bread == "554") bread = 554;
					   else if (*_bread == "555") bread = 555;
					   else if (*_bread == "556") bread = 556;
					   else if (*_bread == "557") bread = 557;
					   else if (*_bread == "558") bread = 558;
					   else if (*_bread == "559") bread = 559;
					   else if (*_bread == "560") bread = 560;
					   else if (*_bread == "561") bread = 561;
					   else if (*_bread == "562") bread = 562;
					   else if (*_bread == "563") bread = 563;
					   else if (*_bread == "564") bread = 564;
					   else if (*_bread == "565") bread = 565;
					   else if (*_bread == "566") bread = 566;
					   else if (*_bread == "567") bread = 567;
					   else if (*_bread == "568") bread = 568;
					   else if (*_bread == "569") bread = 569;
					   else if (*_bread == "570") bread = 570;
					   else if (*_bread == "571") bread = 571;
					   else if (*_bread == "572") bread = 572;
					   else if (*_bread == "573") bread = 573;
					   else if (*_bread == "574") bread = 574;
					   else if (*_bread == "575") bread = 575;
					   else if (*_bread == "576") bread = 576;
					   else if (*_bread == "577") bread = 577;
					   else if (*_bread == "578") bread = 578;
					   else if (*_bread == "579") bread = 579;
					   else if (*_bread == "580") bread = 580;
					   else if (*_bread == "581") bread = 581;
					   else if (*_bread == "582") bread = 582;
					   else if (*_bread == "583") bread = 583;
					   else if (*_bread == "584") bread = 584;
					   else if (*_bread == "585") bread = 585;
					   else if (*_bread == "586") bread = 586;
					   else if (*_bread == "587") bread = 587;
					   else if (*_bread == "588") bread = 588;
					   else if (*_bread == "589") bread = 589;
					   else if (*_bread == "590") bread = 590;
					   else if (*_bread == "591") bread = 591;
					   else if (*_bread == "592") bread = 592;
					   else if (*_bread == "593") bread = 593;
					   else if (*_bread == "594") bread = 594;
					   else if (*_bread == "595") bread = 595;
					   else if (*_bread == "596") bread = 596;
					   else if (*_bread == "597") bread = 597;
					   else if (*_bread == "598") bread = 598;
					   else if (*_bread == "599") bread = 599;
					   else if (*_bread == "600") bread = 600;
					   if (*_bread == "601") bread = 601;
					   else if (*_bread == "602") bread = 602;
					   else if (*_bread == "603") bread = 603;
					   else if (*_bread == "604") bread = 604;
					   else if (*_bread == "605") bread = 605;
					   else if (*_bread == "606") bread = 606;
					   else if (*_bread == "607") bread = 607;
					   else if (*_bread == "608") bread = 608;
					   else if (*_bread == "609") bread = 609;
					   else if (*_bread == "610") bread = 610;
					   else if (*_bread == "611") bread = 611;
					   else if (*_bread == "612") bread = 612;
					   else if (*_bread == "613") bread = 613;
					   else if (*_bread == "614") bread = 614;
					   else if (*_bread == "615") bread = 615;
					   else if (*_bread == "616") bread = 616;
					   else if (*_bread == "617") bread = 617;
					   else if (*_bread == "618") bread = 618;
					   else if (*_bread == "619") bread = 619;
					   else if (*_bread == "620") bread = 620;
					   else if (*_bread == "621") bread = 621;
					   else if (*_bread == "622") bread = 622;
					   else if (*_bread == "623") bread = 623;
					   else if (*_bread == "624") bread = 624;
					   else if (*_bread == "625") bread = 625;
					   else if (*_bread == "626") bread = 626;
					   else if (*_bread == "627") bread = 627;
					   else if (*_bread == "628") bread = 628;
					   else if (*_bread == "629") bread = 629;
					   else if (*_bread == "630") bread = 630;
					   else if (*_bread == "631") bread = 631;
					   else if (*_bread == "632") bread = 632;
					   else if (*_bread == "633") bread = 633;
					   else if (*_bread == "634") bread = 634;
					   else if (*_bread == "635") bread = 635;
					   else if (*_bread == "636") bread = 636;
					   else if (*_bread == "637") bread = 637;
					   else if (*_bread == "638") bread = 638;
					   else if (*_bread == "639") bread = 639;
					   else if (*_bread == "640") bread = 640;
					   else if (*_bread == "641") bread = 641;
					   else if (*_bread == "642") bread = 642;
					   else if (*_bread == "643") bread = 643;
					   else if (*_bread == "644") bread = 644;
					   else if (*_bread == "645") bread = 645;
					   else if (*_bread == "646") bread = 646;
					   else if (*_bread == "647") bread = 647;
					   else if (*_bread == "648") bread = 648;
					   else if (*_bread == "649") bread = 649;
					   else if (*_bread == "650") bread = 650;
					   else if (*_bread == "651") bread = 651;
					   else if (*_bread == "652") bread = 652;
					   else if (*_bread == "653") bread = 653;
					   else if (*_bread == "654") bread = 654;
					   else if (*_bread == "655") bread = 655;
					   else if (*_bread == "656") bread = 656;
					   else if (*_bread == "657") bread = 657;
					   else if (*_bread == "658") bread = 658;
					   else if (*_bread == "659") bread = 659;
					   else if (*_bread == "660") bread = 660;
					   else if (*_bread == "661") bread = 661;
					   else if (*_bread == "662") bread = 662;
					   else if (*_bread == "663") bread = 663;
					   else if (*_bread == "664") bread = 664;
					   else if (*_bread == "665") bread = 665;
					   else if (*_bread == "666") bread = 666;
					   else if (*_bread == "667") bread = 667;
					   else if (*_bread == "668") bread = 668;
					   else if (*_bread == "669") bread = 669;
					   else if (*_bread == "670") bread = 670;
					   else if (*_bread == "671") bread = 671;
					   else if (*_bread == "672") bread = 672;
					   else if (*_bread == "673") bread = 673;
					   else if (*_bread == "674") bread = 674;
					   else if (*_bread == "675") bread = 675;
					   else if (*_bread == "676") bread = 676;
					   else if (*_bread == "677") bread = 677;
					   else if (*_bread == "678") bread = 678;
					   else if (*_bread == "679") bread = 679;
					   else if (*_bread == "680") bread = 680;
					   else if (*_bread == "681") bread = 681;
					   else if (*_bread == "682") bread = 682;
					   else if (*_bread == "683") bread = 683;
					   else if (*_bread == "684") bread = 684;
					   else if (*_bread == "685") bread = 685;
					   else if (*_bread == "686") bread = 686;
					   else if (*_bread == "687") bread = 687;
					   else if (*_bread == "688") bread = 688;
					   else if (*_bread == "689") bread = 689;
					   else if (*_bread == "690") bread = 690;
					   else if (*_bread == "691") bread = 691;
					   else if (*_bread == "692") bread = 692;
					   else if (*_bread == "693") bread = 693;
					   else if (*_bread == "694") bread = 694;
					   else if (*_bread == "695") bread = 695;
					   else if (*_bread == "696") bread = 696;
					   else if (*_bread == "697") bread = 697;
					   else if (*_bread == "698") bread = 698;
					   else if (*_bread == "699") bread = 699;
					   else if (*_bread == "700") bread = 700;

					   delete _bread;
				   }
				   {}
				   //le_mainhome
				   {
					   string* _le_mainhome = new string;

					   getline(Data, *_le_mainhome);
					   if (*_le_mainhome == "0") le_mainhome = 0;
					   else if (*_le_mainhome == "1") le_mainhome = 1;
					   else if (*_le_mainhome == "2") le_mainhome = 2;
					   else if (*_le_mainhome == "3") le_mainhome = 3;
					   else if (*_le_mainhome == "4") le_mainhome = 4;
					   else if (*_le_mainhome == "5") le_mainhome = 5;
					   else if (*_le_mainhome >= "6") MessageBox::Show("Ошибка чтения сохранений!\n Error reading saves!", "!ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				   }
				   {}
				   //le_bake
				   {
					   string* _le_bake = new string;

					   getline(Data, *_le_bake);
					   if (*_le_bake == "0") le_bake = 0;
					   else if (*_le_bake == "1") le_bake = 1;
					   else if (*_le_bake == "2") le_bake = 2;
					   else if (*_le_bake == "3") le_bake = 3;
					   else if (*_le_bake == "4") le_bake = 4;
					   else if (*_le_bake >= "5") MessageBox::Show("Ошибка чтения сохранений!\n Error reading saves!", "!ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				   }
				   {}
				   //le_mine
				   {
					   string* _le_mine = new string;

					   getline(Data, *_le_mine);
					   if (*_le_mine == "0") le_mine = 0;
					   else if (*_le_mine == "1") le_mine = 1;
					   else if (*_le_mine == "2") le_mine = 2;
					   else if (*_le_mine == "3") le_mine = 3;
					   else if (*_le_mine == "4") le_mine = 4;
					   else if (*_le_mine >= "5") MessageBox::Show("Ошибка чтения сохранений!\n Error reading saves!", "!ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				   }
				   {}
				   //le_village
				   {
					   string* _le_village = new string;

					   getline(Data, *_le_village);
					   if (*_le_village == "0") le_village = 0;
					   else if (*_le_village == "1") le_village = 1;
					   else if (*_le_village == "2") le_village = 2;
					   else if (*_le_village == "3") le_village = 3;
					   else if (*_le_village == "4") le_village = 4;
					   else if (*_le_village == "5") le_village = 5;
					   else if (*_le_village == "6") le_village = 6;
					   else if (*_le_village == "7") le_village = 7;
					   else if (*_le_village == "8") le_village = 8;
					   else if (*_le_village == "9") le_village = 9;
					   else if (*_le_village >= "10") MessageBox::Show("Ошибка чтения сохранений!\n Error reading saves!", "!ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				   }
				   {}
				   //le_protection
				   {
					   string* _le_protection = new string;

					   getline(Data, *_le_protection);
					   if (*_le_protection == "0") le_protection = 0;
					   else if (*_le_protection == "1") le_protection = 1;
					   else if (*_le_protection == "2") le_protection = 2;
					   else if (*_le_protection == "3") le_protection = 3;
					   else if (*_le_protection == "4") le_protection = 4;
					   else if (*_le_protection >= "5")MessageBox::Show("Ошибка чтения сохранений!\n Error reading saves!", "!ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				   }
				   {}
				   //le_sawmill
				   {
					   string* _le_sawmill = new string;

					   getline(Data, *_le_sawmill);
					   if (*_le_sawmill == "0") le_sawmill = 0;
					   else if (*_le_sawmill == "1") le_sawmill = 1;
					   else if (*_le_sawmill == "2") le_sawmill = 2;
					   else if (*_le_sawmill == "3") le_sawmill = 3;
					   else if (*_le_sawmill == "4") le_sawmill = 4;
					   else if (*_le_sawmill >= "5")MessageBox::Show("Ошибка чтения сохранений!\n Error reading saves!", "!ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				   }
				   {}
				   //le_market
				   {
					   string* _le_market = new string;

					   getline(Data, *_le_market);
					   if (*_le_market == "0") le_market = 0;
					   else if (*_le_market == "1") le_market = 1;
					   else if (*_le_market >= "2") MessageBox::Show("Ошибка чтения сохранений!\n Error reading saves!", "!ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				   }
				   {}
				   //le_farm
				   {
					   string* _le_farm = new string;

					   getline(Data, *_le_farm);
					   if (*_le_farm == "0") le_farm = 0;
					   else if (*_le_farm == "1") le_farm = 1;
					   else if (*_le_farm == "2") le_farm = 2;
					   else if (*_le_farm == "3") le_farm = 3;
					   else if (*_le_farm == "4") le_farm = 4;
					   else if (*_le_farm >= "5") MessageBox::Show("Ошибка чтения сохранений!\n Error reading saves!", "!ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				   }
				   {}
				   //le_windmill
				   {
					   string* _le_windmill = new string;

					   getline(Data, *_le_windmill);
					   if (*_le_windmill == "0") le_windmill = 0;
					   else if (*_le_windmill == "1") le_windmill = 1;
					   else if (*_le_windmill == "2") le_windmill = 2;
					   else if (*_le_windmill == "3") le_windmill = 3;
					   else if (*_le_windmill == "4") le_windmill = 4;
					   else if (*_le_windmill >= "5") MessageBox::Show("Ошибка чтения сохранений!\n Error reading saves!", "!ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				   }
				   {}
				   //le_bakery
				   {
					   string* _le_bakery = new string;

					   getline(Data, *_le_bakery);
					   if (*_le_bakery == "0") le_bakery = 0;
					   else if (*_le_bakery == "1") le_bakery = 1;
					   else if (*_le_bakery == "2") le_bakery = 2;
					   else if (*_le_bakery >= "3") MessageBox::Show("Ошибка чтения сохранений!\n Error reading saves!", "!ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				   }
				   {}
				   //level
				   {
					   string* _level = new string;

					   getline(Data, *_level);
					   if (*_level == "0") level = 0;
					   else if (*_level == "1") level = 1;
					   else if (*_level == "2") level = 2;
					   else if (*_level == "3") level = 3;
					   else if (*_level == "4") level = 4;
					   else if (*_level == "5") level = 5;
					   else if (*_level == "6") level = 6;
					   else if (*_level == "7") level = 7;
					   else if (*_level == "8") level = 8;
					   else if (*_level == "9") level = 9;
					   else if (*_level == "10") level = 10;
					   else if (*_level == "11") level = 11;
					   else if (*_level == "12") level = 12;
					   else if (*_level == "13") level = 13;
					   else if (*_level == "14") level = 14;
					   else if (*_level == "15") level = 15;
					   else if (*_level == "16") level = 16;
					   else if (*_level == "17") level = 17;
					   else if (*_level == "18") level = 18;
					   else if (*_level == "19") level = 19;
					   else if (*_level == "20") level = 20;
					   else if (*_level == "21") level = 21;
					   else if (*_level == "22") level = 22;
					   else if (*_level == "23") level = 23;
					   else if (*_level == "24") level = 24;
					   else if (*_level == "25") level = 25;
					   else if (*_level == "26") level = 26;
					   else if (*_level == "27") level = 27;
					   else if (*_level == "28") level = 28;
					   else if (*_level == "29") level = 29;
					   else if (*_level == "30") level = 30;
					   else if (*_level == "31") level = 31;
					   else if (*_level == "32") level = 32;
					   else if (*_level == "33") level = 33;
					   else if (*_level == "34") level = 34;
					   else if (*_level == "35") level = 35;
					   else if (*_level == "36") level = 36;
					   else if (*_level == "37") level = 37;
					   else if (*_level == "38") level = 38;
					   else if (*_level == "39") level = 39;
					   else if (*_level == "40") level = 40;
					   else if (*_level == "41") level = 41;
					   else if (*_level == "42") level = 42;
					   else if (*_level == "43") level = 43;
					   else if (*_level == "44") level = 44;
					   else if (*_level == "45") level = 45;
					   else if (*_level == "46") level = 46;
					   else if (*_level == "47") level = 47;
					   else if (*_level == "48") level = 48;
					   else if (*_level == "49") level = 49;
					   else if (*_level == "50") level = 50;
					   else if (*_level == "51") level = 51;
					   else if (*_level == "52") level = 52;
					   else if (*_level == "53") level = 53;
					   else if (*_level == "54") level = 54;
					   else if (*_level == "55") level = 55;
					   else if (*_level == "56") level = 56;
					   else if (*_level == "57") level = 57;
					   else if (*_level == "58") level = 58;
					   else if (*_level == "59") level = 59;
					   else if (*_level == "60") level = 60;
					   else if (*_level == "61") level = 61;
					   else if (*_level == "62") level = 62;
					   else if (*_level == "63") level = 63;
					   else if (*_level == "64") level = 64;
					   else if (*_level == "65") level = 65;
					   else if (*_level == "66") level = 66;
					   else if (*_level == "67") level = 67;
					   else if (*_level == "68") level = 68;
					   else if (*_level == "69") level = 69;
					   else if (*_level == "70") level = 70;
					   else if (*_level == "71") level = 71;
					   else if (*_level == "72") level = 72;
					   else if (*_level == "73") level = 73;
					   else if (*_level == "74") level = 74;
					   else if (*_level == "75") level = 75;
					   else if (*_level == "76") level = 76;
					   else if (*_level == "77") level = 77;
					   else if (*_level == "78") level = 78;
					   else if (*_level == "79") level = 79;
					   else if (*_level == "80") level = 80;
					   else if (*_level == "81") level = 81;
					   else if (*_level == "82") level = 82;
					   else if (*_level == "83") level = 83;
					   else if (*_level == "84") level = 84;
					   else if (*_level == "85") level = 85;
					   else if (*_level == "86") level = 86;
					   else if (*_level == "87") level = 87;
					   else if (*_level == "88") level = 88;
					   else if (*_level == "89") level = 89;
					   else if (*_level == "90") level = 90;
					   else if (*_level == "91") level = 91;
					   else if (*_level == "92") level = 92;
					   else if (*_level == "93") level = 93;
					   else if (*_level == "94") level = 94;
					   else if (*_level == "95") level = 95;
					   else if (*_level == "96") level = 96;
					   else if (*_level == "97") level = 97;
					   else if (*_level == "98") level = 98;
					   else if (*_level == "99") level = 99;
					   else if (*_level == "100") level = 100;
					   else if (*_level == "101") level = 101;
					   else if (*_level == "102") level = 102;
					   else if (*_level == "103") level = 103;
					   else if (*_level == "104") level = 104;
					   else if (*_level == "105") level = 105;
					   else if (*_level == "106") level = 106;
					   else if (*_level == "107") level = 107;
					   else if (*_level == "108") level = 108;
					   else if (*_level == "109") level = 109;
					   else if (*_level == "110") level = 110;
					   else if (*_level == "111") level = 111;
					   else if (*_level == "112") level = 112;
					   else if (*_level == "113") level = 113;
					   else if (*_level == "114") level = 114;
					   else if (*_level == "115") level = 115;
					   else if (*_level == "116") level = 116;
					   else if (*_level == "117") level = 117;
					   else if (*_level == "118") level = 118;
					   else if (*_level == "119") level = 119;
					   else if (*_level >= "120") MessageBox::Show("Ошибка чтения сохранений!\n Error reading saves!", "!ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				   }
				   {}
				   //ex
				   {
					   string* _ex = new string;

					   getline(Data, *_ex);
					   if (*_ex == "0") ex = 0;
					   else if (*_ex == "1") ex = 1;
					   else if (*_ex == "2") ex = 2;
					   else if (*_ex == "3") ex = 3;
					   else if (*_ex == "4") ex = 4;
					   else if (*_ex == "5") ex = 5;
					   else if (*_ex == "6") ex = 6;
					   else if (*_ex == "7") ex = 7;
					   else if (*_ex == "8") ex = 8;
					   else if (*_ex == "9") ex = 9;
					   else if (*_ex == "10") ex = 10;
					   else if (*_ex == "11") ex = 11;
					   else if (*_ex == "12") ex = 12;
					   else if (*_ex == "13") ex = 13;
					   else if (*_ex == "14") ex = 14;
					   else if (*_ex == "15") ex = 15;
					   else if (*_ex == "16") ex = 16;
					   else if (*_ex == "17") ex = 17;
					   else if (*_ex == "18") ex = 18;
					   else if (*_ex == "19") ex = 19;
					   else if (*_ex == "20") ex = 20;
					   else if (*_ex == "21") ex = 21;
					   else if (*_ex == "22") ex = 22;
					   else if (*_ex == "23") ex = 23;
					   else if (*_ex == "24") ex = 24;
					   else if (*_ex == "25") ex = 25;
					   else if (*_ex == "26") ex = 26;
					   else if (*_ex == "27") ex = 27;
					   else if (*_ex == "28") ex = 28;
					   else if (*_ex == "29") ex = 29;
					   else if (*_ex == "30") ex = 30;
					   else if (*_ex == "31") ex = 31;
					   else if (*_ex == "32") ex = 32;
					   else if (*_ex == "33") ex = 33;
					   else if (*_ex == "34") ex = 34;
					   else if (*_ex == "35") ex = 35;
					   else if (*_ex == "36") ex = 36;
					   else if (*_ex == "37") ex = 37;
					   else if (*_ex == "38") ex = 38;
					   else if (*_ex == "39") ex = 39;
					   else if (*_ex == "40") ex = 40;
					   else if (*_ex == "41") ex = 41;
					   else if (*_ex == "42") ex = 42;
					   else if (*_ex == "43") ex = 43;
					   else if (*_ex == "44") ex = 44;
					   else if (*_ex == "45") ex = 45;
					   else if (*_ex == "46") ex = 46;
					   else if (*_ex == "47") ex = 47;
					   else if (*_ex == "48") ex = 48;
					   else if (*_ex == "49") ex = 49;
					   else if (*_ex == "50") ex = 50;
					   else if (*_ex == "51") ex = 51;
					   else if (*_ex == "52") ex = 52;
					   else if (*_ex == "53") ex = 53;
					   else if (*_ex == "54") ex = 54;
					   else if (*_ex == "55") ex = 55;
					   else if (*_ex == "56") ex = 56;
					   else if (*_ex == "57") ex = 57;
					   else if (*_ex == "58") ex = 58;
					   else if (*_ex == "59") ex = 59;
					   else if (*_ex == "60") ex = 60;
					   else if (*_ex == "61") ex = 61;
					   else if (*_ex == "62") ex = 62;
					   else if (*_ex == "63") ex = 63;
					   else if (*_ex == "64") ex = 64;
					   else if (*_ex == "65") ex = 65;
					   else if (*_ex == "66") ex = 66;
					   else if (*_ex == "67") ex = 67;
					   else if (*_ex == "68") ex = 68;
					   else if (*_ex == "69") ex = 69;
					   else if (*_ex == "70") ex = 70;
					   else if (*_ex == "71") ex = 71;
					   else if (*_ex == "72") ex = 72;
					   else if (*_ex == "73") ex = 73;
					   else if (*_ex == "74") ex = 74;
					   else if (*_ex == "75") ex = 75;
					   else if (*_ex == "76") ex = 76;
					   else if (*_ex == "77") ex = 77;
					   else if (*_ex == "78") ex = 78;
					   else if (*_ex == "79") ex = 79;
					   else if (*_ex == "80") ex = 80;
					   else if (*_ex == "81") ex = 81;
					   else if (*_ex == "82") ex = 82;
					   else if (*_ex == "83") ex = 83;
					   else if (*_ex == "84") ex = 84;
					   else if (*_ex == "85") ex = 85;
					   else if (*_ex == "86") ex = 86;
					   else if (*_ex == "87") ex = 87;
					   else if (*_ex == "88") ex = 88;
					   else if (*_ex == "89") ex = 89;
					   else if (*_ex == "90") ex = 90;
					   else if (*_ex == "91") ex = 91;
					   else if (*_ex == "92") ex = 92;
					   else if (*_ex == "93") ex = 93;
					   else if (*_ex == "94") ex = 94;
					   else if (*_ex == "95") ex = 95;
					   else if (*_ex == "96") ex = 96;
					   else if (*_ex == "97") ex = 97;
					   else if (*_ex == "98") ex = 98;
					   else if (*_ex == "99") ex = 99;
					   else if (*_ex == "100") ex = 100;
					   else if (*_ex >= "101") MessageBox::Show("Ошибка чтения сохранений!\n Error reading saves!", "!ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				   }
				   {}
				   //time_tax
				   {
					   string* _time_tax = new string;

					   getline(Data, *_time_tax);
					   if (*_time_tax == "0") time_tax = 0;
					   else if (*_time_tax == "1") time_tax = 1;
					   else if (*_time_tax == "2") time_tax = 2;
					   else if (*_time_tax == "3") time_tax = 3;
					   else if (*_time_tax == "4") time_tax = 4;
					   else if (*_time_tax == "5") time_tax = 5;
					   else if (*_time_tax == "6") time_tax = 6;
					   else if (*_time_tax == "7") time_tax = 7;
					   else if (*_time_tax == "8") time_tax = 8;
					   else if (*_time_tax == "9") time_tax = 9;
					   else if (*_time_tax == "10") time_tax = 10;
					   else if (*_time_tax == "11") time_tax = 11;
					   else if (*_time_tax == "12") time_tax = 12;
					   else if (*_time_tax == "13") time_tax = 13;
					   else if (*_time_tax == "14") time_tax = 14;
					   else if (*_time_tax == "15") time_tax = 15;
					   else if (*_time_tax == "16") time_tax = 16;
					   else if (*_time_tax == "17") time_tax = 17;
					   else if (*_time_tax == "18") time_tax = 18;
					   else if (*_time_tax == "19") time_tax = 19;
					   else if (*_time_tax == "20") time_tax = 20;
					   else if (*_time_tax == "21") time_tax = 21;
					   else if (*_time_tax == "22") time_tax = 22;
					   else if (*_time_tax == "23") time_tax = 23;
					   else if (*_time_tax == "24") time_tax = 24;
					   else if (*_time_tax >= "25") MessageBox::Show("Ошибка чтения сохранений!\n Error reading saves!", "!ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				   }
				   {}
				   //time_bonus
				   {
					   string* _time_bonus = new string;

					   getline(Data, *_time_bonus);
					   if (*_time_bonus == "0") time_bonus = 0;
					   else if (*_time_bonus == "1") time_bonus = 1;
					   else if (*_time_bonus == "2") time_bonus = 2;
					   else if (*_time_bonus == "3") time_bonus = 3;
					   else if (*_time_bonus == "4") time_bonus = 4;
					   else if (*_time_bonus == "5") time_bonus = 5;
					   else if (*_time_bonus == "6") time_bonus = 6;
					   else if (*_time_bonus == "7") time_bonus = 7;
					   else if (*_time_bonus == "8") time_bonus = 8;
					   else if (*_time_bonus == "9") time_bonus = 9;
					   else if (*_time_bonus == "10") time_bonus = 10;
					   else if (*_time_bonus == "11") time_bonus = 11;
					   else if (*_time_bonus == "12") time_bonus = 12;
					   else if (*_time_bonus == "13") time_bonus = 13;
					   else if (*_time_bonus == "14") time_bonus = 14;
					   else if (*_time_bonus == "15") time_bonus = 15;
					   else if (*_time_bonus == "16") time_bonus = 16;
					   else if (*_time_bonus == "17") time_bonus = 17;
					   else if (*_time_bonus == "18") time_bonus = 18;
					   else if (*_time_bonus == "19") time_bonus = 19;
					   else if (*_time_bonus == "20") time_bonus = 20;
					   else if (*_time_bonus == "21") time_bonus = 21;
					   else if (*_time_bonus == "22") time_bonus = 22;
					   else if (*_time_bonus == "23") time_bonus = 23;
					   else if (*_time_bonus == "24") time_bonus = 24;
					   else if (*_time_bonus == "25") time_bonus = 25;
					   else if (*_time_bonus == "26") time_bonus = 26;
					   else if (*_time_bonus == "27") time_bonus = 27;
					   else if (*_time_bonus == "28") time_bonus = 28;
					   else if (*_time_bonus == "29") time_bonus = 29;
					   else if (*_time_bonus == "30") time_bonus = 30;
					   else if (*_time_bonus == "31") time_bonus = 31;
					   else if (*_time_bonus == "32") time_bonus = 32;
					   else if (*_time_bonus == "33") time_bonus = 33;
					   else if (*_time_bonus == "34") time_bonus = 34;
					   else if (*_time_bonus == "35") time_bonus = 35;
					   else if (*_time_bonus == "36") time_bonus = 36;
					   else if (*_time_bonus == "37") time_bonus = 37;
					   else if (*_time_bonus == "38") time_bonus = 38;
					   else if (*_time_bonus == "39") time_bonus = 39;
					   else if (*_time_bonus == "40") time_bonus = 40;
					   else if (*_time_bonus == "41") time_bonus = 41;
					   else if (*_time_bonus == "42") time_bonus = 42;
					   else if (*_time_bonus == "43") time_bonus = 43;
					   else if (*_time_bonus == "44") time_bonus = 44;
					   else if (*_time_bonus == "45") time_bonus = 45;
					   else if (*_time_bonus == "46") time_bonus = 46;
					   else if (*_time_bonus == "47") time_bonus = 47;
					   else if (*_time_bonus == "48") time_bonus = 48;
					   else if (*_time_bonus == "49") time_bonus = 49;
					   else if (*_time_bonus == "50") time_bonus = 50;
					   else if (*_time_bonus == "51") time_bonus = 51;
					   else if (*_time_bonus == "52") time_bonus = 52;
					   else if (*_time_bonus == "53") time_bonus = 53;
					   else if (*_time_bonus == "54") time_bonus = 54;
					   else if (*_time_bonus == "55") time_bonus = 55;
					   else if (*_time_bonus == "56") time_bonus = 56;
					   else if (*_time_bonus == "57") time_bonus = 57;
					   else if (*_time_bonus == "58") time_bonus = 58;
					   else if (*_time_bonus == "59") time_bonus = 59;
					   else if (*_time_bonus == "60") time_bonus = 60;
					   else if (*_time_bonus >= "61") MessageBox::Show("Ошибка чтения сохранений!\n Error reading saves!", "!ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				   }



				   print_resurs();
				   return true;
			   }
		   }
		   void print_resurs() {

			   //wheat
			   switch (wheat)
			   {
			   case 0:
				   this->label_wheat->Text = L"0";
				   break;
			   case 1:
				   this->label_wheat->Text = L"1";
				   break;
			   case 2:
				   this->label_wheat->Text = L"2";
				   break;
			   case 3:
				   this->label_wheat->Text = L"3";
				   break;
			   case 4:
				   this->label_wheat->Text = L"4";
				   break;
			   case 5:
				   this->label_wheat->Text = L"5";
				   break;
			   case 6:
				   this->label_wheat->Text = L"6";
				   break;
			   case 7:
				   this->label_wheat->Text = L"7";
				   break;
			   case 8:
				   this->label_wheat->Text = L"8";
				   break;
			   case 9:
				   this->label_wheat->Text = L"9";
				   break;
			   case 10:
				   this->label_wheat->Text = L"10";
				   break;
			   case 11:
				   this->label_wheat->Text = L"11";
				   break;
			   case 12:
				   this->label_wheat->Text = L"12";
				   break;
			   case 13:
				   this->label_wheat->Text = L"13";
				   break;
			   case 14:
				   this->label_wheat->Text = L"14";
				   break;
			   case 15:
				   this->label_wheat->Text = L"15";
				   break;
			   case 16:
				   this->label_wheat->Text = L"16";
				   break;
			   case 17:
				   this->label_wheat->Text = L"17";
				   break;
			   case 18:
				   this->label_wheat->Text = L"18";
				   break;
			   case 19:
				   this->label_wheat->Text = L"19";
				   break;
			   case 20:
				   this->label_wheat->Text = L"20";
				   break;
			   case 21:
				   this->label_wheat->Text = L"21";
				   break;
			   case 22:
				   this->label_wheat->Text = L"22";
				   break;
			   case 23:
				   this->label_wheat->Text = L"23";
				   break;
			   case 24:
				   this->label_wheat->Text = L"24";
				   break;
			   case 25:
				   this->label_wheat->Text = L"25";
				   break;
			   case 26:
				   this->label_wheat->Text = L"26";
				   break;
			   case 27:
				   this->label_wheat->Text = L"27";
				   break;
			   case 28:
				   this->label_wheat->Text = L"28";
				   break;
			   case 29:
				   this->label_wheat->Text = L"29";
				   break;
			   case 30:
				   this->label_wheat->Text = L"30";
				   break;
			   case 31:
				   this->label_wheat->Text = L"31";
				   break;
			   case 32:
				   this->label_wheat->Text = L"32";
				   break;
			   case 33:
				   this->label_wheat->Text = L"33";
				   break;
			   case 34:
				   this->label_wheat->Text = L"34";
				   break;
			   case 35:
				   this->label_wheat->Text = L"35";
				   break;
			   case 36:
				   this->label_wheat->Text = L"36";
				   break;
			   case 37:
				   this->label_wheat->Text = L"37";
				   break;
			   case 38:
				   this->label_wheat->Text = L"38";
				   break;
			   case 39:
				   this->label_wheat->Text = L"39";
				   break;
			   case 40:
				   this->label_wheat->Text = L"40";
				   break;
			   case 41:
				   this->label_wheat->Text = L"41";
				   break;
			   case 42:
				   this->label_wheat->Text = L"42";
				   break;
			   case 43:
				   this->label_wheat->Text = L"43";
				   break;
			   case 44:
				   this->label_wheat->Text = L"44";
				   break;
			   case 45:
				   this->label_wheat->Text = L"45";
				   break;
			   case 46:
				   this->label_wheat->Text = L"46";
				   break;
			   case 47:
				   this->label_wheat->Text = L"47";
				   break;
			   case 48:
				   this->label_wheat->Text = L"48";
				   break;
			   case 49:
				   this->label_wheat->Text = L"49";
				   break;
			   case 50:
				   this->label_wheat->Text = L"50";
				   break;
			   case 51:
				   this->label_wheat->Text = L"51";
				   break;
			   case 52:
				   this->label_wheat->Text = L"52";
				   break;
			   case 53:
				   this->label_wheat->Text = L"53";
				   break;
			   case 54:
				   this->label_wheat->Text = L"54";
				   break;
			   case 55:
				   this->label_wheat->Text = L"55";
				   break;
			   case 56:
				   this->label_wheat->Text = L"56";
				   break;
			   case 57:
				   this->label_wheat->Text = L"57";
				   break;
			   case 58:
				   this->label_wheat->Text = L"58";
				   break;
			   case 59:
				   this->label_wheat->Text = L"59";
				   break;
			   case 60:
				   this->label_wheat->Text = L"60";
				   break;
			   case 61:
				   this->label_wheat->Text = L"61";
				   break;
			   case 62:
				   this->label_wheat->Text = L"62";
				   break;
			   case 63:
				   this->label_wheat->Text = L"63";
				   break;
			   case 64:
				   this->label_wheat->Text = L"64";
				   break;
			   case 65:
				   this->label_wheat->Text = L"65";
				   break;
			   case 66:
				   this->label_wheat->Text = L"66";
				   break;
			   case 67:
				   this->label_wheat->Text = L"67";
				   break;
			   case 68:
				   this->label_wheat->Text = L"68";
				   break;
			   case 69:
				   this->label_wheat->Text = L"69";
				   break;
			   case 70:
				   this->label_wheat->Text = L"70";
				   break;
			   case 71:
				   this->label_wheat->Text = L"71";
				   break;
			   case 72:
				   this->label_wheat->Text = L"72";
				   break;
			   case 73:
				   this->label_wheat->Text = L"73";
				   break;
			   case 74:
				   this->label_wheat->Text = L"74";
				   break;
			   case 75:
				   this->label_wheat->Text = L"75";
				   break;
			   case 76:
				   this->label_wheat->Text = L"76";
				   break;
			   case 77:
				   this->label_wheat->Text = L"77";
				   break;
			   case 78:
				   this->label_wheat->Text = L"78";
				   break;
			   case 79:
				   this->label_wheat->Text = L"79";
				   break;
			   case 80:
				   this->label_wheat->Text = L"80";
				   break;
			   case 81:
				   this->label_wheat->Text = L"81";
				   break;
			   case 82:
				   this->label_wheat->Text = L"82";
				   break;
			   case 83:
				   this->label_wheat->Text = L"83";
				   break;
			   case 84:
				   this->label_wheat->Text = L"84";
				   break;
			   case 85:
				   this->label_wheat->Text = L"85";
				   break;
			   case 86:
				   this->label_wheat->Text = L"86";
				   break;
			   case 87:
				   this->label_wheat->Text = L"87";
				   break;
			   case 88:
				   this->label_wheat->Text = L"88";
				   break;
			   case 89:
				   this->label_wheat->Text = L"89";
				   break;
			   case 90:
				   this->label_wheat->Text = L"90";
				   break;
			   case 91:
				   this->label_wheat->Text = L"91";
				   break;
			   case 92:
				   this->label_wheat->Text = L"92";
				   break;
			   case 93:
				   this->label_wheat->Text = L"93";
				   break;
			   case 94:
				   this->label_wheat->Text = L"94";
				   break;
			   case 95:
				   this->label_wheat->Text = L"95";
				   break;
			   case 96:
				   this->label_wheat->Text = L"96";
				   break;
			   case 97:
				   this->label_wheat->Text = L"97";
				   break;
			   case 98:
				   this->label_wheat->Text = L"98";
				   break;
			   case 99:
				   this->label_wheat->Text = L"99";
				   break;
			   case 100:
				   this->label_wheat->Text = L"100";
				   break;
			   case 101:
				   this->label_wheat->Text = L"101";
				   break;
			   case 102:
				   this->label_wheat->Text = L"102";
				   break;
			   case 103:
				   this->label_wheat->Text = L"103";
				   break;
			   case 104:
				   this->label_wheat->Text = L"104";
				   break;
			   case 105:
				   this->label_wheat->Text = L"105";
				   break;
			   case 106:
				   this->label_wheat->Text = L"106";
				   break;
			   case 107:
				   this->label_wheat->Text = L"107";
				   break;
			   case 108:
				   this->label_wheat->Text = L"108";
				   break;
			   case 109:
				   this->label_wheat->Text = L"109";
				   break;
			   case 110:
				   this->label_wheat->Text = L"110";
				   break;
			   case 111:
				   this->label_wheat->Text = L"111";
				   break;
			   case 112:
				   this->label_wheat->Text = L"112";
				   break;
			   case 113:
				   this->label_wheat->Text = L"113";
				   break;
			   case 114:
				   this->label_wheat->Text = L"114";
				   break;
			   case 115:
				   this->label_wheat->Text = L"115";
				   break;
			   case 116:
				   this->label_wheat->Text = L"116";
				   break;
			   case 117:
				   this->label_wheat->Text = L"117";
				   break;
			   case 118:
				   this->label_wheat->Text = L"118";
				   break;
			   case 119:
				   this->label_wheat->Text = L"119";
				   break;
			   case 120:
				   this->label_wheat->Text = L"120";
				   break;
			   case 121:
				   this->label_wheat->Text = L"121";
				   break;
			   case 122:
				   this->label_wheat->Text = L"122";
				   break;
			   case 123:
				   this->label_wheat->Text = L"123";
				   break;
			   case 124:
				   this->label_wheat->Text = L"124";
				   break;
			   case 125:
				   this->label_wheat->Text = L"125";
				   break;
			   case 126:
				   this->label_wheat->Text = L"126";
				   break;
			   case 127:
				   this->label_wheat->Text = L"127";
				   break;
			   case 128:
				   this->label_wheat->Text = L"128";
				   break;
			   case 129:
				   this->label_wheat->Text = L"129";
				   break;
			   case 130:
				   this->label_wheat->Text = L"130";
				   break;
			   case 131:
				   this->label_wheat->Text = L"131";
				   break;
			   case 132:
				   this->label_wheat->Text = L"132";
				   break;
			   case 133:
				   this->label_wheat->Text = L"133";
				   break;
			   case 134:
				   this->label_wheat->Text = L"134";
				   break;
			   case 135:
				   this->label_wheat->Text = L"135";
				   break;
			   case 136:
				   this->label_wheat->Text = L"136";
				   break;
			   case 137:
				   this->label_wheat->Text = L"137";
				   break;
			   case 138:
				   this->label_wheat->Text = L"138";
				   break;
			   case 139:
				   this->label_wheat->Text = L"139";
				   break;
			   case 140:
				   this->label_wheat->Text = L"140";
				   break;
			   case 141:
				   this->label_wheat->Text = L"141";
				   break;
			   case 142:
				   this->label_wheat->Text = L"142";
				   break;
			   case 143:
				   this->label_wheat->Text = L"143";
				   break;
			   case 144:
				   this->label_wheat->Text = L"144";
				   break;
			   case 145:
				   this->label_wheat->Text = L"145";
				   break;
			   case 146:
				   this->label_wheat->Text = L"146";
				   break;
			   case 147:
				   this->label_wheat->Text = L"147";
				   break;
			   case 148:
				   this->label_wheat->Text = L"148";
				   break;
			   case 149:
				   this->label_wheat->Text = L"149";
				   break;
			   case 150:
				   this->label_wheat->Text = L"150";
				   break;
			   case 151:
				   this->label_wheat->Text = L"151";
				   break;
			   case 152:
				   this->label_wheat->Text = L"152";
				   break;
			   case 153:
				   this->label_wheat->Text = L"153";
				   break;
			   case 154:
				   this->label_wheat->Text = L"154";
				   break;
			   case 155:
				   this->label_wheat->Text = L"155";
				   break;
			   case 156:
				   this->label_wheat->Text = L"156";
				   break;
			   case 157:
				   this->label_wheat->Text = L"157";
				   break;
			   case 158:
				   this->label_wheat->Text = L"158";
				   break;
			   case 159:
				   this->label_wheat->Text = L"159";
				   break;
			   case 160:
				   this->label_wheat->Text = L"160";
				   break;
			   case 161:
				   this->label_wheat->Text = L"161";
				   break;
			   case 162:
				   this->label_wheat->Text = L"162";
				   break;
			   case 163:
				   this->label_wheat->Text = L"163";
				   break;
			   case 164:
				   this->label_wheat->Text = L"164";
				   break;
			   case 165:
				   this->label_wheat->Text = L"165";
				   break;
			   case 166:
				   this->label_wheat->Text = L"166";
				   break;
			   case 167:
				   this->label_wheat->Text = L"167";
				   break;
			   case 168:
				   this->label_wheat->Text = L"168";
				   break;
			   case 169:
				   this->label_wheat->Text = L"169";
				   break;
			   case 170:
				   this->label_wheat->Text = L"170";
				   break;
			   case 171:
				   this->label_wheat->Text = L"171";
				   break;
			   case 172:
				   this->label_wheat->Text = L"172";
				   break;
			   case 173:
				   this->label_wheat->Text = L"173";
				   break;
			   case 174:
				   this->label_wheat->Text = L"174";
				   break;
			   case 175:
				   this->label_wheat->Text = L"175";
				   break;
			   case 176:
				   this->label_wheat->Text = L"176";
				   break;
			   case 177:
				   this->label_wheat->Text = L"177";
				   break;
			   case 178:
				   this->label_wheat->Text = L"178";
				   break;
			   case 179:
				   this->label_wheat->Text = L"179";
				   break;
			   case 180:
				   this->label_wheat->Text = L"180";
				   break;
			   case 181:
				   this->label_wheat->Text = L"181";
				   break;
			   case 182:
				   this->label_wheat->Text = L"182";
				   break;
			   case 183:
				   this->label_wheat->Text = L"183";
				   break;
			   case 184:
				   this->label_wheat->Text = L"184";
				   break;
			   case 185:
				   this->label_wheat->Text = L"185";
				   break;
			   case 186:
				   this->label_wheat->Text = L"186";
				   break;
			   case 187:
				   this->label_wheat->Text = L"187";
				   break;
			   case 188:
				   this->label_wheat->Text = L"188";
				   break;
			   case 189:
				   this->label_wheat->Text = L"189";
				   break;
			   case 190:
				   this->label_wheat->Text = L"190";
				   break;
			   case 191:
				   this->label_wheat->Text = L"191";
				   break;
			   case 192:
				   this->label_wheat->Text = L"192";
				   break;
			   case 193:
				   this->label_wheat->Text = L"193";
				   break;
			   case 194:
				   this->label_wheat->Text = L"194";
				   break;
			   case 195:
				   this->label_wheat->Text = L"195";
				   break;
			   case 196:
				   this->label_wheat->Text = L"196";
				   break;
			   case 197:
				   this->label_wheat->Text = L"197";
				   break;
			   case 198:
				   this->label_wheat->Text = L"198";
				   break;
			   case 199:
				   this->label_wheat->Text = L"199";
				   break;
			   case 200:
				   this->label_wheat->Text = L"200";
				   break;

			   default:
				   if (radioButtonLanguage_Rus->Checked) this->label_wheat->Text = L">200"; else this->label_wheat->Text = L">200";
				   break;
			   }
			   //bread
			   switch (bread)
			   {
			   case 0:
				   this->label_bread->Text = L"0";
				   break;
			   case 1:
				   this->label_bread->Text = L"1";
				   break;
			   case 2:
				   this->label_bread->Text = L"2";
				   break;
			   case 3:
				   this->label_bread->Text = L"3";
				   break;
			   case 4:
				   this->label_bread->Text = L"4";
				   break;
			   case 5:
				   this->label_bread->Text = L"5";
				   break;
			   case 6:
				   this->label_bread->Text = L"6";
				   break;
			   case 7:
				   this->label_bread->Text = L"7";
				   break;
			   case 8:
				   this->label_bread->Text = L"8";
				   break;
			   case 9:
				   this->label_bread->Text = L"9";
				   break;
			   case 10:
				   this->label_bread->Text = L"10";
				   break;
			   case 11:
				   this->label_bread->Text = L"11";
				   break;
			   case 12:
				   this->label_bread->Text = L"12";
				   break;
			   case 13:
				   this->label_bread->Text = L"13";
				   break;
			   case 14:
				   this->label_bread->Text = L"14";
				   break;
			   case 15:
				   this->label_bread->Text = L"15";
				   break;
			   case 16:
				   this->label_bread->Text = L"16";
				   break;
			   case 17:
				   this->label_bread->Text = L"17";
				   break;
			   case 18:
				   this->label_bread->Text = L"18";
				   break;
			   case 19:
				   this->label_bread->Text = L"19";
				   break;
			   case 20:
				   this->label_bread->Text = L"20";
				   break;
			   case 21:
				   this->label_bread->Text = L"21";
				   break;
			   case 22:
				   this->label_bread->Text = L"22";
				   break;
			   case 23:
				   this->label_bread->Text = L"23";
				   break;
			   case 24:
				   this->label_bread->Text = L"24";
				   break;
			   case 25:
				   this->label_bread->Text = L"25";
				   break;
			   case 26:
				   this->label_bread->Text = L"26";
				   break;
			   case 27:
				   this->label_bread->Text = L"27";
				   break;
			   case 28:
				   this->label_bread->Text = L"28";
				   break;
			   case 29:
				   this->label_bread->Text = L"29";
				   break;
			   case 30:
				   this->label_bread->Text = L"30";
				   break;
			   case 31:
				   this->label_bread->Text = L"31";
				   break;
			   case 32:
				   this->label_bread->Text = L"32";
				   break;
			   case 33:
				   this->label_bread->Text = L"33";
				   break;
			   case 34:
				   this->label_bread->Text = L"34";
				   break;
			   case 35:
				   this->label_bread->Text = L"35";
				   break;
			   case 36:
				   this->label_bread->Text = L"36";
				   break;
			   case 37:
				   this->label_bread->Text = L"37";
				   break;
			   case 38:
				   this->label_bread->Text = L"38";
				   break;
			   case 39:
				   this->label_bread->Text = L"39";
				   break;
			   case 40:
				   this->label_bread->Text = L"40";
				   break;
			   case 41:
				   this->label_bread->Text = L"41";
				   break;
			   case 42:
				   this->label_bread->Text = L"42";
				   break;
			   case 43:
				   this->label_bread->Text = L"43";
				   break;
			   case 44:
				   this->label_bread->Text = L"44";
				   break;
			   case 45:
				   this->label_bread->Text = L"45";
				   break;
			   case 46:
				   this->label_bread->Text = L"46";
				   break;
			   case 47:
				   this->label_bread->Text = L"47";
				   break;
			   case 48:
				   this->label_bread->Text = L"48";
				   break;
			   case 49:
				   this->label_bread->Text = L"49";
				   break;
			   case 50:
				   this->label_bread->Text = L"50";
				   break;
			   case 51:
				   this->label_bread->Text = L"51";
				   break;
			   case 52:
				   this->label_bread->Text = L"52";
				   break;
			   case 53:
				   this->label_bread->Text = L"53";
				   break;
			   case 54:
				   this->label_bread->Text = L"54";
				   break;
			   case 55:
				   this->label_bread->Text = L"55";
				   break;
			   case 56:
				   this->label_bread->Text = L"56";
				   break;
			   case 57:
				   this->label_bread->Text = L"57";
				   break;
			   case 58:
				   this->label_bread->Text = L"58";
				   break;
			   case 59:
				   this->label_bread->Text = L"59";
				   break;
			   case 60:
				   this->label_bread->Text = L"60";
				   break;
			   case 61:
				   this->label_bread->Text = L"61";
				   break;
			   case 62:
				   this->label_bread->Text = L"62";
				   break;
			   case 63:
				   this->label_bread->Text = L"63";
				   break;
			   case 64:
				   this->label_bread->Text = L"64";
				   break;
			   case 65:
				   this->label_bread->Text = L"65";
				   break;
			   case 66:
				   this->label_bread->Text = L"66";
				   break;
			   case 67:
				   this->label_bread->Text = L"67";
				   break;
			   case 68:
				   this->label_bread->Text = L"68";
				   break;
			   case 69:
				   this->label_bread->Text = L"69";
				   break;
			   case 70:
				   this->label_bread->Text = L"70";
				   break;
			   case 71:
				   this->label_bread->Text = L"71";
				   break;
			   case 72:
				   this->label_bread->Text = L"72";
				   break;
			   case 73:
				   this->label_bread->Text = L"73";
				   break;
			   case 74:
				   this->label_bread->Text = L"74";
				   break;
			   case 75:
				   this->label_bread->Text = L"75";
				   break;
			   case 76:
				   this->label_bread->Text = L"76";
				   break;
			   case 77:
				   this->label_bread->Text = L"77";
				   break;
			   case 78:
				   this->label_bread->Text = L"78";
				   break;
			   case 79:
				   this->label_bread->Text = L"79";
				   break;
			   case 80:
				   this->label_bread->Text = L"80";
				   break;
			   case 81:
				   this->label_bread->Text = L"81";
				   break;
			   case 82:
				   this->label_bread->Text = L"82";
				   break;
			   case 83:
				   this->label_bread->Text = L"83";
				   break;
			   case 84:
				   this->label_bread->Text = L"84";
				   break;
			   case 85:
				   this->label_bread->Text = L"85";
				   break;
			   case 86:
				   this->label_bread->Text = L"86";
				   break;
			   case 87:
				   this->label_bread->Text = L"87";
				   break;
			   case 88:
				   this->label_bread->Text = L"88";
				   break;
			   case 89:
				   this->label_bread->Text = L"89";
				   break;
			   case 90:
				   this->label_bread->Text = L"90";
				   break;
			   case 91:
				   this->label_bread->Text = L"91";
				   break;
			   case 92:
				   this->label_bread->Text = L"92";
				   break;
			   case 93:
				   this->label_bread->Text = L"93";
				   break;
			   case 94:
				   this->label_bread->Text = L"94";
				   break;
			   case 95:
				   this->label_bread->Text = L"95";
				   break;
			   case 96:
				   this->label_bread->Text = L"96";
				   break;
			   case 97:
				   this->label_bread->Text = L"97";
				   break;
			   case 98:
				   this->label_bread->Text = L"98";
				   break;
			   case 99:
				   this->label_bread->Text = L"99";
				   break;
			   case 100:
				   this->label_bread->Text = L"100";
				   break;
			   case 101:
				   this->label_bread->Text = L"101";
				   break;
			   case 102:
				   this->label_bread->Text = L"102";
				   break;
			   case 103:
				   this->label_bread->Text = L"103";
				   break;
			   case 104:
				   this->label_bread->Text = L"104";
				   break;
			   case 105:
				   this->label_bread->Text = L"105";
				   break;
			   case 106:
				   this->label_bread->Text = L"106";
				   break;
			   case 107:
				   this->label_bread->Text = L"107";
				   break;
			   case 108:
				   this->label_bread->Text = L"108";
				   break;
			   case 109:
				   this->label_bread->Text = L"109";
				   break;
			   case 110:
				   this->label_bread->Text = L"110";
				   break;
			   case 111:
				   this->label_bread->Text = L"111";
				   break;
			   case 112:
				   this->label_bread->Text = L"112";
				   break;
			   case 113:
				   this->label_bread->Text = L"113";
				   break;
			   case 114:
				   this->label_bread->Text = L"114";
				   break;
			   case 115:
				   this->label_bread->Text = L"115";
				   break;
			   case 116:
				   this->label_bread->Text = L"116";
				   break;
			   case 117:
				   this->label_bread->Text = L"117";
				   break;
			   case 118:
				   this->label_bread->Text = L"118";
				   break;
			   case 119:
				   this->label_bread->Text = L"119";
				   break;
			   case 120:
				   this->label_bread->Text = L"120";
				   break;
			   case 121:
				   this->label_bread->Text = L"121";
				   break;
			   case 122:
				   this->label_bread->Text = L"122";
				   break;
			   case 123:
				   this->label_bread->Text = L"123";
				   break;
			   case 124:
				   this->label_bread->Text = L"124";
				   break;
			   case 125:
				   this->label_bread->Text = L"125";
				   break;
			   case 126:
				   this->label_bread->Text = L"126";
				   break;
			   case 127:
				   this->label_bread->Text = L"127";
				   break;
			   case 128:
				   this->label_bread->Text = L"128";
				   break;
			   case 129:
				   this->label_bread->Text = L"129";
				   break;
			   case 130:
				   this->label_bread->Text = L"130";
				   break;
			   case 131:
				   this->label_bread->Text = L"131";
				   break;
			   case 132:
				   this->label_bread->Text = L"132";
				   break;
			   case 133:
				   this->label_bread->Text = L"133";
				   break;
			   case 134:
				   this->label_bread->Text = L"134";
				   break;
			   case 135:
				   this->label_bread->Text = L"135";
				   break;
			   case 136:
				   this->label_bread->Text = L"136";
				   break;
			   case 137:
				   this->label_bread->Text = L"137";
				   break;
			   case 138:
				   this->label_bread->Text = L"138";
				   break;
			   case 139:
				   this->label_bread->Text = L"139";
				   break;
			   case 140:
				   this->label_bread->Text = L"140";
				   break;
			   case 141:
				   this->label_bread->Text = L"141";
				   break;
			   case 142:
				   this->label_bread->Text = L"142";
				   break;
			   case 143:
				   this->label_bread->Text = L"143";
				   break;
			   case 144:
				   this->label_bread->Text = L"144";
				   break;
			   case 145:
				   this->label_bread->Text = L"145";
				   break;
			   case 146:
				   this->label_bread->Text = L"146";
				   break;
			   case 147:
				   this->label_bread->Text = L"147";
				   break;
			   case 148:
				   this->label_bread->Text = L"148";
				   break;
			   case 149:
				   this->label_bread->Text = L"149";
				   break;
			   case 150:
				   this->label_bread->Text = L"150";
				   break;
			   case 151:
				   this->label_bread->Text = L"151";
				   break;
			   case 152:
				   this->label_bread->Text = L"152";
				   break;
			   case 153:
				   this->label_bread->Text = L"153";
				   break;
			   case 154:
				   this->label_bread->Text = L"154";
				   break;
			   case 155:
				   this->label_bread->Text = L"155";
				   break;
			   case 156:
				   this->label_bread->Text = L"156";
				   break;
			   case 157:
				   this->label_bread->Text = L"157";
				   break;
			   case 158:
				   this->label_bread->Text = L"158";
				   break;
			   case 159:
				   this->label_bread->Text = L"159";
				   break;
			   case 160:
				   this->label_bread->Text = L"160";
				   break;
			   case 161:
				   this->label_bread->Text = L"161";
				   break;
			   case 162:
				   this->label_bread->Text = L"162";
				   break;
			   case 163:
				   this->label_bread->Text = L"163";
				   break;
			   case 164:
				   this->label_bread->Text = L"164";
				   break;
			   case 165:
				   this->label_bread->Text = L"165";
				   break;
			   case 166:
				   this->label_bread->Text = L"166";
				   break;
			   case 167:
				   this->label_bread->Text = L"167";
				   break;
			   case 168:
				   this->label_bread->Text = L"168";
				   break;
			   case 169:
				   this->label_bread->Text = L"169";
				   break;
			   case 170:
				   this->label_bread->Text = L"170";
				   break;
			   case 171:
				   this->label_bread->Text = L"171";
				   break;
			   case 172:
				   this->label_bread->Text = L"172";
				   break;
			   case 173:
				   this->label_bread->Text = L"173";
				   break;
			   case 174:
				   this->label_bread->Text = L"174";
				   break;
			   case 175:
				   this->label_bread->Text = L"175";
				   break;
			   case 176:
				   this->label_bread->Text = L"176";
				   break;
			   case 177:
				   this->label_bread->Text = L"177";
				   break;
			   case 178:
				   this->label_bread->Text = L"178";
				   break;
			   case 179:
				   this->label_bread->Text = L"179";
				   break;
			   case 180:
				   this->label_bread->Text = L"180";
				   break;
			   case 181:
				   this->label_bread->Text = L"181";
				   break;
			   case 182:
				   this->label_bread->Text = L"182";
				   break;
			   case 183:
				   this->label_bread->Text = L"183";
				   break;
			   case 184:
				   this->label_bread->Text = L"184";
				   break;
			   case 185:
				   this->label_bread->Text = L"185";
				   break;
			   case 186:
				   this->label_bread->Text = L"186";
				   break;
			   case 187:
				   this->label_bread->Text = L"187";
				   break;
			   case 188:
				   this->label_bread->Text = L"188";
				   break;
			   case 189:
				   this->label_bread->Text = L"189";
				   break;
			   case 190:
				   this->label_bread->Text = L"190";
				   break;
			   case 191:
				   this->label_bread->Text = L"191";
				   break;
			   case 192:
				   this->label_bread->Text = L"192";
				   break;
			   case 193:
				   this->label_bread->Text = L"193";
				   break;
			   case 194:
				   this->label_bread->Text = L"194";
				   break;
			   case 195:
				   this->label_bread->Text = L"195";
				   break;
			   case 196:
				   this->label_bread->Text = L"196";
				   break;
			   case 197:
				   this->label_bread->Text = L"197";
				   break;
			   case 198:
				   this->label_bread->Text = L"198";
				   break;
			   case 199:
				   this->label_bread->Text = L"199";
				   break;
			   case 200:
				   this->label_bread->Text = L"200";
				   break;

			   default:
				   if (radioButtonLanguage_Rus->Checked) this->label_bread->Text = L">200"; else this->label_bread->Text = L">200";
				   break;
			   }
			   //human
			   switch (human)
			   {
			   case 0:
				   this->label_human->Text = L"0";
				   break;
			   case 1:
				   this->label_human->Text = L"1";
				   break;
			   case 2:
				   this->label_human->Text = L"2";
				   break;
			   case 3:
				   this->label_human->Text = L"3";
				   break;
			   case 4:
				   this->label_human->Text = L"4";
				   break;
			   case 5:
				   this->label_human->Text = L"5";
				   break;
			   case 6:
				   this->label_human->Text = L"6";
				   break;
			   case 7:
				   this->label_human->Text = L"7";
				   break;
			   case 8:
				   this->label_human->Text = L"8";
				   break;
			   case 9:
				   this->label_human->Text = L"9";
				   break;
			   case 10:
				   this->label_human->Text = L"10";
				   break;
			   case 11:
				   this->label_human->Text = L"11";
				   break;
			   case 12:
				   this->label_human->Text = L"12";
				   break;
			   case 13:
				   this->label_human->Text = L"13";
				   break;
			   case 14:
				   this->label_human->Text = L"14";
				   break;
			   case 15:
				   this->label_human->Text = L"15";
				   break;
			   case 16:
				   this->label_human->Text = L"16";
				   break;
			   case 17:
				   this->label_human->Text = L"17";
				   break;
			   case 18:
				   this->label_human->Text = L"18";
				   break;
			   case 19:
				   this->label_human->Text = L"19";
				   break;
			   case 20:
				   this->label_human->Text = L"20";
				   break;
			   case 21:
				   this->label_human->Text = L"21";
				   break;
			   case 22:
				   this->label_human->Text = L"22";
				   break;
			   case 23:
				   this->label_human->Text = L"23";
				   break;
			   case 24:
				   this->label_human->Text = L"24";
				   break;
			   case 25:
				   this->label_human->Text = L"25";
				   break;
			   case 26:
				   this->label_human->Text = L"26";
				   break;
			   case 27:
				   this->label_human->Text = L"27";
				   break;
			   case 28:
				   this->label_human->Text = L"28";
				   break;
			   case 29:
				   this->label_human->Text = L"29";
				   break;
			   case 30:
				   this->label_human->Text = L"30";
				   break;
			   case 31:
				   this->label_human->Text = L"31";
				   break;
			   case 32:
				   this->label_human->Text = L"32";
				   break;
			   case 33:
				   this->label_human->Text = L"33";
				   break;
			   case 34:
				   this->label_human->Text = L"34";
				   break;
			   case 35:
				   this->label_human->Text = L"35";
				   break;
			   case 36:
				   this->label_human->Text = L"36";
				   break;
			   case 37:
				   this->label_human->Text = L"37";
				   break;
			   case 38:
				   this->label_human->Text = L"38";
				   break;
			   case 39:
				   this->label_human->Text = L"39";
				   break;
			   case 40:
				   this->label_human->Text = L"40";
				   break;
			   case 41:
				   this->label_human->Text = L"41";
				   break;
			   case 42:
				   this->label_human->Text = L"42";
				   break;
			   case 43:
				   this->label_human->Text = L"43";
				   break;
			   case 44:
				   this->label_human->Text = L"44";
				   break;
			   case 45:
				   this->label_human->Text = L"45";
				   break;
			   case 46:
				   this->label_human->Text = L"46";
				   break;
			   case 47:
				   this->label_human->Text = L"47";
				   break;
			   case 48:
				   this->label_human->Text = L"48";
				   break;
			   case 49:
				   this->label_human->Text = L"49";
				   break;
			   case 50:
				   this->label_human->Text = L"50";
				   break;
			   case 51:
				   this->label_human->Text = L"51";
				   break;
			   case 52:
				   this->label_human->Text = L"52";
				   break;
			   case 53:
				   this->label_human->Text = L"53";
				   break;
			   case 54:
				   this->label_human->Text = L"54";
				   break;
			   case 55:
				   this->label_human->Text = L"55";
				   break;
			   case 56:
				   this->label_human->Text = L"56";
				   break;
			   case 57:
				   this->label_human->Text = L"57";
				   break;
			   case 58:
				   this->label_human->Text = L"58";
				   break;
			   case 59:
				   this->label_human->Text = L"59";
				   break;
			   case 60:
				   this->label_human->Text = L"60";
				   break;
			   case 61:
				   this->label_human->Text = L"61";
				   break;
			   case 62:
				   this->label_human->Text = L"62";
				   break;
			   case 63:
				   this->label_human->Text = L"63";
				   break;
			   case 64:
				   this->label_human->Text = L"64";
				   break;
			   case 65:
				   this->label_human->Text = L"65";
				   break;
			   case 66:
				   this->label_human->Text = L"66";
				   break;
			   case 67:
				   this->label_human->Text = L"67";
				   break;
			   case 68:
				   this->label_human->Text = L"68";
				   break;
			   case 69:
				   this->label_human->Text = L"69";
				   break;
			   case 70:
				   this->label_human->Text = L"70";
				   break;
			   case 71:
				   this->label_human->Text = L"71";
				   break;
			   case 72:
				   this->label_human->Text = L"72";
				   break;
			   case 73:
				   this->label_human->Text = L"73";
				   break;
			   case 74:
				   this->label_human->Text = L"74";
				   break;
			   case 75:
				   this->label_human->Text = L"75";
				   break;
			   case 76:
				   this->label_human->Text = L"76";
				   break;
			   case 77:
				   this->label_human->Text = L"77";
				   break;
			   case 78:
				   this->label_human->Text = L"78";
				   break;
			   case 79:
				   this->label_human->Text = L"79";
				   break;
			   case 80:
				   this->label_human->Text = L"80";
				   break;
			   case 81:
				   this->label_human->Text = L"81";
				   break;
			   case 82:
				   this->label_human->Text = L"82";
				   break;
			   case 83:
				   this->label_human->Text = L"83";
				   break;
			   case 84:
				   this->label_human->Text = L"84";
				   break;
			   case 85:
				   this->label_human->Text = L"85";
				   break;
			   case 86:
				   this->label_human->Text = L"86";
				   break;
			   case 87:
				   this->label_human->Text = L"87";
				   break;
			   case 88:
				   this->label_human->Text = L"88";
				   break;
			   case 89:
				   this->label_human->Text = L"89";
				   break;
			   case 90:
				   this->label_human->Text = L"90";
				   break;
			   case 91:
				   this->label_human->Text = L"91";
				   break;
			   case 92:
				   this->label_human->Text = L"92";
				   break;
			   case 93:
				   this->label_human->Text = L"93";
				   break;
			   case 94:
				   this->label_human->Text = L"94";
				   break;
			   case 95:
				   this->label_human->Text = L"95";
				   break;
			   case 96:
				   this->label_human->Text = L"96";
				   break;
			   case 97:
				   this->label_human->Text = L"97";
				   break;
			   case 98:
				   this->label_human->Text = L"98";
				   break;
			   case 99:
				   this->label_human->Text = L"99";
				   break;
			   case 100:
				   this->label_human->Text = L"100";
				   break;
			   case 101:
				   this->label_human->Text = L"101";
				   break;
			   case 102:
				   this->label_human->Text = L"102";
				   break;
			   case 103:
				   this->label_human->Text = L"103";
				   break;
			   case 104:
				   this->label_human->Text = L"104";
				   break;
			   case 105:
				   this->label_human->Text = L"105";
				   break;
			   case 106:
				   this->label_human->Text = L"106";
				   break;
			   case 107:
				   this->label_human->Text = L"107";
				   break;
			   case 108:
				   this->label_human->Text = L"108";
				   break;
			   case 109:
				   this->label_human->Text = L"109";
				   break;
			   case 110:
				   this->label_human->Text = L"110";
				   break;
			   case 111:
				   this->label_human->Text = L"111";
				   break;
			   case 112:
				   this->label_human->Text = L"112";
				   break;
			   case 113:
				   this->label_human->Text = L"113";
				   break;
			   case 114:
				   this->label_human->Text = L"114";
				   break;
			   case 115:
				   this->label_human->Text = L"115";
				   break;
			   case 116:
				   this->label_human->Text = L"116";
				   break;
			   case 117:
				   this->label_human->Text = L"117";
				   break;
			   case 118:
				   this->label_human->Text = L"118";
				   break;
			   case 119:
				   this->label_human->Text = L"119";
				   break;
			   case 120:
				   this->label_human->Text = L"120";
				   break;
			   case 121:
				   this->label_human->Text = L"121";
				   break;
			   case 122:
				   this->label_human->Text = L"122";
				   break;
			   case 123:
				   this->label_human->Text = L"123";
				   break;
			   case 124:
				   this->label_human->Text = L"124";
				   break;
			   case 125:
				   this->label_human->Text = L"125";
				   break;
			   case 126:
				   this->label_human->Text = L"126";
				   break;
			   case 127:
				   this->label_human->Text = L"127";
				   break;
			   case 128:
				   this->label_human->Text = L"128";
				   break;
			   case 129:
				   this->label_human->Text = L"129";
				   break;
			   case 130:
				   this->label_human->Text = L"130";
				   break;
			   case 131:
				   this->label_human->Text = L"131";
				   break;
			   case 132:
				   this->label_human->Text = L"132";
				   break;
			   case 133:
				   this->label_human->Text = L"133";
				   break;
			   case 134:
				   this->label_human->Text = L"134";
				   break;
			   case 135:
				   this->label_human->Text = L"135";
				   break;
			   case 136:
				   this->label_human->Text = L"136";
				   break;
			   case 137:
				   this->label_human->Text = L"137";
				   break;
			   case 138:
				   this->label_human->Text = L"138";
				   break;
			   case 139:
				   this->label_human->Text = L"139";
				   break;
			   case 140:
				   this->label_human->Text = L"140";
				   break;
			   case 141:
				   this->label_human->Text = L"141";
				   break;
			   case 142:
				   this->label_human->Text = L"142";
				   break;
			   case 143:
				   this->label_human->Text = L"143";
				   break;
			   case 144:
				   this->label_human->Text = L"144";
				   break;
			   case 145:
				   this->label_human->Text = L"145";
				   break;
			   case 146:
				   this->label_human->Text = L"146";
				   break;
			   case 147:
				   this->label_human->Text = L"147";
				   break;
			   case 148:
				   this->label_human->Text = L"148";
				   break;
			   case 149:
				   this->label_human->Text = L"149";
				   break;
			   case 150:
				   this->label_human->Text = L"150";
				   break;
			   case 151:
				   this->label_human->Text = L"151";
				   break;
			   case 152:
				   this->label_human->Text = L"152";
				   break;
			   case 153:
				   this->label_human->Text = L"153";
				   break;
			   case 154:
				   this->label_human->Text = L"154";
				   break;
			   case 155:
				   this->label_human->Text = L"155";
				   break;
			   case 156:
				   this->label_human->Text = L"156";
				   break;
			   case 157:
				   this->label_human->Text = L"157";
				   break;
			   case 158:
				   this->label_human->Text = L"158";
				   break;
			   case 159:
				   this->label_human->Text = L"159";
				   break;
			   case 160:
				   this->label_human->Text = L"160";
				   break;
			   case 161:
				   this->label_human->Text = L"161";
				   break;
			   case 162:
				   this->label_human->Text = L"162";
				   break;
			   case 163:
				   this->label_human->Text = L"163";
				   break;
			   case 164:
				   this->label_human->Text = L"164";
				   break;
			   case 165:
				   this->label_human->Text = L"165";
				   break;
			   case 166:
				   this->label_human->Text = L"166";
				   break;
			   case 167:
				   this->label_human->Text = L"167";
				   break;
			   case 168:
				   this->label_human->Text = L"168";
				   break;
			   case 169:
				   this->label_human->Text = L"169";
				   break;
			   case 170:
				   this->label_human->Text = L"170";
				   break;
			   case 171:
				   this->label_human->Text = L"171";
				   break;
			   case 172:
				   this->label_human->Text = L"172";
				   break;
			   case 173:
				   this->label_human->Text = L"173";
				   break;
			   case 174:
				   this->label_human->Text = L"174";
				   break;
			   case 175:
				   this->label_human->Text = L"175";
				   break;
			   case 176:
				   this->label_human->Text = L"176";
				   break;
			   case 177:
				   this->label_human->Text = L"177";
				   break;
			   case 178:
				   this->label_human->Text = L"178";
				   break;
			   case 179:
				   this->label_human->Text = L"179";
				   break;
			   case 180:
				   this->label_human->Text = L"180";
				   break;
			   case 181:
				   this->label_human->Text = L"181";
				   break;
			   case 182:
				   this->label_human->Text = L"182";
				   break;
			   case 183:
				   this->label_human->Text = L"183";
				   break;
			   case 184:
				   this->label_human->Text = L"184";
				   break;
			   case 185:
				   this->label_human->Text = L"185";
				   break;
			   case 186:
				   this->label_human->Text = L"186";
				   break;
			   case 187:
				   this->label_human->Text = L"187";
				   break;
			   case 188:
				   this->label_human->Text = L"188";
				   break;
			   case 189:
				   this->label_human->Text = L"189";
				   break;
			   case 190:
				   this->label_human->Text = L"190";
				   break;
			   case 191:
				   this->label_human->Text = L"191";
				   break;
			   case 192:
				   this->label_human->Text = L"192";
				   break;
			   case 193:
				   this->label_human->Text = L"193";
				   break;
			   case 194:
				   this->label_human->Text = L"194";
				   break;
			   case 195:
				   this->label_human->Text = L"195";
				   break;
			   case 196:
				   this->label_human->Text = L"196";
				   break;
			   case 197:
				   this->label_human->Text = L"197";
				   break;
			   case 198:
				   this->label_human->Text = L"198";
				   break;
			   case 199:
				   this->label_human->Text = L"199";
				   break;
			   case 200:
				   this->label_human->Text = L"200";
				   break;

			   default:
				   if (radioButtonLanguage_Rus->Checked) this->label_human->Text = L">200"; else this->label_human->Text = L">200";
				   break;
			   }
			   //flour
			   switch (flour)
			   {
			   case 0:
				   this->label_flour->Text = L"0";
				   break;
			   case 1:
				   this->label_flour->Text = L"1";
				   break;
			   case 2:
				   this->label_flour->Text = L"2";
				   break;
			   case 3:
				   this->label_flour->Text = L"3";
				   break;
			   case 4:
				   this->label_flour->Text = L"4";
				   break;
			   case 5:
				   this->label_flour->Text = L"5";
				   break;
			   case 6:
				   this->label_flour->Text = L"6";
				   break;
			   case 7:
				   this->label_flour->Text = L"7";
				   break;
			   case 8:
				   this->label_flour->Text = L"8";
				   break;
			   case 9:
				   this->label_flour->Text = L"9";
				   break;
			   case 10:
				   this->label_flour->Text = L"10";
				   break;
			   case 11:
				   this->label_flour->Text = L"11";
				   break;
			   case 12:
				   this->label_flour->Text = L"12";
				   break;
			   case 13:
				   this->label_flour->Text = L"13";
				   break;
			   case 14:
				   this->label_flour->Text = L"14";
				   break;
			   case 15:
				   this->label_flour->Text = L"15";
				   break;
			   case 16:
				   this->label_flour->Text = L"16";
				   break;
			   case 17:
				   this->label_flour->Text = L"17";
				   break;
			   case 18:
				   this->label_flour->Text = L"18";
				   break;
			   case 19:
				   this->label_flour->Text = L"19";
				   break;
			   case 20:
				   this->label_flour->Text = L"20";
				   break;
			   case 21:
				   this->label_flour->Text = L"21";
				   break;
			   case 22:
				   this->label_flour->Text = L"22";
				   break;
			   case 23:
				   this->label_flour->Text = L"23";
				   break;
			   case 24:
				   this->label_flour->Text = L"24";
				   break;
			   case 25:
				   this->label_flour->Text = L"25";
				   break;
			   case 26:
				   this->label_flour->Text = L"26";
				   break;
			   case 27:
				   this->label_flour->Text = L"27";
				   break;
			   case 28:
				   this->label_flour->Text = L"28";
				   break;
			   case 29:
				   this->label_flour->Text = L"29";
				   break;
			   case 30:
				   this->label_flour->Text = L"30";
				   break;
			   case 31:
				   this->label_flour->Text = L"31";
				   break;
			   case 32:
				   this->label_flour->Text = L"32";
				   break;
			   case 33:
				   this->label_flour->Text = L"33";
				   break;
			   case 34:
				   this->label_flour->Text = L"34";
				   break;
			   case 35:
				   this->label_flour->Text = L"35";
				   break;
			   case 36:
				   this->label_flour->Text = L"36";
				   break;
			   case 37:
				   this->label_flour->Text = L"37";
				   break;
			   case 38:
				   this->label_flour->Text = L"38";
				   break;
			   case 39:
				   this->label_flour->Text = L"39";
				   break;
			   case 40:
				   this->label_flour->Text = L"40";
				   break;
			   case 41:
				   this->label_flour->Text = L"41";
				   break;
			   case 42:
				   this->label_flour->Text = L"42";
				   break;
			   case 43:
				   this->label_flour->Text = L"43";
				   break;
			   case 44:
				   this->label_flour->Text = L"44";
				   break;
			   case 45:
				   this->label_flour->Text = L"45";
				   break;
			   case 46:
				   this->label_flour->Text = L"46";
				   break;
			   case 47:
				   this->label_flour->Text = L"47";
				   break;
			   case 48:
				   this->label_flour->Text = L"48";
				   break;
			   case 49:
				   this->label_flour->Text = L"49";
				   break;
			   case 50:
				   this->label_flour->Text = L"50";
				   break;
			   case 51:
				   this->label_flour->Text = L"51";
				   break;
			   case 52:
				   this->label_flour->Text = L"52";
				   break;
			   case 53:
				   this->label_flour->Text = L"53";
				   break;
			   case 54:
				   this->label_flour->Text = L"54";
				   break;
			   case 55:
				   this->label_flour->Text = L"55";
				   break;
			   case 56:
				   this->label_flour->Text = L"56";
				   break;
			   case 57:
				   this->label_flour->Text = L"57";
				   break;
			   case 58:
				   this->label_flour->Text = L"58";
				   break;
			   case 59:
				   this->label_flour->Text = L"59";
				   break;
			   case 60:
				   this->label_flour->Text = L"60";
				   break;
			   case 61:
				   this->label_flour->Text = L"61";
				   break;
			   case 62:
				   this->label_flour->Text = L"62";
				   break;
			   case 63:
				   this->label_flour->Text = L"63";
				   break;
			   case 64:
				   this->label_flour->Text = L"64";
				   break;
			   case 65:
				   this->label_flour->Text = L"65";
				   break;
			   case 66:
				   this->label_flour->Text = L"66";
				   break;
			   case 67:
				   this->label_flour->Text = L"67";
				   break;
			   case 68:
				   this->label_flour->Text = L"68";
				   break;
			   case 69:
				   this->label_flour->Text = L"69";
				   break;
			   case 70:
				   this->label_flour->Text = L"70";
				   break;
			   case 71:
				   this->label_flour->Text = L"71";
				   break;
			   case 72:
				   this->label_flour->Text = L"72";
				   break;
			   case 73:
				   this->label_flour->Text = L"73";
				   break;
			   case 74:
				   this->label_flour->Text = L"74";
				   break;
			   case 75:
				   this->label_flour->Text = L"75";
				   break;
			   case 76:
				   this->label_flour->Text = L"76";
				   break;
			   case 77:
				   this->label_flour->Text = L"77";
				   break;
			   case 78:
				   this->label_flour->Text = L"78";
				   break;
			   case 79:
				   this->label_flour->Text = L"79";
				   break;
			   case 80:
				   this->label_flour->Text = L"80";
				   break;
			   case 81:
				   this->label_flour->Text = L"81";
				   break;
			   case 82:
				   this->label_flour->Text = L"82";
				   break;
			   case 83:
				   this->label_flour->Text = L"83";
				   break;
			   case 84:
				   this->label_flour->Text = L"84";
				   break;
			   case 85:
				   this->label_flour->Text = L"85";
				   break;
			   case 86:
				   this->label_flour->Text = L"86";
				   break;
			   case 87:
				   this->label_flour->Text = L"87";
				   break;
			   case 88:
				   this->label_flour->Text = L"88";
				   break;
			   case 89:
				   this->label_flour->Text = L"89";
				   break;
			   case 90:
				   this->label_flour->Text = L"90";
				   break;
			   case 91:
				   this->label_flour->Text = L"91";
				   break;
			   case 92:
				   this->label_flour->Text = L"92";
				   break;
			   case 93:
				   this->label_flour->Text = L"93";
				   break;
			   case 94:
				   this->label_flour->Text = L"94";
				   break;
			   case 95:
				   this->label_flour->Text = L"95";
				   break;
			   case 96:
				   this->label_flour->Text = L"96";
				   break;
			   case 97:
				   this->label_flour->Text = L"97";
				   break;
			   case 98:
				   this->label_flour->Text = L"98";
				   break;
			   case 99:
				   this->label_flour->Text = L"99";
				   break;
			   case 100:
				   this->label_flour->Text = L"100";
				   break;
			   case 101:
				   this->label_flour->Text = L"101";
				   break;
			   case 102:
				   this->label_flour->Text = L"102";
				   break;
			   case 103:
				   this->label_flour->Text = L"103";
				   break;
			   case 104:
				   this->label_flour->Text = L"104";
				   break;
			   case 105:
				   this->label_flour->Text = L"105";
				   break;
			   case 106:
				   this->label_flour->Text = L"106";
				   break;
			   case 107:
				   this->label_flour->Text = L"107";
				   break;
			   case 108:
				   this->label_flour->Text = L"108";
				   break;
			   case 109:
				   this->label_flour->Text = L"109";
				   break;
			   case 110:
				   this->label_flour->Text = L"110";
				   break;
			   case 111:
				   this->label_flour->Text = L"111";
				   break;
			   case 112:
				   this->label_flour->Text = L"112";
				   break;
			   case 113:
				   this->label_flour->Text = L"113";
				   break;
			   case 114:
				   this->label_flour->Text = L"114";
				   break;
			   case 115:
				   this->label_flour->Text = L"115";
				   break;
			   case 116:
				   this->label_flour->Text = L"116";
				   break;
			   case 117:
				   this->label_flour->Text = L"117";
				   break;
			   case 118:
				   this->label_flour->Text = L"118";
				   break;
			   case 119:
				   this->label_flour->Text = L"119";
				   break;
			   case 120:
				   this->label_flour->Text = L"120";
				   break;
			   case 121:
				   this->label_flour->Text = L"121";
				   break;
			   case 122:
				   this->label_flour->Text = L"122";
				   break;
			   case 123:
				   this->label_flour->Text = L"123";
				   break;
			   case 124:
				   this->label_flour->Text = L"124";
				   break;
			   case 125:
				   this->label_flour->Text = L"125";
				   break;
			   case 126:
				   this->label_flour->Text = L"126";
				   break;
			   case 127:
				   this->label_flour->Text = L"127";
				   break;
			   case 128:
				   this->label_flour->Text = L"128";
				   break;
			   case 129:
				   this->label_flour->Text = L"129";
				   break;
			   case 130:
				   this->label_flour->Text = L"130";
				   break;
			   case 131:
				   this->label_flour->Text = L"131";
				   break;
			   case 132:
				   this->label_flour->Text = L"132";
				   break;
			   case 133:
				   this->label_flour->Text = L"133";
				   break;
			   case 134:
				   this->label_flour->Text = L"134";
				   break;
			   case 135:
				   this->label_flour->Text = L"135";
				   break;
			   case 136:
				   this->label_flour->Text = L"136";
				   break;
			   case 137:
				   this->label_flour->Text = L"137";
				   break;
			   case 138:
				   this->label_flour->Text = L"138";
				   break;
			   case 139:
				   this->label_flour->Text = L"139";
				   break;
			   case 140:
				   this->label_flour->Text = L"140";
				   break;
			   case 141:
				   this->label_flour->Text = L"141";
				   break;
			   case 142:
				   this->label_flour->Text = L"142";
				   break;
			   case 143:
				   this->label_flour->Text = L"143";
				   break;
			   case 144:
				   this->label_flour->Text = L"144";
				   break;
			   case 145:
				   this->label_flour->Text = L"145";
				   break;
			   case 146:
				   this->label_flour->Text = L"146";
				   break;
			   case 147:
				   this->label_flour->Text = L"147";
				   break;
			   case 148:
				   this->label_flour->Text = L"148";
				   break;
			   case 149:
				   this->label_flour->Text = L"149";
				   break;
			   case 150:
				   this->label_flour->Text = L"150";
				   break;
			   case 151:
				   this->label_flour->Text = L"151";
				   break;
			   case 152:
				   this->label_flour->Text = L"152";
				   break;
			   case 153:
				   this->label_flour->Text = L"153";
				   break;
			   case 154:
				   this->label_flour->Text = L"154";
				   break;
			   case 155:
				   this->label_flour->Text = L"155";
				   break;
			   case 156:
				   this->label_flour->Text = L"156";
				   break;
			   case 157:
				   this->label_flour->Text = L"157";
				   break;
			   case 158:
				   this->label_flour->Text = L"158";
				   break;
			   case 159:
				   this->label_flour->Text = L"159";
				   break;
			   case 160:
				   this->label_flour->Text = L"160";
				   break;
			   case 161:
				   this->label_flour->Text = L"161";
				   break;
			   case 162:
				   this->label_flour->Text = L"162";
				   break;
			   case 163:
				   this->label_flour->Text = L"163";
				   break;
			   case 164:
				   this->label_flour->Text = L"164";
				   break;
			   case 165:
				   this->label_flour->Text = L"165";
				   break;
			   case 166:
				   this->label_flour->Text = L"166";
				   break;
			   case 167:
				   this->label_flour->Text = L"167";
				   break;
			   case 168:
				   this->label_flour->Text = L"168";
				   break;
			   case 169:
				   this->label_flour->Text = L"169";
				   break;
			   case 170:
				   this->label_flour->Text = L"170";
				   break;
			   case 171:
				   this->label_flour->Text = L"171";
				   break;
			   case 172:
				   this->label_flour->Text = L"172";
				   break;
			   case 173:
				   this->label_flour->Text = L"173";
				   break;
			   case 174:
				   this->label_flour->Text = L"174";
				   break;
			   case 175:
				   this->label_flour->Text = L"175";
				   break;
			   case 176:
				   this->label_flour->Text = L"176";
				   break;
			   case 177:
				   this->label_flour->Text = L"177";
				   break;
			   case 178:
				   this->label_flour->Text = L"178";
				   break;
			   case 179:
				   this->label_flour->Text = L"179";
				   break;
			   case 180:
				   this->label_flour->Text = L"180";
				   break;
			   case 181:
				   this->label_flour->Text = L"181";
				   break;
			   case 182:
				   this->label_flour->Text = L"182";
				   break;
			   case 183:
				   this->label_flour->Text = L"183";
				   break;
			   case 184:
				   this->label_flour->Text = L"184";
				   break;
			   case 185:
				   this->label_flour->Text = L"185";
				   break;
			   case 186:
				   this->label_flour->Text = L"186";
				   break;
			   case 187:
				   this->label_flour->Text = L"187";
				   break;
			   case 188:
				   this->label_flour->Text = L"188";
				   break;
			   case 189:
				   this->label_flour->Text = L"189";
				   break;
			   case 190:
				   this->label_flour->Text = L"190";
				   break;
			   case 191:
				   this->label_flour->Text = L"191";
				   break;
			   case 192:
				   this->label_flour->Text = L"192";
				   break;
			   case 193:
				   this->label_flour->Text = L"193";
				   break;
			   case 194:
				   this->label_flour->Text = L"194";
				   break;
			   case 195:
				   this->label_flour->Text = L"195";
				   break;
			   case 196:
				   this->label_flour->Text = L"196";
				   break;
			   case 197:
				   this->label_flour->Text = L"197";
				   break;
			   case 198:
				   this->label_flour->Text = L"198";
				   break;
			   case 199:
				   this->label_flour->Text = L"199";
				   break;
			   case 200:
				   this->label_flour->Text = L"200";
				   break;

			   default:
				   if (radioButtonLanguage_Rus->Checked) this->label_flour->Text = L">200"; else this->label_flour->Text = L">200";
				   break;
			   }
			   //iron_ore
			   switch (iron_ore)
			   {
			   case 0:
				   this->label_iron_ore->Text = L"0";
				   break;
			   case 1:
				   this->label_iron_ore->Text = L"1";
				   break;
			   case 2:
				   this->label_iron_ore->Text = L"2";
				   break;
			   case 3:
				   this->label_iron_ore->Text = L"3";
				   break;
			   case 4:
				   this->label_iron_ore->Text = L"4";
				   break;
			   case 5:
				   this->label_iron_ore->Text = L"5";
				   break;
			   case 6:
				   this->label_iron_ore->Text = L"6";
				   break;
			   case 7:
				   this->label_iron_ore->Text = L"7";
				   break;
			   case 8:
				   this->label_iron_ore->Text = L"8";
				   break;
			   case 9:
				   this->label_iron_ore->Text = L"9";
				   break;
			   case 10:
				   this->label_iron_ore->Text = L"10";
				   break;
			   case 11:
				   this->label_iron_ore->Text = L"11";
				   break;
			   case 12:
				   this->label_iron_ore->Text = L"12";
				   break;
			   case 13:
				   this->label_iron_ore->Text = L"13";
				   break;
			   case 14:
				   this->label_iron_ore->Text = L"14";
				   break;
			   case 15:
				   this->label_iron_ore->Text = L"15";
				   break;
			   case 16:
				   this->label_iron_ore->Text = L"16";
				   break;
			   case 17:
				   this->label_iron_ore->Text = L"17";
				   break;
			   case 18:
				   this->label_iron_ore->Text = L"18";
				   break;
			   case 19:
				   this->label_iron_ore->Text = L"19";
				   break;
			   case 20:
				   this->label_iron_ore->Text = L"20";
				   break;
			   case 21:
				   this->label_iron_ore->Text = L"21";
				   break;
			   case 22:
				   this->label_iron_ore->Text = L"22";
				   break;
			   case 23:
				   this->label_iron_ore->Text = L"23";
				   break;
			   case 24:
				   this->label_iron_ore->Text = L"24";
				   break;
			   case 25:
				   this->label_iron_ore->Text = L"25";
				   break;
			   case 26:
				   this->label_iron_ore->Text = L"26";
				   break;
			   case 27:
				   this->label_iron_ore->Text = L"27";
				   break;
			   case 28:
				   this->label_iron_ore->Text = L"28";
				   break;
			   case 29:
				   this->label_iron_ore->Text = L"29";
				   break;
			   case 30:
				   this->label_iron_ore->Text = L"30";
				   break;
			   case 31:
				   this->label_iron_ore->Text = L"31";
				   break;
			   case 32:
				   this->label_iron_ore->Text = L"32";
				   break;
			   case 33:
				   this->label_iron_ore->Text = L"33";
				   break;
			   case 34:
				   this->label_iron_ore->Text = L"34";
				   break;
			   case 35:
				   this->label_iron_ore->Text = L"35";
				   break;
			   case 36:
				   this->label_iron_ore->Text = L"36";
				   break;
			   case 37:
				   this->label_iron_ore->Text = L"37";
				   break;
			   case 38:
				   this->label_iron_ore->Text = L"38";
				   break;
			   case 39:
				   this->label_iron_ore->Text = L"39";
				   break;
			   case 40:
				   this->label_iron_ore->Text = L"40";
				   break;
			   case 41:
				   this->label_iron_ore->Text = L"41";
				   break;
			   case 42:
				   this->label_iron_ore->Text = L"42";
				   break;
			   case 43:
				   this->label_iron_ore->Text = L"43";
				   break;
			   case 44:
				   this->label_iron_ore->Text = L"44";
				   break;
			   case 45:
				   this->label_iron_ore->Text = L"45";
				   break;
			   case 46:
				   this->label_iron_ore->Text = L"46";
				   break;
			   case 47:
				   this->label_iron_ore->Text = L"47";
				   break;
			   case 48:
				   this->label_iron_ore->Text = L"48";
				   break;
			   case 49:
				   this->label_iron_ore->Text = L"49";
				   break;
			   case 50:
				   this->label_iron_ore->Text = L"50";
				   break;
			   case 51:
				   this->label_iron_ore->Text = L"51";
				   break;
			   case 52:
				   this->label_iron_ore->Text = L"52";
				   break;
			   case 53:
				   this->label_iron_ore->Text = L"53";
				   break;
			   case 54:
				   this->label_iron_ore->Text = L"54";
				   break;
			   case 55:
				   this->label_iron_ore->Text = L"55";
				   break;
			   case 56:
				   this->label_iron_ore->Text = L"56";
				   break;
			   case 57:
				   this->label_iron_ore->Text = L"57";
				   break;
			   case 58:
				   this->label_iron_ore->Text = L"58";
				   break;
			   case 59:
				   this->label_iron_ore->Text = L"59";
				   break;
			   case 60:
				   this->label_iron_ore->Text = L"60";
				   break;
			   case 61:
				   this->label_iron_ore->Text = L"61";
				   break;
			   case 62:
				   this->label_iron_ore->Text = L"62";
				   break;
			   case 63:
				   this->label_iron_ore->Text = L"63";
				   break;
			   case 64:
				   this->label_iron_ore->Text = L"64";
				   break;
			   case 65:
				   this->label_iron_ore->Text = L"65";
				   break;
			   case 66:
				   this->label_iron_ore->Text = L"66";
				   break;
			   case 67:
				   this->label_iron_ore->Text = L"67";
				   break;
			   case 68:
				   this->label_iron_ore->Text = L"68";
				   break;
			   case 69:
				   this->label_iron_ore->Text = L"69";
				   break;
			   case 70:
				   this->label_iron_ore->Text = L"70";
				   break;
			   case 71:
				   this->label_iron_ore->Text = L"71";
				   break;
			   case 72:
				   this->label_iron_ore->Text = L"72";
				   break;
			   case 73:
				   this->label_iron_ore->Text = L"73";
				   break;
			   case 74:
				   this->label_iron_ore->Text = L"74";
				   break;
			   case 75:
				   this->label_iron_ore->Text = L"75";
				   break;
			   case 76:
				   this->label_iron_ore->Text = L"76";
				   break;
			   case 77:
				   this->label_iron_ore->Text = L"77";
				   break;
			   case 78:
				   this->label_iron_ore->Text = L"78";
				   break;
			   case 79:
				   this->label_iron_ore->Text = L"79";
				   break;
			   case 80:
				   this->label_iron_ore->Text = L"80";
				   break;
			   case 81:
				   this->label_iron_ore->Text = L"81";
				   break;
			   case 82:
				   this->label_iron_ore->Text = L"82";
				   break;
			   case 83:
				   this->label_iron_ore->Text = L"83";
				   break;
			   case 84:
				   this->label_iron_ore->Text = L"84";
				   break;
			   case 85:
				   this->label_iron_ore->Text = L"85";
				   break;
			   case 86:
				   this->label_iron_ore->Text = L"86";
				   break;
			   case 87:
				   this->label_iron_ore->Text = L"87";
				   break;
			   case 88:
				   this->label_iron_ore->Text = L"88";
				   break;
			   case 89:
				   this->label_iron_ore->Text = L"89";
				   break;
			   case 90:
				   this->label_iron_ore->Text = L"90";
				   break;
			   case 91:
				   this->label_iron_ore->Text = L"91";
				   break;
			   case 92:
				   this->label_iron_ore->Text = L"92";
				   break;
			   case 93:
				   this->label_iron_ore->Text = L"93";
				   break;
			   case 94:
				   this->label_iron_ore->Text = L"94";
				   break;
			   case 95:
				   this->label_iron_ore->Text = L"95";
				   break;
			   case 96:
				   this->label_iron_ore->Text = L"96";
				   break;
			   case 97:
				   this->label_iron_ore->Text = L"97";
				   break;
			   case 98:
				   this->label_iron_ore->Text = L"98";
				   break;
			   case 99:
				   this->label_iron_ore->Text = L"99";
				   break;
			   case 100:
				   this->label_iron_ore->Text = L"100";
				   break;
			   case 101:
				   this->label_iron_ore->Text = L"101";
				   break;
			   case 102:
				   this->label_iron_ore->Text = L"102";
				   break;
			   case 103:
				   this->label_iron_ore->Text = L"103";
				   break;
			   case 104:
				   this->label_iron_ore->Text = L"104";
				   break;
			   case 105:
				   this->label_iron_ore->Text = L"105";
				   break;
			   case 106:
				   this->label_iron_ore->Text = L"106";
				   break;
			   case 107:
				   this->label_iron_ore->Text = L"107";
				   break;
			   case 108:
				   this->label_iron_ore->Text = L"108";
				   break;
			   case 109:
				   this->label_iron_ore->Text = L"109";
				   break;
			   case 110:
				   this->label_iron_ore->Text = L"110";
				   break;
			   case 111:
				   this->label_iron_ore->Text = L"111";
				   break;
			   case 112:
				   this->label_iron_ore->Text = L"112";
				   break;
			   case 113:
				   this->label_iron_ore->Text = L"113";
				   break;
			   case 114:
				   this->label_iron_ore->Text = L"114";
				   break;
			   case 115:
				   this->label_iron_ore->Text = L"115";
				   break;
			   case 116:
				   this->label_iron_ore->Text = L"116";
				   break;
			   case 117:
				   this->label_iron_ore->Text = L"117";
				   break;
			   case 118:
				   this->label_iron_ore->Text = L"118";
				   break;
			   case 119:
				   this->label_iron_ore->Text = L"119";
				   break;
			   case 120:
				   this->label_iron_ore->Text = L"120";
				   break;
			   case 121:
				   this->label_iron_ore->Text = L"121";
				   break;
			   case 122:
				   this->label_iron_ore->Text = L"122";
				   break;
			   case 123:
				   this->label_iron_ore->Text = L"123";
				   break;
			   case 124:
				   this->label_iron_ore->Text = L"124";
				   break;
			   case 125:
				   this->label_iron_ore->Text = L"125";
				   break;
			   case 126:
				   this->label_iron_ore->Text = L"126";
				   break;
			   case 127:
				   this->label_iron_ore->Text = L"127";
				   break;
			   case 128:
				   this->label_iron_ore->Text = L"128";
				   break;
			   case 129:
				   this->label_iron_ore->Text = L"129";
				   break;
			   case 130:
				   this->label_iron_ore->Text = L"130";
				   break;
			   case 131:
				   this->label_iron_ore->Text = L"131";
				   break;
			   case 132:
				   this->label_iron_ore->Text = L"132";
				   break;
			   case 133:
				   this->label_iron_ore->Text = L"133";
				   break;
			   case 134:
				   this->label_iron_ore->Text = L"134";
				   break;
			   case 135:
				   this->label_iron_ore->Text = L"135";
				   break;
			   case 136:
				   this->label_iron_ore->Text = L"136";
				   break;
			   case 137:
				   this->label_iron_ore->Text = L"137";
				   break;
			   case 138:
				   this->label_iron_ore->Text = L"138";
				   break;
			   case 139:
				   this->label_iron_ore->Text = L"139";
				   break;
			   case 140:
				   this->label_iron_ore->Text = L"140";
				   break;
			   case 141:
				   this->label_iron_ore->Text = L"141";
				   break;
			   case 142:
				   this->label_iron_ore->Text = L"142";
				   break;
			   case 143:
				   this->label_iron_ore->Text = L"143";
				   break;
			   case 144:
				   this->label_iron_ore->Text = L"144";
				   break;
			   case 145:
				   this->label_iron_ore->Text = L"145";
				   break;
			   case 146:
				   this->label_iron_ore->Text = L"146";
				   break;
			   case 147:
				   this->label_iron_ore->Text = L"147";
				   break;
			   case 148:
				   this->label_iron_ore->Text = L"148";
				   break;
			   case 149:
				   this->label_iron_ore->Text = L"149";
				   break;
			   case 150:
				   this->label_iron_ore->Text = L"150";
				   break;
			   case 151:
				   this->label_iron_ore->Text = L"151";
				   break;
			   case 152:
				   this->label_iron_ore->Text = L"152";
				   break;
			   case 153:
				   this->label_iron_ore->Text = L"153";
				   break;
			   case 154:
				   this->label_iron_ore->Text = L"154";
				   break;
			   case 155:
				   this->label_iron_ore->Text = L"155";
				   break;
			   case 156:
				   this->label_iron_ore->Text = L"156";
				   break;
			   case 157:
				   this->label_iron_ore->Text = L"157";
				   break;
			   case 158:
				   this->label_iron_ore->Text = L"158";
				   break;
			   case 159:
				   this->label_iron_ore->Text = L"159";
				   break;
			   case 160:
				   this->label_iron_ore->Text = L"160";
				   break;
			   case 161:
				   this->label_iron_ore->Text = L"161";
				   break;
			   case 162:
				   this->label_iron_ore->Text = L"162";
				   break;
			   case 163:
				   this->label_iron_ore->Text = L"163";
				   break;
			   case 164:
				   this->label_iron_ore->Text = L"164";
				   break;
			   case 165:
				   this->label_iron_ore->Text = L"165";
				   break;
			   case 166:
				   this->label_iron_ore->Text = L"166";
				   break;
			   case 167:
				   this->label_iron_ore->Text = L"167";
				   break;
			   case 168:
				   this->label_iron_ore->Text = L"168";
				   break;
			   case 169:
				   this->label_iron_ore->Text = L"169";
				   break;
			   case 170:
				   this->label_iron_ore->Text = L"170";
				   break;
			   case 171:
				   this->label_iron_ore->Text = L"171";
				   break;
			   case 172:
				   this->label_iron_ore->Text = L"172";
				   break;
			   case 173:
				   this->label_iron_ore->Text = L"173";
				   break;
			   case 174:
				   this->label_iron_ore->Text = L"174";
				   break;
			   case 175:
				   this->label_iron_ore->Text = L"175";
				   break;
			   case 176:
				   this->label_iron_ore->Text = L"176";
				   break;
			   case 177:
				   this->label_iron_ore->Text = L"177";
				   break;
			   case 178:
				   this->label_iron_ore->Text = L"178";
				   break;
			   case 179:
				   this->label_iron_ore->Text = L"179";
				   break;
			   case 180:
				   this->label_iron_ore->Text = L"180";
				   break;
			   case 181:
				   this->label_iron_ore->Text = L"181";
				   break;
			   case 182:
				   this->label_iron_ore->Text = L"182";
				   break;
			   case 183:
				   this->label_iron_ore->Text = L"183";
				   break;
			   case 184:
				   this->label_iron_ore->Text = L"184";
				   break;
			   case 185:
				   this->label_iron_ore->Text = L"185";
				   break;
			   case 186:
				   this->label_iron_ore->Text = L"186";
				   break;
			   case 187:
				   this->label_iron_ore->Text = L"187";
				   break;
			   case 188:
				   this->label_iron_ore->Text = L"188";
				   break;
			   case 189:
				   this->label_iron_ore->Text = L"189";
				   break;
			   case 190:
				   this->label_iron_ore->Text = L"190";
				   break;
			   case 191:
				   this->label_iron_ore->Text = L"191";
				   break;
			   case 192:
				   this->label_iron_ore->Text = L"192";
				   break;
			   case 193:
				   this->label_iron_ore->Text = L"193";
				   break;
			   case 194:
				   this->label_iron_ore->Text = L"194";
				   break;
			   case 195:
				   this->label_iron_ore->Text = L"195";
				   break;
			   case 196:
				   this->label_iron_ore->Text = L"196";
				   break;
			   case 197:
				   this->label_iron_ore->Text = L"197";
				   break;
			   case 198:
				   this->label_iron_ore->Text = L"198";
				   break;
			   case 199:
				   this->label_iron_ore->Text = L"199";
				   break;
			   case 200:
				   this->label_iron_ore->Text = L"200";
				   break;

			   default:
				   if (radioButtonLanguage_Rus->Checked) this->label_iron_ore->Text = L">200"; else this->label_iron_ore->Text = L">200";
				   break;
			   }
			   //iron
			   switch (iron)
			   {
			   case 0:
				   this->label_iron->Text = L"0";
				   break;
			   case 1:
				   this->label_iron->Text = L"1";
				   break;
			   case 2:
				   this->label_iron->Text = L"2";
				   break;
			   case 3:
				   this->label_iron->Text = L"3";
				   break;
			   case 4:
				   this->label_iron->Text = L"4";
				   break;
			   case 5:
				   this->label_iron->Text = L"5";
				   break;
			   case 6:
				   this->label_iron->Text = L"6";
				   break;
			   case 7:
				   this->label_iron->Text = L"7";
				   break;
			   case 8:
				   this->label_iron->Text = L"8";
				   break;
			   case 9:
				   this->label_iron->Text = L"9";
				   break;
			   case 10:
				   this->label_iron->Text = L"10";
				   break;
			   case 11:
				   this->label_iron->Text = L"11";
				   break;
			   case 12:
				   this->label_iron->Text = L"12";
				   break;
			   case 13:
				   this->label_iron->Text = L"13";
				   break;
			   case 14:
				   this->label_iron->Text = L"14";
				   break;
			   case 15:
				   this->label_iron->Text = L"15";
				   break;
			   case 16:
				   this->label_iron->Text = L"16";
				   break;
			   case 17:
				   this->label_iron->Text = L"17";
				   break;
			   case 18:
				   this->label_iron->Text = L"18";
				   break;
			   case 19:
				   this->label_iron->Text = L"19";
				   break;
			   case 20:
				   this->label_iron->Text = L"20";
				   break;
			   case 21:
				   this->label_iron->Text = L"21";
				   break;
			   case 22:
				   this->label_iron->Text = L"22";
				   break;
			   case 23:
				   this->label_iron->Text = L"23";
				   break;
			   case 24:
				   this->label_iron->Text = L"24";
				   break;
			   case 25:
				   this->label_iron->Text = L"25";
				   break;
			   case 26:
				   this->label_iron->Text = L"26";
				   break;
			   case 27:
				   this->label_iron->Text = L"27";
				   break;
			   case 28:
				   this->label_iron->Text = L"28";
				   break;
			   case 29:
				   this->label_iron->Text = L"29";
				   break;
			   case 30:
				   this->label_iron->Text = L"30";
				   break;
			   case 31:
				   this->label_iron->Text = L"31";
				   break;
			   case 32:
				   this->label_iron->Text = L"32";
				   break;
			   case 33:
				   this->label_iron->Text = L"33";
				   break;
			   case 34:
				   this->label_iron->Text = L"34";
				   break;
			   case 35:
				   this->label_iron->Text = L"35";
				   break;
			   case 36:
				   this->label_iron->Text = L"36";
				   break;
			   case 37:
				   this->label_iron->Text = L"37";
				   break;
			   case 38:
				   this->label_iron->Text = L"38";
				   break;
			   case 39:
				   this->label_iron->Text = L"39";
				   break;
			   case 40:
				   this->label_iron->Text = L"40";
				   break;
			   case 41:
				   this->label_iron->Text = L"41";
				   break;
			   case 42:
				   this->label_iron->Text = L"42";
				   break;
			   case 43:
				   this->label_iron->Text = L"43";
				   break;
			   case 44:
				   this->label_iron->Text = L"44";
				   break;
			   case 45:
				   this->label_iron->Text = L"45";
				   break;
			   case 46:
				   this->label_iron->Text = L"46";
				   break;
			   case 47:
				   this->label_iron->Text = L"47";
				   break;
			   case 48:
				   this->label_iron->Text = L"48";
				   break;
			   case 49:
				   this->label_iron->Text = L"49";
				   break;
			   case 50:
				   this->label_iron->Text = L"50";
				   break;
			   case 51:
				   this->label_iron->Text = L"51";
				   break;
			   case 52:
				   this->label_iron->Text = L"52";
				   break;
			   case 53:
				   this->label_iron->Text = L"53";
				   break;
			   case 54:
				   this->label_iron->Text = L"54";
				   break;
			   case 55:
				   this->label_iron->Text = L"55";
				   break;
			   case 56:
				   this->label_iron->Text = L"56";
				   break;
			   case 57:
				   this->label_iron->Text = L"57";
				   break;
			   case 58:
				   this->label_iron->Text = L"58";
				   break;
			   case 59:
				   this->label_iron->Text = L"59";
				   break;
			   case 60:
				   this->label_iron->Text = L"60";
				   break;
			   case 61:
				   this->label_iron->Text = L"61";
				   break;
			   case 62:
				   this->label_iron->Text = L"62";
				   break;
			   case 63:
				   this->label_iron->Text = L"63";
				   break;
			   case 64:
				   this->label_iron->Text = L"64";
				   break;
			   case 65:
				   this->label_iron->Text = L"65";
				   break;
			   case 66:
				   this->label_iron->Text = L"66";
				   break;
			   case 67:
				   this->label_iron->Text = L"67";
				   break;
			   case 68:
				   this->label_iron->Text = L"68";
				   break;
			   case 69:
				   this->label_iron->Text = L"69";
				   break;
			   case 70:
				   this->label_iron->Text = L"70";
				   break;
			   case 71:
				   this->label_iron->Text = L"71";
				   break;
			   case 72:
				   this->label_iron->Text = L"72";
				   break;
			   case 73:
				   this->label_iron->Text = L"73";
				   break;
			   case 74:
				   this->label_iron->Text = L"74";
				   break;
			   case 75:
				   this->label_iron->Text = L"75";
				   break;
			   case 76:
				   this->label_iron->Text = L"76";
				   break;
			   case 77:
				   this->label_iron->Text = L"77";
				   break;
			   case 78:
				   this->label_iron->Text = L"78";
				   break;
			   case 79:
				   this->label_iron->Text = L"79";
				   break;
			   case 80:
				   this->label_iron->Text = L"80";
				   break;
			   case 81:
				   this->label_iron->Text = L"81";
				   break;
			   case 82:
				   this->label_iron->Text = L"82";
				   break;
			   case 83:
				   this->label_iron->Text = L"83";
				   break;
			   case 84:
				   this->label_iron->Text = L"84";
				   break;
			   case 85:
				   this->label_iron->Text = L"85";
				   break;
			   case 86:
				   this->label_iron->Text = L"86";
				   break;
			   case 87:
				   this->label_iron->Text = L"87";
				   break;
			   case 88:
				   this->label_iron->Text = L"88";
				   break;
			   case 89:
				   this->label_iron->Text = L"89";
				   break;
			   case 90:
				   this->label_iron->Text = L"90";
				   break;
			   case 91:
				   this->label_iron->Text = L"91";
				   break;
			   case 92:
				   this->label_iron->Text = L"92";
				   break;
			   case 93:
				   this->label_iron->Text = L"93";
				   break;
			   case 94:
				   this->label_iron->Text = L"94";
				   break;
			   case 95:
				   this->label_iron->Text = L"95";
				   break;
			   case 96:
				   this->label_iron->Text = L"96";
				   break;
			   case 97:
				   this->label_iron->Text = L"97";
				   break;
			   case 98:
				   this->label_iron->Text = L"98";
				   break;
			   case 99:
				   this->label_iron->Text = L"99";
				   break;
			   case 100:
				   this->label_iron->Text = L"100";
				   break;
			   case 101:
				   this->label_iron->Text = L"101";
				   break;
			   case 102:
				   this->label_iron->Text = L"102";
				   break;
			   case 103:
				   this->label_iron->Text = L"103";
				   break;
			   case 104:
				   this->label_iron->Text = L"104";
				   break;
			   case 105:
				   this->label_iron->Text = L"105";
				   break;
			   case 106:
				   this->label_iron->Text = L"106";
				   break;
			   case 107:
				   this->label_iron->Text = L"107";
				   break;
			   case 108:
				   this->label_iron->Text = L"108";
				   break;
			   case 109:
				   this->label_iron->Text = L"109";
				   break;
			   case 110:
				   this->label_iron->Text = L"110";
				   break;
			   case 111:
				   this->label_iron->Text = L"111";
				   break;
			   case 112:
				   this->label_iron->Text = L"112";
				   break;
			   case 113:
				   this->label_iron->Text = L"113";
				   break;
			   case 114:
				   this->label_iron->Text = L"114";
				   break;
			   case 115:
				   this->label_iron->Text = L"115";
				   break;
			   case 116:
				   this->label_iron->Text = L"116";
				   break;
			   case 117:
				   this->label_iron->Text = L"117";
				   break;
			   case 118:
				   this->label_iron->Text = L"118";
				   break;
			   case 119:
				   this->label_iron->Text = L"119";
				   break;
			   case 120:
				   this->label_iron->Text = L"120";
				   break;
			   case 121:
				   this->label_iron->Text = L"121";
				   break;
			   case 122:
				   this->label_iron->Text = L"122";
				   break;
			   case 123:
				   this->label_iron->Text = L"123";
				   break;
			   case 124:
				   this->label_iron->Text = L"124";
				   break;
			   case 125:
				   this->label_iron->Text = L"125";
				   break;
			   case 126:
				   this->label_iron->Text = L"126";
				   break;
			   case 127:
				   this->label_iron->Text = L"127";
				   break;
			   case 128:
				   this->label_iron->Text = L"128";
				   break;
			   case 129:
				   this->label_iron->Text = L"129";
				   break;
			   case 130:
				   this->label_iron->Text = L"130";
				   break;
			   case 131:
				   this->label_iron->Text = L"131";
				   break;
			   case 132:
				   this->label_iron->Text = L"132";
				   break;
			   case 133:
				   this->label_iron->Text = L"133";
				   break;
			   case 134:
				   this->label_iron->Text = L"134";
				   break;
			   case 135:
				   this->label_iron->Text = L"135";
				   break;
			   case 136:
				   this->label_iron->Text = L"136";
				   break;
			   case 137:
				   this->label_iron->Text = L"137";
				   break;
			   case 138:
				   this->label_iron->Text = L"138";
				   break;
			   case 139:
				   this->label_iron->Text = L"139";
				   break;
			   case 140:
				   this->label_iron->Text = L"140";
				   break;
			   case 141:
				   this->label_iron->Text = L"141";
				   break;
			   case 142:
				   this->label_iron->Text = L"142";
				   break;
			   case 143:
				   this->label_iron->Text = L"143";
				   break;
			   case 144:
				   this->label_iron->Text = L"144";
				   break;
			   case 145:
				   this->label_iron->Text = L"145";
				   break;
			   case 146:
				   this->label_iron->Text = L"146";
				   break;
			   case 147:
				   this->label_iron->Text = L"147";
				   break;
			   case 148:
				   this->label_iron->Text = L"148";
				   break;
			   case 149:
				   this->label_iron->Text = L"149";
				   break;
			   case 150:
				   this->label_iron->Text = L"150";
				   break;
			   case 151:
				   this->label_iron->Text = L"151";
				   break;
			   case 152:
				   this->label_iron->Text = L"152";
				   break;
			   case 153:
				   this->label_iron->Text = L"153";
				   break;
			   case 154:
				   this->label_iron->Text = L"154";
				   break;
			   case 155:
				   this->label_iron->Text = L"155";
				   break;
			   case 156:
				   this->label_iron->Text = L"156";
				   break;
			   case 157:
				   this->label_iron->Text = L"157";
				   break;
			   case 158:
				   this->label_iron->Text = L"158";
				   break;
			   case 159:
				   this->label_iron->Text = L"159";
				   break;
			   case 160:
				   this->label_iron->Text = L"160";
				   break;
			   case 161:
				   this->label_iron->Text = L"161";
				   break;
			   case 162:
				   this->label_iron->Text = L"162";
				   break;
			   case 163:
				   this->label_iron->Text = L"163";
				   break;
			   case 164:
				   this->label_iron->Text = L"164";
				   break;
			   case 165:
				   this->label_iron->Text = L"165";
				   break;
			   case 166:
				   this->label_iron->Text = L"166";
				   break;
			   case 167:
				   this->label_iron->Text = L"167";
				   break;
			   case 168:
				   this->label_iron->Text = L"168";
				   break;
			   case 169:
				   this->label_iron->Text = L"169";
				   break;
			   case 170:
				   this->label_iron->Text = L"170";
				   break;
			   case 171:
				   this->label_iron->Text = L"171";
				   break;
			   case 172:
				   this->label_iron->Text = L"172";
				   break;
			   case 173:
				   this->label_iron->Text = L"173";
				   break;
			   case 174:
				   this->label_iron->Text = L"174";
				   break;
			   case 175:
				   this->label_iron->Text = L"175";
				   break;
			   case 176:
				   this->label_iron->Text = L"176";
				   break;
			   case 177:
				   this->label_iron->Text = L"177";
				   break;
			   case 178:
				   this->label_iron->Text = L"178";
				   break;
			   case 179:
				   this->label_iron->Text = L"179";
				   break;
			   case 180:
				   this->label_iron->Text = L"180";
				   break;
			   case 181:
				   this->label_iron->Text = L"181";
				   break;
			   case 182:
				   this->label_iron->Text = L"182";
				   break;
			   case 183:
				   this->label_iron->Text = L"183";
				   break;
			   case 184:
				   this->label_iron->Text = L"184";
				   break;
			   case 185:
				   this->label_iron->Text = L"185";
				   break;
			   case 186:
				   this->label_iron->Text = L"186";
				   break;
			   case 187:
				   this->label_iron->Text = L"187";
				   break;
			   case 188:
				   this->label_iron->Text = L"188";
				   break;
			   case 189:
				   this->label_iron->Text = L"189";
				   break;
			   case 190:
				   this->label_iron->Text = L"190";
				   break;
			   case 191:
				   this->label_iron->Text = L"191";
				   break;
			   case 192:
				   this->label_iron->Text = L"192";
				   break;
			   case 193:
				   this->label_iron->Text = L"193";
				   break;
			   case 194:
				   this->label_iron->Text = L"194";
				   break;
			   case 195:
				   this->label_iron->Text = L"195";
				   break;
			   case 196:
				   this->label_iron->Text = L"196";
				   break;
			   case 197:
				   this->label_iron->Text = L"197";
				   break;
			   case 198:
				   this->label_iron->Text = L"198";
				   break;
			   case 199:
				   this->label_iron->Text = L"199";
				   break;
			   case 200:
				   this->label_iron->Text = L"200";
				   break;

			   default:
				   if (radioButtonLanguage_Rus->Checked) this->label_iron->Text = L">200"; else this->label_iron->Text = L">200";
				   break;
			   }
			   //coal
			   switch (coal)
			   {
			   case 0:
				   this->label_coal->Text = L"0";
				   break;
			   case 1:
				   this->label_coal->Text = L"1";
				   break;
			   case 2:
				   this->label_coal->Text = L"2";
				   break;
			   case 3:
				   this->label_coal->Text = L"3";
				   break;
			   case 4:
				   this->label_coal->Text = L"4";
				   break;
			   case 5:
				   this->label_coal->Text = L"5";
				   break;
			   case 6:
				   this->label_coal->Text = L"6";
				   break;
			   case 7:
				   this->label_coal->Text = L"7";
				   break;
			   case 8:
				   this->label_coal->Text = L"8";
				   break;
			   case 9:
				   this->label_coal->Text = L"9";
				   break;
			   case 10:
				   this->label_coal->Text = L"10";
				   break;
			   case 11:
				   this->label_coal->Text = L"11";
				   break;
			   case 12:
				   this->label_coal->Text = L"12";
				   break;
			   case 13:
				   this->label_coal->Text = L"13";
				   break;
			   case 14:
				   this->label_coal->Text = L"14";
				   break;
			   case 15:
				   this->label_coal->Text = L"15";
				   break;
			   case 16:
				   this->label_coal->Text = L"16";
				   break;
			   case 17:
				   this->label_coal->Text = L"17";
				   break;
			   case 18:
				   this->label_coal->Text = L"18";
				   break;
			   case 19:
				   this->label_coal->Text = L"19";
				   break;
			   case 20:
				   this->label_coal->Text = L"20";
				   break;
			   case 21:
				   this->label_coal->Text = L"21";
				   break;
			   case 22:
				   this->label_coal->Text = L"22";
				   break;
			   case 23:
				   this->label_coal->Text = L"23";
				   break;
			   case 24:
				   this->label_coal->Text = L"24";
				   break;
			   case 25:
				   this->label_coal->Text = L"25";
				   break;
			   case 26:
				   this->label_coal->Text = L"26";
				   break;
			   case 27:
				   this->label_coal->Text = L"27";
				   break;
			   case 28:
				   this->label_coal->Text = L"28";
				   break;
			   case 29:
				   this->label_coal->Text = L"29";
				   break;
			   case 30:
				   this->label_coal->Text = L"30";
				   break;
			   case 31:
				   this->label_coal->Text = L"31";
				   break;
			   case 32:
				   this->label_coal->Text = L"32";
				   break;
			   case 33:
				   this->label_coal->Text = L"33";
				   break;
			   case 34:
				   this->label_coal->Text = L"34";
				   break;
			   case 35:
				   this->label_coal->Text = L"35";
				   break;
			   case 36:
				   this->label_coal->Text = L"36";
				   break;
			   case 37:
				   this->label_coal->Text = L"37";
				   break;
			   case 38:
				   this->label_coal->Text = L"38";
				   break;
			   case 39:
				   this->label_coal->Text = L"39";
				   break;
			   case 40:
				   this->label_coal->Text = L"40";
				   break;
			   case 41:
				   this->label_coal->Text = L"41";
				   break;
			   case 42:
				   this->label_coal->Text = L"42";
				   break;
			   case 43:
				   this->label_coal->Text = L"43";
				   break;
			   case 44:
				   this->label_coal->Text = L"44";
				   break;
			   case 45:
				   this->label_coal->Text = L"45";
				   break;
			   case 46:
				   this->label_coal->Text = L"46";
				   break;
			   case 47:
				   this->label_coal->Text = L"47";
				   break;
			   case 48:
				   this->label_coal->Text = L"48";
				   break;
			   case 49:
				   this->label_coal->Text = L"49";
				   break;
			   case 50:
				   this->label_coal->Text = L"50";
				   break;
			   case 51:
				   this->label_coal->Text = L"51";
				   break;
			   case 52:
				   this->label_coal->Text = L"52";
				   break;
			   case 53:
				   this->label_coal->Text = L"53";
				   break;
			   case 54:
				   this->label_coal->Text = L"54";
				   break;
			   case 55:
				   this->label_coal->Text = L"55";
				   break;
			   case 56:
				   this->label_coal->Text = L"56";
				   break;
			   case 57:
				   this->label_coal->Text = L"57";
				   break;
			   case 58:
				   this->label_coal->Text = L"58";
				   break;
			   case 59:
				   this->label_coal->Text = L"59";
				   break;
			   case 60:
				   this->label_coal->Text = L"60";
				   break;
			   case 61:
				   this->label_coal->Text = L"61";
				   break;
			   case 62:
				   this->label_coal->Text = L"62";
				   break;
			   case 63:
				   this->label_coal->Text = L"63";
				   break;
			   case 64:
				   this->label_coal->Text = L"64";
				   break;
			   case 65:
				   this->label_coal->Text = L"65";
				   break;
			   case 66:
				   this->label_coal->Text = L"66";
				   break;
			   case 67:
				   this->label_coal->Text = L"67";
				   break;
			   case 68:
				   this->label_coal->Text = L"68";
				   break;
			   case 69:
				   this->label_coal->Text = L"69";
				   break;
			   case 70:
				   this->label_coal->Text = L"70";
				   break;
			   case 71:
				   this->label_coal->Text = L"71";
				   break;
			   case 72:
				   this->label_coal->Text = L"72";
				   break;
			   case 73:
				   this->label_coal->Text = L"73";
				   break;
			   case 74:
				   this->label_coal->Text = L"74";
				   break;
			   case 75:
				   this->label_coal->Text = L"75";
				   break;
			   case 76:
				   this->label_coal->Text = L"76";
				   break;
			   case 77:
				   this->label_coal->Text = L"77";
				   break;
			   case 78:
				   this->label_coal->Text = L"78";
				   break;
			   case 79:
				   this->label_coal->Text = L"79";
				   break;
			   case 80:
				   this->label_coal->Text = L"80";
				   break;
			   case 81:
				   this->label_coal->Text = L"81";
				   break;
			   case 82:
				   this->label_coal->Text = L"82";
				   break;
			   case 83:
				   this->label_coal->Text = L"83";
				   break;
			   case 84:
				   this->label_coal->Text = L"84";
				   break;
			   case 85:
				   this->label_coal->Text = L"85";
				   break;
			   case 86:
				   this->label_coal->Text = L"86";
				   break;
			   case 87:
				   this->label_coal->Text = L"87";
				   break;
			   case 88:
				   this->label_coal->Text = L"88";
				   break;
			   case 89:
				   this->label_coal->Text = L"89";
				   break;
			   case 90:
				   this->label_coal->Text = L"90";
				   break;
			   case 91:
				   this->label_coal->Text = L"91";
				   break;
			   case 92:
				   this->label_coal->Text = L"92";
				   break;
			   case 93:
				   this->label_coal->Text = L"93";
				   break;
			   case 94:
				   this->label_coal->Text = L"94";
				   break;
			   case 95:
				   this->label_coal->Text = L"95";
				   break;
			   case 96:
				   this->label_coal->Text = L"96";
				   break;
			   case 97:
				   this->label_coal->Text = L"97";
				   break;
			   case 98:
				   this->label_coal->Text = L"98";
				   break;
			   case 99:
				   this->label_coal->Text = L"99";
				   break;
			   case 100:
				   this->label_coal->Text = L"100";
				   break;
			   case 101:
				   this->label_coal->Text = L"101";
				   break;
			   case 102:
				   this->label_coal->Text = L"102";
				   break;
			   case 103:
				   this->label_coal->Text = L"103";
				   break;
			   case 104:
				   this->label_coal->Text = L"104";
				   break;
			   case 105:
				   this->label_coal->Text = L"105";
				   break;
			   case 106:
				   this->label_coal->Text = L"106";
				   break;
			   case 107:
				   this->label_coal->Text = L"107";
				   break;
			   case 108:
				   this->label_coal->Text = L"108";
				   break;
			   case 109:
				   this->label_coal->Text = L"109";
				   break;
			   case 110:
				   this->label_coal->Text = L"110";
				   break;
			   case 111:
				   this->label_coal->Text = L"111";
				   break;
			   case 112:
				   this->label_coal->Text = L"112";
				   break;
			   case 113:
				   this->label_coal->Text = L"113";
				   break;
			   case 114:
				   this->label_coal->Text = L"114";
				   break;
			   case 115:
				   this->label_coal->Text = L"115";
				   break;
			   case 116:
				   this->label_coal->Text = L"116";
				   break;
			   case 117:
				   this->label_coal->Text = L"117";
				   break;
			   case 118:
				   this->label_coal->Text = L"118";
				   break;
			   case 119:
				   this->label_coal->Text = L"119";
				   break;
			   case 120:
				   this->label_coal->Text = L"120";
				   break;
			   case 121:
				   this->label_coal->Text = L"121";
				   break;
			   case 122:
				   this->label_coal->Text = L"122";
				   break;
			   case 123:
				   this->label_coal->Text = L"123";
				   break;
			   case 124:
				   this->label_coal->Text = L"124";
				   break;
			   case 125:
				   this->label_coal->Text = L"125";
				   break;
			   case 126:
				   this->label_coal->Text = L"126";
				   break;
			   case 127:
				   this->label_coal->Text = L"127";
				   break;
			   case 128:
				   this->label_coal->Text = L"128";
				   break;
			   case 129:
				   this->label_coal->Text = L"129";
				   break;
			   case 130:
				   this->label_coal->Text = L"130";
				   break;
			   case 131:
				   this->label_coal->Text = L"131";
				   break;
			   case 132:
				   this->label_coal->Text = L"132";
				   break;
			   case 133:
				   this->label_coal->Text = L"133";
				   break;
			   case 134:
				   this->label_coal->Text = L"134";
				   break;
			   case 135:
				   this->label_coal->Text = L"135";
				   break;
			   case 136:
				   this->label_coal->Text = L"136";
				   break;
			   case 137:
				   this->label_coal->Text = L"137";
				   break;
			   case 138:
				   this->label_coal->Text = L"138";
				   break;
			   case 139:
				   this->label_coal->Text = L"139";
				   break;
			   case 140:
				   this->label_coal->Text = L"140";
				   break;
			   case 141:
				   this->label_coal->Text = L"141";
				   break;
			   case 142:
				   this->label_coal->Text = L"142";
				   break;
			   case 143:
				   this->label_coal->Text = L"143";
				   break;
			   case 144:
				   this->label_coal->Text = L"144";
				   break;
			   case 145:
				   this->label_coal->Text = L"145";
				   break;
			   case 146:
				   this->label_coal->Text = L"146";
				   break;
			   case 147:
				   this->label_coal->Text = L"147";
				   break;
			   case 148:
				   this->label_coal->Text = L"148";
				   break;
			   case 149:
				   this->label_coal->Text = L"149";
				   break;
			   case 150:
				   this->label_coal->Text = L"150";
				   break;
			   case 151:
				   this->label_coal->Text = L"151";
				   break;
			   case 152:
				   this->label_coal->Text = L"152";
				   break;
			   case 153:
				   this->label_coal->Text = L"153";
				   break;
			   case 154:
				   this->label_coal->Text = L"154";
				   break;
			   case 155:
				   this->label_coal->Text = L"155";
				   break;
			   case 156:
				   this->label_coal->Text = L"156";
				   break;
			   case 157:
				   this->label_coal->Text = L"157";
				   break;
			   case 158:
				   this->label_coal->Text = L"158";
				   break;
			   case 159:
				   this->label_coal->Text = L"159";
				   break;
			   case 160:
				   this->label_coal->Text = L"160";
				   break;
			   case 161:
				   this->label_coal->Text = L"161";
				   break;
			   case 162:
				   this->label_coal->Text = L"162";
				   break;
			   case 163:
				   this->label_coal->Text = L"163";
				   break;
			   case 164:
				   this->label_coal->Text = L"164";
				   break;
			   case 165:
				   this->label_coal->Text = L"165";
				   break;
			   case 166:
				   this->label_coal->Text = L"166";
				   break;
			   case 167:
				   this->label_coal->Text = L"167";
				   break;
			   case 168:
				   this->label_coal->Text = L"168";
				   break;
			   case 169:
				   this->label_coal->Text = L"169";
				   break;
			   case 170:
				   this->label_coal->Text = L"170";
				   break;
			   case 171:
				   this->label_coal->Text = L"171";
				   break;
			   case 172:
				   this->label_coal->Text = L"172";
				   break;
			   case 173:
				   this->label_coal->Text = L"173";
				   break;
			   case 174:
				   this->label_coal->Text = L"174";
				   break;
			   case 175:
				   this->label_coal->Text = L"175";
				   break;
			   case 176:
				   this->label_coal->Text = L"176";
				   break;
			   case 177:
				   this->label_coal->Text = L"177";
				   break;
			   case 178:
				   this->label_coal->Text = L"178";
				   break;
			   case 179:
				   this->label_coal->Text = L"179";
				   break;
			   case 180:
				   this->label_coal->Text = L"180";
				   break;
			   case 181:
				   this->label_coal->Text = L"181";
				   break;
			   case 182:
				   this->label_coal->Text = L"182";
				   break;
			   case 183:
				   this->label_coal->Text = L"183";
				   break;
			   case 184:
				   this->label_coal->Text = L"184";
				   break;
			   case 185:
				   this->label_coal->Text = L"185";
				   break;
			   case 186:
				   this->label_coal->Text = L"186";
				   break;
			   case 187:
				   this->label_coal->Text = L"187";
				   break;
			   case 188:
				   this->label_coal->Text = L"188";
				   break;
			   case 189:
				   this->label_coal->Text = L"189";
				   break;
			   case 190:
				   this->label_coal->Text = L"190";
				   break;
			   case 191:
				   this->label_coal->Text = L"191";
				   break;
			   case 192:
				   this->label_coal->Text = L"192";
				   break;
			   case 193:
				   this->label_coal->Text = L"193";
				   break;
			   case 194:
				   this->label_coal->Text = L"194";
				   break;
			   case 195:
				   this->label_coal->Text = L"195";
				   break;
			   case 196:
				   this->label_coal->Text = L"196";
				   break;
			   case 197:
				   this->label_coal->Text = L"197";
				   break;
			   case 198:
				   this->label_coal->Text = L"198";
				   break;
			   case 199:
				   this->label_coal->Text = L"199";
				   break;
			   case 200:
				   this->label_coal->Text = L"200";
				   break;

			   default:
				   if (radioButtonLanguage_Rus->Checked) this->label_coal->Text = L">200"; else this->label_coal->Text = L">200";
				   break;
			   }
			   //wood
			   switch (wood)
			   {
			   case 0:
				   this->label_wood->Text = L"0";
				   break;
			   case 1:
				   this->label_wood->Text = L"1";
				   break;
			   case 2:
				   this->label_wood->Text = L"2";
				   break;
			   case 3:
				   this->label_wood->Text = L"3";
				   break;
			   case 4:
				   this->label_wood->Text = L"4";
				   break;
			   case 5:
				   this->label_wood->Text = L"5";
				   break;
			   case 6:
				   this->label_wood->Text = L"6";
				   break;
			   case 7:
				   this->label_wood->Text = L"7";
				   break;
			   case 8:
				   this->label_wood->Text = L"8";
				   break;
			   case 9:
				   this->label_wood->Text = L"9";
				   break;
			   case 10:
				   this->label_wood->Text = L"10";
				   break;
			   case 11:
				   this->label_wood->Text = L"11";
				   break;
			   case 12:
				   this->label_wood->Text = L"12";
				   break;
			   case 13:
				   this->label_wood->Text = L"13";
				   break;
			   case 14:
				   this->label_wood->Text = L"14";
				   break;
			   case 15:
				   this->label_wood->Text = L"15";
				   break;
			   case 16:
				   this->label_wood->Text = L"16";
				   break;
			   case 17:
				   this->label_wood->Text = L"17";
				   break;
			   case 18:
				   this->label_wood->Text = L"18";
				   break;
			   case 19:
				   this->label_wood->Text = L"19";
				   break;
			   case 20:
				   this->label_wood->Text = L"20";
				   break;
			   case 21:
				   this->label_wood->Text = L"21";
				   break;
			   case 22:
				   this->label_wood->Text = L"22";
				   break;
			   case 23:
				   this->label_wood->Text = L"23";
				   break;
			   case 24:
				   this->label_wood->Text = L"24";
				   break;
			   case 25:
				   this->label_wood->Text = L"25";
				   break;
			   case 26:
				   this->label_wood->Text = L"26";
				   break;
			   case 27:
				   this->label_wood->Text = L"27";
				   break;
			   case 28:
				   this->label_wood->Text = L"28";
				   break;
			   case 29:
				   this->label_wood->Text = L"29";
				   break;
			   case 30:
				   this->label_wood->Text = L"30";
				   break;
			   case 31:
				   this->label_wood->Text = L"31";
				   break;
			   case 32:
				   this->label_wood->Text = L"32";
				   break;
			   case 33:
				   this->label_wood->Text = L"33";
				   break;
			   case 34:
				   this->label_wood->Text = L"34";
				   break;
			   case 35:
				   this->label_wood->Text = L"35";
				   break;
			   case 36:
				   this->label_wood->Text = L"36";
				   break;
			   case 37:
				   this->label_wood->Text = L"37";
				   break;
			   case 38:
				   this->label_wood->Text = L"38";
				   break;
			   case 39:
				   this->label_wood->Text = L"39";
				   break;
			   case 40:
				   this->label_wood->Text = L"40";
				   break;
			   case 41:
				   this->label_wood->Text = L"41";
				   break;
			   case 42:
				   this->label_wood->Text = L"42";
				   break;
			   case 43:
				   this->label_wood->Text = L"43";
				   break;
			   case 44:
				   this->label_wood->Text = L"44";
				   break;
			   case 45:
				   this->label_wood->Text = L"45";
				   break;
			   case 46:
				   this->label_wood->Text = L"46";
				   break;
			   case 47:
				   this->label_wood->Text = L"47";
				   break;
			   case 48:
				   this->label_wood->Text = L"48";
				   break;
			   case 49:
				   this->label_wood->Text = L"49";
				   break;
			   case 50:
				   this->label_wood->Text = L"50";
				   break;
			   case 51:
				   this->label_wood->Text = L"51";
				   break;
			   case 52:
				   this->label_wood->Text = L"52";
				   break;
			   case 53:
				   this->label_wood->Text = L"53";
				   break;
			   case 54:
				   this->label_wood->Text = L"54";
				   break;
			   case 55:
				   this->label_wood->Text = L"55";
				   break;
			   case 56:
				   this->label_wood->Text = L"56";
				   break;
			   case 57:
				   this->label_wood->Text = L"57";
				   break;
			   case 58:
				   this->label_wood->Text = L"58";
				   break;
			   case 59:
				   this->label_wood->Text = L"59";
				   break;
			   case 60:
				   this->label_wood->Text = L"60";
				   break;
			   case 61:
				   this->label_wood->Text = L"61";
				   break;
			   case 62:
				   this->label_wood->Text = L"62";
				   break;
			   case 63:
				   this->label_wood->Text = L"63";
				   break;
			   case 64:
				   this->label_wood->Text = L"64";
				   break;
			   case 65:
				   this->label_wood->Text = L"65";
				   break;
			   case 66:
				   this->label_wood->Text = L"66";
				   break;
			   case 67:
				   this->label_wood->Text = L"67";
				   break;
			   case 68:
				   this->label_wood->Text = L"68";
				   break;
			   case 69:
				   this->label_wood->Text = L"69";
				   break;
			   case 70:
				   this->label_wood->Text = L"70";
				   break;
			   case 71:
				   this->label_wood->Text = L"71";
				   break;
			   case 72:
				   this->label_wood->Text = L"72";
				   break;
			   case 73:
				   this->label_wood->Text = L"73";
				   break;
			   case 74:
				   this->label_wood->Text = L"74";
				   break;
			   case 75:
				   this->label_wood->Text = L"75";
				   break;
			   case 76:
				   this->label_wood->Text = L"76";
				   break;
			   case 77:
				   this->label_wood->Text = L"77";
				   break;
			   case 78:
				   this->label_wood->Text = L"78";
				   break;
			   case 79:
				   this->label_wood->Text = L"79";
				   break;
			   case 80:
				   this->label_wood->Text = L"80";
				   break;
			   case 81:
				   this->label_wood->Text = L"81";
				   break;
			   case 82:
				   this->label_wood->Text = L"82";
				   break;
			   case 83:
				   this->label_wood->Text = L"83";
				   break;
			   case 84:
				   this->label_wood->Text = L"84";
				   break;
			   case 85:
				   this->label_wood->Text = L"85";
				   break;
			   case 86:
				   this->label_wood->Text = L"86";
				   break;
			   case 87:
				   this->label_wood->Text = L"87";
				   break;
			   case 88:
				   this->label_wood->Text = L"88";
				   break;
			   case 89:
				   this->label_wood->Text = L"89";
				   break;
			   case 90:
				   this->label_wood->Text = L"90";
				   break;
			   case 91:
				   this->label_wood->Text = L"91";
				   break;
			   case 92:
				   this->label_wood->Text = L"92";
				   break;
			   case 93:
				   this->label_wood->Text = L"93";
				   break;
			   case 94:
				   this->label_wood->Text = L"94";
				   break;
			   case 95:
				   this->label_wood->Text = L"95";
				   break;
			   case 96:
				   this->label_wood->Text = L"96";
				   break;
			   case 97:
				   this->label_wood->Text = L"97";
				   break;
			   case 98:
				   this->label_wood->Text = L"98";
				   break;
			   case 99:
				   this->label_wood->Text = L"99";
				   break;
			   case 100:
				   this->label_wood->Text = L"100";
				   break;
			   case 101:
				   this->label_wood->Text = L"101";
				   break;
			   case 102:
				   this->label_wood->Text = L"102";
				   break;
			   case 103:
				   this->label_wood->Text = L"103";
				   break;
			   case 104:
				   this->label_wood->Text = L"104";
				   break;
			   case 105:
				   this->label_wood->Text = L"105";
				   break;
			   case 106:
				   this->label_wood->Text = L"106";
				   break;
			   case 107:
				   this->label_wood->Text = L"107";
				   break;
			   case 108:
				   this->label_wood->Text = L"108";
				   break;
			   case 109:
				   this->label_wood->Text = L"109";
				   break;
			   case 110:
				   this->label_wood->Text = L"110";
				   break;
			   case 111:
				   this->label_wood->Text = L"111";
				   break;
			   case 112:
				   this->label_wood->Text = L"112";
				   break;
			   case 113:
				   this->label_wood->Text = L"113";
				   break;
			   case 114:
				   this->label_wood->Text = L"114";
				   break;
			   case 115:
				   this->label_wood->Text = L"115";
				   break;
			   case 116:
				   this->label_wood->Text = L"116";
				   break;
			   case 117:
				   this->label_wood->Text = L"117";
				   break;
			   case 118:
				   this->label_wood->Text = L"118";
				   break;
			   case 119:
				   this->label_wood->Text = L"119";
				   break;
			   case 120:
				   this->label_wood->Text = L"120";
				   break;
			   case 121:
				   this->label_wood->Text = L"121";
				   break;
			   case 122:
				   this->label_wood->Text = L"122";
				   break;
			   case 123:
				   this->label_wood->Text = L"123";
				   break;
			   case 124:
				   this->label_wood->Text = L"124";
				   break;
			   case 125:
				   this->label_wood->Text = L"125";
				   break;
			   case 126:
				   this->label_wood->Text = L"126";
				   break;
			   case 127:
				   this->label_wood->Text = L"127";
				   break;
			   case 128:
				   this->label_wood->Text = L"128";
				   break;
			   case 129:
				   this->label_wood->Text = L"129";
				   break;
			   case 130:
				   this->label_wood->Text = L"130";
				   break;
			   case 131:
				   this->label_wood->Text = L"131";
				   break;
			   case 132:
				   this->label_wood->Text = L"132";
				   break;
			   case 133:
				   this->label_wood->Text = L"133";
				   break;
			   case 134:
				   this->label_wood->Text = L"134";
				   break;
			   case 135:
				   this->label_wood->Text = L"135";
				   break;
			   case 136:
				   this->label_wood->Text = L"136";
				   break;
			   case 137:
				   this->label_wood->Text = L"137";
				   break;
			   case 138:
				   this->label_wood->Text = L"138";
				   break;
			   case 139:
				   this->label_wood->Text = L"139";
				   break;
			   case 140:
				   this->label_wood->Text = L"140";
				   break;
			   case 141:
				   this->label_wood->Text = L"141";
				   break;
			   case 142:
				   this->label_wood->Text = L"142";
				   break;
			   case 143:
				   this->label_wood->Text = L"143";
				   break;
			   case 144:
				   this->label_wood->Text = L"144";
				   break;
			   case 145:
				   this->label_wood->Text = L"145";
				   break;
			   case 146:
				   this->label_wood->Text = L"146";
				   break;
			   case 147:
				   this->label_wood->Text = L"147";
				   break;
			   case 148:
				   this->label_wood->Text = L"148";
				   break;
			   case 149:
				   this->label_wood->Text = L"149";
				   break;
			   case 150:
				   this->label_wood->Text = L"150";
				   break;
			   case 151:
				   this->label_wood->Text = L"151";
				   break;
			   case 152:
				   this->label_wood->Text = L"152";
				   break;
			   case 153:
				   this->label_wood->Text = L"153";
				   break;
			   case 154:
				   this->label_wood->Text = L"154";
				   break;
			   case 155:
				   this->label_wood->Text = L"155";
				   break;
			   case 156:
				   this->label_wood->Text = L"156";
				   break;
			   case 157:
				   this->label_wood->Text = L"157";
				   break;
			   case 158:
				   this->label_wood->Text = L"158";
				   break;
			   case 159:
				   this->label_wood->Text = L"159";
				   break;
			   case 160:
				   this->label_wood->Text = L"160";
				   break;
			   case 161:
				   this->label_wood->Text = L"161";
				   break;
			   case 162:
				   this->label_wood->Text = L"162";
				   break;
			   case 163:
				   this->label_wood->Text = L"163";
				   break;
			   case 164:
				   this->label_wood->Text = L"164";
				   break;
			   case 165:
				   this->label_wood->Text = L"165";
				   break;
			   case 166:
				   this->label_wood->Text = L"166";
				   break;
			   case 167:
				   this->label_wood->Text = L"167";
				   break;
			   case 168:
				   this->label_wood->Text = L"168";
				   break;
			   case 169:
				   this->label_wood->Text = L"169";
				   break;
			   case 170:
				   this->label_wood->Text = L"170";
				   break;
			   case 171:
				   this->label_wood->Text = L"171";
				   break;
			   case 172:
				   this->label_wood->Text = L"172";
				   break;
			   case 173:
				   this->label_wood->Text = L"173";
				   break;
			   case 174:
				   this->label_wood->Text = L"174";
				   break;
			   case 175:
				   this->label_wood->Text = L"175";
				   break;
			   case 176:
				   this->label_wood->Text = L"176";
				   break;
			   case 177:
				   this->label_wood->Text = L"177";
				   break;
			   case 178:
				   this->label_wood->Text = L"178";
				   break;
			   case 179:
				   this->label_wood->Text = L"179";
				   break;
			   case 180:
				   this->label_wood->Text = L"180";
				   break;
			   case 181:
				   this->label_wood->Text = L"181";
				   break;
			   case 182:
				   this->label_wood->Text = L"182";
				   break;
			   case 183:
				   this->label_wood->Text = L"183";
				   break;
			   case 184:
				   this->label_wood->Text = L"184";
				   break;
			   case 185:
				   this->label_wood->Text = L"185";
				   break;
			   case 186:
				   this->label_wood->Text = L"186";
				   break;
			   case 187:
				   this->label_wood->Text = L"187";
				   break;
			   case 188:
				   this->label_wood->Text = L"188";
				   break;
			   case 189:
				   this->label_wood->Text = L"189";
				   break;
			   case 190:
				   this->label_wood->Text = L"190";
				   break;
			   case 191:
				   this->label_wood->Text = L"191";
				   break;
			   case 192:
				   this->label_wood->Text = L"192";
				   break;
			   case 193:
				   this->label_wood->Text = L"193";
				   break;
			   case 194:
				   this->label_wood->Text = L"194";
				   break;
			   case 195:
				   this->label_wood->Text = L"195";
				   break;
			   case 196:
				   this->label_wood->Text = L"196";
				   break;
			   case 197:
				   this->label_wood->Text = L"197";
				   break;
			   case 198:
				   this->label_wood->Text = L"198";
				   break;
			   case 199:
				   this->label_wood->Text = L"199";
				   break;
			   case 200:
				   this->label_wood->Text = L"200";
				   break;

			   default:
				   if (radioButtonLanguage_Rus->Checked) this->label_wood->Text = L">200"; else this->label_wood->Text = L">200";
				   break;
			   }
			   //gold
			   switch (gold)
			   {
			   case 0:
				   this->label_gold->Text = L"0";
				   break;
			   case 1:
				   this->label_gold->Text = L"1";
				   break;
			   case 2:
				   this->label_gold->Text = L"2";
				   break;
			   case 3:
				   this->label_gold->Text = L"3";
				   break;
			   case 4:
				   this->label_gold->Text = L"4";
				   break;
			   case 5:
				   this->label_gold->Text = L"5";
				   break;
			   case 6:
				   this->label_gold->Text = L"6";
				   break;
			   case 7:
				   this->label_gold->Text = L"7";
				   break;
			   case 8:
				   this->label_gold->Text = L"8";
				   break;
			   case 9:
				   this->label_gold->Text = L"9";
				   break;
			   case 10:
				   this->label_gold->Text = L"10";
				   break;
			   case 11:
				   this->label_gold->Text = L"11";
				   break;
			   case 12:
				   this->label_gold->Text = L"12";
				   break;
			   case 13:
				   this->label_gold->Text = L"13";
				   break;
			   case 14:
				   this->label_gold->Text = L"14";
				   break;
			   case 15:
				   this->label_gold->Text = L"15";
				   break;
			   case 16:
				   this->label_gold->Text = L"16";
				   break;
			   case 17:
				   this->label_gold->Text = L"17";
				   break;
			   case 18:
				   this->label_gold->Text = L"18";
				   break;
			   case 19:
				   this->label_gold->Text = L"19";
				   break;
			   case 20:
				   this->label_gold->Text = L"20";
				   break;
			   case 21:
				   this->label_gold->Text = L"21";
				   break;
			   case 22:
				   this->label_gold->Text = L"22";
				   break;
			   case 23:
				   this->label_gold->Text = L"23";
				   break;
			   case 24:
				   this->label_gold->Text = L"24";
				   break;
			   case 25:
				   this->label_gold->Text = L"25";
				   break;
			   case 26:
				   this->label_gold->Text = L"26";
				   break;
			   case 27:
				   this->label_gold->Text = L"27";
				   break;
			   case 28:
				   this->label_gold->Text = L"28";
				   break;
			   case 29:
				   this->label_gold->Text = L"29";
				   break;
			   case 30:
				   this->label_gold->Text = L"30";
				   break;
			   case 31:
				   this->label_gold->Text = L"31";
				   break;
			   case 32:
				   this->label_gold->Text = L"32";
				   break;
			   case 33:
				   this->label_gold->Text = L"33";
				   break;
			   case 34:
				   this->label_gold->Text = L"34";
				   break;
			   case 35:
				   this->label_gold->Text = L"35";
				   break;
			   case 36:
				   this->label_gold->Text = L"36";
				   break;
			   case 37:
				   this->label_gold->Text = L"37";
				   break;
			   case 38:
				   this->label_gold->Text = L"38";
				   break;
			   case 39:
				   this->label_gold->Text = L"39";
				   break;
			   case 40:
				   this->label_gold->Text = L"40";
				   break;
			   case 41:
				   this->label_gold->Text = L"41";
				   break;
			   case 42:
				   this->label_gold->Text = L"42";
				   break;
			   case 43:
				   this->label_gold->Text = L"43";
				   break;
			   case 44:
				   this->label_gold->Text = L"44";
				   break;
			   case 45:
				   this->label_gold->Text = L"45";
				   break;
			   case 46:
				   this->label_gold->Text = L"46";
				   break;
			   case 47:
				   this->label_gold->Text = L"47";
				   break;
			   case 48:
				   this->label_gold->Text = L"48";
				   break;
			   case 49:
				   this->label_gold->Text = L"49";
				   break;
			   case 50:
				   this->label_gold->Text = L"50";
				   break;
			   case 51:
				   this->label_gold->Text = L"51";
				   break;
			   case 52:
				   this->label_gold->Text = L"52";
				   break;
			   case 53:
				   this->label_gold->Text = L"53";
				   break;
			   case 54:
				   this->label_gold->Text = L"54";
				   break;
			   case 55:
				   this->label_gold->Text = L"55";
				   break;
			   case 56:
				   this->label_gold->Text = L"56";
				   break;
			   case 57:
				   this->label_gold->Text = L"57";
				   break;
			   case 58:
				   this->label_gold->Text = L"58";
				   break;
			   case 59:
				   this->label_gold->Text = L"59";
				   break;
			   case 60:
				   this->label_gold->Text = L"60";
				   break;
			   case 61:
				   this->label_gold->Text = L"61";
				   break;
			   case 62:
				   this->label_gold->Text = L"62";
				   break;
			   case 63:
				   this->label_gold->Text = L"63";
				   break;
			   case 64:
				   this->label_gold->Text = L"64";
				   break;
			   case 65:
				   this->label_gold->Text = L"65";
				   break;
			   case 66:
				   this->label_gold->Text = L"66";
				   break;
			   case 67:
				   this->label_gold->Text = L"67";
				   break;
			   case 68:
				   this->label_gold->Text = L"68";
				   break;
			   case 69:
				   this->label_gold->Text = L"69";
				   break;
			   case 70:
				   this->label_gold->Text = L"70";
				   break;
			   case 71:
				   this->label_gold->Text = L"71";
				   break;
			   case 72:
				   this->label_gold->Text = L"72";
				   break;
			   case 73:
				   this->label_gold->Text = L"73";
				   break;
			   case 74:
				   this->label_gold->Text = L"74";
				   break;
			   case 75:
				   this->label_gold->Text = L"75";
				   break;
			   case 76:
				   this->label_gold->Text = L"76";
				   break;
			   case 77:
				   this->label_gold->Text = L"77";
				   break;
			   case 78:
				   this->label_gold->Text = L"78";
				   break;
			   case 79:
				   this->label_gold->Text = L"79";
				   break;
			   case 80:
				   this->label_gold->Text = L"80";
				   break;
			   case 81:
				   this->label_gold->Text = L"81";
				   break;
			   case 82:
				   this->label_gold->Text = L"82";
				   break;
			   case 83:
				   this->label_gold->Text = L"83";
				   break;
			   case 84:
				   this->label_gold->Text = L"84";
				   break;
			   case 85:
				   this->label_gold->Text = L"85";
				   break;
			   case 86:
				   this->label_gold->Text = L"86";
				   break;
			   case 87:
				   this->label_gold->Text = L"87";
				   break;
			   case 88:
				   this->label_gold->Text = L"88";
				   break;
			   case 89:
				   this->label_gold->Text = L"89";
				   break;
			   case 90:
				   this->label_gold->Text = L"90";
				   break;
			   case 91:
				   this->label_gold->Text = L"91";
				   break;
			   case 92:
				   this->label_gold->Text = L"92";
				   break;
			   case 93:
				   this->label_gold->Text = L"93";
				   break;
			   case 94:
				   this->label_gold->Text = L"94";
				   break;
			   case 95:
				   this->label_gold->Text = L"95";
				   break;
			   case 96:
				   this->label_gold->Text = L"96";
				   break;
			   case 97:
				   this->label_gold->Text = L"97";
				   break;
			   case 98:
				   this->label_gold->Text = L"98";
				   break;
			   case 99:
				   this->label_gold->Text = L"99";
				   break;
			   case 100:
				   this->label_gold->Text = L"100";
				   break;
			   case 101:
				   this->label_gold->Text = L"101";
				   break;
			   case 102:
				   this->label_gold->Text = L"102";
				   break;
			   case 103:
				   this->label_gold->Text = L"103";
				   break;
			   case 104:
				   this->label_gold->Text = L"104";
				   break;
			   case 105:
				   this->label_gold->Text = L"105";
				   break;
			   case 106:
				   this->label_gold->Text = L"106";
				   break;
			   case 107:
				   this->label_gold->Text = L"107";
				   break;
			   case 108:
				   this->label_gold->Text = L"108";
				   break;
			   case 109:
				   this->label_gold->Text = L"109";
				   break;
			   case 110:
				   this->label_gold->Text = L"110";
				   break;
			   case 111:
				   this->label_gold->Text = L"111";
				   break;
			   case 112:
				   this->label_gold->Text = L"112";
				   break;
			   case 113:
				   this->label_gold->Text = L"113";
				   break;
			   case 114:
				   this->label_gold->Text = L"114";
				   break;
			   case 115:
				   this->label_gold->Text = L"115";
				   break;
			   case 116:
				   this->label_gold->Text = L"116";
				   break;
			   case 117:
				   this->label_gold->Text = L"117";
				   break;
			   case 118:
				   this->label_gold->Text = L"118";
				   break;
			   case 119:
				   this->label_gold->Text = L"119";
				   break;
			   case 120:
				   this->label_gold->Text = L"120";
				   break;
			   case 121:
				   this->label_gold->Text = L"121";
				   break;
			   case 122:
				   this->label_gold->Text = L"122";
				   break;
			   case 123:
				   this->label_gold->Text = L"123";
				   break;
			   case 124:
				   this->label_gold->Text = L"124";
				   break;
			   case 125:
				   this->label_gold->Text = L"125";
				   break;
			   case 126:
				   this->label_gold->Text = L"126";
				   break;
			   case 127:
				   this->label_gold->Text = L"127";
				   break;
			   case 128:
				   this->label_gold->Text = L"128";
				   break;
			   case 129:
				   this->label_gold->Text = L"129";
				   break;
			   case 130:
				   this->label_gold->Text = L"130";
				   break;
			   case 131:
				   this->label_gold->Text = L"131";
				   break;
			   case 132:
				   this->label_gold->Text = L"132";
				   break;
			   case 133:
				   this->label_gold->Text = L"133";
				   break;
			   case 134:
				   this->label_gold->Text = L"134";
				   break;
			   case 135:
				   this->label_gold->Text = L"135";
				   break;
			   case 136:
				   this->label_gold->Text = L"136";
				   break;
			   case 137:
				   this->label_gold->Text = L"137";
				   break;
			   case 138:
				   this->label_gold->Text = L"138";
				   break;
			   case 139:
				   this->label_gold->Text = L"139";
				   break;
			   case 140:
				   this->label_gold->Text = L"140";
				   break;
			   case 141:
				   this->label_gold->Text = L"141";
				   break;
			   case 142:
				   this->label_gold->Text = L"142";
				   break;
			   case 143:
				   this->label_gold->Text = L"143";
				   break;
			   case 144:
				   this->label_gold->Text = L"144";
				   break;
			   case 145:
				   this->label_gold->Text = L"145";
				   break;
			   case 146:
				   this->label_gold->Text = L"146";
				   break;
			   case 147:
				   this->label_gold->Text = L"147";
				   break;
			   case 148:
				   this->label_gold->Text = L"148";
				   break;
			   case 149:
				   this->label_gold->Text = L"149";
				   break;
			   case 150:
				   this->label_gold->Text = L"150";
				   break;
			   case 151:
				   this->label_gold->Text = L"151";
				   break;
			   case 152:
				   this->label_gold->Text = L"152";
				   break;
			   case 153:
				   this->label_gold->Text = L"153";
				   break;
			   case 154:
				   this->label_gold->Text = L"154";
				   break;
			   case 155:
				   this->label_gold->Text = L"155";
				   break;
			   case 156:
				   this->label_gold->Text = L"156";
				   break;
			   case 157:
				   this->label_gold->Text = L"157";
				   break;
			   case 158:
				   this->label_gold->Text = L"158";
				   break;
			   case 159:
				   this->label_gold->Text = L"159";
				   break;
			   case 160:
				   this->label_gold->Text = L"160";
				   break;
			   case 161:
				   this->label_gold->Text = L"161";
				   break;
			   case 162:
				   this->label_gold->Text = L"162";
				   break;
			   case 163:
				   this->label_gold->Text = L"163";
				   break;
			   case 164:
				   this->label_gold->Text = L"164";
				   break;
			   case 165:
				   this->label_gold->Text = L"165";
				   break;
			   case 166:
				   this->label_gold->Text = L"166";
				   break;
			   case 167:
				   this->label_gold->Text = L"167";
				   break;
			   case 168:
				   this->label_gold->Text = L"168";
				   break;
			   case 169:
				   this->label_gold->Text = L"169";
				   break;
			   case 170:
				   this->label_gold->Text = L"170";
				   break;
			   case 171:
				   this->label_gold->Text = L"171";
				   break;
			   case 172:
				   this->label_gold->Text = L"172";
				   break;
			   case 173:
				   this->label_gold->Text = L"173";
				   break;
			   case 174:
				   this->label_gold->Text = L"174";
				   break;
			   case 175:
				   this->label_gold->Text = L"175";
				   break;
			   case 176:
				   this->label_gold->Text = L"176";
				   break;
			   case 177:
				   this->label_gold->Text = L"177";
				   break;
			   case 178:
				   this->label_gold->Text = L"178";
				   break;
			   case 179:
				   this->label_gold->Text = L"179";
				   break;
			   case 180:
				   this->label_gold->Text = L"180";
				   break;
			   case 181:
				   this->label_gold->Text = L"181";
				   break;
			   case 182:
				   this->label_gold->Text = L"182";
				   break;
			   case 183:
				   this->label_gold->Text = L"183";
				   break;
			   case 184:
				   this->label_gold->Text = L"184";
				   break;
			   case 185:
				   this->label_gold->Text = L"185";
				   break;
			   case 186:
				   this->label_gold->Text = L"186";
				   break;
			   case 187:
				   this->label_gold->Text = L"187";
				   break;
			   case 188:
				   this->label_gold->Text = L"188";
				   break;
			   case 189:
				   this->label_gold->Text = L"189";
				   break;
			   case 190:
				   this->label_gold->Text = L"190";
				   break;
			   case 191:
				   this->label_gold->Text = L"191";
				   break;
			   case 192:
				   this->label_gold->Text = L"192";
				   break;
			   case 193:
				   this->label_gold->Text = L"193";
				   break;
			   case 194:
				   this->label_gold->Text = L"194";
				   break;
			   case 195:
				   this->label_gold->Text = L"195";
				   break;
			   case 196:
				   this->label_gold->Text = L"196";
				   break;
			   case 197:
				   this->label_gold->Text = L"197";
				   break;
			   case 198:
				   this->label_gold->Text = L"198";
				   break;
			   case 199:
				   this->label_gold->Text = L"199";
				   break;
			   case 200:
				   this->label_gold->Text = L"200";
				   break;

			   default:
				   if (radioButtonLanguage_Rus->Checked) this->label_gold->Text = L">200"; else this->label_gold->Text = L">200";
				   break;
			   }
			   //silver
			   switch (silver)
			   {
			   case 0:
				   this->label_silver->Text = L"0";
				   break;
			   case 10:
				   this->label_silver->Text = L"10";
				   break;
			   case 20:
				   this->label_silver->Text = L"20";
				   break;
			   case 30:
				   this->label_silver->Text = L"30";
				   break;
			   case 40:
				   this->label_silver->Text = L"40";
				   break;
			   case 50:
				   this->label_silver->Text = L"50";
				   break;
			   case 60:
				   this->label_silver->Text = L"60";
				   break;
			   case 70:
				   this->label_silver->Text = L"70";
				   break;
			   case 80:
				   this->label_silver->Text = L"80";
				   break;
			   case 90:
				   this->label_silver->Text = L"90";
				   break;
			   case 100:
				   this->label_silver->Text = L"100";
				   break;
			   case 110:
				   this->label_silver->Text = L"110";
				   break;
			   case 120:
				   this->label_silver->Text = L"120";
				   break;
			   case 130:
				   this->label_silver->Text = L"130";
				   break;
			   case 140:
				   this->label_silver->Text = L"140";
				   break;
			   case 150:
				   this->label_silver->Text = L"150";
				   break;
			   case 160:
				   this->label_silver->Text = L"160";
				   break;
			   case 170:
				   this->label_silver->Text = L"170";
				   break;
			   case 180:
				   this->label_silver->Text = L"180";
				   break;
			   case 190:
				   this->label_silver->Text = L"190";
				   break;
			   case 200:
				   this->label_silver->Text = L"200";
				   break;
			   case 210:
				   this->label_silver->Text = L"210";
				   break;
			   case 220:
				   this->label_silver->Text = L"220";
				   break;
			   case 230:
				   this->label_silver->Text = L"230";
				   break;
			   case 240:
				   this->label_silver->Text = L"240";
				   break;
			   case 250:
				   this->label_silver->Text = L"250";
				   break;
			   case 260:
				   this->label_silver->Text = L"260";
				   break;
			   case 270:
				   this->label_silver->Text = L"270";
				   break;
			   case 280:
				   this->label_silver->Text = L"280";
				   break;
			   case 290:
				   this->label_silver->Text = L"290";
				   break;
			   case 300:
				   this->label_silver->Text = L"300";
				   break;
			   case 310:
				   this->label_silver->Text = L"310";
				   break;
			   case 320:
				   this->label_silver->Text = L"320";
				   break;
			   case 330:
				   this->label_silver->Text = L"330";
				   break;
			   case 340:
				   this->label_silver->Text = L"340";
				   break;
			   case 350:
				   this->label_silver->Text = L"350";
				   break;
			   case 360:
				   this->label_silver->Text = L"360";
				   break;
			   case 370:
				   this->label_silver->Text = L"370";
				   break;
			   case 380:
				   this->label_silver->Text = L"380";
				   break;
			   case 390:
				   this->label_silver->Text = L"390";
				   break;
			   case 400:
				   this->label_silver->Text = L"400";
				   break;
			   case 410:
				   this->label_silver->Text = L"410";
				   break;
			   case 420:
				   this->label_silver->Text = L"420";
				   break;
			   case 430:
				   this->label_silver->Text = L"430";
				   break;
			   case 440:
				   this->label_silver->Text = L"440";
				   break;
			   case 450:
				   this->label_silver->Text = L"450";
				   break;
			   case 460:
				   this->label_silver->Text = L"460";
				   break;
			   case 470:
				   this->label_silver->Text = L"470";
				   break;
			   case 480:
				   this->label_silver->Text = L"480";
				   break;
			   case 490:
				   this->label_silver->Text = L"490";
				   break;
			   case 500:
				   this->label_silver->Text = L"500";
				   break;
			   case 510:
				   this->label_silver->Text = L"510";
				   break;
			   case 520:
				   this->label_silver->Text = L"520";
				   break;
			   case 530:
				   this->label_silver->Text = L"530";
				   break;
			   case 540:
				   this->label_silver->Text = L"540";
				   break;
			   case 550:
				   this->label_silver->Text = L"550";
				   break;
			   case 560:
				   this->label_silver->Text = L"560";
				   break;
			   case 570:
				   this->label_silver->Text = L"570";
				   break;
			   case 580:
				   this->label_silver->Text = L"580";
				   break;
			   case 590:
				   this->label_silver->Text = L"590";
				   break;
			   case 600:
				   this->label_silver->Text = L"600";
				   break;
			   case 610:
				   this->label_silver->Text = L"610";
				   break;
			   case 620:
				   this->label_silver->Text = L"620";
				   break;
			   case 630:
				   this->label_silver->Text = L"630";
				   break;
			   case 640:
				   this->label_silver->Text = L"640";
				   break;
			   case 650:
				   this->label_silver->Text = L"650";
				   break;
			   case 660:
				   this->label_silver->Text = L"660";
				   break;
			   case 670:
				   this->label_silver->Text = L"670";
				   break;
			   case 680:
				   this->label_silver->Text = L"680";
				   break;
			   case 690:
				   this->label_silver->Text = L"690";
				   break;
			   case 700:
				   this->label_silver->Text = L"700";
				   break;
			   case 710:
				   this->label_silver->Text = L"710";
				   break;
			   case 720:
				   this->label_silver->Text = L"720";
				   break;
			   case 730:
				   this->label_silver->Text = L"730";
				   break;
			   case 740:
				   this->label_silver->Text = L"740";
				   break;
			   case 750:
				   this->label_silver->Text = L"750";
				   break;
			   case 760:
				   this->label_silver->Text = L"760";
				   break;
			   case 770:
				   this->label_silver->Text = L"770";
				   break;
			   case 780:
				   this->label_silver->Text = L"780";
				   break;
			   case 790:
				   this->label_silver->Text = L"790";
				   break;
			   case 800:
				   this->label_silver->Text = L"800";
				   break;
			   case 810:
				   this->label_silver->Text = L"810";
				   break;
			   case 820:
				   this->label_silver->Text = L"820";
				   break;
			   case 830:
				   this->label_silver->Text = L"830";
				   break;
			   case 840:
				   this->label_silver->Text = L"840";
				   break;
			   case 850:
				   this->label_silver->Text = L"850";
				   break;
			   case 860:
				   this->label_silver->Text = L"860";
				   break;
			   case 870:
				   this->label_silver->Text = L"870";
				   break;
			   case 880:
				   this->label_silver->Text = L"880";
				   break;
			   case 890:
				   this->label_silver->Text = L"890";
				   break;
			   case 900:
				   this->label_silver->Text = L"900";
				   break;
			   case 910:
				   this->label_silver->Text = L"910";
				   break;
			   case 920:
				   this->label_silver->Text = L"920";
				   break;
			   case 930:
				   this->label_silver->Text = L"930";
				   break;
			   case 940:
				   this->label_silver->Text = L"940";
				   break;
			   case 950:
				   this->label_silver->Text = L"950";
				   break;
			   case 960:
				   this->label_silver->Text = L"960";
				   break;
			   case 970:
				   this->label_silver->Text = L"970";
				   break;
			   case 980:
				   this->label_silver->Text = L"980";
				   break;
			   case 990:
				   this->label_silver->Text = L"990";
				   break;
			   case 1000:
				   this->label_silver->Text = L"1000";
				   break;
			   case 1010:
				   this->label_silver->Text = L"1010";
				   break;
			   case 1020:
				   this->label_silver->Text = L"1020";
				   break;
			   case 1030:
				   this->label_silver->Text = L"1030";
				   break;
			   case 1040:
				   this->label_silver->Text = L"1040";
				   break;
			   case 1050:
				   this->label_silver->Text = L"1050";
				   break;
			   case 1060:
				   this->label_silver->Text = L"1060";
				   break;
			   case 1070:
				   this->label_silver->Text = L"1070";
				   break;
			   case 1080:
				   this->label_silver->Text = L"1080";
				   break;
			   case 1090:
				   this->label_silver->Text = L"1090";
				   break;
			   case 1100:
				   this->label_silver->Text = L"1100";
				   break;
			   case 1110:
				   this->label_silver->Text = L"1110";
				   break;
			   case 1120:
				   this->label_silver->Text = L"1120";
				   break;
			   case 1130:
				   this->label_silver->Text = L"1130";
				   break;
			   case 1140:
				   this->label_silver->Text = L"1140";
				   break;
			   case 1150:
				   this->label_silver->Text = L"1150";
				   break;
			   case 1160:
				   this->label_silver->Text = L"1160";
				   break;
			   case 1170:
				   this->label_silver->Text = L"1170";
				   break;
			   case 1180:
				   this->label_silver->Text = L"1180";
				   break;
			   case 1190:
				   this->label_silver->Text = L"1190";
				   break;
			   case 1200:
				   this->label_silver->Text = L"1200";
				   break;
			   case 1210:
				   this->label_silver->Text = L"1210";
				   break;
			   case 1220:
				   this->label_silver->Text = L"1220";
				   break;
			   case 1230:
				   this->label_silver->Text = L"1230";
				   break;
			   case 1240:
				   this->label_silver->Text = L"1240";
				   break;
			   case 1250:
				   this->label_silver->Text = L"1250";
				   break;
			   case 1260:
				   this->label_silver->Text = L"1260";
				   break;
			   case 1270:
				   this->label_silver->Text = L"1270";
				   break;
			   case 1280:
				   this->label_silver->Text = L"1280";
				   break;
			   case 1290:
				   this->label_silver->Text = L"1290";
				   break;
			   case 1300:
				   this->label_silver->Text = L"1300";
				   break;
			   case 1310:
				   this->label_silver->Text = L"1310";
				   break;
			   case 1320:
				   this->label_silver->Text = L"1320";
				   break;
			   case 1330:
				   this->label_silver->Text = L"1330";
				   break;
			   case 1340:
				   this->label_silver->Text = L"1340";
				   break;
			   case 1350:
				   this->label_silver->Text = L"1350";
				   break;
			   case 1360:
				   this->label_silver->Text = L"1360";
				   break;
			   case 1370:
				   this->label_silver->Text = L"1370";
				   break;
			   case 1380:
				   this->label_silver->Text = L"1380";
				   break;
			   case 1390:
				   this->label_silver->Text = L"1390";
				   break;
			   case 1400:
				   this->label_silver->Text = L"1400";
				   break;
			   case 1410:
				   this->label_silver->Text = L"1410";
				   break;
			   case 1420:
				   this->label_silver->Text = L"1420";
				   break;
			   case 1430:
				   this->label_silver->Text = L"1430";
				   break;
			   case 1440:
				   this->label_silver->Text = L"1440";
				   break;
			   case 1450:
				   this->label_silver->Text = L"1450";
				   break;
			   case 1460:
				   this->label_silver->Text = L"1460";
				   break;
			   case 1470:
				   this->label_silver->Text = L"1470";
				   break;
			   case 1480:
				   this->label_silver->Text = L"1480";
				   break;
			   case 1490:
				   this->label_silver->Text = L"1490";
				   break;
			   case 1500:
				   this->label_silver->Text = L"1500";
				   break;
			   case 1510:
				   this->label_silver->Text = L"1510";
				   break;
			   case 1520:
				   this->label_silver->Text = L"1520";
				   break;
			   case 1530:
				   this->label_silver->Text = L"1530";
				   break;
			   case 1540:
				   this->label_silver->Text = L"1540";
				   break;
			   case 1550:
				   this->label_silver->Text = L"1550";
				   break;
			   case 1560:
				   this->label_silver->Text = L"1560";
				   break;
			   case 1570:
				   this->label_silver->Text = L"1570";
				   break;
			   case 1580:
				   this->label_silver->Text = L"1580";
				   break;
			   case 1590:
				   this->label_silver->Text = L"1590";
				   break;
			   case 1600:
				   this->label_silver->Text = L"1600";
				   break;
			   case 1610:
				   this->label_silver->Text = L"1610";
				   break;
			   case 1620:
				   this->label_silver->Text = L"1620";
				   break;
			   case 1630:
				   this->label_silver->Text = L"1630";
				   break;
			   case 1640:
				   this->label_silver->Text = L"1640";
				   break;
			   case 1650:
				   this->label_silver->Text = L"1650";
				   break;
			   case 1660:
				   this->label_silver->Text = L"1660";
				   break;
			   case 1670:
				   this->label_silver->Text = L"1670";
				   break;
			   case 1680:
				   this->label_silver->Text = L"1680";
				   break;
			   case 1690:
				   this->label_silver->Text = L"1690";
				   break;
			   case 1700:
				   this->label_silver->Text = L"1700";
				   break;
			   case 1710:
				   this->label_silver->Text = L"1710";
				   break;
			   case 1720:
				   this->label_silver->Text = L"1720";
				   break;
			   case 1730:
				   this->label_silver->Text = L"1730";
				   break;
			   case 1740:
				   this->label_silver->Text = L"1740";
				   break;
			   case 1750:
				   this->label_silver->Text = L"1750";
				   break;
			   case 1760:
				   this->label_silver->Text = L"1760";
				   break;
			   case 1770:
				   this->label_silver->Text = L"1770";
				   break;
			   case 1780:
				   this->label_silver->Text = L"1780";
				   break;
			   case 1790:
				   this->label_silver->Text = L"1790";
				   break;
			   case 1800:
				   this->label_silver->Text = L"1800";
				   break;
			   case 1810:
				   this->label_silver->Text = L"1810";
				   break;
			   case 1820:
				   this->label_silver->Text = L"1820";
				   break;
			   case 1830:
				   this->label_silver->Text = L"1830";
				   break;
			   case 1840:
				   this->label_silver->Text = L"1840";
				   break;
			   case 1850:
				   this->label_silver->Text = L"1850";
				   break;
			   case 1860:
				   this->label_silver->Text = L"1860";
				   break;
			   case 1870:
				   this->label_silver->Text = L"1870";
				   break;
			   case 1880:
				   this->label_silver->Text = L"1880";
				   break;
			   case 1890:
				   this->label_silver->Text = L"1890";
				   break;
			   case 1900:
				   this->label_silver->Text = L"1900";
				   break;
			   case 1910:
				   this->label_silver->Text = L"1910";
				   break;
			   case 1920:
				   this->label_silver->Text = L"1920";
				   break;
			   case 1930:
				   this->label_silver->Text = L"1930";
				   break;
			   case 1940:
				   this->label_silver->Text = L"1940";
				   break;
			   case 1950:
				   this->label_silver->Text = L"1950";
				   break;
			   case 1960:
				   this->label_silver->Text = L"1960";
				   break;
			   case 1970:
				   this->label_silver->Text = L"1970";
				   break;
			   case 1980:
				   this->label_silver->Text = L"1980";
				   break;
			   case 1990:
				   this->label_silver->Text = L"1990";
				   break;
			   case 2000:
				   this->label_silver->Text = L"2000";
				   break;
			   case 2010:
				   this->label_silver->Text = L"2010";
				   break;
			   case 2020:
				   this->label_silver->Text = L"2020";
				   break;
			   case 2030:
				   this->label_silver->Text = L"2030";
				   break;
			   case 2040:
				   this->label_silver->Text = L"2040";
				   break;
			   case 2050:
				   this->label_silver->Text = L"2050";
				   break;
			   case 2060:
				   this->label_silver->Text = L"2060";
				   break;
			   case 2070:
				   this->label_silver->Text = L"2070";
				   break;
			   case 2080:
				   this->label_silver->Text = L"2080";
				   break;
			   case 2090:
				   this->label_silver->Text = L"2090";
				   break;
			   case 2100:
				   this->label_silver->Text = L"2100";
				   break;
			   case 2110:
				   this->label_silver->Text = L"2110";
				   break;
			   case 2120:
				   this->label_silver->Text = L"2120";
				   break;
			   case 2130:
				   this->label_silver->Text = L"2130";
				   break;
			   case 2140:
				   this->label_silver->Text = L"2140";
				   break;
			   case 2150:
				   this->label_silver->Text = L"2150";
				   break;
			   case 2160:
				   this->label_silver->Text = L"2160";
				   break;
			   case 2170:
				   this->label_silver->Text = L"2170";
				   break;
			   case 2180:
				   this->label_silver->Text = L"2180";
				   break;
			   case 2190:
				   this->label_silver->Text = L"2190";
				   break;
			   case 2200:
				   this->label_silver->Text = L"2200";
				   break;
			   case 2210:
				   this->label_silver->Text = L"2210";
				   break;
			   case 2220:
				   this->label_silver->Text = L"2220";
				   break;
			   case 2230:
				   this->label_silver->Text = L"2230";
				   break;
			   case 2240:
				   this->label_silver->Text = L"2240";
				   break;
			   case 2250:
				   this->label_silver->Text = L"2250";
				   break;
			   case 2260:
				   this->label_silver->Text = L"2260";
				   break;
			   case 2270:
				   this->label_silver->Text = L"2270";
				   break;
			   case 2280:
				   this->label_silver->Text = L"2280";
				   break;
			   case 2290:
				   this->label_silver->Text = L"2290";
				   break;
			   case 2300:
				   this->label_silver->Text = L"2300";
				   break;
			   case 2310:
				   this->label_silver->Text = L"2310";
				   break;
			   case 2320:
				   this->label_silver->Text = L"2320";
				   break;
			   case 2330:
				   this->label_silver->Text = L"2330";
				   break;
			   case 2340:
				   this->label_silver->Text = L"2340";
				   break;
			   case 2350:
				   this->label_silver->Text = L"2350";
				   break;
			   case 2360:
				   this->label_silver->Text = L"2360";
				   break;
			   case 2370:
				   this->label_silver->Text = L"2370";
				   break;
			   case 2380:
				   this->label_silver->Text = L"2380";
				   break;
			   case 2390:
				   this->label_silver->Text = L"2390";
				   break;
			   case 2400:
				   this->label_silver->Text = L"2400";
				   break;
			   case 2410:
				   this->label_silver->Text = L"2410";
				   break;
			   case 2420:
				   this->label_silver->Text = L"2420";
				   break;
			   case 2430:
				   this->label_silver->Text = L"2430";
				   break;
			   case 2440:
				   this->label_silver->Text = L"2440";
				   break;
			   case 2450:
				   this->label_silver->Text = L"2450";
				   break;
			   case 2460:
				   this->label_silver->Text = L"2460";
				   break;
			   case 2470:
				   this->label_silver->Text = L"2470";
				   break;
			   case 2480:
				   this->label_silver->Text = L"2480";
				   break;
			   case 2490:
				   this->label_silver->Text = L"2490";
				   break;
			   case 2500:
				   this->label_silver->Text = L"2500";
				   break;
			   case 2510:
				   this->label_silver->Text = L"2510";
				   break;
			   case 2520:
				   this->label_silver->Text = L"2520";
				   break;
			   case 2530:
				   this->label_silver->Text = L"2530";
				   break;
			   case 2540:
				   this->label_silver->Text = L"2540";
				   break;
			   case 2550:
				   this->label_silver->Text = L"2550";
				   break;
			   case 2560:
				   this->label_silver->Text = L"2560";
				   break;
			   case 2570:
				   this->label_silver->Text = L"2570";
				   break;
			   case 2580:
				   this->label_silver->Text = L"2580";
				   break;
			   case 2590:
				   this->label_silver->Text = L"2590";
				   break;
			   case 2600:
				   this->label_silver->Text = L"2600";
				   break;
			   case 2610:
				   this->label_silver->Text = L"2610";
				   break;
			   case 2620:
				   this->label_silver->Text = L"2620";
				   break;
			   case 2630:
				   this->label_silver->Text = L"2630";
				   break;
			   case 2640:
				   this->label_silver->Text = L"2640";
				   break;
			   case 2650:
				   this->label_silver->Text = L"2650";
				   break;
			   case 2660:
				   this->label_silver->Text = L"2660";
				   break;
			   case 2670:
				   this->label_silver->Text = L"2670";
				   break;
			   case 2680:
				   this->label_silver->Text = L"2680";
				   break;
			   case 2690:
				   this->label_silver->Text = L"2690";
				   break;
			   case 2700:
				   this->label_silver->Text = L"2700";
				   break;
			   case 2710:
				   this->label_silver->Text = L"2710";
				   break;
			   case 2720:
				   this->label_silver->Text = L"2720";
				   break;
			   case 2730:
				   this->label_silver->Text = L"2730";
				   break;
			   case 2740:
				   this->label_silver->Text = L"2740";
				   break;
			   case 2750:
				   this->label_silver->Text = L"2750";
				   break;
			   case 2760:
				   this->label_silver->Text = L"2760";
				   break;
			   case 2770:
				   this->label_silver->Text = L"2770";
				   break;
			   case 2780:
				   this->label_silver->Text = L"2780";
				   break;
			   case 2790:
				   this->label_silver->Text = L"2790";
				   break;
			   case 2800:
				   this->label_silver->Text = L"2800";
				   break;
			   case 2810:
				   this->label_silver->Text = L"2810";
				   break;
			   case 2820:
				   this->label_silver->Text = L"2820";
				   break;
			   case 2830:
				   this->label_silver->Text = L"2830";
				   break;
			   case 2840:
				   this->label_silver->Text = L"2840";
				   break;
			   case 2850:
				   this->label_silver->Text = L"2850";
				   break;
			   case 2860:
				   this->label_silver->Text = L"2860";
				   break;
			   case 2870:
				   this->label_silver->Text = L"2870";
				   break;
			   case 2880:
				   this->label_silver->Text = L"2880";
				   break;
			   case 2890:
				   this->label_silver->Text = L"2890";
				   break;
			   case 2900:
				   this->label_silver->Text = L"2900";
				   break;
			   case 2910:
				   this->label_silver->Text = L"2910";
				   break;
			   case 2920:
				   this->label_silver->Text = L"2920";
				   break;
			   case 2930:
				   this->label_silver->Text = L"2930";
				   break;
			   case 2940:
				   this->label_silver->Text = L"2940";
				   break;
			   case 2950:
				   this->label_silver->Text = L"2950";
				   break;
			   case 2960:
				   this->label_silver->Text = L"2960";
				   break;
			   case 2970:
				   this->label_silver->Text = L"2970";
				   break;
			   case 2980:
				   this->label_silver->Text = L"2980";
				   break;
			   case 2990:
				   this->label_silver->Text = L"2990";
				   break;
			   case 3000:
				   this->label_silver->Text = L"3000";
				   break;
			   case 3010:
				   this->label_silver->Text = L"3010";
				   break;
			   case 3020:
				   this->label_silver->Text = L"3020";
				   break;
			   case 3030:
				   this->label_silver->Text = L"3030";
				   break;
			   case 3040:
				   this->label_silver->Text = L"3040";
				   break;
			   case 3050:
				   this->label_silver->Text = L"3050";
				   break;
			   case 3060:
				   this->label_silver->Text = L"3060";
				   break;
			   case 3070:
				   this->label_silver->Text = L"3070";
				   break;
			   case 3080:
				   this->label_silver->Text = L"3080";
				   break;
			   case 3090:
				   this->label_silver->Text = L"3090";
				   break;
			   case 3100:
				   this->label_silver->Text = L"3100";
				   break;
			   case 3110:
				   this->label_silver->Text = L"3110";
				   break;
			   case 3120:
				   this->label_silver->Text = L"3120";
				   break;
			   case 3130:
				   this->label_silver->Text = L"3130";
				   break;
			   case 3140:
				   this->label_silver->Text = L"3140";
				   break;
			   case 3150:
				   this->label_silver->Text = L"3150";
				   break;
			   case 3160:
				   this->label_silver->Text = L"3160";
				   break;
			   case 3170:
				   this->label_silver->Text = L"3170";
				   break;
			   case 3180:
				   this->label_silver->Text = L"3180";
				   break;
			   case 3190:
				   this->label_silver->Text = L"3190";
				   break;
			   case 3200:
				   this->label_silver->Text = L"3200";
				   break;
			   case 3210:
				   this->label_silver->Text = L"3210";
				   break;
			   case 3220:
				   this->label_silver->Text = L"3220";
				   break;
			   case 3230:
				   this->label_silver->Text = L"3230";
				   break;
			   case 3240:
				   this->label_silver->Text = L"3240";
				   break;
			   case 3250:
				   this->label_silver->Text = L"3250";
				   break;
			   case 3260:
				   this->label_silver->Text = L"3260";
				   break;
			   case 3270:
				   this->label_silver->Text = L"3270";
				   break;
			   case 3280:
				   this->label_silver->Text = L"3280";
				   break;
			   case 3290:
				   this->label_silver->Text = L"3290";
				   break;
			   case 3300:
				   this->label_silver->Text = L"3300";
				   break;
			   case 3310:
				   this->label_silver->Text = L"3310";
				   break;
			   case 3320:
				   this->label_silver->Text = L"3320";
				   break;
			   case 3330:
				   this->label_silver->Text = L"3330";
				   break;
			   case 3340:
				   this->label_silver->Text = L"3340";
				   break;
			   case 3350:
				   this->label_silver->Text = L"3350";
				   break;
			   case 3360:
				   this->label_silver->Text = L"3360";
				   break;
			   case 3370:
				   this->label_silver->Text = L"3370";
				   break;
			   case 3380:
				   this->label_silver->Text = L"3380";
				   break;
			   case 3390:
				   this->label_silver->Text = L"3390";
				   break;
			   case 3400:
				   this->label_silver->Text = L"3400";
				   break;
			   case 3410:
				   this->label_silver->Text = L"3410";
				   break;
			   case 3420:
				   this->label_silver->Text = L"3420";
				   break;
			   case 3430:
				   this->label_silver->Text = L"3430";
				   break;
			   case 3440:
				   this->label_silver->Text = L"3440";
				   break;
			   case 3450:
				   this->label_silver->Text = L"3450";
				   break;
			   case 3460:
				   this->label_silver->Text = L"3460";
				   break;
			   case 3470:
				   this->label_silver->Text = L"3470";
				   break;
			   case 3480:
				   this->label_silver->Text = L"3480";
				   break;
			   case 3490:
				   this->label_silver->Text = L"3490";
				   break;
			   case 3500:
				   this->label_silver->Text = L"3500";
				   break;
			   case 3510:
				   this->label_silver->Text = L"3510";
				   break;
			   case 3520:
				   this->label_silver->Text = L"3520";
				   break;
			   case 3530:
				   this->label_silver->Text = L"3530";
				   break;
			   case 3540:
				   this->label_silver->Text = L"3540";
				   break;
			   case 3550:
				   this->label_silver->Text = L"3550";
				   break;
			   case 3560:
				   this->label_silver->Text = L"3560";
				   break;
			   case 3570:
				   this->label_silver->Text = L"3570";
				   break;
			   case 3580:
				   this->label_silver->Text = L"3580";
				   break;
			   case 3590:
				   this->label_silver->Text = L"3590";
				   break;
			   case 3600:
				   this->label_silver->Text = L"3600";
				   break;
			   case 3610:
				   this->label_silver->Text = L"3610";
				   break;
			   case 3620:
				   this->label_silver->Text = L"3620";
				   break;
			   case 3630:
				   this->label_silver->Text = L"3630";
				   break;
			   case 3640:
				   this->label_silver->Text = L"3640";
				   break;
			   case 3650:
				   this->label_silver->Text = L"3650";
				   break;
			   case 3660:
				   this->label_silver->Text = L"3660";
				   break;
			   case 3670:
				   this->label_silver->Text = L"3670";
				   break;
			   case 3680:
				   this->label_silver->Text = L"3680";
				   break;
			   case 3690:
				   this->label_silver->Text = L"3690";
				   break;
			   case 3700:
				   this->label_silver->Text = L"3700";
				   break;
			   case 3710:
				   this->label_silver->Text = L"3710";
				   break;
			   case 3720:
				   this->label_silver->Text = L"3720";
				   break;
			   case 3730:
				   this->label_silver->Text = L"3730";
				   break;
			   case 3740:
				   this->label_silver->Text = L"3740";
				   break;
			   case 3750:
				   this->label_silver->Text = L"3750";
				   break;
			   case 3760:
				   this->label_silver->Text = L"3760";
				   break;
			   case 3770:
				   this->label_silver->Text = L"3770";
				   break;
			   case 3780:
				   this->label_silver->Text = L"3780";
				   break;
			   case 3790:
				   this->label_silver->Text = L"3790";
				   break;
			   case 3800:
				   this->label_silver->Text = L"3800";
				   break;
			   case 3810:
				   this->label_silver->Text = L"3810";
				   break;
			   case 3820:
				   this->label_silver->Text = L"3820";
				   break;
			   case 3830:
				   this->label_silver->Text = L"3830";
				   break;
			   case 3840:
				   this->label_silver->Text = L"3840";
				   break;
			   case 3850:
				   this->label_silver->Text = L"3850";
				   break;
			   case 3860:
				   this->label_silver->Text = L"3860";
				   break;
			   case 3870:
				   this->label_silver->Text = L"3870";
				   break;
			   case 3880:
				   this->label_silver->Text = L"3880";
				   break;
			   case 3890:
				   this->label_silver->Text = L"3890";
				   break;
			   case 3900:
				   this->label_silver->Text = L"3900";
				   break;
			   case 3910:
				   this->label_silver->Text = L"3910";
				   break;
			   case 3920:
				   this->label_silver->Text = L"3920";
				   break;
			   case 3930:
				   this->label_silver->Text = L"3930";
				   break;
			   case 3940:
				   this->label_silver->Text = L"3940";
				   break;
			   case 3950:
				   this->label_silver->Text = L"3950";
				   break;
			   case 3960:
				   this->label_silver->Text = L"3960";
				   break;
			   case 3970:
				   this->label_silver->Text = L"3970";
				   break;
			   case 3980:
				   this->label_silver->Text = L"3980";
				   break;
			   case 3990:
				   this->label_silver->Text = L"3990";
				   break;
			   case 4000:
				   this->label_silver->Text = L"4000";
				   break;
			   case 4010:
				   this->label_silver->Text = L"4010";
				   break;
			   case 4020:
				   this->label_silver->Text = L"4020";
				   break;
			   case 4030:
				   this->label_silver->Text = L"4030";
				   break;
			   case 4040:
				   this->label_silver->Text = L"4040";
				   break;
			   case 4050:
				   this->label_silver->Text = L"4050";
				   break;
			   case 4060:
				   this->label_silver->Text = L"4060";
				   break;
			   case 4070:
				   this->label_silver->Text = L"4070";
				   break;
			   case 4080:
				   this->label_silver->Text = L"4080";
				   break;
			   case 4090:
				   this->label_silver->Text = L"4090";
				   break;
			   case 4100:
				   this->label_silver->Text = L"4100";
				   break;
			   case 4110:
				   this->label_silver->Text = L"4110";
				   break;
			   case 4120:
				   this->label_silver->Text = L"4120";
				   break;
			   case 4130:
				   this->label_silver->Text = L"4130";
				   break;
			   case 4140:
				   this->label_silver->Text = L"4140";
				   break;
			   case 4150:
				   this->label_silver->Text = L"4150";
				   break;
			   case 4160:
				   this->label_silver->Text = L"4160";
				   break;
			   case 4170:
				   this->label_silver->Text = L"4170";
				   break;
			   case 4180:
				   this->label_silver->Text = L"4180";
				   break;
			   case 4190:
				   this->label_silver->Text = L"4190";
				   break;
			   case 4200:
				   this->label_silver->Text = L"4200";
				   break;
			   case 4210:
				   this->label_silver->Text = L"4210";
				   break;
			   case 4220:
				   this->label_silver->Text = L"4220";
				   break;
			   case 4230:
				   this->label_silver->Text = L"4230";
				   break;
			   case 4240:
				   this->label_silver->Text = L"4240";
				   break;
			   case 4250:
				   this->label_silver->Text = L"4250";
				   break;
			   case 4260:
				   this->label_silver->Text = L"4260";
				   break;
			   case 4270:
				   this->label_silver->Text = L"4270";
				   break;
			   case 4280:
				   this->label_silver->Text = L"4280";
				   break;
			   case 4290:
				   this->label_silver->Text = L"4290";
				   break;
			   case 4300:
				   this->label_silver->Text = L"4300";
				   break;
			   case 4310:
				   this->label_silver->Text = L"4310";
				   break;
			   case 4320:
				   this->label_silver->Text = L"4320";
				   break;
			   case 4330:
				   this->label_silver->Text = L"4330";
				   break;
			   case 4340:
				   this->label_silver->Text = L"4340";
				   break;
			   case 4350:
				   this->label_silver->Text = L"4350";
				   break;
			   case 4360:
				   this->label_silver->Text = L"4360";
				   break;
			   case 4370:
				   this->label_silver->Text = L"4370";
				   break;
			   case 4380:
				   this->label_silver->Text = L"4380";
				   break;
			   case 4390:
				   this->label_silver->Text = L"4390";
				   break;
			   case 4400:
				   this->label_silver->Text = L"4400";
				   break;
			   case 4410:
				   this->label_silver->Text = L"4410";
				   break;
			   case 4420:
				   this->label_silver->Text = L"4420";
				   break;
			   case 4430:
				   this->label_silver->Text = L"4430";
				   break;
			   case 4440:
				   this->label_silver->Text = L"4440";
				   break;
			   case 4450:
				   this->label_silver->Text = L"4450";
				   break;
			   case 4460:
				   this->label_silver->Text = L"4460";
				   break;
			   case 4470:
				   this->label_silver->Text = L"4470";
				   break;
			   case 4480:
				   this->label_silver->Text = L"4480";
				   break;
			   case 4490:
				   this->label_silver->Text = L"4490";
				   break;
			   case 4500:
				   this->label_silver->Text = L"4500";
				   break;
			   case 4510:
				   this->label_silver->Text = L"4510";
				   break;
			   case 4520:
				   this->label_silver->Text = L"4520";
				   break;
			   case 4530:
				   this->label_silver->Text = L"4530";
				   break;
			   case 4540:
				   this->label_silver->Text = L"4540";
				   break;
			   case 4550:
				   this->label_silver->Text = L"4550";
				   break;
			   case 4560:
				   this->label_silver->Text = L"4560";
				   break;
			   case 4570:
				   this->label_silver->Text = L"4570";
				   break;
			   case 4580:
				   this->label_silver->Text = L"4580";
				   break;
			   case 4590:
				   this->label_silver->Text = L"4590";
				   break;
			   case 4600:
				   this->label_silver->Text = L"4600";
				   break;
			   case 4610:
				   this->label_silver->Text = L"4610";
				   break;
			   case 4620:
				   this->label_silver->Text = L"4620";
				   break;
			   case 4630:
				   this->label_silver->Text = L"4630";
				   break;
			   case 4640:
				   this->label_silver->Text = L"4640";
				   break;
			   case 4650:
				   this->label_silver->Text = L"4650";
				   break;
			   case 4660:
				   this->label_silver->Text = L"4660";
				   break;
			   case 4670:
				   this->label_silver->Text = L"4670";
				   break;
			   case 4680:
				   this->label_silver->Text = L"4680";
				   break;
			   case 4690:
				   this->label_silver->Text = L"4690";
				   break;
			   case 4700:
				   this->label_silver->Text = L"4700";
				   break;
			   case 4710:
				   this->label_silver->Text = L"4710";
				   break;
			   case 4720:
				   this->label_silver->Text = L"4720";
				   break;
			   case 4730:
				   this->label_silver->Text = L"4730";
				   break;
			   case 4740:
				   this->label_silver->Text = L"4740";
				   break;
			   case 4750:
				   this->label_silver->Text = L"4750";
				   break;
			   case 4760:
				   this->label_silver->Text = L"4760";
				   break;
			   case 4770:
				   this->label_silver->Text = L"4770";
				   break;
			   case 4780:
				   this->label_silver->Text = L"4780";
				   break;
			   case 4790:
				   this->label_silver->Text = L"4790";
				   break;
			   case 4800:
				   this->label_silver->Text = L"4800";
				   break;
			   case 4810:
				   this->label_silver->Text = L"4810";
				   break;
			   case 4820:
				   this->label_silver->Text = L"4820";
				   break;
			   case 4830:
				   this->label_silver->Text = L"4830";
				   break;
			   case 4840:
				   this->label_silver->Text = L"4840";
				   break;
			   case 4850:
				   this->label_silver->Text = L"4850";
				   break;
			   case 4860:
				   this->label_silver->Text = L"4860";
				   break;
			   case 4870:
				   this->label_silver->Text = L"4870";
				   break;
			   case 4880:
				   this->label_silver->Text = L"4880";
				   break;
			   case 4890:
				   this->label_silver->Text = L"4890";
				   break;
			   case 4900:
				   this->label_silver->Text = L"4900";
				   break;
			   case 4910:
				   this->label_silver->Text = L"4910";
				   break;
			   case 4920:
				   this->label_silver->Text = L"4920";
				   break;
			   case 4930:
				   this->label_silver->Text = L"4930";
				   break;
			   case 4940:
				   this->label_silver->Text = L"4940";
				   break;
			   case 4950:
				   this->label_silver->Text = L"4950";
				   break;
			   case 4960:
				   this->label_silver->Text = L"4960";
				   break;
			   case 4970:
				   this->label_silver->Text = L"4970";
				   break;
			   case 4980:
				   this->label_silver->Text = L"4980";
				   break;
			   case 4990:
				   this->label_silver->Text = L"4990";
				   break;
			   case 5000:
				   this->label_silver->Text = L"5000";
				   break;
			   case 5010:
				   this->label_silver->Text = L"5010";
				   break;
			   case 5020:
				   this->label_silver->Text = L"5020";
				   break;
			   case 5030:
				   this->label_silver->Text = L"5030";
				   break;
			   case 5040:
				   this->label_silver->Text = L"5040";
				   break;
			   case 5050:
				   this->label_silver->Text = L"5050";
				   break;
			   case 5060:
				   this->label_silver->Text = L"5060";
				   break;
			   case 5070:
				   this->label_silver->Text = L"5070";
				   break;
			   case 5080:
				   this->label_silver->Text = L"5080";
				   break;
			   case 5090:
				   this->label_silver->Text = L"5090";
				   break;
			   case 5100:
				   this->label_silver->Text = L"5100";
				   break;
			   case 5110:
				   this->label_silver->Text = L"5110";
				   break;
			   case 5120:
				   this->label_silver->Text = L"5120";
				   break;
			   case 5130:
				   this->label_silver->Text = L"5130";
				   break;
			   case 5140:
				   this->label_silver->Text = L"5140";
				   break;
			   case 5150:
				   this->label_silver->Text = L"5150";
				   break;
			   case 5160:
				   this->label_silver->Text = L"5160";
				   break;
			   case 5170:
				   this->label_silver->Text = L"5170";
				   break;
			   case 5180:
				   this->label_silver->Text = L"5180";
				   break;
			   case 5190:
				   this->label_silver->Text = L"5190";
				   break;
			   case 5200:
				   this->label_silver->Text = L"5200";
				   break;
			   case 5210:
				   this->label_silver->Text = L"5210";
				   break;
			   case 5220:
				   this->label_silver->Text = L"5220";
				   break;
			   case 5230:
				   this->label_silver->Text = L"5230";
				   break;
			   case 5240:
				   this->label_silver->Text = L"5240";
				   break;
			   case 5250:
				   this->label_silver->Text = L"5250";
				   break;
			   case 5260:
				   this->label_silver->Text = L"5260";
				   break;
			   case 5270:
				   this->label_silver->Text = L"5270";
				   break;
			   case 5280:
				   this->label_silver->Text = L"5280";
				   break;
			   case 5290:
				   this->label_silver->Text = L"5290";
				   break;
			   case 5300:
				   this->label_silver->Text = L"5300";
				   break;
			   case 5310:
				   this->label_silver->Text = L"5310";
				   break;
			   case 5320:
				   this->label_silver->Text = L"5320";
				   break;
			   case 5330:
				   this->label_silver->Text = L"5330";
				   break;
			   case 5340:
				   this->label_silver->Text = L"5340";
				   break;
			   case 5350:
				   this->label_silver->Text = L"5350";
				   break;
			   case 5360:
				   this->label_silver->Text = L"5360";
				   break;
			   case 5370:
				   this->label_silver->Text = L"5370";
				   break;
			   case 5380:
				   this->label_silver->Text = L"5380";
				   break;
			   case 5390:
				   this->label_silver->Text = L"5390";
				   break;
			   case 5400:
				   this->label_silver->Text = L"5400";
				   break;
			   case 5410:
				   this->label_silver->Text = L"5410";
				   break;
			   case 5420:
				   this->label_silver->Text = L"5420";
				   break;
			   case 5430:
				   this->label_silver->Text = L"5430";
				   break;
			   case 5440:
				   this->label_silver->Text = L"5440";
				   break;
			   case 5450:
				   this->label_silver->Text = L"5450";
				   break;
			   case 5460:
				   this->label_silver->Text = L"5460";
				   break;
			   case 5470:
				   this->label_silver->Text = L"5470";
				   break;
			   case 5480:
				   this->label_silver->Text = L"5480";
				   break;
			   case 5490:
				   this->label_silver->Text = L"5490";
				   break;
			   case 5500:
				   this->label_silver->Text = L"5500";
				   break;
			   case 5510:
				   this->label_silver->Text = L"5510";
				   break;
			   case 5520:
				   this->label_silver->Text = L"5520";
				   break;
			   case 5530:
				   this->label_silver->Text = L"5530";
				   break;
			   case 5540:
				   this->label_silver->Text = L"5540";
				   break;
			   case 5550:
				   this->label_silver->Text = L"5550";
				   break;
			   case 5560:
				   this->label_silver->Text = L"5560";
				   break;
			   case 5570:
				   this->label_silver->Text = L"5570";
				   break;
			   case 5580:
				   this->label_silver->Text = L"5580";
				   break;
			   case 5590:
				   this->label_silver->Text = L"5590";
				   break;
			   case 5600:
				   this->label_silver->Text = L"5600";
				   break;
			   case 5610:
				   this->label_silver->Text = L"5610";
				   break;
			   case 5620:
				   this->label_silver->Text = L"5620";
				   break;
			   case 5630:
				   this->label_silver->Text = L"5630";
				   break;
			   case 5640:
				   this->label_silver->Text = L"5640";
				   break;
			   case 5650:
				   this->label_silver->Text = L"5650";
				   break;
			   case 5660:
				   this->label_silver->Text = L"5660";
				   break;
			   case 5670:
				   this->label_silver->Text = L"5670";
				   break;
			   case 5680:
				   this->label_silver->Text = L"5680";
				   break;
			   case 5690:
				   this->label_silver->Text = L"5690";
				   break;
			   case 5700:
				   this->label_silver->Text = L"5700";
				   break;
			   case 5710:
				   this->label_silver->Text = L"5710";
				   break;
			   case 5720:
				   this->label_silver->Text = L"5720";
				   break;
			   case 5730:
				   this->label_silver->Text = L"5730";
				   break;
			   case 5740:
				   this->label_silver->Text = L"5740";
				   break;
			   case 5750:
				   this->label_silver->Text = L"5750";
				   break;
			   case 5760:
				   this->label_silver->Text = L"5760";
				   break;
			   case 5770:
				   this->label_silver->Text = L"5770";
				   break;
			   case 5780:
				   this->label_silver->Text = L"5780";
				   break;
			   case 5790:
				   this->label_silver->Text = L"5790";
				   break;
			   case 5800:
				   this->label_silver->Text = L"5800";
				   break;
			   case 5810:
				   this->label_silver->Text = L"5810";
				   break;
			   case 5820:
				   this->label_silver->Text = L"5820";
				   break;
			   case 5830:
				   this->label_silver->Text = L"5830";
				   break;
			   case 5840:
				   this->label_silver->Text = L"5840";
				   break;
			   case 5850:
				   this->label_silver->Text = L"5850";
				   break;
			   case 5860:
				   this->label_silver->Text = L"5860";
				   break;
			   case 5870:
				   this->label_silver->Text = L"5870";
				   break;
			   case 5880:
				   this->label_silver->Text = L"5880";
				   break;
			   case 5890:
				   this->label_silver->Text = L"5890";
				   break;
			   case 5900:
				   this->label_silver->Text = L"5900";
				   break;
			   case 5910:
				   this->label_silver->Text = L"5910";
				   break;
			   case 5920:
				   this->label_silver->Text = L"5920";
				   break;
			   case 5930:
				   this->label_silver->Text = L"5930";
				   break;
			   case 5940:
				   this->label_silver->Text = L"5940";
				   break;
			   case 5950:
				   this->label_silver->Text = L"5950";
				   break;
			   case 5960:
				   this->label_silver->Text = L"5960";
				   break;
			   case 5970:
				   this->label_silver->Text = L"5970";
				   break;
			   case 5980:
				   this->label_silver->Text = L"5980";
				   break;
			   case 5990:
				   this->label_silver->Text = L"5990";
				   break;
			   case 6000:
				   this->label_silver->Text = L"6000";
				   break;
			   case 6010:
				   this->label_silver->Text = L"6010";
				   break;
			   case 6020:
				   this->label_silver->Text = L"6020";
				   break;
			   case 6030:
				   this->label_silver->Text = L"6030";
				   break;
			   case 6040:
				   this->label_silver->Text = L"6040";
				   break;
			   case 6050:
				   this->label_silver->Text = L"6050";
				   break;
			   case 6060:
				   this->label_silver->Text = L"6060";
				   break;
			   case 6070:
				   this->label_silver->Text = L"6070";
				   break;
			   case 6080:
				   this->label_silver->Text = L"6080";
				   break;
			   case 6090:
				   this->label_silver->Text = L"6090";
				   break;
			   case 6100:
				   this->label_silver->Text = L"6100";
				   break;
			   case 6110:
				   this->label_silver->Text = L"6110";
				   break;
			   case 6120:
				   this->label_silver->Text = L"6120";
				   break;
			   case 6130:
				   this->label_silver->Text = L"6130";
				   break;
			   case 6140:
				   this->label_silver->Text = L"6140";
				   break;
			   case 6150:
				   this->label_silver->Text = L"6150";
				   break;
			   case 6160:
				   this->label_silver->Text = L"6160";
				   break;
			   case 6170:
				   this->label_silver->Text = L"6170";
				   break;
			   case 6180:
				   this->label_silver->Text = L"6180";
				   break;
			   case 6190:
				   this->label_silver->Text = L"6190";
				   break;
			   case 6200:
				   this->label_silver->Text = L"6200";
				   break;
			   case 6210:
				   this->label_silver->Text = L"6210";
				   break;
			   case 6220:
				   this->label_silver->Text = L"6220";
				   break;
			   case 6230:
				   this->label_silver->Text = L"6230";
				   break;
			   case 6240:
				   this->label_silver->Text = L"6240";
				   break;
			   case 6250:
				   this->label_silver->Text = L"6250";
				   break;
			   case 6260:
				   this->label_silver->Text = L"6260";
				   break;
			   case 6270:
				   this->label_silver->Text = L"6270";
				   break;
			   case 6280:
				   this->label_silver->Text = L"6280";
				   break;
			   case 6290:
				   this->label_silver->Text = L"6290";
				   break;
			   case 6300:
				   this->label_silver->Text = L"6300";
				   break;
			   case 6310:
				   this->label_silver->Text = L"6310";
				   break;
			   case 6320:
				   this->label_silver->Text = L"6320";
				   break;
			   case 6330:
				   this->label_silver->Text = L"6330";
				   break;
			   case 6340:
				   this->label_silver->Text = L"6340";
				   break;
			   case 6350:
				   this->label_silver->Text = L"6350";
				   break;
			   case 6360:
				   this->label_silver->Text = L"6360";
				   break;
			   case 6370:
				   this->label_silver->Text = L"6370";
				   break;
			   case 6380:
				   this->label_silver->Text = L"6380";
				   break;
			   case 6390:
				   this->label_silver->Text = L"6390";
				   break;
			   case 6400:
				   this->label_silver->Text = L"6400";
				   break;
			   case 6410:
				   this->label_silver->Text = L"6410";
				   break;
			   case 6420:
				   this->label_silver->Text = L"6420";
				   break;
			   case 6430:
				   this->label_silver->Text = L"6430";
				   break;
			   case 6440:
				   this->label_silver->Text = L"6440";
				   break;
			   case 6450:
				   this->label_silver->Text = L"6450";
				   break;
			   case 6460:
				   this->label_silver->Text = L"6460";
				   break;
			   case 6470:
				   this->label_silver->Text = L"6470";
				   break;
			   case 6480:
				   this->label_silver->Text = L"6480";
				   break;
			   case 6490:
				   this->label_silver->Text = L"6490";
				   break;
			   case 6500:
				   this->label_silver->Text = L"6500";
				   break;
			   case 6510:
				   this->label_silver->Text = L"6510";
				   break;
			   case 6520:
				   this->label_silver->Text = L"6520";
				   break;
			   case 6530:
				   this->label_silver->Text = L"6530";
				   break;
			   case 6540:
				   this->label_silver->Text = L"6540";
				   break;
			   case 6550:
				   this->label_silver->Text = L"6550";
				   break;
			   case 6560:
				   this->label_silver->Text = L"6560";
				   break;
			   case 6570:
				   this->label_silver->Text = L"6570";
				   break;
			   case 6580:
				   this->label_silver->Text = L"6580";
				   break;
			   case 6590:
				   this->label_silver->Text = L"6590";
				   break;
			   case 6600:
				   this->label_silver->Text = L"6600";
				   break;
			   case 6610:
				   this->label_silver->Text = L"6610";
				   break;
			   case 6620:
				   this->label_silver->Text = L"6620";
				   break;
			   case 6630:
				   this->label_silver->Text = L"6630";
				   break;
			   case 6640:
				   this->label_silver->Text = L"6640";
				   break;
			   case 6650:
				   this->label_silver->Text = L"6650";
				   break;
			   case 6660:
				   this->label_silver->Text = L"6660";
				   break;
			   case 6670:
				   this->label_silver->Text = L"6670";
				   break;
			   case 6680:
				   this->label_silver->Text = L"6680";
				   break;
			   case 6690:
				   this->label_silver->Text = L"6690";
				   break;
			   case 6700:
				   this->label_silver->Text = L"6700";
				   break;
			   case 6710:
				   this->label_silver->Text = L"6710";
				   break;
			   case 6720:
				   this->label_silver->Text = L"6720";
				   break;
			   case 6730:
				   this->label_silver->Text = L"6730";
				   break;
			   case 6740:
				   this->label_silver->Text = L"6740";
				   break;
			   case 6750:
				   this->label_silver->Text = L"6750";
				   break;
			   case 6760:
				   this->label_silver->Text = L"6760";
				   break;
			   case 6770:
				   this->label_silver->Text = L"6770";
				   break;
			   case 6780:
				   this->label_silver->Text = L"6780";
				   break;
			   case 6790:
				   this->label_silver->Text = L"6790";
				   break;
			   case 6800:
				   this->label_silver->Text = L"6800";
				   break;
			   case 6810:
				   this->label_silver->Text = L"6810";
				   break;
			   case 6820:
				   this->label_silver->Text = L"6820";
				   break;
			   case 6830:
				   this->label_silver->Text = L"6830";
				   break;
			   case 6840:
				   this->label_silver->Text = L"6840";
				   break;
			   case 6850:
				   this->label_silver->Text = L"6850";
				   break;
			   case 6860:
				   this->label_silver->Text = L"6860";
				   break;
			   case 6870:
				   this->label_silver->Text = L"6870";
				   break;
			   case 6880:
				   this->label_silver->Text = L"6880";
				   break;
			   case 6890:
				   this->label_silver->Text = L"6890";
				   break;
			   case 6900:
				   this->label_silver->Text = L"6900";
				   break;
			   case 6910:
				   this->label_silver->Text = L"6910";
				   break;
			   case 6920:
				   this->label_silver->Text = L"6920";
				   break;
			   case 6930:
				   this->label_silver->Text = L"6930";
				   break;
			   case 6940:
				   this->label_silver->Text = L"6940";
				   break;
			   case 6950:
				   this->label_silver->Text = L"6950";
				   break;
			   case 6960:
				   this->label_silver->Text = L"6960";
				   break;
			   case 6970:
				   this->label_silver->Text = L"6970";
				   break;
			   case 6980:
				   this->label_silver->Text = L"6980";
				   break;
			   case 6990:
				   this->label_silver->Text = L"6990";
				   break;
			   case 7000:
				   this->label_silver->Text = L"7000";
				   break;
			   case 7010:
				   this->label_silver->Text = L"7010";
				   break;
			   case 7020:
				   this->label_silver->Text = L"7020";
				   break;
			   case 7030:
				   this->label_silver->Text = L"7030";
				   break;
			   case 7040:
				   this->label_silver->Text = L"7040";
				   break;
			   case 7050:
				   this->label_silver->Text = L"7050";
				   break;
			   case 7060:
				   this->label_silver->Text = L"7060";
				   break;
			   case 7070:
				   this->label_silver->Text = L"7070";
				   break;
			   case 7080:
				   this->label_silver->Text = L"7080";
				   break;
			   case 7090:
				   this->label_silver->Text = L"7090";
				   break;
			   case 7100:
				   this->label_silver->Text = L"7100";
				   break;
			   case 7110:
				   this->label_silver->Text = L"7110";
				   break;
			   case 7120:
				   this->label_silver->Text = L"7120";
				   break;
			   case 7130:
				   this->label_silver->Text = L"7130";
				   break;
			   case 7140:
				   this->label_silver->Text = L"7140";
				   break;
			   case 7150:
				   this->label_silver->Text = L"7150";
				   break;
			   case 7160:
				   this->label_silver->Text = L"7160";
				   break;
			   case 7170:
				   this->label_silver->Text = L"7170";
				   break;
			   case 7180:
				   this->label_silver->Text = L"7180";
				   break;
			   case 7190:
				   this->label_silver->Text = L"7190";
				   break;
			   case 7200:
				   this->label_silver->Text = L"7200";
				   break;
			   case 7210:
				   this->label_silver->Text = L"7210";
				   break;
			   case 7220:
				   this->label_silver->Text = L"7220";
				   break;
			   case 7230:
				   this->label_silver->Text = L"7230";
				   break;
			   case 7240:
				   this->label_silver->Text = L"7240";
				   break;
			   case 7250:
				   this->label_silver->Text = L"7250";
				   break;
			   case 7260:
				   this->label_silver->Text = L"7260";
				   break;
			   case 7270:
				   this->label_silver->Text = L"7270";
				   break;
			   case 7280:
				   this->label_silver->Text = L"7280";
				   break;
			   case 7290:
				   this->label_silver->Text = L"7290";
				   break;
			   case 7300:
				   this->label_silver->Text = L"7300";
				   break;
			   case 7310:
				   this->label_silver->Text = L"7310";
				   break;
			   case 7320:
				   this->label_silver->Text = L"7320";
				   break;
			   case 7330:
				   this->label_silver->Text = L"7330";
				   break;
			   case 7340:
				   this->label_silver->Text = L"7340";
				   break;
			   case 7350:
				   this->label_silver->Text = L"7350";
				   break;
			   case 7360:
				   this->label_silver->Text = L"7360";
				   break;
			   case 7370:
				   this->label_silver->Text = L"7370";
				   break;
			   case 7380:
				   this->label_silver->Text = L"7380";
				   break;
			   case 7390:
				   this->label_silver->Text = L"7390";
				   break;
			   case 7400:
				   this->label_silver->Text = L"7400";
				   break;
			   case 7410:
				   this->label_silver->Text = L"7410";
				   break;
			   case 7420:
				   this->label_silver->Text = L"7420";
				   break;
			   case 7430:
				   this->label_silver->Text = L"7430";
				   break;
			   case 7440:
				   this->label_silver->Text = L"7440";
				   break;
			   case 7450:
				   this->label_silver->Text = L"7450";
				   break;
			   case 7460:
				   this->label_silver->Text = L"7460";
				   break;
			   case 7470:
				   this->label_silver->Text = L"7470";
				   break;
			   case 7480:
				   this->label_silver->Text = L"7480";
				   break;
			   case 7490:
				   this->label_silver->Text = L"7490";
				   break;
			   case 7500:
				   this->label_silver->Text = L"7500";
				   break;
			   case 7510:
				   this->label_silver->Text = L"7510";
				   break;
			   case 7520:
				   this->label_silver->Text = L"7520";
				   break;
			   case 7530:
				   this->label_silver->Text = L"7530";
				   break;
			   case 7540:
				   this->label_silver->Text = L"7540";
				   break;
			   case 7550:
				   this->label_silver->Text = L"7550";
				   break;
			   case 7560:
				   this->label_silver->Text = L"7560";
				   break;
			   case 7570:
				   this->label_silver->Text = L"7570";
				   break;
			   case 7580:
				   this->label_silver->Text = L"7580";
				   break;
			   case 7590:
				   this->label_silver->Text = L"7590";
				   break;
			   case 7600:
				   this->label_silver->Text = L"7600";
				   break;
			   case 7610:
				   this->label_silver->Text = L"7610";
				   break;
			   case 7620:
				   this->label_silver->Text = L"7620";
				   break;
			   case 7630:
				   this->label_silver->Text = L"7630";
				   break;
			   case 7640:
				   this->label_silver->Text = L"7640";
				   break;
			   case 7650:
				   this->label_silver->Text = L"7650";
				   break;
			   case 7660:
				   this->label_silver->Text = L"7660";
				   break;
			   case 7670:
				   this->label_silver->Text = L"7670";
				   break;
			   case 7680:
				   this->label_silver->Text = L"7680";
				   break;
			   case 7690:
				   this->label_silver->Text = L"7690";
				   break;
			   case 7700:
				   this->label_silver->Text = L"7700";
				   break;
			   case 7710:
				   this->label_silver->Text = L"7710";
				   break;
			   case 7720:
				   this->label_silver->Text = L"7720";
				   break;
			   case 7730:
				   this->label_silver->Text = L"7730";
				   break;
			   case 7740:
				   this->label_silver->Text = L"7740";
				   break;
			   case 7750:
				   this->label_silver->Text = L"7750";
				   break;
			   case 7760:
				   this->label_silver->Text = L"7760";
				   break;
			   case 7770:
				   this->label_silver->Text = L"7770";
				   break;
			   case 7780:
				   this->label_silver->Text = L"7780";
				   break;
			   case 7790:
				   this->label_silver->Text = L"7790";
				   break;
			   case 7800:
				   this->label_silver->Text = L"7800";
				   break;
			   case 7810:
				   this->label_silver->Text = L"7810";
				   break;
			   case 7820:
				   this->label_silver->Text = L"7820";
				   break;
			   case 7830:
				   this->label_silver->Text = L"7830";
				   break;
			   case 7840:
				   this->label_silver->Text = L"7840";
				   break;
			   case 7850:
				   this->label_silver->Text = L"7850";
				   break;
			   case 7860:
				   this->label_silver->Text = L"7860";
				   break;
			   case 7870:
				   this->label_silver->Text = L"7870";
				   break;
			   case 7880:
				   this->label_silver->Text = L"7880";
				   break;
			   case 7890:
				   this->label_silver->Text = L"7890";
				   break;
			   case 7900:
				   this->label_silver->Text = L"7900";
				   break;
			   case 7910:
				   this->label_silver->Text = L"7910";
				   break;
			   case 7920:
				   this->label_silver->Text = L"7920";
				   break;
			   case 7930:
				   this->label_silver->Text = L"7930";
				   break;
			   case 7940:
				   this->label_silver->Text = L"7940";
				   break;
			   case 7950:
				   this->label_silver->Text = L"7950";
				   break;
			   case 7960:
				   this->label_silver->Text = L"7960";
				   break;
			   case 7970:
				   this->label_silver->Text = L"7970";
				   break;
			   case 7980:
				   this->label_silver->Text = L"7980";
				   break;
			   case 7990:
				   this->label_silver->Text = L"7990";
				   break;
			   case 8000:
				   this->label_silver->Text = L"8000";
				   break;

			   default:
				   if (radioButtonLanguage_Rus->Checked) this->label_silver->Text = L">8000"; else this->label_silver->Text = L">8000";
				   break;
			   }
			   //level
			   if (language)
				   switch (level)
				   {
				   case 0:
					   this->label_LEVEL->Text = L" Level 0";
					   break;
				   case 1:
					   this->label_LEVEL->Text = L" Level 1";
					   break;
				   case 2:
					   this->label_LEVEL->Text = L" Level 2";
					   break;
				   case 3:
					   this->label_LEVEL->Text = L" Level 3";
					   break;
				   case 4:
					   this->label_LEVEL->Text = L" Level 4";
					   break;
				   case 5:
					   this->label_LEVEL->Text = L" Level 5";
					   break;
				   case 6:
					   this->label_LEVEL->Text = L" Level 6";
					   break;
				   case 7:
					   this->label_LEVEL->Text = L" Level 7";
					   break;
				   case 8:
					   this->label_LEVEL->Text = L" Level 8";
					   break;
				   case 9:
					   this->label_LEVEL->Text = L" Level 9";
					   break;
				   case 10:
					   this->label_LEVEL->Text = L" Level 10";
					   break;
				   case 11:
					   this->label_LEVEL->Text = L" Level 11";
					   break;
				   case 12:
					   this->label_LEVEL->Text = L" Level 12";
					   break;
				   case 13:
					   this->label_LEVEL->Text = L" Level 13";
					   break;
				   case 14:
					   this->label_LEVEL->Text = L" Level 14";
					   break;
				   case 15:
					   this->label_LEVEL->Text = L" Level 15";
					   break;
				   case 16:
					   this->label_LEVEL->Text = L" Level 16";
					   break;
				   case 17:
					   this->label_LEVEL->Text = L" Level 17";
					   break;
				   case 18:
					   this->label_LEVEL->Text = L" Level 18";
					   break;
				   case 19:
					   this->label_LEVEL->Text = L" Level 19";
					   break;
				   case 20:
					   this->label_LEVEL->Text = L" Level 20";
					   break;
				   case 21:
					   this->label_LEVEL->Text = L" Level 21";
					   break;
				   case 22:
					   this->label_LEVEL->Text = L" Level 22";
					   break;
				   case 23:
					   this->label_LEVEL->Text = L" Level 23";
					   break;
				   case 24:
					   this->label_LEVEL->Text = L" Level 24";
					   break;
				   case 25:
					   this->label_LEVEL->Text = L" Level 25";
					   break;
				   case 26:
					   this->label_LEVEL->Text = L" Level 26";
					   break;
				   case 27:
					   this->label_LEVEL->Text = L" Level 27";
					   break;
				   case 28:
					   this->label_LEVEL->Text = L" Level 28";
					   break;
				   case 29:
					   this->label_LEVEL->Text = L" Level 29";
					   break;
				   case 30:
					   this->label_LEVEL->Text = L" Level 30";
					   break;
				   case 31:
					   this->label_LEVEL->Text = L" Level 31";
					   break;
				   case 32:
					   this->label_LEVEL->Text = L" Level 32";
					   break;
				   case 33:
					   this->label_LEVEL->Text = L" Level 33";
					   break;
				   case 34:
					   this->label_LEVEL->Text = L" Level 34";
					   break;
				   case 35:
					   this->label_LEVEL->Text = L" Level 35";
					   break;
				   case 36:
					   this->label_LEVEL->Text = L" Level 36";
					   break;
				   case 37:
					   this->label_LEVEL->Text = L" Level 37";
					   break;
				   case 38:
					   this->label_LEVEL->Text = L" Level 38";
					   break;
				   case 39:
					   this->label_LEVEL->Text = L" Level 39";
					   break;
				   case 40:
					   this->label_LEVEL->Text = L" Level 40";
					   break;
				   case 41:
					   this->label_LEVEL->Text = L" Level 41";
					   break;
				   case 42:
					   this->label_LEVEL->Text = L" Level 42";
					   break;
				   case 43:
					   this->label_LEVEL->Text = L" Level 43";
					   break;
				   case 44:
					   this->label_LEVEL->Text = L" Level 44";
					   break;
				   case 45:
					   this->label_LEVEL->Text = L" Level 45";
					   break;
				   case 46:
					   this->label_LEVEL->Text = L" Level 46";
					   break;
				   case 47:
					   this->label_LEVEL->Text = L" Level 47";
					   break;
				   case 48:
					   this->label_LEVEL->Text = L" Level 48";
					   break;
				   case 49:
					   this->label_LEVEL->Text = L" Level 49";
					   break;
				   case 50:
					   this->label_LEVEL->Text = L" Level 50";
					   break;
				   case 51:
					   this->label_LEVEL->Text = L" Level 51";
					   break;
				   case 52:
					   this->label_LEVEL->Text = L" Level 52";
					   break;
				   case 53:
					   this->label_LEVEL->Text = L" Level 53";
					   break;
				   case 54:
					   this->label_LEVEL->Text = L" Level 54";
					   break;
				   case 55:
					   this->label_LEVEL->Text = L" Level 55";
					   break;
				   case 56:
					   this->label_LEVEL->Text = L" Level 56";
					   break;
				   case 57:
					   this->label_LEVEL->Text = L" Level 57";
					   break;
				   case 58:
					   this->label_LEVEL->Text = L" Level 58";
					   break;
				   case 59:
					   this->label_LEVEL->Text = L" Level 59";
					   break;
				   case 60:
					   this->label_LEVEL->Text = L" Level 60";
					   break;
				   case 61:
					   this->label_LEVEL->Text = L" Level 61";
					   break;
				   case 62:
					   this->label_LEVEL->Text = L" Level 62";
					   break;
				   case 63:
					   this->label_LEVEL->Text = L" Level 63";
					   break;
				   case 64:
					   this->label_LEVEL->Text = L" Level 64";
					   break;
				   case 65:
					   this->label_LEVEL->Text = L" Level 65";
					   break;
				   case 66:
					   this->label_LEVEL->Text = L" Level 66";
					   break;
				   case 67:
					   this->label_LEVEL->Text = L" Level 67";
					   break;
				   case 68:
					   this->label_LEVEL->Text = L" Level 68";
					   break;
				   case 69:
					   this->label_LEVEL->Text = L" Level 69";
					   break;
				   case 70:
					   this->label_LEVEL->Text = L" Level 70";
					   break;
				   case 71:
					   this->label_LEVEL->Text = L" Level 71";
					   break;
				   case 72:
					   this->label_LEVEL->Text = L" Level 72";
					   break;
				   case 73:
					   this->label_LEVEL->Text = L" Level 73";
					   break;
				   case 74:
					   this->label_LEVEL->Text = L" Level 74";
					   break;
				   case 75:
					   this->label_LEVEL->Text = L" Level 75";
					   break;
				   case 76:
					   this->label_LEVEL->Text = L" Level 76";
					   break;
				   case 77:
					   this->label_LEVEL->Text = L" Level 77";
					   break;
				   case 78:
					   this->label_LEVEL->Text = L" Level 78";
					   break;
				   case 79:
					   this->label_LEVEL->Text = L" Level 79";
					   break;
				   case 80:
					   this->label_LEVEL->Text = L" Level 80";
					   break;
				   case 81:
					   this->label_LEVEL->Text = L" Level 81";
					   break;
				   case 82:
					   this->label_LEVEL->Text = L" Level 82";
					   break;
				   case 83:
					   this->label_LEVEL->Text = L" Level 83";
					   break;
				   case 84:
					   this->label_LEVEL->Text = L" Level 84";
					   break;
				   case 85:
					   this->label_LEVEL->Text = L" Level 85";
					   break;
				   case 86:
					   this->label_LEVEL->Text = L" Level 86";
					   break;
				   case 87:
					   this->label_LEVEL->Text = L" Level 87";
					   break;
				   case 88:
					   this->label_LEVEL->Text = L" Level 88";
					   break;
				   case 89:
					   this->label_LEVEL->Text = L" Level 89";
					   break;
				   case 90:
					   this->label_LEVEL->Text = L" Level 90";
					   break;
				   case 91:
					   this->label_LEVEL->Text = L" Level 91";
					   break;
				   case 92:
					   this->label_LEVEL->Text = L" Level 92";
					   break;
				   case 93:
					   this->label_LEVEL->Text = L" Level 93";
					   break;
				   case 94:
					   this->label_LEVEL->Text = L" Level 94";
					   break;
				   case 95:
					   this->label_LEVEL->Text = L" Level 95";
					   break;
				   case 96:
					   this->label_LEVEL->Text = L" Level 96";
					   break;
				   case 97:
					   this->label_LEVEL->Text = L" Level 97";
					   break;
				   case 98:
					   this->label_LEVEL->Text = L" Level 98";
					   break;
				   case 99:
					   this->label_LEVEL->Text = L" Level 99";
					   break;
				   case 100:
					   this->label_LEVEL->Text = L" Level 100";
					   break;
				   case 101:
					   this->label_LEVEL->Text = L" Level 101";
					   break;
				   case 102:
					   this->label_LEVEL->Text = L" Level 102";
					   break;
				   case 103:
					   this->label_LEVEL->Text = L" Level 103";
					   break;
				   case 104:
					   this->label_LEVEL->Text = L" Level 104";
					   break;
				   case 105:
					   this->label_LEVEL->Text = L" Level 105";
					   break;
				   case 106:
					   this->label_LEVEL->Text = L" Level 106";
					   break;
				   case 107:
					   this->label_LEVEL->Text = L" Level 107";
					   break;
				   case 108:
					   this->label_LEVEL->Text = L" Level 108";
					   break;
				   case 109:
					   this->label_LEVEL->Text = L" Level 109";
					   break;
				   case 110:
					   this->label_LEVEL->Text = L" Level 110";
					   break;
				   case 111:
					   this->label_LEVEL->Text = L" Level 111";
					   break;
				   case 112:
					   this->label_LEVEL->Text = L" Level 112";
					   break;
				   case 113:
					   this->label_LEVEL->Text = L" Level 113";
					   break;
				   case 114:
					   this->label_LEVEL->Text = L" Level 114";
					   break;
				   case 115:
					   this->label_LEVEL->Text = L" Level 115";
					   break;
				   case 116:
					   this->label_LEVEL->Text = L" Level 116";
					   break;
				   case 117:
					   this->label_LEVEL->Text = L" Level 117";
					   break;
				   case 118:
					   this->label_LEVEL->Text = L" Level 118";
					   break;
				   case 119:
					   this->label_LEVEL->Text = L" Level 119";
					   break;
				   case 120:
					   this->label_LEVEL->Text = L" Level 120";
					   break;
				   case 121:
					   this->label_LEVEL->Text = L" Level 121";
					   break;
				   case 122:
					   this->label_LEVEL->Text = L" Level 122";
					   break;
				   case 123:
					   this->label_LEVEL->Text = L" Level 123";
					   break;
				   case 124:
					   this->label_LEVEL->Text = L" Level 124";
					   break;
				   case 125:
					   this->label_LEVEL->Text = L" Level 125";
					   break;
				   case 126:
					   this->label_LEVEL->Text = L" Level 126";
					   break;
				   case 127:
					   this->label_LEVEL->Text = L" Level 127";
					   break;
				   case 128:
					   this->label_LEVEL->Text = L" Level 128";
					   break;
				   case 129:
					   this->label_LEVEL->Text = L" Level 129";
					   break;
				   case 130:
					   this->label_LEVEL->Text = L" Level 130";
					   break;
				   case 131:
					   this->label_LEVEL->Text = L" Level 131";
					   break;
				   case 132:
					   this->label_LEVEL->Text = L" Level 132";
					   break;
				   case 133:
					   this->label_LEVEL->Text = L" Level 133";
					   break;
				   case 134:
					   this->label_LEVEL->Text = L" Level 134";
					   break;
				   case 135:
					   this->label_LEVEL->Text = L" Level 135";
					   break;
				   case 136:
					   this->label_LEVEL->Text = L" Level 136";
					   break;
				   case 137:
					   this->label_LEVEL->Text = L" Level 137";
					   break;
				   case 138:
					   this->label_LEVEL->Text = L" Level 138";
					   break;
				   case 139:
					   this->label_LEVEL->Text = L" Level 139";
					   break;
				   case 140:
					   this->label_LEVEL->Text = L" Level 140";
					   break;
				   case 141:
					   this->label_LEVEL->Text = L" Level 141";
					   break;
				   case 142:
					   this->label_LEVEL->Text = L" Level 142";
					   break;
				   case 143:
					   this->label_LEVEL->Text = L" Level 143";
					   break;
				   case 144:
					   this->label_LEVEL->Text = L" Level 144";
					   break;
				   case 145:
					   this->label_LEVEL->Text = L" Level 145";
					   break;
				   case 146:
					   this->label_LEVEL->Text = L" Level 146";
					   break;
				   case 147:
					   this->label_LEVEL->Text = L" Level 147";
					   break;
				   case 148:
					   this->label_LEVEL->Text = L" Level 148";
					   break;
				   case 149:
					   this->label_LEVEL->Text = L" Level 149";
					   break;
				   case 150:
					   this->label_LEVEL->Text = L" Level 150";
					   break;
				   case 151:
					   this->label_LEVEL->Text = L" Level 151";
					   break;
				   case 152:
					   this->label_LEVEL->Text = L" Level 152";
					   break;
				   case 153:
					   this->label_LEVEL->Text = L" Level 153";
					   break;
				   case 154:
					   this->label_LEVEL->Text = L" Level 154";
					   break;
				   case 155:
					   this->label_LEVEL->Text = L" Level 155";
					   break;
				   case 156:
					   this->label_LEVEL->Text = L" Level 156";
					   break;
				   case 157:
					   this->label_LEVEL->Text = L" Level 157";
					   break;
				   case 158:
					   this->label_LEVEL->Text = L" Level 158";
					   break;
				   case 159:
					   this->label_LEVEL->Text = L" Level 159";
					   break;
				   case 160:
					   this->label_LEVEL->Text = L" Level 160";
					   break;
				   case 161:
					   this->label_LEVEL->Text = L" Level 161";
					   break;
				   case 162:
					   this->label_LEVEL->Text = L" Level 162";
					   break;
				   case 163:
					   this->label_LEVEL->Text = L" Level 163";
					   break;
				   case 164:
					   this->label_LEVEL->Text = L" Level 164";
					   break;
				   case 165:
					   this->label_LEVEL->Text = L" Level 165";
					   break;
				   case 166:
					   this->label_LEVEL->Text = L" Level 166";
					   break;
				   case 167:
					   this->label_LEVEL->Text = L" Level 167";
					   break;
				   case 168:
					   this->label_LEVEL->Text = L" Level 168";
					   break;
				   case 169:
					   this->label_LEVEL->Text = L" Level 169";
					   break;
				   case 170:
					   this->label_LEVEL->Text = L" Level 170";
					   break;
				   case 171:
					   this->label_LEVEL->Text = L" Level 171";
					   break;
				   case 172:
					   this->label_LEVEL->Text = L" Level 172";
					   break;
				   case 173:
					   this->label_LEVEL->Text = L" Level 173";
					   break;
				   case 174:
					   this->label_LEVEL->Text = L" Level 174";
					   break;
				   case 175:
					   this->label_LEVEL->Text = L" Level 175";
					   break;
				   case 176:
					   this->label_LEVEL->Text = L" Level 176";
					   break;
				   case 177:
					   this->label_LEVEL->Text = L" Level 177";
					   break;
				   case 178:
					   this->label_LEVEL->Text = L" Level 178";
					   break;
				   case 179:
					   this->label_LEVEL->Text = L" Level 179";
					   break;
				   case 180:
					   this->label_LEVEL->Text = L" Level 180";
					   break;
				   case 181:
					   this->label_LEVEL->Text = L" Level 181";
					   break;
				   case 182:
					   this->label_LEVEL->Text = L" Level 182";
					   break;
				   case 183:
					   this->label_LEVEL->Text = L" Level 183";
					   break;
				   case 184:
					   this->label_LEVEL->Text = L" Level 184";
					   break;
				   case 185:
					   this->label_LEVEL->Text = L" Level 185";
					   break;
				   case 186:
					   this->label_LEVEL->Text = L" Level 186";
					   break;
				   case 187:
					   this->label_LEVEL->Text = L" Level 187";
					   break;
				   case 188:
					   this->label_LEVEL->Text = L" Level 188";
					   break;
				   case 189:
					   this->label_LEVEL->Text = L" Level 189";
					   break;
				   case 190:
					   this->label_LEVEL->Text = L" Level 190";
					   break;
				   case 191:
					   this->label_LEVEL->Text = L" Level 191";
					   break;
				   case 192:
					   this->label_LEVEL->Text = L" Level 192";
					   break;
				   case 193:
					   this->label_LEVEL->Text = L" Level 193";
					   break;
				   case 194:
					   this->label_LEVEL->Text = L" Level 194";
					   break;
				   case 195:
					   this->label_LEVEL->Text = L" Level 195";
					   break;
				   case 196:
					   this->label_LEVEL->Text = L" Level 196";
					   break;
				   case 197:
					   this->label_LEVEL->Text = L" Level 197";
					   break;
				   case 198:
					   this->label_LEVEL->Text = L" Level 198";
					   break;
				   case 199:
					   this->label_LEVEL->Text = L" Level 199";
					   break;
				   case 200:
					   this->label_LEVEL->Text = L" Level 200";
					   break;

				   default:
					   if (radioButtonLanguage_Rus->Checked) this->label_LEVEL->Text = L">200"; else this->label_LEVEL->Text = L">200";
					   break;
				   }
			   else
				   switch (level)
				   {
				   case 0:
					   this->label_LEVEL->Text = L"Уровень 0";
					   break;
				   case 1:
					   this->label_LEVEL->Text = L"Уровень 1";
					   break;
				   case 2:
					   this->label_LEVEL->Text = L"Уровень 2";
					   break;
				   case 3:
					   this->label_LEVEL->Text = L"Уровень 3";
					   break;
				   case 4:
					   this->label_LEVEL->Text = L"Уровень 4";
					   break;
				   case 5:
					   this->label_LEVEL->Text = L"Уровень 5";
					   break;
				   case 6:
					   this->label_LEVEL->Text = L"Уровень 6";
					   break;
				   case 7:
					   this->label_LEVEL->Text = L"Уровень 7";
					   break;
				   case 8:
					   this->label_LEVEL->Text = L"Уровень 8";
					   break;
				   case 9:
					   this->label_LEVEL->Text = L"Уровень 9";
					   break;
				   case 10:
					   this->label_LEVEL->Text = L"Уровень 10";
					   break;
				   case 11:
					   this->label_LEVEL->Text = L"Уровень 11";
					   break;
				   case 12:
					   this->label_LEVEL->Text = L"Уровень 12";
					   break;
				   case 13:
					   this->label_LEVEL->Text = L"Уровень 13";
					   break;
				   case 14:
					   this->label_LEVEL->Text = L"Уровень 14";
					   break;
				   case 15:
					   this->label_LEVEL->Text = L"Уровень 15";
					   break;
				   case 16:
					   this->label_LEVEL->Text = L"Уровень 16";
					   break;
				   case 17:
					   this->label_LEVEL->Text = L"Уровень 17";
					   break;
				   case 18:
					   this->label_LEVEL->Text = L"Уровень 18";
					   break;
				   case 19:
					   this->label_LEVEL->Text = L"Уровень 19";
					   break;
				   case 20:
					   this->label_LEVEL->Text = L"Уровень 20";
					   break;
				   case 21:
					   this->label_LEVEL->Text = L"Уровень 21";
					   break;
				   case 22:
					   this->label_LEVEL->Text = L"Уровень 22";
					   break;
				   case 23:
					   this->label_LEVEL->Text = L"Уровень 23";
					   break;
				   case 24:
					   this->label_LEVEL->Text = L"Уровень 24";
					   break;
				   case 25:
					   this->label_LEVEL->Text = L"Уровень 25";
					   break;
				   case 26:
					   this->label_LEVEL->Text = L"Уровень 26";
					   break;
				   case 27:
					   this->label_LEVEL->Text = L"Уровень 27";
					   break;
				   case 28:
					   this->label_LEVEL->Text = L"Уровень 28";
					   break;
				   case 29:
					   this->label_LEVEL->Text = L"Уровень 29";
					   break;
				   case 30:
					   this->label_LEVEL->Text = L"Уровень 30";
					   break;
				   case 31:
					   this->label_LEVEL->Text = L"Уровень 31";
					   break;
				   case 32:
					   this->label_LEVEL->Text = L"Уровень 32";
					   break;
				   case 33:
					   this->label_LEVEL->Text = L"Уровень 33";
					   break;
				   case 34:
					   this->label_LEVEL->Text = L"Уровень 34";
					   break;
				   case 35:
					   this->label_LEVEL->Text = L"Уровень 35";
					   break;
				   case 36:
					   this->label_LEVEL->Text = L"Уровень 36";
					   break;
				   case 37:
					   this->label_LEVEL->Text = L"Уровень 37";
					   break;
				   case 38:
					   this->label_LEVEL->Text = L"Уровень 38";
					   break;
				   case 39:
					   this->label_LEVEL->Text = L"Уровень 39";
					   break;
				   case 40:
					   this->label_LEVEL->Text = L"Уровень 40";
					   break;
				   case 41:
					   this->label_LEVEL->Text = L"Уровень 41";
					   break;
				   case 42:
					   this->label_LEVEL->Text = L"Уровень 42";
					   break;
				   case 43:
					   this->label_LEVEL->Text = L"Уровень 43";
					   break;
				   case 44:
					   this->label_LEVEL->Text = L"Уровень 44";
					   break;
				   case 45:
					   this->label_LEVEL->Text = L"Уровень 45";
					   break;
				   case 46:
					   this->label_LEVEL->Text = L"Уровень 46";
					   break;
				   case 47:
					   this->label_LEVEL->Text = L"Уровень 47";
					   break;
				   case 48:
					   this->label_LEVEL->Text = L"Уровень 48";
					   break;
				   case 49:
					   this->label_LEVEL->Text = L"Уровень 49";
					   break;
				   case 50:
					   this->label_LEVEL->Text = L"Уровень 50";
					   break;
				   case 51:
					   this->label_LEVEL->Text = L"Уровень 51";
					   break;
				   case 52:
					   this->label_LEVEL->Text = L"Уровень 52";
					   break;
				   case 53:
					   this->label_LEVEL->Text = L"Уровень 53";
					   break;
				   case 54:
					   this->label_LEVEL->Text = L"Уровень 54";
					   break;
				   case 55:
					   this->label_LEVEL->Text = L"Уровень 55";
					   break;
				   case 56:
					   this->label_LEVEL->Text = L"Уровень 56";
					   break;
				   case 57:
					   this->label_LEVEL->Text = L"Уровень 57";
					   break;
				   case 58:
					   this->label_LEVEL->Text = L"Уровень 58";
					   break;
				   case 59:
					   this->label_LEVEL->Text = L"Уровень 59";
					   break;
				   case 60:
					   this->label_LEVEL->Text = L"Уровень 60";
					   break;
				   case 61:
					   this->label_LEVEL->Text = L"Уровень 61";
					   break;
				   case 62:
					   this->label_LEVEL->Text = L"Уровень 62";
					   break;
				   case 63:
					   this->label_LEVEL->Text = L"Уровень 63";
					   break;
				   case 64:
					   this->label_LEVEL->Text = L"Уровень 64";
					   break;
				   case 65:
					   this->label_LEVEL->Text = L"Уровень 65";
					   break;
				   case 66:
					   this->label_LEVEL->Text = L"Уровень 66";
					   break;
				   case 67:
					   this->label_LEVEL->Text = L"Уровень 67";
					   break;
				   case 68:
					   this->label_LEVEL->Text = L"Уровень 68";
					   break;
				   case 69:
					   this->label_LEVEL->Text = L"Уровень 69";
					   break;
				   case 70:
					   this->label_LEVEL->Text = L"Уровень 70";
					   break;
				   case 71:
					   this->label_LEVEL->Text = L"Уровень 71";
					   break;
				   case 72:
					   this->label_LEVEL->Text = L"Уровень 72";
					   break;
				   case 73:
					   this->label_LEVEL->Text = L"Уровень 73";
					   break;
				   case 74:
					   this->label_LEVEL->Text = L"Уровень 74";
					   break;
				   case 75:
					   this->label_LEVEL->Text = L"Уровень 75";
					   break;
				   case 76:
					   this->label_LEVEL->Text = L"Уровень 76";
					   break;
				   case 77:
					   this->label_LEVEL->Text = L"Уровень 77";
					   break;
				   case 78:
					   this->label_LEVEL->Text = L"Уровень 78";
					   break;
				   case 79:
					   this->label_LEVEL->Text = L"Уровень 79";
					   break;
				   case 80:
					   this->label_LEVEL->Text = L"Уровень 80";
					   break;
				   case 81:
					   this->label_LEVEL->Text = L"Уровень 81";
					   break;
				   case 82:
					   this->label_LEVEL->Text = L"Уровень 82";
					   break;
				   case 83:
					   this->label_LEVEL->Text = L"Уровень 83";
					   break;
				   case 84:
					   this->label_LEVEL->Text = L"Уровень 84";
					   break;
				   case 85:
					   this->label_LEVEL->Text = L"Уровень 85";
					   break;
				   case 86:
					   this->label_LEVEL->Text = L"Уровень 86";
					   break;
				   case 87:
					   this->label_LEVEL->Text = L"Уровень 87";
					   break;
				   case 88:
					   this->label_LEVEL->Text = L"Уровень 88";
					   break;
				   case 89:
					   this->label_LEVEL->Text = L"Уровень 89";
					   break;
				   case 90:
					   this->label_LEVEL->Text = L"Уровень 90";
					   break;
				   case 91:
					   this->label_LEVEL->Text = L"Уровень 91";
					   break;
				   case 92:
					   this->label_LEVEL->Text = L"Уровень 92";
					   break;
				   case 93:
					   this->label_LEVEL->Text = L"Уровень 93";
					   break;
				   case 94:
					   this->label_LEVEL->Text = L"Уровень 94";
					   break;
				   case 95:
					   this->label_LEVEL->Text = L"Уровень 95";
					   break;
				   case 96:
					   this->label_LEVEL->Text = L"Уровень 96";
					   break;
				   case 97:
					   this->label_LEVEL->Text = L"Уровень 97";
					   break;
				   case 98:
					   this->label_LEVEL->Text = L"Уровень 98";
					   break;
				   case 99:
					   this->label_LEVEL->Text = L"Уровень 99";
					   break;
				   case 100:
					   this->label_LEVEL->Text = L"Уровень 100";
					   break;
				   case 101:
					   this->label_LEVEL->Text = L"Уровень 101";
					   break;
				   case 102:
					   this->label_LEVEL->Text = L"Уровень 102";
					   break;
				   case 103:
					   this->label_LEVEL->Text = L"Уровень 103";
					   break;
				   case 104:
					   this->label_LEVEL->Text = L"Уровень 104";
					   break;
				   case 105:
					   this->label_LEVEL->Text = L"Уровень 105";
					   break;
				   case 106:
					   this->label_LEVEL->Text = L"Уровень 106";
					   break;
				   case 107:
					   this->label_LEVEL->Text = L"Уровень 107";
					   break;
				   case 108:
					   this->label_LEVEL->Text = L"Уровень 108";
					   break;
				   case 109:
					   this->label_LEVEL->Text = L"Уровень 109";
					   break;
				   case 110:
					   this->label_LEVEL->Text = L"Уровень 110";
					   break;
				   case 111:
					   this->label_LEVEL->Text = L"Уровень 111";
					   break;
				   case 112:
					   this->label_LEVEL->Text = L"Уровень 112";
					   break;
				   case 113:
					   this->label_LEVEL->Text = L"Уровень 113";
					   break;
				   case 114:
					   this->label_LEVEL->Text = L"Уровень 114";
					   break;
				   case 115:
					   this->label_LEVEL->Text = L"Уровень 115";
					   break;
				   case 116:
					   this->label_LEVEL->Text = L"Уровень 116";
					   break;
				   case 117:
					   this->label_LEVEL->Text = L"Уровень 117";
					   break;
				   case 118:
					   this->label_LEVEL->Text = L"Уровень 118";
					   break;
				   case 119:
					   this->label_LEVEL->Text = L"Уровень 119";
					   break;
				   case 120:
					   this->label_LEVEL->Text = L"Уровень 120";
					   break;
				   case 121:
					   this->label_LEVEL->Text = L"Уровень 121";
					   break;
				   case 122:
					   this->label_LEVEL->Text = L"Уровень 122";
					   break;
				   case 123:
					   this->label_LEVEL->Text = L"Уровень 123";
					   break;
				   case 124:
					   this->label_LEVEL->Text = L"Уровень 124";
					   break;
				   case 125:
					   this->label_LEVEL->Text = L"Уровень 125";
					   break;
				   case 126:
					   this->label_LEVEL->Text = L"Уровень 126";
					   break;
				   case 127:
					   this->label_LEVEL->Text = L"Уровень 127";
					   break;
				   case 128:
					   this->label_LEVEL->Text = L"Уровень 128";
					   break;
				   case 129:
					   this->label_LEVEL->Text = L"Уровень 129";
					   break;
				   case 130:
					   this->label_LEVEL->Text = L"Уровень 130";
					   break;
				   case 131:
					   this->label_LEVEL->Text = L"Уровень 131";
					   break;
				   case 132:
					   this->label_LEVEL->Text = L"Уровень 132";
					   break;
				   case 133:
					   this->label_LEVEL->Text = L"Уровень 133";
					   break;
				   case 134:
					   this->label_LEVEL->Text = L"Уровень 134";
					   break;
				   case 135:
					   this->label_LEVEL->Text = L"Уровень 135";
					   break;
				   case 136:
					   this->label_LEVEL->Text = L"Уровень 136";
					   break;
				   case 137:
					   this->label_LEVEL->Text = L"Уровень 137";
					   break;
				   case 138:
					   this->label_LEVEL->Text = L"Уровень 138";
					   break;
				   case 139:
					   this->label_LEVEL->Text = L"Уровень 139";
					   break;
				   case 140:
					   this->label_LEVEL->Text = L"Уровень 140";
					   break;
				   case 141:
					   this->label_LEVEL->Text = L"Уровень 141";
					   break;
				   case 142:
					   this->label_LEVEL->Text = L"Уровень 142";
					   break;
				   case 143:
					   this->label_LEVEL->Text = L"Уровень 143";
					   break;
				   case 144:
					   this->label_LEVEL->Text = L"Уровень 144";
					   break;
				   case 145:
					   this->label_LEVEL->Text = L"Уровень 145";
					   break;
				   case 146:
					   this->label_LEVEL->Text = L"Уровень 146";
					   break;
				   case 147:
					   this->label_LEVEL->Text = L"Уровень 147";
					   break;
				   case 148:
					   this->label_LEVEL->Text = L"Уровень 148";
					   break;
				   case 149:
					   this->label_LEVEL->Text = L"Уровень 149";
					   break;
				   case 150:
					   this->label_LEVEL->Text = L"Уровень 150";
					   break;
				   case 151:
					   this->label_LEVEL->Text = L"Уровень 151";
					   break;
				   case 152:
					   this->label_LEVEL->Text = L"Уровень 152";
					   break;
				   case 153:
					   this->label_LEVEL->Text = L"Уровень 153";
					   break;
				   case 154:
					   this->label_LEVEL->Text = L"Уровень 154";
					   break;
				   case 155:
					   this->label_LEVEL->Text = L"Уровень 155";
					   break;
				   case 156:
					   this->label_LEVEL->Text = L"Уровень 156";
					   break;
				   case 157:
					   this->label_LEVEL->Text = L"Уровень 157";
					   break;
				   case 158:
					   this->label_LEVEL->Text = L"Уровень 158";
					   break;
				   case 159:
					   this->label_LEVEL->Text = L"Уровень 159";
					   break;
				   case 160:
					   this->label_LEVEL->Text = L"Уровень 160";
					   break;
				   case 161:
					   this->label_LEVEL->Text = L"Уровень 161";
					   break;
				   case 162:
					   this->label_LEVEL->Text = L"Уровень 162";
					   break;
				   case 163:
					   this->label_LEVEL->Text = L"Уровень 163";
					   break;
				   case 164:
					   this->label_LEVEL->Text = L"Уровень 164";
					   break;
				   case 165:
					   this->label_LEVEL->Text = L"Уровень 165";
					   break;
				   case 166:
					   this->label_LEVEL->Text = L"Уровень 166";
					   break;
				   case 167:
					   this->label_LEVEL->Text = L"Уровень 167";
					   break;
				   case 168:
					   this->label_LEVEL->Text = L"Уровень 168";
					   break;
				   case 169:
					   this->label_LEVEL->Text = L"Уровень 169";
					   break;
				   case 170:
					   this->label_LEVEL->Text = L"Уровень 170";
					   break;
				   case 171:
					   this->label_LEVEL->Text = L"Уровень 171";
					   break;
				   case 172:
					   this->label_LEVEL->Text = L"Уровень 172";
					   break;
				   case 173:
					   this->label_LEVEL->Text = L"Уровень 173";
					   break;
				   case 174:
					   this->label_LEVEL->Text = L"Уровень 174";
					   break;
				   case 175:
					   this->label_LEVEL->Text = L"Уровень 175";
					   break;
				   case 176:
					   this->label_LEVEL->Text = L"Уровень 176";
					   break;
				   case 177:
					   this->label_LEVEL->Text = L"Уровень 177";
					   break;
				   case 178:
					   this->label_LEVEL->Text = L"Уровень 178";
					   break;
				   case 179:
					   this->label_LEVEL->Text = L"Уровень 179";
					   break;
				   case 180:
					   this->label_LEVEL->Text = L"Уровень 180";
					   break;
				   case 181:
					   this->label_LEVEL->Text = L"Уровень 181";
					   break;
				   case 182:
					   this->label_LEVEL->Text = L"Уровень 182";
					   break;
				   case 183:
					   this->label_LEVEL->Text = L"Уровень 183";
					   break;
				   case 184:
					   this->label_LEVEL->Text = L"Уровень 184";
					   break;
				   case 185:
					   this->label_LEVEL->Text = L"Уровень 185";
					   break;
				   case 186:
					   this->label_LEVEL->Text = L"Уровень 186";
					   break;
				   case 187:
					   this->label_LEVEL->Text = L"Уровень 187";
					   break;
				   case 188:
					   this->label_LEVEL->Text = L"Уровень 188";
					   break;
				   case 189:
					   this->label_LEVEL->Text = L"Уровень 189";
					   break;
				   case 190:
					   this->label_LEVEL->Text = L"Уровень 190";
					   break;
				   case 191:
					   this->label_LEVEL->Text = L"Уровень 191";
					   break;
				   case 192:
					   this->label_LEVEL->Text = L"Уровень 192";
					   break;
				   case 193:
					   this->label_LEVEL->Text = L"Уровень 193";
					   break;
				   case 194:
					   this->label_LEVEL->Text = L"Уровень 194";
					   break;
				   case 195:
					   this->label_LEVEL->Text = L"Уровень 195";
					   break;
				   case 196:
					   this->label_LEVEL->Text = L"Уровень 196";
					   break;
				   case 197:
					   this->label_LEVEL->Text = L"Уровень 197";
					   break;
				   case 198:
					   this->label_LEVEL->Text = L"Уровень 198";
					   break;
				   case 199:
					   this->label_LEVEL->Text = L"Уровень 199";
					   break;
				   case 200:
					   this->label_LEVEL->Text = L"Уровень 200";
					   break;

				   default:
					   if (radioButtonLanguage_Rus->Checked) this->label_LEVEL->Text = L">200"; else this->label_LEVEL->Text = L">200";
					   break;
				   }

		   }
	private: System::Void pictureButtDownload_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!loading_data()) MessageBox::Show("Ошибка чтения сохранений!\n Error reading saves!", "!ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		else {
			loading_data();
			if (sounds)WinExec("good.exe", 1);
		}
	}
	private: System::Void labelButtDownload_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!loading_data()) MessageBox::Show("Ошибка чтения сохранений!\n Error reading saves!", "!ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		else {
			loading_data();
			if (sounds)WinExec("good.exe", 1);
		}
	}

	private: System::Void radioButton_easy_difficulty_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		difficulty = 1;
	}
	private: System::Void radioButton_moderate_difficulty_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		difficulty = 2;
	}
	private: System::Void radioButton_difficult_difficulty_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		difficulty = 3;
	}

		   void grabe() {
			   int grabs;
			   grabs = grab(le_protection, difficulty);
			   if (grabs > 1) {
				   if (!language) MessageBox::Show("Внимание! Ваше поселение было ограблено! \n Обратите внимание на оборону.", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk); else MessageBox::Show("Attention! our settlement has been robbed! \n Pay attention to the defense.", "Attention!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			   }
			   if (grabs > silver) silver = 0; else silver = silver - grabs;
			   grabs = 0;
			   save();
			   print_resurs();
		   }






	private: System::Void pictureButt_mainhome_Click(System::Object^ sender, System::EventArgs^ e) {
		SYSTEMTIME st;
		GetLocalTime(&st);
		loading_data();
		if (time_bonus > 27) {
			time_bonus = 1;
		}
		/*	switch (st.wMonth){
				case 1:
					if (st.wDay == 31) time_bonus = 1;
					save();
					break;
				case 2:
					if (st.wDay == 27) time_bonus = 1;
					save();
					break;
				case 3:
					if (st.wDay == 31) time_bonus = 1;
					save();
					break;
				case 4:
					if (st.wDay == 30) time_bonus = 1;
					save();
					break;
				case 5:
					if (st.wDay == 31) time_bonus = 1;
					save();
					break;
				case 6:
					if (st.wDay == 30) time_bonus = 1;
					save();
					break;
				case 7:
					if (st.wDay == 31) time_bonus = 1;
					save();
					break;
				case 8:
					if (st.wDay == 31) time_bonus = 1;
					save();
					break;
				case 9:
					if (st.wDay == 30) time_bonus = 1;
					save();
					break;
				case 10:
					if (st.wDay == 31) time_bonus = 1;
					save();
					break;
				case 11:
					if (st.wDay == 30) time_bonus = 1;
					save();
					break;
				case 12:
					if (st.wDay == 31) time_bonus = 1;
					save();
					break;
			}
		*/
		if (st.wHour >= time_tax && st.wDay > time_bonus) {
			if (!fee) {
				if (le_mainhome == 1) {
					silver += 300;
					wood += 5;
					if (language) MessageBox::Show("Taxes collected:\n  300 silver", "Town Hall level 1", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
					else MessageBox::Show("Налоги собраны:\n  300 серебра", "Ратуша 1ур.", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
					if (language) MessageBox::Show("Daily Bonus:\n  5 wood", "Town Hall level 1", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
					else MessageBox::Show("Ежедневный бонус:\n  5 дерева", "Ратуша 1ур.", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				}
				else if (le_mainhome == 2) {
					silver += 600;
					wood += 10;
					coal += 5;
					if (language) MessageBox::Show("Taxes collected:\n  600 silver", "Town Hall level 2", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
					else MessageBox::Show("Налоги собраны:\n  600 серебра", "Ратуша 2ур.", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
					if (language) MessageBox::Show("Daily Bonus:\n  10 wood\n  5 coal", "Town Hall level 2", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
					else MessageBox::Show("Ежедневный бонус:\n  10 дерева\n  5 угля", "Ратуша 2ур.", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				}
				else if (le_mainhome == 3) {
					silver += 1000;
					wood += 20;
					coal += 8;
					iron += 2;
					if (language) MessageBox::Show("Taxes collected:\n  1000 silver", "Town Hall level 3", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
					else MessageBox::Show("Налоги собраны:\n  1000 серебра", "Ратуша 3ур.", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
					if (language) MessageBox::Show("Daily Bonus:\n  20 wood\n  8 coal\n  2 iron", "Town Hall level 3", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
					else MessageBox::Show("Ежедневный бонус:\n  20 дерева\n  8 угля\n  2 железа", "Ратуша 3ур.", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				}
				else if (le_mainhome == 4) {
					silver += 2000;
					wood += 30;
					coal += 15;
					iron += 5;
					wheat += 5;
					if (language) MessageBox::Show("Taxes collected:\n  2000 silver", "Town Hall level 4", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
					else MessageBox::Show("Налоги собраны:\n  2000 серебра", "Ратуша 4ур.", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
					if (language) MessageBox::Show("Daily Bonus:\n  30 wood\n  15 coal\n  5 iron\n  5 wheat", "Town Hall level 4", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
					else MessageBox::Show("Ежедневный бонус:\n  30 дерева\n  15 угля\n  5 железа\n  5 пшеница", "Ратуша 4ур.", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				}
				else if (le_mainhome == 5) {
					silver += 3800;
					wood += 40;
					coal += 20;
					iron += 10;
					wheat += 10;
					flour += 5;
					if (language) MessageBox::Show("Taxes collected:\n  3800 silver", "Town Hall level 5", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
					else MessageBox::Show("Налоги собраны:\n  3800 серебра", "Ратуша 5ур.", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
					if (language) MessageBox::Show("Daily Bonus:\n  40 wood\n  20 coal\n  10 iron\n  10 wheat\n  5 flour", "Town Hall level 5", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
					else MessageBox::Show("Ежедневный бонус:\n  40 дерева\n  20 угля\n  10 железа\n  10 пшеница\n  5 мука", "Ратуша 5ур.", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				}
				time_tax = st.wHour;
				time_bonus = st.wDay;
				fee = true;
				save();
				print_resurs();
			}
		}
		else {
			fee = 0;
			switch (le_mainhome)
			{
			case 1:
				if (language) MessageBox::Show("Daily bonus and taxes are not collected! Wait!", "Town Hall level 1", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ежедневный бонус и налоги не собраны! Подождите!", "Ратуша 1ур.", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				break;
			case 2:
				if (language) MessageBox::Show("Daily bonus and taxes are not collected! Wait!", "Town Hall level 2", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ежедневный бонус и налоги не собраны! Подождите!", "Ратуша 2ур.", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				break;
			case 3:
				if (language) MessageBox::Show("Daily bonus and taxes are not collected! Wait!", "Town Hall level 3", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ежедневный бонус и налоги не собраны! Подождите!", "Ратуша 3ур.", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				break;
			case 4:
				if (language) MessageBox::Show("Daily bonus and taxes are not collected! Wait!", "Town Hall level 4", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ежедневный бонус и налоги не собраны! Подождите!", "Ратуша 4ур.", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				break;
			case 5:
				if (language) MessageBox::Show("Daily bonus and taxes are not collected! Wait!", "Town Hall level 5", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				else MessageBox::Show("Ежедневный бонус и налоги не собраны! Подождите!", "Ратуша 5ур.", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				break;
			}
		}


	}



	private: System::Void pictureBox2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		WinExec("soun_1.exe", 1);
		loading_data();
		rus();
		Sleep(2000);
		this->pictureBox2->Location = System::Drawing::Point(-1000, -1000);
		WinExec("4.mp4", 1);
	}



		   void task_1() {


			   if (language) {
				   this->label_task_info->Text = L"Collect 10 trees.\n  Get: 50 silver";
			   }
			   else {
				   this->label_task_info->Text = L"Собрать 10 дерева.\n  Получите: 50 серебра";
			   }
			   int st_task1_wood = wood;
			   int fi_task1_wood = st_task1_wood + 10;

		   }











	private: System::Void picture_butt_tasksLOG_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel_task1->Visible = 1;// !this->panel_task1->Visible;
		WinExec("good.ogg", 1);
		if (Task == 0) {
			Task = random(1, 1);

			switch (Task) {
			case 1:
				task_1();
				if (language) {
					this->label_task_info->Text = L"Collect 10 trees.\n  Get: 50 silver";
				}
				else {
					this->label_task_info->Text = L"Собрать 10 дерева.\n  Получите: 50 серебра";
				}
				break;
			}
		}
		else {

		}

	}
	};
}


