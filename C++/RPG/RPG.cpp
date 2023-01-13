#include <iostream>
#include <string>
#include <ctime>
#include <fstream>

using namespace std;

#ifdef _WIN32
#include <windows.h>

void sleep(unsigned seconds)
{
	Sleep(seconds * 1000);
}
#else
#include <chrono>
#include <thread>

void sleep(unsigned seconds)
{
	std::chrono::duration<int, std::milli> timespan(seconds * 1000);
	std::this_thread::sleep_for(timespan);
}
#endif

class player {

	string playerClass;
	int level, attack, defense;

public:
	int hp, pm, mana, exp;
	int exp_requirement, obj;

	player(int choice) {
		if (choice == 1) {
			playerClass = "Guerrier";
			level = 1;
			attack = 60;
			defense = 100;
			hp = 175;
			pm = 0;
			mana = 15;
			exp = 0;
			exp_requirement = 24;
			obj = 0;
		}
		if (choice == 2) {
			playerClass = "Mage";
			level = 1;
			attack = 60;
			defense = 80;
			hp = 190;
			pm = 100;
			mana = 15;
			exp = 0;
			exp_requirement = 24;
			obj = 0;
		}
		if (choice == 3) {
			playerClass = "Pretre";
			level = 1;
			attack = 60;
			defense = 115;
			hp = 300;
			pm = 100;
			mana = 15;
			exp = 0;
			exp_requirement = 24;
		}
		if (choice == 4) {
			playerClass = "Archer";
			level = 1;
			attack = 60;
			defense = 100;
			hp = 245;
			pm = 30;
			mana = 15;
			exp = 0;
			exp_requirement = 24;
			obj = 0;
		}
		if (choice == 5) {
			playerClass = "Tank";
			level = 1;
			attack = 60;
			defense = 130;
			hp = 500;
			pm = 12;
			mana = 15;
			exp = 0;
			exp_requirement = 24;
			obj = 0;
		}
	}
	string printClass() {
		return playerClass;
	}
	int printExpRequirement() {
		return exp_requirement;
	}
	int printLevel() {
		return level;
	}
	int printAttack() {
		return attack;
	}
	int printDefense() {
		return defense;
	}
	int printHp() {
		return hp;
	}
	int printPm() {
		return pm;
	}
	int printMana() {
		return mana;
	}
	int printExp() {
		return exp;
	}
	int printObj(){
		return obj;
	}


};
class Enemies {
	string MonsterClass;
	int level;
	float attack, defense;

public:
	int exp, hp;

	Enemies(int apparition_random) {
		if (apparition_random == 1)
		{
			MonsterClass = "Le monstre";
			level = 1;
			attack = 20;
			defense = 20;
			hp = 175;
			exp = 9;
		}
		if (apparition_random == 2)
		{
			MonsterClass = "Le gros monstre";
			level = 1;
			attack = 30;
			defense = 25;
			hp = 325;
			exp = 15;
		}
		if (apparition_random == 3)
		{
			MonsterClass = "La plante vangeresse";
			level = 1;
			attack = 25;
			defense = 40;
			hp = 225;
			exp = 12;
		}
	}
	string printClass_monster() {
		return MonsterClass;
	}
	int printAttack_monster() {
		return attack;
	}
	int printDefense_monster() {
		return defense;
	}
	int printHp_monster() {
		return hp;
	}
	int printExp_monster() {
		return exp;
	}
	int printLevel_monster() {
		return level;
	}
};
class Weapons {
	string weaponClass;
public:
	//Weapons Guerrier
	int attack_epee_en_bois, defense_epee_en_bois, pm_epee_en_bois, count_epee_en_bois, price_epee_en_bois;

	//Weapons Mage
	int attack_le_baton_magique, defense_le_baton_magique, pm_le_baton_magique, price_le_baton_magique;

	//Weapons pretre
	int attack_le_baton_de_vie, defense_le_baton_de_vie, pm_le_baton_de_vie, price_le_baton_de_vie;

	//Weapons Archer
	int attack_arc_en_bois, defense_arc_en_bois, pm_arc_en_bois, price_arc_en_bois;

	//Weapons Tank
	int attack_le_bouclier_en_carton, defense_le_bouclier_en_carton, pm_le_bouclier_en_carton, price_le_bouclier_en_carton;


	Weapons(int choice) {
		if (choice == 1)
		{
				weaponClass = "L'epee en acier";
				attack_epee_en_bois = 30;
				defense_epee_en_bois = 12;
				pm_epee_en_bois = 1;
				price_epee_en_bois = 50;
		}
		if (choice == 2)
		{
				weaponClass = "Le baton magique";
				attack_le_baton_magique = 22;
				defense_le_baton_magique = 17;
				pm_le_baton_magique = 15;
				price_le_baton_magique = 50;
		}
		if (choice == 3)
		{
				weaponClass = "Le baton de vie";
				attack_le_baton_de_vie = 16;
				defense_le_baton_de_vie = 13;
				pm_le_baton_de_vie = 33;
				price_le_baton_de_vie = 50;
		}
		if (choice == 4)
		{
				weaponClass = "L'arc en fer";
				attack_arc_en_bois = 18;
				defense_arc_en_bois = 19;
				pm_arc_en_bois = 5;
				price_arc_en_bois = 50;

		}
		if (choice == 5)
		{
				weaponClass = "Le bouclier en plomb";
				attack_le_bouclier_en_carton = 13;
				defense_le_bouclier_en_carton = 45;
				pm_le_bouclier_en_carton = 1;
				price_le_bouclier_en_carton = 50;

		}
	}

	string printClass_weapons() {
		return weaponClass;
	}
	int printAttack_weapons_epee_en_bois() {
		return attack_epee_en_bois;
	}
	int printDefense_weapons_epee_en_bois() {
		return defense_epee_en_bois;
	}
	int printPm_weapons_epee_en_bois() {
		return pm_epee_en_bois;
	}
	int printPrice_weapons_epee_en_bois() {
		return price_epee_en_bois;
	}
	int printCount_weapons_epee_en_bois() {
		return count_epee_en_bois;
	}
	int printAttack_weapons_le_baton_magique() {
		return attack_le_baton_magique;
	}
	int printDefense_weapons_le_baton_magique() {
		return defense_le_baton_magique;
	}
	int printPm_weapons_le_baton_magique() {
		return pm_le_baton_magique;
	}
	int printPrice_weapons_le_baton_magique() {
		return price_le_baton_magique;
	}
	int printAttack_weapons_le_baton_de_vie() {
		return attack_le_baton_de_vie;
	}
	int printDefense_weapons_le_baton_de_vie() {
		return defense_le_baton_de_vie;
	}
	int printPm_weapons_le_baton_de_vie() {
		return pm_le_baton_de_vie;
	}
	int printPrice_weapons_le_baton_de_vie() {
		return price_le_baton_de_vie;
	}
	int printAttack_weapons_arc_en_bois() {
		return attack_arc_en_bois;
	}
	int printDefense_weapons_arc_en_bois() {
		return defense_arc_en_bois;
	}
	int printPm_weapons_arc_en_bois() {
		return pm_arc_en_bois;
	}
	int printPrice_weapons_arc_en_bois() {
		return price_arc_en_bois;
	}
	int printAttack_weapons_le_bouclier_en_carton() {
		return attack_le_bouclier_en_carton;
	}
	int printDefense_weapons_le_bouclier_en_carton() {
		return defense_le_bouclier_en_carton;
	}
	int printPm_weapons_le_bouclier_en_carton() {
		return pm_le_bouclier_en_carton;
	}
	int printPrice_weapons_le_bouclier_en_carton() {
		return price_le_bouclier_en_carton;
	}
};
class Object {
	string objClass_b, objClass_ba, objClass_p;

public:
	int hp_b, hp_ba, hp_p, obj_b, obj_ba, obj_p;

	Object(int obj_random) {
		if (obj_random == 1)
		{
			objClass_b = "un bonbon";
			hp_b = 40;
			obj_b = 0;
		}
		if (obj_random == 2)
		{
			objClass_ba = "une banane";
			hp_ba = 30;
			obj_ba = 0;
		}
		if (obj_random == 3)
		{
			objClass_p = "une pomme";
			hp_p = 25;
			obj_p = 0;
		}
	}
	int printHp_object_bonbon() {
		return hp_b;
	}
	int printHp_object_banane() {
		return hp_ba;
	}
	int printHp_object_pomme() {
		return hp_p;
	}
	int printObj_object_bonbon() {
		return obj_b;
	}
	int printObj_object_banane() {
		return obj_ba;
	}
	int printObj_object_pomme() {
		return obj_p;
	}

};
int main() {
	ofstream myfile("RPG.txt");
	string var_continue = "";

	//Tuto variables
	int tuto_object = 0;
	int tuto_weapons = 0;
	int tuto_action = 0;

	srand(time(NULL));
	cout << " Choisis ta classe. \n[1] Guerrier [2] Mage [3] Pretre [4] Archer [5] Tank : ";
	int choice;
	cin >> choice;

	while (!cin >> choice || choice > 5 || choice < 1) {
		cout << "Pas de reponses valables. Choisis ta classe. \n[1] Guerrier [2] Mage [3] Archer [4] Archer [5] Tank : ";
		cin >> choice;
	}
	//miss ennemis
	int miss = 0;

	//player Mechanic
	player character(choice);
	cout << "Bienvenue " << character.printClass() << ", Commencons votre aventure" << endl << endl;

	//Item Ennemis
	int oeuf_de_monstre = 0;
	string confirm_item = "";

	//Upgrade Weapons
	int first_meeting = 0;
	int first_upgrading = 0;
	int level_weapons = 0;

	//Variables Item
	int item_counter = 0;

	//Variable Object
	int obj_random_b = 1;
	int obj_random_ba = 2;
	int obj_random_p = 3;

	//Player Classes
	player level(choice);
	player attack(choice);
	player defense(choice);
	player hp(choice);
	player pm(choice);
	player mana(choice);
	player exp(choice);
	player exp_requirement(choice);
	player obj(choice);

	//Object Classes
	Object hp_o_b(obj_random_b);
	Object obj_o_b(obj_random_b);
	Object hp_o_ba(obj_random_ba);
	Object obj_o_ba(obj_random_ba);
	Object hp_o_p(obj_random_p);
	Object obj_o_p(obj_random_p);

	//Weapons Classes
	Weapons character_w(choice);
	Weapons attack_w(choice);
	Weapons defense_w(choice);
	Weapons pm_w(choice);
	Weapons price_w(choice);
	Weapons count_w(choice);
	Weapons attack_w2(choice);
	Weapons defense_w2(choice);
	Weapons pm_w2(choice);
	Weapons price_w2(choice);
	Weapons count_w2(choice);
	Weapons attack_w3(choice);
	Weapons defense_w3(choice);
	Weapons pm_w3(choice);
	Weapons price_w3(choice);
	Weapons count_w3(choice);
	Weapons attack_w4(choice);
	Weapons defense_w4(choice);
	Weapons pm_w4(choice);
	Weapons price_w4(choice);
	Weapons count_w4(choice);
	Weapons attack_w5(choice);
	Weapons defense_w5(choice);
	Weapons pm_w5(choice);
	Weapons price_w5(choice);
	Weapons count_w5(choice);

	//Variables Fonctions // Player
	int var_level = level.printLevel();
	float var_attack = attack.printAttack();
	float var_defense = defense.printDefense();
	int var_hp = hp.printHp();
	int var_mp = pm.printPm();
	int var_mana = mana.printMana();
	int var_exp = exp.printExp();
	int var_exp_requirement = exp_requirement.printExpRequirement();

	//Actions
	string action_guerrier_1 = "La gifle";
	string action_mage_1 = "Le feu";
	string action_pretre_1 = "La petite guerison";
	string action_archer_1 = "Le tir banal";
	string action_tank_1 = "Le tir hasardeux";
	string action_guerrier_2 = "La taillade aerienne";
	string action_mage_2 = "La foudre";
	string action_pretre_2 = "La guerison";
	string action_archer_2 = "Le tir amateur";
	string action_tank_2 = "Le tir d'obus";
	string action_guerrier_3 = "La torgnole";
	string action_mage_3 = "L'explosion";
	string action_pretre_3 = "La grande guerison";
	string action_archer_3 = "Le tir creatif";
	string action_tank_3 = "Le rayon laser";
	string action_guerrier_4 = "La double taillade";
	string action_mage_4 = "Le mega feu";
	string action_pretre_4 = "La mega guerison";
	string action_archer_4 = "Le tir fructueux";
	string action_tank_4 = "Le tir d'obus geant";
	string action_guerrier_5 = "La baffe";
	string action_mage_5 = "La mega foudre";
	string action_pretre_5 = "La giga guerison";
	string action_archer_5 = "Le tir divin";
	string action_tank_5 = "Le tir d'obus enormes";

	//Variables Actions
	int choice_action = 0;
	int switch_action = 0;
	int var_attack_action_guerrier_1 = var_attack + 45;
	int mana_action_guerrier_1 = 8;
	int var_attack_action_guerrier_2 = var_attack + 105;
	int mana_action_guerrier_2 = 15;
	int var_attack_action_guerrier_3 = var_attack + 175;
	int mana_action_guerrier_3 = 24;
	int var_attack_action_guerrier_4 = var_attack + 255;
	int mana_action_guerrier_4 = 35;
	int var_attack_action_guerrier_5 = var_attack + 300;
	int mana_action_guerrier_5 = 48;
	int var_attack_action_mage_1 = var_attack + 45;
	int mana_action_mage_1 = 8;
	int pm_action_mage_1 = 40;
	int var_attack_action_mage_2 = var_attack + 105;
	int mana_action_mage_2 = 15;
	int pm_action_mage_2 = 60;
	int var_attack_action_mage_3 = var_attack + 175;
	int mana_action_mage_3 = 24;
	int pm_action_mage_3 = 80;
	int var_attack_action_mage_4 = var_attack + 255;
	int mana_action_mage_4 = 35;
	int pm_action_mage_4 = 110;
	int var_attack_action_mage_5 = var_attack + 300;
	int mana_action_mage_5 = 48;
	int pm_action_mage_5 = 150;
	int var_attack_action_pretre_1 = 25;
	int mana_action_pretre_1 = 8;
	int pm_action_pretre_1 = 50;
	int var_attack_action_pretre_2 = 50;
	int mana_action_pretre_2 = 15;
	int pm_action_pretre_2 = 75;
	int var_attack_action_pretre_3 = 80;
	int mana_action_pretre_3 = 24;
	int pm_action_pretre_3 = 115;
	int var_attack_action_pretre_4 = 110;
	int mana_action_pretre_4 = 35;
	int pm_action_pretre_4 = 140;
	int var_attack_action_pretre_5 = 150;
	int mana_action_pretre_5 = 48;
	int pm_action_pretre_5 = 190;
	int var_attack_action_archer_1 = var_attack + 45;
	int mana_action_archer_1 = 8;
	int var_attack_action_archer_2 = var_attack + 105;
	int mana_action_archer_2 = 15;
	int var_attack_action_archer_3 = var_attack + 175;
	int mana_action_archer_3 = 24;
	int var_attack_action_archer_4 = var_attack + 255;
	int mana_action_archer_4 = 35;
	int var_attack_action_archer_5 = var_attack + 300;
	int mana_action_archer_5 = 48;
	int var_attack_action_tank_1 = var_attack + 45;
	int mana_action_tank_1 = 8;
	int var_attack_action_tank_2 = var_attack + 105;
	int mana_action_tank_2 = 15;
	int var_attack_action_tank_3 = var_attack + 175;
	int mana_action_tank_3 = 24;
	int var_attack_action_tank_4 = var_attack + 255;
	int mana_action_tank_4 = 35;
	int var_attack_action_tank_5 = var_attack + 300;
	int mana_action_tank_5 = 48;

	//Variables Fonctions // Object
	int var_obj = obj.printObj();
	int var_obj_o_b = obj_o_b.printObj_object_bonbon();
	int var_hp_o_b = hp_o_b.printHp_object_bonbon();
	int var_obj_o_ba = obj_o_ba.printObj_object_banane();
	int var_hp_o_ba = hp_o_ba.printHp_object_banane();
	int var_obj_o_p = obj_o_p.printObj_object_pomme();
	int var_hp_o_p = hp_o_p.printHp_object_pomme();

	// Variables Fonctions // Weapons
	int var_attack_w = attack_w.printAttack_weapons_epee_en_bois();
	int var_defense_w = defense_w.printDefense_weapons_epee_en_bois();
	int var_pm_w = pm_w.printPm_weapons_epee_en_bois();
	int var_price_w = price_w.printPrice_weapons_epee_en_bois();
	int var_count_w = count_w.printCount_weapons_epee_en_bois();
	int var_attack_w2 = attack_w2.printAttack_weapons_le_baton_magique();
	int var_defense_w2 = defense_w2.printDefense_weapons_le_baton_magique();
	int var_pm_w2 = pm_w2.printPm_weapons_le_baton_magique();
	int var_price_w2 = price_w2.printPrice_weapons_le_baton_magique();
	int var_attack_w3 = attack_w3.printAttack_weapons_le_baton_de_vie();
	int var_defense_w3 = defense_w3.printDefense_weapons_le_baton_de_vie();
	int var_pm_w3 = pm_w3.printPm_weapons_le_baton_de_vie();
	int var_price_w3 = price_w3.printPrice_weapons_le_baton_de_vie();
	int var_attack_w4 = attack_w4.printAttack_weapons_arc_en_bois();
	int var_defense_w4 = defense_w4.printDefense_weapons_arc_en_bois();
	int var_pm_w4 = pm_w4.printPm_weapons_arc_en_bois();
	int var_price_w4 = price_w4.printPrice_weapons_arc_en_bois();
	int var_attack_w5 = attack_w5.printAttack_weapons_le_bouclier_en_carton();
	int var_defense_w5 = defense_w5.printDefense_weapons_le_bouclier_en_carton();
	int var_pm_w5 = pm_w5.printPm_weapons_le_bouclier_en_carton();
	int var_price_w5 = price_w5.printPrice_weapons_le_bouclier_en_carton();

	//upgardes Monster
	int monster_attack_upgrade = 0;
	int monster_defense_upgrade = 0;
	int monster_hp_upgrade = 0;

	//la boucle
	int auberge = 1000;
	int fight_time = 3;
	for (int i = 1; i < auberge; i++)
	{
		cout << "C'est le commencement du jour " << i << "." << endl;
		if (choice == 1 && item_counter == 1)
		{
			cout << "Voici vos stats :" << endl;
			cout << "Niveau : " << var_level << endl;
			cout << "Attaque : " << var_attack << " + " << var_attack_w << endl;
			cout << "Defense : " << var_defense << " + " << var_defense_w << endl;
			cout << "HP : " << var_hp << endl;
			cout << "Mana : " << var_mana << endl;
			cout << "Exp : " << var_exp << "-" << var_exp_requirement << endl;
		}
		else if (choice == 2 && item_counter == 1)
		{
			cout << "Voici vos stats :" << endl;
			cout << "Niveau : " << var_level << endl;
			cout << "Attaque : " << var_attack << " + " << var_attack_w2 << endl;
			cout << "Defense : " << var_defense << " + " << var_defense_w2 << endl;
			cout << "HP : " << var_hp << endl;
			cout << "MP : " << var_mp << " + " << var_pm_w2 << endl;
			cout << "Mana : " << var_mana << endl;
			cout << "Exp : " << var_exp << "-" << var_exp_requirement << endl;
		}
		else if (choice == 3 && item_counter == 1)
		{
			cout << "Voici vos stats :" << endl;
			cout << "Niveau : " << var_level << endl;
			cout << "Attaque : " << var_attack << " + " << var_attack_w3 << endl;
			cout << "Defense : " << var_defense << " + " << var_defense_w3 << endl;
			cout << "HP : " << var_hp << endl;
			cout << "MP : " << var_mp << " + " << var_pm_w3 << endl;
			cout << "Mana : " << var_mana << endl;
			cout << "Exp : " << var_exp << "-" << var_exp_requirement << endl;
		}
		else if (choice == 4 && item_counter == 1)
		{
			cout << "Voici vos stats :" << endl;
			cout << "Niveau : " << var_level << endl;
			cout << "Attaque : " << var_attack << " + " << var_attack_w4 << endl;
			cout << "Defense : " << var_defense << " + " << var_defense_w4 << endl;
			cout << "HP : " << var_hp << endl;
			cout << "Mana : " << var_mana << endl;
			cout << "Exp : " << var_exp << "-" << var_exp_requirement << endl;
		}
		else if (choice == 5 && item_counter == 1)
		{
			cout << "Voici vos stats :" << endl;
			cout << "Niveau : " << var_level << endl;
			cout << "Attaque : " << var_attack << " + " << var_attack_w5 << endl;
			cout << "Defense : " << var_defense << " + " << var_defense_w5 << endl;
			cout << "HP : " << var_hp << endl;
			cout << "Mana : " << var_mana << endl;
			cout << "Exp : " << var_exp << "-" << var_exp_requirement << endl;
		}
		else
		{
			if (choice == 1 || choice == 4 || choice == 5)
			{
				cout << "Voici vos stats :" << endl;
				cout << "Niveau : " << var_level << endl;
				cout << "Attaque : " << var_attack << endl;
				cout << "Defense : " << var_defense << endl;
				cout << "HP : " << var_hp << endl;
				cout << "Mana : " << var_mana << endl;
				cout << "Exp : " << var_exp << "-" << var_exp_requirement << endl;
			}
			else
			{
				cout << "Voici vos stats :" << endl;
				cout << "Niveau : " << var_level << endl;
				cout << "Attaque : " << var_attack << endl;
				cout << "Defense : " << var_defense << endl;
				cout << "HP : " << var_hp << endl;
				cout << "MP : " << var_mp << endl;
				cout << "Mana : " << var_mana << endl;
				cout << "Exp : " << var_exp << "-" << var_exp_requirement << endl;
			}
		}
		cout << endl;
	

		sleep(2);


		for (int j = 1; j < fight_time; j++)
		{
			//upgrades Player
			int guerrier_attack_upgrade = rand() % 5 + 1;
			int guerrier_defense_upgrade = rand() % 7 + 1;
			int guerrier_hp_upgrade = rand() % 7 + 1;
			int guerrier_pm_upgrade = 0;
			int guerrier_mana_upgrade = rand() % 2 + 1;
			int mage_attack_upgrade = rand() % 3 + 1;
			int mage_defense_upgrade = rand() % 4 + 1;
			int mage_hp_upgrade = rand() % 5 + 1;
			int mage_pm_upgrade = rand() % 8 + 1;
			int mage_mana_upgrade = rand() % 2 + 1;
			int pretre_attack_upgrade = rand() % 2 + 1;
			int pretre_defense_upgrade = rand() % 5 + 1;
			int pretre_hp_upgrade = rand() % 6 + 1;
			int pretre_pm_upgrade = rand() % 5 + 1;
			int pretre_mana_upgrade = rand() % 2 + 1;
			int archer_attack_upgrade = rand() % 4 + 1;
			int archer_defense_upgrade = rand() % 2 + 1;
			int archer_hp_upgrade = rand() % 4 + 1;
			int archer_pm_upgrade = rand() % 3 + 1;
			int archer_mana_upgrade = rand() % 2 + 1;
			int tank_attack_upgrade = rand() % 3 + 1;
			int tank_defense_upgrade = rand() % 8 + 1;
			int tank_hp_upgrade = rand() % 4 + 1;
			int tank_pm_upgrade = rand() % 3 + 1;
			int tank_mana_upgrade = rand() % 2 + 1;



			//Apparition Random
			int apparition_random = rand() % 3 + 1;
			int weapons_random = rand() % 5 + 1;

			//Variables Classes Monster // Reboot Monster
			Enemies level_m(apparition_random);
			Enemies character_m(apparition_random);
			Enemies attack_m(apparition_random);
			Enemies defense_m(apparition_random);
			Enemies hp_m(apparition_random);
			Enemies exp_m(apparition_random);
			
			//Variables Fonctions Monster // Reboot Monster
			int var_level_m = level_m.printLevel_monster();
			int var_attack_m = attack_m.printAttack_monster() + monster_attack_upgrade;
		    int var_defense_m = defense_m.printDefense_monster() + monster_defense_upgrade;
			int var_hp_m = hp_m.printHp_monster() + monster_hp_upgrade;
			int var_exp_m = exp_m.printExp_monster();
		
			cout << endl;

			if (var_exp >= var_exp_requirement)
			{
				var_level++;
				if (choice == 1)
				{
					var_attack = var_attack + guerrier_attack_upgrade;
					var_defense = var_defense + guerrier_defense_upgrade;
					var_hp = var_hp + guerrier_hp_upgrade;
					var_mp = var_mp + guerrier_pm_upgrade;
					var_mana = var_mana + guerrier_mana_upgrade;
				}
				if (choice == 2)
				{
					var_attack = var_attack + mage_attack_upgrade;
					var_defense = var_defense + mage_defense_upgrade;
					var_hp = var_hp + mage_hp_upgrade;
					var_mp = var_mp + mage_pm_upgrade;
					var_mana = var_mana + mage_mana_upgrade;
				}
				if (choice == 3)
				{
					var_attack = var_attack + pretre_attack_upgrade;
					var_defense = var_defense + pretre_defense_upgrade;
					var_hp = var_hp + pretre_hp_upgrade;
					var_mp = var_mp + pretre_pm_upgrade;
					var_mana = var_mana + pretre_mana_upgrade;
				}
				if (choice == 4)
				{
					var_attack = var_attack + archer_attack_upgrade;
					var_defense = var_defense + archer_defense_upgrade;
					var_hp = var_hp + archer_hp_upgrade;
					var_mp = var_mp + archer_pm_upgrade;
					var_mana = var_mana + archer_mana_upgrade;
				}
				if (choice == 5)
				{
					var_attack = var_attack + tank_attack_upgrade;
					var_defense = var_defense + tank_defense_upgrade;
					var_hp = var_hp + tank_hp_upgrade;
					var_mp = var_mp + tank_pm_upgrade;
					var_mana = var_mana + tank_mana_upgrade;
				}
				cout << "Votre " << character.printClass() << " est maintenant au niveau " << var_level << " !!!" << endl;
				cout << endl;
				sleep(2);

				cout << "Nouveau stats :" << endl;
				cout << "Niveau : " << var_level << endl;
				cout << "Attaque : " << var_attack << endl;
				cout << "Defense : " << var_defense << endl;
				cout << "HP : " << var_hp << endl;
				cout << "MP : " << var_mp << endl;
				cout << "Mana : " << var_mana << endl;
				cout << "Exp : " << var_exp << "-" << var_exp_requirement << endl;
				cout << endl << endl;

				if (var_hp < hp.printHp())
				{
					var_hp = hp.printHp();
				}
				if (var_mana < mana.printMana())
				{
					var_mana = mana.printMana();
				}

				var_exp = var_exp % var_exp_requirement;
				var_exp_requirement *= 3;
				monster_attack_upgrade += rand() % 15 + 1;
				monster_defense_upgrade += rand() % 15 + 1;
				monster_hp_upgrade += rand() % 15 + 1;
			}

			//Variables Random
			int narration_random = rand() % 3 + 1;
			int obj_random = rand() % 3 + 1;
			int item_monster_random = rand() % 2 + 1;
			int oeuf_de_monstre = rand() % 2 + 1;

			if (narration_random == 1)
			{
				cout << "Narration : le hero se ballade dans une foret paisible, il faisait chaud et les oiseaux chantaient" << endl;
			}
			if (narration_random == 2)
			{
				cout << "Narration : le hero se ballade dans une foret paisible, il faisait glacial et le hero enfila son menteau" << endl;
			}
			if (narration_random == 3)
			{
				tuto_object++;

				if (obj_random == 1)
				{
					cout << "Narration : le hero se ballade dans une foret paisible, il trouva quelque chose dans les buissons" << endl;
					cout << "Vous avez trouve un bonbon !";
					var_obj_o_b++;
				}
				if (obj_random == 2)
				{
					cout << "Narration : le hero se ballade dans une foret paisible, il trouva quelque chose dans les buissons" << endl;
					cout << "Vous avez trouve une banane !";
					var_obj_o_ba++;
				}
				if (obj_random == 3)
				{
					cout << "Narration : le hero se ballade dans une foret paisible, il trouva quelque chose dans les buissons" << endl;
					sleep(3);
					cout << "Vous avez trouve une pomme !";
					var_obj_o_p++;
				}
				cout << endl;
				if (tuto_object == 1)
				{
					cout << "Tutoriel : Les objets servent a remettre de la vie au personnage\nIl sera dans votre inventaire et vous pourrez l'utiliser en combat.";
					cout << endl << endl;;
				}
				var_obj++;
			}
			sleep(3);
			if (apparition_random == 1)
			{
				cout << "Quand soudain, un monstre est apparu et vous surprend" << endl;
				sleep(5);
				cout << character_m.printClass_monster() << " vous engage en combat, brandissez vos armes !" << endl;
			}
			if (apparition_random == 2)
			{
				cout << "Quand soudain, un gros monstre est apparu et vous surprend" << endl;
				sleep(5);
				cout << character_m.printClass_monster() << " vous engage en combat, brandissez vos armes !" << endl;
			}
			if (apparition_random == 3)
			{
				cout << "Quand soudain, une plante vangeresse est apparu et vous surprend" << endl;
				sleep(5);
				cout << character_m.printClass_monster() << " vous engage en combat, brandissez vos armes !" << endl;
			}
			sleep(2.5);
			cout << "Attaquez en premier !" << endl;
			//if (var_hp_m <= 0) var_hp_m = hp_m.printHp_monster();

			//combat ennemi
			int choice_approching;
			int attack_player;
			int object_player;
			string confirm;

			//Fight Scene
			while (var_hp_m > 0)
			{
				miss = rand() % 2 + 1;

				if (choice == 1)
				{
					cout << "Vie du monstre : " << var_hp_m << "." << endl << endl;
					if (switch_action >= 1)
					{
						cout << "[1] Attaque : " << endl;
						cout << "[2] Objet : (tu en as " << var_obj << ")." << endl;
						cout << "[3] Actions : (tu as " << var_mana << " pts de mana)." << endl;
					}
					else
					{
						cout << "[1] Attaque : " << endl;
						cout << "[2] Objet : (tu en as " << var_obj << ")." << endl << endl;
					}
					cout << "Reponse : "; cin >> choice_approching;
					if (choice_approching == 1)
					{
						if (item_counter == 1)
						{
							cout << "[1] " << character_w.printClass_weapons() << "/" << var_attack + var_attack_w << " DMG" << endl << endl;
							cout << "Reponse : ";  cin >> attack_player;
							if (attack_player == 1) var_hp_m = var_hp_m - (var_attack + var_attack_w) + (var_defense_m / 10);
							cout << "L'ennemi s'est defendu et se releve de " << var_defense_m / 10 << " pts de vie en plus." << endl;
							cout << "Vous avez inflige " << (var_attack + var_attack_w) - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
						}
						else
						{
							cout << "[1] a la main" << "/" << var_attack << " DMG" << endl << endl;
							cout << "Reponse : ";  cin >> attack_player;
							if (attack_player == 1) var_hp_m = var_hp_m - var_attack + (var_defense_m / 10);
							cout << "L'ennemi s'est defendu et se releve de " << var_defense_m / 10 << " pts de vie en plus." << endl;
							cout << "Vous avez inflige " << var_attack - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
						}
					}

					if (choice_approching == 2)
					{
						if (var_obj_o_b <= 1)
						{
							cout << "[1] Bonbon : " << var_obj_o_b << endl;
						}
						else
						{
							cout << "[1] Bonbons : " << var_obj_o_b << endl;
						}
						if (var_obj_o_ba <= 1)
						{
							cout << "[2] Banane : " << var_obj_o_ba << endl;
						}
						else
						{
							cout << "[2] Bananes : " << var_obj_o_ba << endl;
						}
						if (var_obj_o_p <= 1)
						{
							cout << "[3] Pomme : " << var_obj_o_p << endl;
						}
						else
						{
							cout << "[3] Pommes : " << var_obj_o_p << endl;
						}
						cout << endl << endl;


						cout << "Reponse : "; cin >> object_player;
						if (object_player == 1)
						{
							if (var_obj_o_b >= 1)
							{
								cout << "L'objet vous redonnera " << var_hp_o_b << " pts de vie, Etes-vous certain de manger cet objet ? [y/n] : ";
								cin >> confirm;
								if (confirm == "y")
								{
									cout << "Narration : Le joueur mangea le bonbon, et recupere " << var_hp_o_b << " pts de vie." << endl << endl;
									var_hp = var_hp + var_hp_o_b;
									var_obj_o_b--;
									var_obj--;
								}
								if (confirm == "n") cout << "On annule tout alors !" << endl << endl;
							}
							else
							{
								cout << "Vous n'avez apparemment plus de bonbon..." << endl;
							}
						}
						if (object_player == 2)
						{
							if (var_obj_o_ba >= 1)
							{
								cout << "L'objet vous redonnera " << var_hp_o_ba << " pts de vie, Etes-vous certain de manger cet objet ? [y/n] : ";
								cin >> confirm;
								if (confirm == "y")
								{
									cout << "Narration : Le joueur mangea la banane, et recupere " << var_hp_o_ba << " pts de vie." << endl << endl;
									var_hp = var_hp + var_hp_o_ba;
									var_obj_o_ba--;
									var_obj--;
								}
								if (confirm == "n") cout << "On annule tout alors !" << endl << endl;
							}
							else
							{
								cout << "Vous n'avez apparemment plus de banane..." << endl;
							}
						}
						if (object_player == 3)
						{
							if (var_obj_o_p >= 1)
							{
								cout << "L'objet vous redonnera " << var_hp_o_p << " pts de vie, Etes-vous certain de manger cet objet ? [y/n] : ";
								cin >> confirm;
								if (confirm == "y")
								{
									cout << "Narration : Le joueur mangea la pomme, et recupere " << var_hp_o_p << " pts de vie." << endl << endl;
									var_hp = var_hp + var_hp_o_p;
									var_obj_o_p--;
									var_obj--;
								}
								if (confirm == "n") cout << "On annule tout alors !" << endl << endl;
							}
							else
							{
								cout << "Vous n'avez apparemment plus de pomme..." << endl;
							}
							while (!cin >> object_player || object_player > 3 || object_player < 1)
							{
								cout << "[Reponse invalide]" << endl << endl;
								cout << "[1] Bonbon(s) : " << var_obj_o_b << endl;
								cout << "[2] Banane(s) : " << var_obj_o_ba << endl;
								cout << "[3] Pomme(s) : " << var_obj_o_p << endl;


							}
						}
					}
					if (choice_approching == 3)
					{
						if (switch_action == 1)
						{
							cout << "[1] " << action_guerrier_1 << "/" << var_attack_action_guerrier_1 << endl;
							cout << "(" << mana_action_guerrier_1 << " pts de mana necessaire)." << endl << endl;
						}
						if (switch_action == 2)
						{
							cout << "[1] " << action_guerrier_1 << "/" << var_attack_action_guerrier_1 << endl;
							cout << "(" << mana_action_guerrier_1 << " pts de mana necessaire)." << endl << endl;
							cout << "[2] " << action_guerrier_2 << "/" << var_attack_action_guerrier_2 << endl;
							cout << "(" << mana_action_guerrier_2 << " pts de mana necessaire)." << endl << endl;
						}
						if (switch_action == 3)
						{
							cout << "[1] " << action_guerrier_1 << "/" << var_attack_action_guerrier_1 << endl;
							cout << "(" << mana_action_guerrier_1 << " pts de mana necessaire)." << endl << endl;
							cout << "[2] " << action_guerrier_2 << "/" << var_attack_action_guerrier_2 << endl;
							cout << "(" << mana_action_guerrier_2 << " pts de mana necessaire)." << endl << endl;
							cout << "[3] " << action_guerrier_3 << "/" << var_attack_action_guerrier_3 << endl;
							cout << "(" << mana_action_guerrier_3 << " pts de mana necessaire)." << endl << endl;
						}
						if (switch_action == 4)
						{
							cout << "[1] " << action_guerrier_1 << "/" << var_attack_action_guerrier_1 << endl;
							cout << "(" << mana_action_guerrier_1 << " pts de mana necessaire)." << endl << endl;
							cout << "[2] " << action_guerrier_2 << "/" << var_attack_action_guerrier_2 << endl;
							cout << "(" << mana_action_guerrier_2 << " pts de mana necessaire)." << endl << endl;
							cout << "[3] " << action_guerrier_3 << "/" << var_attack_action_guerrier_3 << endl;
							cout << "(" << mana_action_guerrier_3 << " pts de mana necessaire)." << endl << endl;
							cout << "[4] " << action_guerrier_4 << "/" << var_attack_action_guerrier_4 << endl;
							cout << "(" << mana_action_guerrier_4 << " pts de mana necessaire)." << endl << endl;
						}
						if (switch_action == 5)
						{
							cout << "[1] " << action_guerrier_1 << "/" << var_attack_action_guerrier_1 << endl;
							cout << "(" << mana_action_guerrier_1 << " pts de mana necessaire)." << endl << endl;
							cout << "[2] " << action_guerrier_2 << "/" << var_attack_action_guerrier_2 << endl;
							cout << "(" << mana_action_guerrier_2 << " pts de mana necessaire)." << endl << endl;
							cout << "[3] " << action_guerrier_3 << "/" << var_attack_action_guerrier_3 << endl;
							cout << "(" << mana_action_guerrier_3 << " pts de mana necessaire)." << endl << endl;
							cout << "[4] " << action_guerrier_4 << "/" << var_attack_action_guerrier_4 << endl;
							cout << "(" << mana_action_guerrier_4 << " pts de mana necessaire)." << endl << endl;
							cout << "[5] " << action_guerrier_5 << "/" << var_attack_action_guerrier_5 << endl;
							cout << "(" << mana_action_guerrier_5 << " pts de mana necessaire)." << endl << endl;
						}
						cout << "Reponse : ";  cin >> choice_action;
						cout << endl << endl;


						if (choice_action == 1)
						{
							if (var_mana < mana_action_guerrier_1)
							{
								cout << "Tu n'as pas assez de mana..." << endl;
							}
							else
							{
								var_hp_m = var_hp_m - var_attack_action_guerrier_1 + (var_defense_m / 10);
								cout << "Vous avez inflige " << var_attack_action_guerrier_1 - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
								var_mana = var_mana - mana_action_guerrier_1;
							}
						}
						if (choice_action == 2)
						{
							if (var_mana < mana_action_guerrier_2)
							{
								cout << "Tu n'as pas assez de mana..." << endl;
							}
							else
							{
								var_hp_m = var_hp_m - var_attack_action_guerrier_2 + (var_defense_m / 10);
								cout << "Vous avez inflige " << var_attack_action_guerrier_2 - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
								var_mana = var_mana - mana_action_guerrier_2;
							}
						}
						if (choice_action == 3)
						{
							if (var_mana < mana_action_guerrier_3)
							{
								cout << "Tu n'as pas assez de mana..." << endl;
							}
							else
							{
								var_hp_m = var_hp_m - var_attack_action_guerrier_3 + (var_defense_m / 10);
								cout << "Vous avez inflige " << var_attack_action_guerrier_3 - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
								var_mana = var_mana - mana_action_guerrier_3;
							}
						}
						if (choice_action == 4)
						{
							if (var_mana < mana_action_guerrier_4)
							{
								cout << "Tu n'as pas assez de mana..." << endl;
							}
							else
							{
								var_hp_m = var_hp_m - var_attack_action_guerrier_4 + (var_defense_m / 10);
								cout << "Vous avez inflige " << var_attack_action_guerrier_4 - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
								var_mana = var_mana - mana_action_guerrier_4;
							}
						}
						if (choice_action == 5)
						{
							if (var_mana < mana_action_guerrier_5)
							{
								cout << "Tu n'as pas assez de mana..." << endl;
							}
							else
							{
								var_hp_m = var_hp_m - var_attack_action_guerrier_5 + (var_defense_m / 10);
								cout << "Vous avez inflige " << var_attack_action_guerrier_5 - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
								var_mana = var_mana - mana_action_guerrier_5;
							}
						}
					}
				}
				if (choice == 2)
				{
					cout << "Vie du monstre : " << var_hp_m << "." << endl << endl;
					if (switch_action >= 1)
					{
						cout << "[1] Attaque : " << endl;
						cout << "[2] Objet : (tu en as " << var_obj << ")." << endl;
						cout << "[3] Actions : (tu as " << var_mana << " pts de mana)." << endl;
					}
					else
					{
						cout << "[1] Attaque : " << endl;
						cout << "[2] Objet : (tu en as " << var_obj << ")." << endl << endl;
					}
					cout << "Reponse : "; cin >> choice_approching;
					if (choice_approching == 1)
					{
						if (item_counter == 1)
						{
							cout << "[1] " << character_w.printClass_weapons() << "/" << var_attack + var_attack_w << " DMG" << endl << endl;
							cout << "Reponse : ";  cin >> attack_player;
							if (attack_player == 1) var_hp_m = var_hp_m - (var_attack + var_attack_w) + (var_defense_m / 10);
							cout << "L'ennemi s'est defendu et se releve de " << var_defense_m / 10 << " pts de vie en plus." << endl;
							cout << "Vous avez inflige " << (var_attack + var_attack_w) - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
						}
						else
						{
							cout << "[1] a la main" << "/" << var_attack << " DMG" << endl << endl;
							cout << "Reponse : ";  cin >> attack_player;
							if (attack_player == 1) var_hp_m = var_hp_m - var_attack + (var_defense_m / 10);
							cout << "L'ennemi s'est defendu et se releve de " << var_defense_m / 10 << " pts de vie en plus." << endl;
							cout << "Vous avez inflige " << var_attack - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
						}
					}

					if (choice_approching == 2)
					{
						if (var_obj_o_b <= 1)
						{
							cout << "[1] Bonbon : " << var_obj_o_b << endl;
						}
						else
						{
							cout << "[1] Bonbons : " << var_obj_o_b << endl;
						}
						if (var_obj_o_ba <= 1)
						{
							cout << "[2] Banane : " << var_obj_o_ba << endl;
						}
						else
						{
							cout << "[2] Bananes : " << var_obj_o_ba << endl;
						}
						if (var_obj_o_p <= 1)
						{
							cout << "[3] Pomme : " << var_obj_o_p << endl;
						}
						else
						{
							cout << "[3] Pommes : " << var_obj_o_p << endl;
						}
						cout << endl << endl;


						cout << "Reponse : "; cin >> object_player;
						if (object_player == 1)
						{
							if (var_obj_o_b >= 1)
							{
								cout << "L'objet vous redonnera " << var_hp_o_b << " pts de vie, Etes-vous certain de manger cet objet ? [y/n] : ";
								cin >> confirm;
								if (confirm == "y")
								{
									cout << "Narration : Le joueur mangea le bonbon, et recupere " << var_hp_o_b << " pts de vie." << endl << endl;
									var_hp = var_hp + var_hp_o_b;
									var_obj_o_b--;
									var_obj--;
								}
								if (confirm == "n") cout << "On annule tout alors !" << endl << endl;
							}
							else
							{
								cout << "Vous n'avez apparemment plus de bonbon..." << endl;
							}
						}
						if (object_player == 2)
						{
							if (var_obj_o_ba >= 1)
							{
								cout << "L'objet vous redonnera " << var_hp_o_ba << " pts de vie, Etes-vous certain de manger cet objet ? [y/n] : ";
								cin >> confirm;
								if (confirm == "y")
								{
									cout << "Narration : Le joueur mangea la banane, et recupere " << var_hp_o_ba << " pts de vie." << endl << endl;
									var_hp = var_hp + var_hp_o_ba;
									var_obj_o_ba--;
									var_obj--;
								}
								if (confirm == "n") cout << "On annule tout alors !" << endl << endl;
							}
							else
							{
								cout << "Vous n'avez apparemment plus de banane..." << endl;
							}
						}
						if (object_player == 3)
						{
							if (var_obj_o_p >= 1)
							{
								cout << "L'objet vous redonnera " << var_hp_o_p << " pts de vie, Etes-vous certain de manger cet objet ? [y/n] : ";
								cin >> confirm;
								if (confirm == "y")
								{
									cout << "Narration : Le joueur mangea la pomme, et recupere " << var_hp_o_p << " pts de vie." << endl << endl;
									var_hp = var_hp + var_hp_o_p;
									var_obj_o_p--;
									var_obj--;
								}
								if (confirm == "n") cout << "On annule tout alors !" << endl << endl;
							}
							else
							{
								cout << "Vous n'avez apparemment plus de pomme..." << endl;
							}
							while (!cin >> object_player || object_player > 3 || object_player < 1)
							{
								cout << "[Reponse invalide]" << endl << endl;
								cout << "[1] Bonbon(s) : " << var_obj_o_b << endl;
								cout << "[2] Banane(s) : " << var_obj_o_ba << endl;
								cout << "[3] Pomme(s) : " << var_obj_o_p << endl;


							}
						}
					}
					if (choice_approching == 3)
					{
						if (switch_action == 1)
						{
							cout << "[1] " << action_mage_1 << "/" << var_attack_action_mage_1 << " DMG" << endl;
							cout << "(" << mana_action_mage_1 << " pts de mana necessaire)." << endl;
							cout << "(" << pm_action_mage_1 << " pts de PM necessaire)." << endl;
						}
						if (switch_action == 2)
						{
							cout << "[1] " << action_mage_1 << "/" << var_attack_action_mage_1 << " DMG" << endl;
							cout << "(" << mana_action_mage_1 << " pts de mana necessaire)." << endl;
							cout << "(" << pm_action_mage_1 << " pts de PM necessaire)." << endl << endl;
							cout << "[2] " << action_mage_2 << "/" << var_attack_action_mage_2 << " DMG" << endl;
							cout << "(" << mana_action_mage_2 << " pts de mana necessaire)." << endl;
							cout << "(" << pm_action_mage_2 << " pts de PM necessaire)." << endl;
						}
						if (switch_action == 3)
						{
							cout << "[1] " << action_mage_1 << "/" << var_attack_action_mage_1 << " DMG" << endl;
							cout << "(" << mana_action_mage_1 << " pts de mana necessaire)." << endl;
							cout << "(" << pm_action_mage_1 << " pts de PM necessaire)." << endl << endl;
							cout << "[2] " << action_mage_2 << "/" << var_attack_action_mage_2 << " DMG" << endl;
							cout << "(" << mana_action_mage_2 << " pts de mana necessaire)." << endl;
							cout << "(" << pm_action_mage_2 << " pts de PM necessaire)." << endl << endl;
							cout << "[3] " << action_mage_3 << "/" << var_attack_action_mage_3 << " DMG" << endl;
							cout << "(" << mana_action_mage_3 << " pts de mana necessaire)." << endl;
							cout << "(" << pm_action_mage_3 << " pts de PM necessaire)." << endl;
						}
						if (switch_action == 4)
						{
							cout << "[1] " << action_mage_1 << "/" << var_attack_action_mage_1 << " DMG" << endl;
							cout << "(" << mana_action_mage_1 << " pts de mana necessaire)." << endl;
							cout << "(" << pm_action_mage_1 << " pts de PM necessaire)." << endl << endl;
							cout << "[2] " << action_mage_2 << "/" << var_attack_action_mage_2 << " DMG" << endl;
							cout << "(" << mana_action_mage_2 << " pts de mana necessaire)." << endl;
							cout << "(" << pm_action_mage_2 << " pts de PM necessaire)." << endl << endl;
							cout << "[3] " << action_mage_3 << "/" << var_attack_action_mage_3 << " DMG" << endl;
							cout << "(" << mana_action_mage_3 << " pts de mana necessaire)." << endl;
							cout << "(" << pm_action_mage_3 << " pts de PM necessaire)." << endl << endl;
							cout << "[4] " << action_mage_4 << "/" << var_attack_action_mage_4 << " DMG" << endl;
							cout << "(" << mana_action_mage_4 << " pts de mana necessaire)." << endl;
							cout << "(" << pm_action_mage_4 << " pts de PM necessaire)." << endl;
						}
						if (switch_action == 5)
						{
							cout << "[1] " << action_mage_1 << "/" << var_attack_action_mage_1 << " DMG" << endl;
							cout << "(" << mana_action_mage_1 << " pts de mana necessaire)." << endl;
							cout << "(" << pm_action_mage_1 << " pts de PM necessaire)." << endl << endl;
							cout << "[2] " << action_mage_2 << "/" << var_attack_action_mage_2 << " DMG" << endl;
							cout << "(" << mana_action_mage_2 << " pts de mana necessaire)." << endl;
							cout << "(" << pm_action_mage_2 << " pts de PM necessaire)." << endl << endl;
							cout << "[3] " << action_mage_3 << "/" << var_attack_action_mage_3 << " DMG" << endl;
							cout << "(" << mana_action_mage_3 << " pts de mana necessaire)." << endl;
							cout << "(" << pm_action_mage_3 << " pts de PM necessaire)." << endl << endl;
							cout << "[4] " << action_mage_4 << "/" << var_attack_action_mage_4 << " DMG" << endl;
							cout << "(" << mana_action_mage_4 << " pts de mana necessaire)." << endl;
							cout << "(" << pm_action_mage_4 << " pts de PM necessaire)." << endl << endl;
							cout << "[5] " << action_mage_5 << "/" << var_attack_action_mage_5 << " DMG" << endl;
							cout << "(" << mana_action_mage_5 << " pts de mana necessaire)." << endl;
							cout << "(" << pm_action_mage_5 << " pts de PM necessaire)." << endl;
						}
						cout << "Reponse : ";  cin >> choice_action;
						cout << endl << endl;

						if (choice_action == 1)
						{
							if (var_mana < mana_action_mage_1 && var_mp < pm_action_mage_1)
							{
								cout << "Tu n'as pas assez de mana et de PM..." << endl;
							}
							else if (var_mana < mana_action_mage_1)
							{
								cout << "Tu n'as pas assez de mana..." << endl;
							}
							else if (var_mp < pm_action_mage_1)
							{
								cout << "Tu n'as pas assez de PM..." << endl;
							}
							else
							{
								var_hp_m = var_hp_m - var_attack_action_mage_1 + (var_defense_m / 10);
								cout << "Vous avez inflige " << var_attack_action_mage_1 - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
								var_mana = var_mana - mana_action_mage_1;
							}
						}

						if (choice_action == 2)
						{
							if (var_mana < mana_action_mage_2 && var_mp < pm_action_mage_2)
							{
								cout << "Tu n'as pas assez de mana et de PM..." << endl;
							}
							else if (var_mana < mana_action_mage_2)
							{
								cout << "Tu n'as pas assez de mana..." << endl;
							}
							else if (var_mp < pm_action_mage_2)
							{
								cout << "Tu n'as pas assez de PM..." << endl;
							}
							else
							{
								var_hp_m = var_hp_m - var_attack_action_mage_2 + (var_defense_m / 10);
								cout << "Vous avez inflige " << var_attack_action_mage_2 - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
								var_mana = var_mana - mana_action_mage_2;
							}
						}

						if (choice_action == 3)
						{
							if (var_mana < mana_action_mage_3 && var_mp < pm_action_mage_3)
							{
								cout << "Tu n'as pas assez de mana et de PM..." << endl;
							}
							else if (var_mana < mana_action_mage_3)
							{
								cout << "Tu n'as pas assez de mana..." << endl;
							}
							else if (var_mp < pm_action_mage_3)
							{
								cout << "Tu n'as pas assez de PM..." << endl;
							}
							else
							{
								var_hp_m = var_hp_m - var_attack_action_mage_3 + (var_defense_m / 10);
								cout << "Vous avez inflige " << var_attack_action_mage_3 - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
								var_mana = var_mana - mana_action_mage_3;
							}
						}

						if (choice_action == 4)
						{
							if (var_mana < mana_action_mage_4 && var_mp < pm_action_mage_4)
							{
								cout << "Tu n'as pas assez de mana et de PM..." << endl;
							}
							else if (var_mana < mana_action_mage_4)
							{
								cout << "Tu n'as pas assez de mana..." << endl;
							}
							else if (var_mp < pm_action_mage_4)
							{
								cout << "Tu n'as pas assez de PM..." << endl;
							}
							else
							{
								var_hp_m = var_hp_m - var_attack_action_mage_4 + (var_defense_m / 10);
								cout << "Vous avez inflige " << var_attack_action_mage_4 - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
								var_mana = var_mana - mana_action_mage_4;
							}
						}

						if (choice_action == 5)
						{
							if (var_mana < mana_action_mage_5 && var_mp < pm_action_mage_5)
							{
								cout << "Tu n'as pas assez de mana et de PM..." << endl;
							}
							else if (var_mana < mana_action_mage_5)
							{
								cout << "Tu n'as pas assez de mana..." << endl;
							}
							else if (var_mp < pm_action_mage_5)
							{
								cout << "Tu n'as pas assez de PM..." << endl;
							}
							else
							{
								var_hp_m = var_hp_m - var_attack_action_mage_5 + (var_defense_m / 10);
								cout << "Vous avez inflige " << var_attack_action_mage_5 - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
								var_mana = var_mana - mana_action_mage_5;
							}
						}
					}
				}
				if (choice == 3)
				{
					cout << "Vie du monstre : " << var_hp_m << "." << endl << endl;
					if (switch_action >= 1)
					{
						cout << "[1] Attaque : " << endl;
						cout << "[2] Objet : (tu en as " << var_obj << ")." << endl;
						cout << "[3] Actions : (tu as " << var_mana << " pts de mana)." << endl;
					}
					else
					{
						cout << "[1] Attaque : " << endl;
						cout << "[2] Objet : (tu en as " << var_obj << ")." << endl << endl;
					}
					cout << "Reponse : "; cin >> choice_approching;
					if (choice_approching == 1)
					{
						if (item_counter == 1)
						{
							cout << "[1] " << character_w.printClass_weapons() << "/" << var_attack + var_attack_w << " DMG" << endl << endl;
							cout << "Reponse : ";  cin >> attack_player;
							if (attack_player == 1) var_hp_m = var_hp_m - (var_attack + var_attack_w) + (var_defense_m / 10);
							cout << "L'ennemi s'est defendu et se releve de " << var_defense_m / 10 << " pts de vie en plus." << endl;
							cout << "Vous avez inflige " << (var_attack + var_attack_w) - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
						}
						else
						{
							cout << "[1] a la main" << "/" << var_attack << " DMG" << endl << endl;
							cout << "Reponse : ";  cin >> attack_player;
							if (attack_player == 1) var_hp_m = var_hp_m - var_attack + (var_defense_m / 10);
							cout << "L'ennemi s'est defendu et se releve de " << var_defense_m / 10 << " pts de vie en plus." << endl;
							cout << "Vous avez inflige " << var_attack - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
						}
					}

					if (choice_approching == 2)
					{
						if (var_obj_o_b <= 1)
						{
							cout << "[1] Bonbon : " << var_obj_o_b << endl;
						}
						else
						{
							cout << "[1] Bonbons : " << var_obj_o_b << endl;
						}
						if (var_obj_o_ba <= 1)
						{
							cout << "[2] Banane : " << var_obj_o_ba << endl;
						}
						else
						{
							cout << "[2] Bananes : " << var_obj_o_ba << endl;
						}
						if (var_obj_o_p <= 1)
						{
							cout << "[3] Pomme : " << var_obj_o_p << endl;
						}
						else
						{
							cout << "[3] Pommes : " << var_obj_o_p << endl;
						}
						cout << endl << endl;


						cout << "Reponse : "; cin >> object_player;
						if (object_player == 1)
						{
							if (var_obj_o_b >= 1)
							{
								cout << "L'objet vous redonnera " << var_hp_o_b << " pts de vie, Etes-vous certain de manger cet objet ? [y/n] : ";
								cin >> confirm;
								if (confirm == "y")
								{
									cout << "Narration : Le joueur mangea le bonbon, et recupere " << var_hp_o_b << " pts de vie." << endl << endl;
									var_hp = var_hp + var_hp_o_b;
									var_obj_o_b--;
									var_obj--;
								}
								if (confirm == "n") cout << "On annule tout alors !" << endl << endl;
							}
							else
							{
								cout << "Vous n'avez apparemment plus de bonbon..." << endl;
							}
						}
						if (object_player == 2)
						{
							if (var_obj_o_ba >= 1)
							{
								cout << "L'objet vous redonnera " << var_hp_o_ba << " pts de vie, Etes-vous certain de manger cet objet ? [y/n] : ";
								cin >> confirm;
								if (confirm == "y")
								{
									cout << "Narration : Le joueur mangea la banane, et recupere " << var_hp_o_ba << " pts de vie." << endl << endl;
									var_hp = var_hp + var_hp_o_ba;
									var_obj_o_ba--;
									var_obj--;
								}
								if (confirm == "n") cout << "On annule tout alors !" << endl << endl;
							}
							else
							{
								cout << "Vous n'avez apparemment plus de banane..." << endl;
							}
						}
						if (object_player == 3)
						{
							if (var_obj_o_p >= 1)
							{
								cout << "L'objet vous redonnera " << var_hp_o_p << " pts de vie, Etes-vous certain de manger cet objet ? [y/n] : ";
								cin >> confirm;
								if (confirm == "y")
								{
									cout << "Narration : Le joueur mangea la pomme, et recupere " << var_hp_o_p << " pts de vie." << endl << endl;
									var_hp = var_hp + var_hp_o_p;
									var_obj_o_p--;
									var_obj--;
								}
								if (confirm == "n") cout << "On annule tout alors !" << endl << endl;
							}
							else
							{
								cout << "Vous n'avez apparemment plus de pomme..." << endl;
							}
							while (!cin >> object_player || object_player > 3 || object_player < 1)
							{
								cout << "[Reponse invalide]" << endl << endl;
								cout << "[1] Bonbon(s) : " << var_obj_o_b << endl;
								cout << "[2] Banane(s) : " << var_obj_o_ba << endl;
								cout << "[3] Pomme(s) : " << var_obj_o_p << endl;


							}
						}
					}
					if (choice_approching == 3)
					{
						if (switch_action == 1)
						{
							cout << "[1] " << action_pretre_1 << "/" << var_attack_action_guerrier_1 << " HP" << endl;
							cout << "(" << mana_action_pretre_1 << " pts de mana necessaire)." << endl;
							cout << "(" << pm_action_pretre_1 << " pts de PM necessaire)." << endl;
						}
						if (switch_action == 2)
						{
							cout << "[1] " << action_pretre_1 << "/" << var_attack_action_guerrier_1 << " HP" << endl;
							cout << "(" << mana_action_pretre_1 << " pts de mana necessaire)." << endl << endl;
							cout << "[2] " << action_pretre_2 << "/" << var_attack_action_guerrier_2 << " HP" << endl;
							cout << "(" << mana_action_pretre_2 << " pts de mana necessaire)." << endl << endl;
						}
						if (switch_action == 3)
						{
							cout << "[1] " << action_pretre_1 << "/" << var_attack_action_guerrier_1 << " HP" << endl;
							cout << "(" << mana_action_pretre_1 << " pts de mana necessaire)." << endl;
							cout << "(" << pm_action_pretre_1 << " pts de PM necessaire)." << endl << endl;
							cout << "[2] " << action_pretre_2 << "/" << var_attack_action_guerrier_2 << " HP" << endl;
							cout << "(" << mana_action_pretre_2 << " pts de mana necessaire)." << endl;
							cout << "(" << pm_action_pretre_2 << " pts de PM necessaire)." << endl << endl;
							cout << "[3] " << action_pretre_3 << "/" << var_attack_action_guerrier_3 << " HP" << endl;
							cout << "(" << mana_action_pretre_3 << " pts de mana necessaire)." << endl;
							cout << "(" << pm_action_pretre_3 << " pts de PM necessaire)." << endl;
						}
						if (switch_action == 4)
						{
							cout << "[1] " << action_pretre_1 << "/" << var_attack_action_guerrier_1 << " HP" << endl;
							cout << "(" << mana_action_pretre_1 << " pts de mana necessaire)." << endl;
							cout << "(" << pm_action_pretre_1 << " pts de PM necessaire)." << endl << endl;
							cout << "[2] " << action_pretre_2 << "/" << var_attack_action_guerrier_2 << " HP" << endl;
							cout << "(" << mana_action_pretre_2 << " pts de mana necessaire)." << endl;
							cout << "(" << pm_action_pretre_2 << " pts de PM necessaire)." << endl << endl;
							cout << "[3] " << action_pretre_3 << "/" << var_attack_action_guerrier_3 << " HP" << endl;
							cout << "(" << mana_action_pretre_3 << " pts de mana necessaire)." << endl;
							cout << "(" << pm_action_pretre_3 << " pts de PM necessaire)." << endl << endl;
							cout << "[4] " << action_pretre_4 << "/" << var_attack_action_guerrier_4 << " HP" << endl;
							cout << "(" << mana_action_pretre_4 << " pts de mana necessaire)." << endl;
							cout << "(" << pm_action_pretre_4 << " pts de PM necessaire)." << endl;
						}
						if (switch_action == 5)
						{
							cout << "[1] " << action_pretre_1 << "/" << var_attack_action_guerrier_1 << " HP" << endl;
							cout << "(" << mana_action_pretre_1 << " pts de mana necessaire)." << endl;
							cout << "(" << pm_action_pretre_1 << " pts de PM necessaire)." << endl << endl;
							cout << "[2] " << action_pretre_2 << "/" << var_attack_action_guerrier_2 << " HP" << endl;
							cout << "(" << mana_action_pretre_2 << " pts de mana necessaire)." << endl;
							cout << "(" << pm_action_pretre_2 << " pts de PM necessaire)." << endl << endl;
							cout << "[3] " << action_pretre_3 << "/" << var_attack_action_guerrier_3 << " HP" << endl;
							cout << "(" << mana_action_pretre_3 << " pts de mana necessaire)." << endl;
							cout << "(" << pm_action_pretre_3 << " pts de PM necessaire)." << endl << endl;
							cout << "[4] " << action_pretre_4 << "/" << var_attack_action_guerrier_4 << " HP" << endl;
							cout << "(" << mana_action_pretre_4 << " pts de mana necessaire)." << endl;
							cout << "(" << pm_action_pretre_4 << " pts de PM necessaire)." << endl << endl;
							cout << "[5] " << action_pretre_5 << "/" << var_attack_action_guerrier_5 << " HP" << endl;
							cout << "(" << mana_action_pretre_5 << " pts de mana necessaire)." << endl;
							cout << "(" << pm_action_pretre_5 << " pts de PM necessaire)." << endl;
						}
						cout << "Reponse : ";  cin >> choice_action;
						cout << endl << endl;

						if (choice_action == 1)
						{
							if (var_mana < mana_action_pretre_1 && var_mp < pm_action_pretre_1)
							{
								cout << "Tu n'as pas assez de mana et de PM..." << endl;
							}
							else if (var_mana < mana_action_pretre_1)
							{
								cout << "Tu n'as pas assez de mana..." << endl;
							}
							else if (var_mp < pm_action_pretre_1)
							{
								cout << "Tu n'as pas assez de PM..." << endl;
							}
							else
							{
								var_hp_m = var_hp_m - var_attack_action_pretre_1 + (var_defense_m / 10);
								cout << "Vous avez inflige " << var_attack_action_pretre_1 - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
								var_mana = var_mana - mana_action_pretre_1;
							}
						}

						if (choice_action == 2)
						{
							if (var_mana < mana_action_pretre_2 && var_mp < pm_action_pretre_2)
							{
								cout << "Tu n'as pas assez de mana et de PM..." << endl;
							}
							else if (var_mana < mana_action_pretre_2)
							{
								cout << "Tu n'as pas assez de mana..." << endl;
							}
							else if (var_mp < pm_action_pretre_2)
							{
								cout << "Tu n'as pas assez de PM..." << endl;
							}
							else
							{
								var_hp_m = var_hp_m - var_attack_action_pretre_2 + (var_defense_m / 10);
								cout << "Vous avez inflige " << var_attack_action_pretre_2 - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
								var_mana = var_mana - mana_action_pretre_2;
							}
						}

						if (choice_action == 3)
						{
							if (var_mana < mana_action_pretre_3 && var_mp < pm_action_pretre_3)
							{
								cout << "Tu n'as pas assez de mana et de PM..." << endl;
							}
							else if (var_mana < mana_action_pretre_3)
							{
								cout << "Tu n'as pas assez de mana..." << endl;
							}
							else if (var_mp < pm_action_pretre_3)
							{
								cout << "Tu n'as pas assez de PM..." << endl;
							}
							else
							{
								var_hp_m = var_hp_m - var_attack_action_pretre_3 + (var_defense_m / 10);
								cout << "Vous avez inflige " << var_attack_action_pretre_3 - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
								var_mana = var_mana - mana_action_pretre_3;
							}
						}

						if (choice_action == 4)
						{
							if (var_mana < mana_action_pretre_4 && var_mp < pm_action_pretre_4)
							{
								cout << "Tu n'as pas assez de mana et de PM..." << endl;
							}
							else if (var_mana < mana_action_pretre_4)
							{
								cout << "Tu n'as pas assez de mana..." << endl;
							}
							else if (var_mp < pm_action_pretre_4)
							{
								cout << "Tu n'as pas assez de PM..." << endl;
							}
							else
							{
								var_hp_m = var_hp_m - var_attack_action_pretre_4 + (var_defense_m / 10);
								cout << "Vous avez inflige " << var_attack_action_pretre_4 - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
								var_mana = var_mana - mana_action_pretre_4;
							}
						}

						if (choice_action == 5)
						{
							if (var_mana < mana_action_pretre_5 && var_mp < pm_action_pretre_5)
							{
								cout << "Tu n'as pas assez de mana et de PM..." << endl;
							}
							else if (var_mana < mana_action_pretre_5)
							{
								cout << "Tu n'as pas assez de mana..." << endl;
							}
							else if (var_mp < pm_action_pretre_5)
							{
								cout << "Tu n'as pas assez de PM..." << endl;
							}
							else
							{
								var_hp_m = var_hp_m - var_attack_action_pretre_5 + (var_defense_m / 10);
								cout << "Vous avez inflige " << var_attack_action_pretre_5 - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
								var_mana = var_mana - mana_action_pretre_5;
							}
						}
					}
				}
				if (choice == 4)
				{
					cout << "Vie du monstre : " << var_hp_m << "." << endl << endl;
					if (switch_action >= 1)
					{
						cout << "[1] Attaque : " << endl;
						cout << "[2] Objet : (tu en as " << var_obj << ")." << endl;
						cout << "[3] Actions : (tu as " << var_mana << " pts de mana)." << endl;
					}
					else
					{
						cout << "[1] Attaque : " << endl;
						cout << "[2] Objet : (tu en as " << var_obj << ")." << endl << endl;
					}
					cout << "Reponse : "; cin >> choice_approching;
					if (choice_approching == 1)
					{
						if (item_counter == 1)
						{
							cout << "[1] " << character_w.printClass_weapons() << "/" << var_attack + var_attack_w << " DMG" << endl << endl;
							cout << "Reponse : ";  cin >> attack_player;
							if (attack_player == 1) var_hp_m = var_hp_m - (var_attack + var_attack_w) + (var_defense_m / 10);
							cout << "L'ennemi s'est defendu et se releve de " << var_defense_m / 10 << " pts de vie en plus." << endl;
							cout << "Vous avez inflige " << (var_attack + var_attack_w) - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
						}
						else
						{
							cout << "[1] a la main" << "/" << var_attack << " DMG" << endl << endl;
							cout << "Reponse : ";  cin >> attack_player;
							if (attack_player == 1) var_hp_m = var_hp_m - var_attack + (var_defense_m / 10);
							cout << "L'ennemi s'est defendu et se releve de " << var_defense_m / 10 << " pts de vie en plus." << endl;
							cout << "Vous avez inflige " << var_attack - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
						}
					}

					if (choice_approching == 2)
					{
						if (var_obj_o_b <= 1)
						{
							cout << "[1] Bonbon : " << var_obj_o_b << endl;
						}
						else
						{
							cout << "[1] Bonbons : " << var_obj_o_b << endl;
						}
						if (var_obj_o_ba <= 1)
						{
							cout << "[2] Banane : " << var_obj_o_ba << endl;
						}
						else
						{
							cout << "[2] Bananes : " << var_obj_o_ba << endl;
						}
						if (var_obj_o_p <= 1)
						{
							cout << "[3] Pomme : " << var_obj_o_p << endl;
						}
						else
						{
							cout << "[3] Pommes : " << var_obj_o_p << endl;
						}
						cout << endl << endl;


						cout << "Reponse : "; cin >> object_player;
						if (object_player == 1)
						{
							if (var_obj_o_b >= 1)
							{
								cout << "L'objet vous redonnera " << var_hp_o_b << " pts de vie, Etes-vous certain de manger cet objet ? [y/n] : ";
								cin >> confirm;
								if (confirm == "y")
								{
									cout << "Narration : Le joueur mangea le bonbon, et recupere " << var_hp_o_b << " pts de vie." << endl << endl;
									var_hp = var_hp + var_hp_o_b;
									var_obj_o_b--;
									var_obj--;
								}
								if (confirm == "n") cout << "On annule tout alors !" << endl << endl;
							}
							else
							{
								cout << "Vous n'avez apparemment plus de bonbon..." << endl;
							}
						}
						if (object_player == 2)
						{
							if (var_obj_o_ba >= 1)
							{
								cout << "L'objet vous redonnera " << var_hp_o_ba << " pts de vie, Etes-vous certain de manger cet objet ? [y/n] : ";
								cin >> confirm;
								if (confirm == "y")
								{
									cout << "Narration : Le joueur mangea la banane, et recupere " << var_hp_o_ba << " pts de vie." << endl << endl;
									var_hp = var_hp + var_hp_o_ba;
									var_obj_o_ba--;
									var_obj--;
								}
								if (confirm == "n") cout << "On annule tout alors !" << endl << endl;
							}
							else
							{
								cout << "Vous n'avez apparemment plus de banane..." << endl;
							}
						}
						if (object_player == 3)
						{
							if (var_obj_o_p >= 1)
							{
								cout << "L'objet vous redonnera " << var_hp_o_p << " pts de vie, Etes-vous certain de manger cet objet ? [y/n] : ";
								cin >> confirm;
								if (confirm == "y")
								{
									cout << "Narration : Le joueur mangea la pomme, et recupere " << var_hp_o_p << " pts de vie." << endl << endl;
									var_hp = var_hp + var_hp_o_p;
									var_obj_o_p--;
									var_obj--;
								}
								if (confirm == "n") cout << "On annule tout alors !" << endl << endl;
							}
							else
							{
								cout << "Vous n'avez apparemment plus de pomme..." << endl;
							}
							while (!cin >> object_player || object_player > 3 || object_player < 1)
							{
								cout << "[Reponse invalide]" << endl << endl;
								cout << "[1] Bonbon(s) : " << var_obj_o_b << endl;
								cout << "[2] Banane(s) : " << var_obj_o_ba << endl;
								cout << "[3] Pomme(s) : " << var_obj_o_p << endl;


							}
						}
					}
					if (choice_approching == 3)
					{
						if (switch_action == 1)
						{
							cout << "[1] " << action_archer_1 << "/" << var_attack_action_archer_1 << " DMG" << endl;
							cout << "(" << mana_action_archer_1 << " pts de mana necessaire)." << endl << endl;
						}
						if (switch_action == 2)
						{
							cout << "[1] " << action_archer_1 << "/" << var_attack_action_archer_1 << " DMG" << endl;
							cout << "(" << mana_action_archer_1 << " pts de mana necessaire)." << endl << endl;
							cout << "[2] " << action_archer_2 << "/" << var_attack_action_archer_2 << " DMG" << endl;
							cout << "(" << mana_action_archer_2 << " pts de mana necessaire)." << endl << endl;
						}
						if (switch_action == 3)
						{
							cout << "[1] " << action_archer_1 << "/" << var_attack_action_archer_1 << " DMG" << endl;
							cout << "(" << mana_action_archer_1 << " pts de mana necessaire)." << endl << endl;
							cout << "[2] " << action_archer_2 << "/" << var_attack_action_archer_2 << " DMG" << endl;
							cout << "(" << mana_action_archer_2 << " pts de mana necessaire)." << endl << endl;
							cout << "[3] " << action_archer_3 << "/" << var_attack_action_archer_3 << " DMG" << endl;
							cout << "(" << mana_action_archer_3 << " pts de mana necessaire)." << endl << endl;
						}
						if (switch_action == 4)
						{
							cout << "[1] " << action_archer_1 << "/" << var_attack_action_archer_1 << " DMG" << endl;
							cout << "(" << mana_action_archer_1 << " pts de mana necessaire)." << endl << endl;
							cout << "[2] " << action_archer_2 << "/" << var_attack_action_archer_2 << " DMG" << endl;
							cout << "(" << mana_action_archer_2 << " pts de mana necessaire)." << endl << endl;
							cout << "[3] " << action_archer_3 << "/" << var_attack_action_archer_3 << " DMG" << endl;
							cout << "(" << mana_action_archer_3 << " pts de mana necessaire)." << endl << endl;
							cout << "[4] " << action_archer_4 << "/" << var_attack_action_archer_4 << " DMG" << endl;
							cout << "(" << mana_action_archer_4 << " pts de mana necessaire)." << endl << endl;
						}
						if (switch_action == 5)
						{
							cout << "[1] " << action_archer_1 << "/" << var_attack_action_archer_1 << " DMG" << endl;
							cout << "(" << mana_action_archer_1 << " pts de mana necessaire)." << endl << endl;
							cout << "[2] " << action_archer_2 << "/" << var_attack_action_archer_2 << " DMG" << endl;
							cout << "(" << mana_action_archer_2 << " pts de mana necessaire)." << endl << endl;
							cout << "[3] " << action_archer_3 << "/" << var_attack_action_archer_3 << " DMG" << endl;
							cout << "(" << mana_action_archer_3 << " pts de mana necessaire)." << endl << endl;
							cout << "[4] " << action_archer_4 << "/" << var_attack_action_archer_4 << " DMG" << endl;
							cout << "(" << mana_action_archer_4 << " pts de mana necessaire)." << endl << endl;
							cout << "[5] " << action_archer_5 << "/" << var_attack_action_archer_5 << " DMG" << endl;
							cout << "(" << mana_action_archer_5 << " pts de mana necessaire)." << endl << endl;
						}

						cout << "Reponse : ";  cin >> choice_action;
						cout << endl << endl;

						if (choice_action == 1)
						{
							if (var_mana < mana_action_archer_1)
							{
								cout << "Tu n'as pas assez de mana..." << endl;
							}
							else
							{
								var_hp_m = var_hp_m - var_attack_action_archer_1 + (var_defense_m / 10);
								cout << "Vous avez inflige " << var_attack_action_archer_1 - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
								var_mana = var_mana - mana_action_archer_1;
							}
						}
						if (choice_action == 2)
						{
							if (var_mana < mana_action_archer_2)
							{
								cout << "Tu n'as pas assez de mana..." << endl;
							}
							else
							{
								var_hp_m = var_hp_m - var_attack_action_archer_2 + (var_defense_m / 10);
								cout << "Vous avez inflige " << var_attack_action_archer_2 - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
								var_mana = var_mana - mana_action_archer_2;
							}
						}
						if (choice_action == 3)
						{
							if (var_mana < mana_action_archer_3)
							{
								cout << "Tu n'as pas assez de mana..." << endl;
							}
							else
							{
								var_hp_m = var_hp_m - var_attack_action_archer_3 + (var_defense_m / 10);
								cout << "Vous avez inflige " << var_attack_action_archer_3 - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
								var_mana = var_mana - mana_action_archer_3;
							}
						}
						if (choice_action == 4)
						{
							if (var_mana < mana_action_archer_4)
							{
								cout << "Tu n'as pas assez de mana..." << endl;
							}
							else
							{
								var_hp_m = var_hp_m - var_attack_action_archer_4 + (var_defense_m / 10);
								cout << "Vous avez inflige " << var_attack_action_archer_4 - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
								var_mana = var_mana - mana_action_archer_4;
							}
						}
						if (choice_action == 5)
						{
							if (var_mana < mana_action_archer_5)
							{
								cout << "Tu n'as pas assez de mana..." << endl;
							}
							else
							{
								var_hp_m = var_hp_m - var_attack_action_archer_5 + (var_defense_m / 10);
								cout << "Vous avez inflige " << var_attack_action_archer_5 - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
								var_mana = var_mana - mana_action_archer_5;
							}
						}
					}
				}
				if (choice == 5)
				{
					cout << "Vie du monstre : " << var_hp_m << "." << endl << endl;
					if (switch_action >= 1)
					{
						cout << "[1] Attaque : " << endl;
						cout << "[2] Objet : (tu en as " << var_obj << ")." << endl;
						cout << "[3] Actions : (tu as " << var_mana << " pts de mana)." << endl;
					}
					else
					{
						cout << "[1] Attaque : " << endl;
						cout << "[2] Objet : (tu en as " << var_obj << ")." << endl << endl;
					}
					cout << "Reponse : "; cin >> choice_approching;
					if (choice_approching == 1)
					{
						if (item_counter == 1)
						{
							cout << "[1] " << character_w.printClass_weapons() << "/" << var_attack + var_attack_w << " DMG" << endl << endl;
							cout << "Reponse : ";  cin >> attack_player;
							if (attack_player == 1) var_hp_m = var_hp_m - (var_attack + var_attack_w) + (var_defense_m / 10);
							cout << "L'ennemi s'est defendu et se releve de " << var_defense_m / 10 << " pts de vie en plus." << endl;
							cout << "Vous avez inflige " << (var_attack + var_attack_w) - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
						}
						else
						{
							cout << "[1] a la main" << "/" << var_attack << " DMG" << endl << endl;
							cout << "Reponse : ";  cin >> attack_player;
							if (attack_player == 1) var_hp_m = var_hp_m - var_attack + (var_defense_m / 10);
							cout << "L'ennemi s'est defendu et se releve de " << var_defense_m / 10 << " pts de vie en plus." << endl;
							cout << "Vous avez inflige " << var_attack - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
						}
					}

					if (choice_approching == 2)
					{
						if (var_obj_o_b <= 1)
						{
							cout << "[1] Bonbon : " << var_obj_o_b << endl;
						}
						else
						{
							cout << "[1] Bonbons : " << var_obj_o_b << endl;
						}
						if (var_obj_o_ba <= 1)
						{
							cout << "[2] Banane : " << var_obj_o_ba << endl;
						}
						else
						{
							cout << "[2] Bananes : " << var_obj_o_ba << endl;
						}
						if (var_obj_o_p <= 1)
						{
							cout << "[3] Pomme : " << var_obj_o_p << endl;
						}
						else
						{
							cout << "[3] Pommes : " << var_obj_o_p << endl;
						}
						cout << endl << endl;


						cout << "Reponse : "; cin >> object_player;
						if (object_player == 1)
						{
							if (var_obj_o_b >= 1)
							{
								cout << "L'objet vous redonnera " << var_hp_o_b << " pts de vie, Etes-vous certain de manger cet objet ? [y/n] : ";
								cin >> confirm;
								if (confirm == "y")
								{
									cout << "Narration : Le joueur mangea le bonbon, et recupere " << var_hp_o_b << " pts de vie." << endl << endl;
									var_hp = var_hp + var_hp_o_b;
									var_obj_o_b--;
									var_obj--;
								}
								if (confirm == "n") cout << "On annule tout alors !" << endl << endl;
							}
							else
							{
								cout << "Vous n'avez apparemment plus de bonbon..." << endl;
							}
						}
						if (object_player == 2)
						{
							if (var_obj_o_ba >= 1)
							{
								cout << "L'objet vous redonnera " << var_hp_o_ba << " pts de vie, Etes-vous certain de manger cet objet ? [y/n] : ";
								cin >> confirm;
								if (confirm == "y")
								{
									cout << "Narration : Le joueur mangea la banane, et recupere " << var_hp_o_ba << " pts de vie." << endl << endl;
									var_hp = var_hp + var_hp_o_ba;
									var_obj_o_ba--;
									var_obj--;
								}
								if (confirm == "n") cout << "On annule tout alors !" << endl << endl;
							}
							else
							{
								cout << "Vous n'avez apparemment plus de banane..." << endl;
							}
						}
						if (object_player == 3)
						{
							if (var_obj_o_p >= 1)
							{
								cout << "L'objet vous redonnera " << var_hp_o_p << " pts de vie, Etes-vous certain de manger cet objet ? [y/n] : ";
								cin >> confirm;
								if (confirm == "y")
								{
									cout << "Narration : Le joueur mangea la pomme, et recupere " << var_hp_o_p << " pts de vie." << endl << endl;
									var_hp = var_hp + var_hp_o_p;
									var_obj_o_p--;
									var_obj--;
								}
								if (confirm == "n") cout << "On annule tout alors !" << endl << endl;
							}
							else
							{
								cout << "Vous n'avez apparemment plus de pomme..." << endl;
							}
							while (!cin >> object_player || object_player > 3 || object_player < 1)
							{
								cout << "[Reponse invalide]" << endl << endl;
								cout << "[1] Bonbon(s) : " << var_obj_o_b << endl;
								cout << "[2] Banane(s) : " << var_obj_o_ba << endl;
								cout << "[3] Pomme(s) : " << var_obj_o_p << endl;


							}
						}
					}
					if (choice_approching == 3)
					{
						if (switch_action == 1)
						{
							cout << "[1] " << action_tank_1 << "/" << var_attack_action_tank_1 << " DMG" << endl;
							cout << "(" << mana_action_tank_1 << " pts de mana necessaire)." << endl << endl;
						}
						if (switch_action == 2)
						{
							cout << "[1] " << action_tank_1 << "/" << var_attack_action_tank_1 << " DMG" << endl;
							cout << "(" << mana_action_tank_1 << " pts de mana necessaire)." << endl << endl;
							cout << "[2] " << action_tank_2 << "/" << var_attack_action_tank_2 << " DMG" << endl;
							cout << "(" << mana_action_tank_2 << " pts de mana necessaire)." << endl << endl;
						}
						if (switch_action == 3)
						{
							cout << "[1] " << action_tank_1 << "/" << var_attack_action_tank_1 << " DMG" << endl;
							cout << "(" << mana_action_tank_1 << " pts de mana necessaire)." << endl << endl;
							cout << "[2] " << action_tank_2 << "/" << var_attack_action_tank_2 << " DMG" << endl;
							cout << "(" << mana_action_tank_2 << " pts de mana necessaire)." << endl << endl;
							cout << "[3] " << action_tank_3 << "/" << var_attack_action_tank_3 << " DMG" << endl;
							cout << "(" << mana_action_tank_3 << " pts de mana necessaire)." << endl << endl;
						}
						if (switch_action == 4)
						{
							cout << "[1] " << action_tank_1 << "/" << var_attack_action_tank_1 << " DMG" << endl;
							cout << "(" << mana_action_tank_1 << " pts de mana necessaire)." << endl << endl;
							cout << "[2] " << action_tank_2 << "/" << var_attack_action_tank_2 << " DMG" << endl;
							cout << "(" << mana_action_tank_2 << " pts de mana necessaire)." << endl << endl;
							cout << "[3] " << action_tank_3 << "/" << var_attack_action_tank_3 << " DMG" << endl;
							cout << "(" << mana_action_tank_3 << " pts de mana necessaire)." << endl << endl;
							cout << "[4] " << action_tank_4 << "/" << var_attack_action_tank_4 << " DMG" << endl;
							cout << "(" << mana_action_tank_4 << " pts de mana necessaire)." << endl << endl;
						}
						if (switch_action == 5)
						{
							cout << "[1] " << action_tank_1 << "/" << var_attack_action_tank_1 << " DMG" << endl;
							cout << "(" << mana_action_tank_1 << " pts de mana necessaire)." << endl << endl;
							cout << "[2] " << action_tank_2 << "/" << var_attack_action_tank_2 << " DMG" << endl;
							cout << "(" << mana_action_tank_2 << " pts de mana necessaire)." << endl << endl;
							cout << "[3] " << action_tank_3 << "/" << var_attack_action_tank_3 << " DMG" << endl;
							cout << "(" << mana_action_tank_3 << " pts de mana necessaire)." << endl << endl;
							cout << "[4] " << action_tank_4 << "/" << var_attack_action_tank_4 << " DMG" << endl;
							cout << "(" << mana_action_tank_4 << " pts de mana necessaire)." << endl << endl;
							cout << "[1] " << action_tank_5 << "/" << var_attack_action_tank_5 << " DMG" << endl;
							cout << "(" << mana_action_tank_5 << " pts de mana necessaire)." << endl << endl;

						}
						cout << "Reponse : ";  cin >> choice_action;
						cout << endl << endl;

						if (choice_action == 1)
						{
							if (var_mana < mana_action_tank_1)
							{
								cout << "Tu n'as pas assez de mana..." << endl;
							}
							else
							{
								var_hp_m = var_hp_m - var_attack_action_tank_1 + (var_defense_m / 10);
								cout << "Vous avez inflige " << var_attack_action_tank_1 - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
								var_mana = var_mana - mana_action_tank_1;
							}
						}

						if (choice_action == 2)
						{
							if (var_mana < mana_action_tank_2)
							{
								cout << "Tu n'as pas assez de mana..." << endl;
							}
							else
							{
								var_hp_m = var_hp_m - var_attack_action_tank_2 + (var_defense_m / 10);
								cout << "Vous avez inflige " << var_attack_action_tank_2 - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
								var_mana = var_mana - mana_action_tank_2;
							}
						}

						if (choice_action == 3)
						{
							if (var_mana < mana_action_tank_3)
							{
								cout << "Tu n'as pas assez de mana..." << endl;
							}
							else
							{
								var_hp_m = var_hp_m - var_attack_action_tank_3 + (var_defense_m / 10);
								cout << "Vous avez inflige " << var_attack_action_tank_3 - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
								var_mana = var_mana - mana_action_tank_3;
							}
						}

						if (choice_action == 4)
						{
							if (var_mana < mana_action_tank_4)
							{
								cout << "Tu n'as pas assez de mana..." << endl;
							}
							else
							{
								var_hp_m = var_hp_m - var_attack_action_tank_4 + (var_defense_m / 10);
								cout << "Vous avez inflige " << var_attack_action_tank_4 - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
								var_mana = var_mana - mana_action_tank_4;
							}
						}

						if (choice_action == 5)
						{
							if (var_mana < mana_action_tank_5)
							{
								cout << "Tu n'as pas assez de mana..." << endl;
							}
							else
							{
								var_hp_m = var_hp_m - var_attack_action_tank_5 + (var_defense_m / 10);
								cout << "Vous avez inflige " << var_attack_action_tank_5 - (var_defense_m / 10) << " pts de degats a l'ennemi !" << endl;
								var_mana = var_mana - mana_action_tank_5;
							}
						}
					}
				}
				if (var_hp_m > 0)
				{
					sleep(4.5);
					cout << "---------------------------" << endl;
					cout << "L'ennemi vous attaque!" << endl;
					sleep(1.5);
					if (miss == 1)
					{
						cout << "Il vous a inflige " << var_attack_m - (var_defense / 10) << " pts de degats !" << endl;
						var_hp = var_hp - var_attack_m + (var_defense / 10);
					}
					else
					{
						cout << "L'ennemi a fail son attaque, il vous inflige aucun dommage !" << endl;
					}
					cout << "PV restant : " << var_hp << endl;
				}
				else
				{
					sleep(2);
					cout << "Vous avez battu le monstre, felicitations !!!" << endl;
					sleep(3);
					cout << "Vous avez obtenu " << var_exp_m << " pts d'experience !" << endl;
					var_exp = var_exp + var_exp_m;

					if (item_monster_random == 1)
					{
						sleep(2);
						if (oeuf_de_monstre < 2)
						{
							cout << "Vous obtenez " << oeuf_de_monstre << " oeuf de monstre." << endl;
							oeuf_de_monstre++;
						}
						else
						{
							cout << "Vous obtenez " << oeuf_de_monstre << " oeufs de monstre." << endl;
							oeuf_de_monstre += 2;
						}
					}
					sleep(3);
					cout << endl << endl;
				}
				if (var_hp <= 0)
				{
					cout << "Vous etes mort";
					break;
				}
			}

			sleep(4);
			if (j == 9) 
			{
				tuto_weapons++;
				cout << "Narration : Le joueur se reposait calmement sur un rocher, soudain il vit au loin un objet refletant un eclat lumineux" << endl << endl;
				sleep(3);
				cout << "Le joueur a trouve une arme !!!" << endl;

				if (tuto_weapons == 1)
				{
					sleep(3);
					cout << "Les armes servent aux personnages a terrasser encore plus rapidement les ennemis\nen leur donnant des attributs supplementaires" << endl << endl;
					sleep(2);
				}
				cout << "Votre joueur obtient " << character_w.printClass_weapons() << " !!" << endl << endl;
				item_counter++;
			}

			//Le magicien
			if (j >= 12)
			{
				if (weapons_random == 4)
				{
					first_meeting++;
					if (first_meeting == 1)
					{
						cout << "Narration : Le joueur se balade dans une prairie, c'est alors qu'un mysterieux personnage arriva..." << endl;
						sleep(5);
						cout << "Oh, oh, oh ! Jeune " << character.printClass() << ", je me nomme Alecio. Je suis le magicien de ces terres." << endl;
						sleep(5);
						cout << "Mais, ce que tu as la, n'est-ce pas une arme !" << endl;
						sleep(5);
						cout << "Eh! Ecoute, tu ne voudrais pas ameliorer ton epee par hasard ? J'ai justement le don pour le faire, oh oh !" << endl;
						sleep(5);
						cout << "J'aurais juste besoin d'un petit service... : " << endl;
						cout << "Tu vois ce qu'est un oeuf de monstre ? item que tu peux gagner en battant des monstres." << endl;
						sleep(5);
						cout << "Ramene-m'en 5 et je pourrai ameliorer ton epee, oh oh oh! Bonne chance et au revoir !" << endl;
					}
					if (oeuf_de_monstre >= 5)
					{

						cout << "Oh, oh, oh, comme on se retrouve voyageur !" << endl;
						sleep(2);
						cout << "As-tu mes oeufs ? [Oui/Non] : ";
						cin >> confirm_item;
						if (confirm_item == "Oui")
						{
							level_weapons++;
							cout << "Fabuleux !, un pari est un pari, donne-moi ton arme" << endl;
							sleep(3);
							cout << "Narration : le magicien prit l'arme et sa baguette et ameliora votre arme." << endl;
							sleep(3);
							cout << "Tenez voyageur, elle est comme neuve" << endl;
							sleep(3);
							cout << "Votre joueur prit son arme, une nuance de magie se faisait ressentir." << endl;
							sleep(3);
							cout << "Votre arme est maintenant niveau " << level_weapons << " !!!" << endl;
							oeuf_de_monstre -= 5;

							if (choice == 1)
							{
								var_attack_w += 30;
								var_defense_w += 20;
							}
							if (choice == 2)
							{
								var_attack_w2 += 15;
								var_defense_w2 += 20;
								var_pm_w2 += 30;
							}
							if (choice == 3)
							{
								var_attack_w3 += 15;
								var_defense_w3 += 25;
								var_pm_w3 += 30;
							}
							if (choice == 4)
							{
								var_attack_w4 += 30;
								var_defense_w4 += 20;
								var_pm_w4 += 5;
							}
							if (choice == 5)
							{
								var_attack_w5 += 35;
								var_defense_w5 += 35;
							}
						}
					}
				}
			}
		}

		//Les actions
		if (i == 5 || i == 10 || i == 15 || i == 20 || i == 25 || i == 30 || i == 35 || i == 40 || i == 45 || i == 50) // 5
		{
			tuto_action++;
			switch_action++;
			cout << "Le joueur apprit une nouvelle action !" << endl;
			sleep(3);
			
			if (tuto_action == 1)
			{
				cout << "Les actions sont ce qui rend special un personnage,\nUne action est une technique que le joueur peut utiliser en combat, soit pour soigner ou pour attaquer." << endl;
				sleep(3);
				cout << "Vous pourrez attaquer avec vos actions dans le menu de combat. " << endl;
				sleep(2);
				cout << "Le joueur a besoin de mana pour utiliser ses actions" << endl << endl;
				sleep(2);
			}
			if (choice == 1)
			{
				if (switch_action == 1)
				{
					cout << "Le joueur a appris " << action_guerrier_1 << ".";
				}
				if (switch_action == 2)
				{
					cout << "Le joueur a appris " << action_guerrier_2 << ".";
				}
				if (switch_action == 3)
				{
					cout << "Le joueur a appris " << action_guerrier_3 << ".";
				}
				if (switch_action == 4)
				{
					cout << "Le joueur a appris " << action_guerrier_4 << ".";
				}
				if (switch_action == 5)
				{
					cout << "Le joueur a appris " << action_guerrier_5 << ".";
				}
			}
			if (choice == 2)
			{
				if (switch_action == 1)
				{
					cout << "Le joueur a appris " << action_mage_1 << ".";
				}
				if (switch_action == 2)
				{
					cout << "Le joueur a appris " << action_mage_2 << ".";
				}
				if (switch_action == 3)
				{
					cout << "Le joueur a appris " << action_mage_3 << ".";
				}
				if (switch_action == 4)
				{
					cout << "Le joueur a appris " << action_mage_4 << ".";
				}
				if (switch_action == 5)
				{
					cout << "Le joueur a appris " << action_mage_5 << ".";
				}
			}
			if (choice == 3)
			{
				if (switch_action == 1)
				{
					cout << "Le joueur a appris " << action_pretre_1 << ".";
				}
				if (switch_action == 2)
				{
					cout << "Le joueur a appris " << action_pretre_2 << ".";
				}
				if (switch_action == 3)
				{
					cout << "Le joueur a appris " << action_pretre_3 << ".";
				}
				if (switch_action == 4)
				{
					cout << "Le joueur a appris " << action_pretre_4 << ".";
				}
				if (switch_action == 5)
				{
					cout << "Le joueur a appris " << action_pretre_5 << ".";
				}
			}
			if (choice == 4)
			{
				if (switch_action == 1)
				{
					cout << "Le joueur a appris " << action_archer_1 << ".";
				}
				if (switch_action == 2)
				{
					cout << "Le joueur a appris " << action_archer_2 << ".";
				}
				if (switch_action == 3)
				{
					cout << "Le joueur a appris " << action_archer_3 << ".";
				}
				if (switch_action == 4)
				{
					cout << "Le joueur a appris " << action_archer_4 << ".";
				}
				if (switch_action == 5)
				{
					cout << "Le joueur a appris " << action_archer_5 << ".";
				}
			}
			if (choice == 5)
			{
				if (switch_action == 1)
				{
					cout << "Le joueur a appris " << action_tank_1 << ".";
				}
				if (switch_action == 2)
				{
					cout << "Le joueur a appris " << action_tank_2 << ".";
				}
				if (switch_action == 3)
				{
					cout << "Le joueur a appris " << action_tank_3 << ".";
				}
				if (switch_action == 4)
				{
					cout << "Le joueur a appris " << action_tank_4 << ".";
				}
				if (switch_action == 5)
				{
					cout << "Le joueur a appris " << action_tank_5 << ".";
				}
			}
		}

		sleep(2);
		cout << "C'est la fin du jour " << i << "." << endl << endl;
		sleep(2.5);
		cout << "Voulez-vous continuer de jouer ? [y/n]" << endl;
		cout << "Reponse : "; cin >> var_continue;

		if (var_continue == "n")
		{
			sleep(1);
			cout << "Pas de probleme, vous pourrez reprendre votre sauvegarde a tout moment !" << endl;
			break;
			myfile.close();
		}
		sleep(1);
		cout << endl;
		cout << "Vous vous etes repose et avez repris vos forces, vos manas, vies et pm sont redevenues comme telle !" << endl;
		var_mana = mana.printMana();
		var_hp = hp.printHp();
		var_mp = pm.printPm();
		cout << endl << endl;

	}
		cin.ignore();
		cin.get();
		return 0;
	
}
