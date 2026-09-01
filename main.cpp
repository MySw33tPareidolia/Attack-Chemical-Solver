#include <iostream>
#include <string>
#include <vector>

void str_print(const std::string& x) {
    std::cout << x;
}

void print_Ms(int number) {
    int index = 0;
    int vector_index = 0;

    std::vector<int> storing(7);

    while (index < 7) {
        if (index == 0) {
            storing[vector_index] = 2;
        }
        else if (index == 1) {
            storing[vector_index] = 4;
        }
        else if (index == 2) {
            storing[vector_index] = 6;
        }
        else if (index == 3) {
            storing[vector_index] = 8;
        }
        else if (index == 4) {
            storing[vector_index] = 9;
        }
        else if (index == 5) {
            storing[vector_index] = 11;
        }
        else if (index == 6) {
            storing[vector_index] = 15;
        }

        index++;
        vector_index++;
    }

    int index_again = 0;

    while (index_again < 7) {
        int EYE = storing[index_again] * number;

        std::cout << storing[index_again] << ". " << EYE;

        if (index_again < 6) {
            std::cout << "\n";
        }

        index_again++;
    }

    std::cout << "\n";
}

void make_chemical(int choice_chemical, int diamond, int num_o){
int Motor_Oil;	
int Wheel_Cleaner;
int Insect_Repellent;
int Drain_Opener;
int Phenol;
int Phenosulfuric_Acid;

//two

int Racing_Fuel;
int Detergent;
int Quarters;
int Formaldehyde;
int Glass_Cleaner;
int Hexamine;
int Vinegar;
int Plant_Food;

//three 

int Paint;
int Methylybenzene;
int Baking_Soda;
int Dinitro;

//fourth

int Vodka;
int Pennies;
int Acetaldehyde;
int Aldehyde_Sludge;
int Nail_Polish_Remover;
switch(diamond){
	
	case 1:
	Motor_Oil = 8;
	Wheel_Cleaner = 10;
	Insect_Repellent = 3;
	Drain_Opener = 13;
	Phenol = 7;
	Phenosulfuric_Acid = 9;
	Racing_Fuel = 16;
	Detergent = 9;
	Quarters = 8;
	Formaldehyde = 11;
	Glass_Cleaner = 7;
	Hexamine = 8;
	Vinegar = 11;
	Plant_Food = 16;
	Paint = 8;
	Methylybenzene = 12;
	Baking_Soda = 8;
	Dinitro = 12;
	Vodka = 11;
	Pennies = 14;
	Acetaldehyde = 9;
	Aldehyde_Sludge = 12;
	Nail_Polish_Remover = 7;
	
	
	break;
	
	case 2:
	
	Motor_Oil = 9;
	Wheel_Cleaner = 13;
	Insect_Repellent = 6;
	Drain_Opener = 16;
	Phenol = 10;
	Phenosulfuric_Acid = 13;
	Racing_Fuel = 14;
	Detergent = 6;
	Quarters = 12;
	Formaldehyde = 14;
	Glass_Cleaner = 16;
	Hexamine = 8;
	Vinegar = 6;
	Plant_Food = 7;
	Paint = 5;
	Methylybenzene = 8;
	Baking_Soda = 11;
	Dinitro = 7;
	Vodka = 16;
	Pennies = 7;
	Acetaldehyde = 8;
	Aldehyde_Sludge = 7;
	Nail_Polish_Remover = 9;

	break;
	
	case 3:
	
	Motor_Oil = 9;
	Wheel_Cleaner = 13;
	Insect_Repellent = 7;
	Drain_Opener = 7;
	Phenol = 11;
	Phenosulfuric_Acid = 10;
	Racing_Fuel = 11;
	Detergent = 16;
	Quarters = 9;
	Formaldehyde = 13;
	Glass_Cleaner = 8;
	Hexamine = 11;
	Vinegar = 11;
	Plant_Food = 13;
	Paint = 15;
	Methylybenzene = 12;
	Baking_Soda = 6;
	Dinitro = 9;
	Vodka = 16;
	Pennies = 14;
	Acetaldehyde = 12;
	Aldehyde_Sludge = 8;
	Nail_Polish_Remover = 17;
	
	break;
	
	case 4:
	
	Motor_Oil = 9;
	Wheel_Cleaner = 10;
	Insect_Repellent = 12;
	Drain_Opener = 11;
	Phenol = 13;
	Phenosulfuric_Acid = 8;
	Racing_Fuel = 8;
	Detergent = 13;
	Quarters = 13;
	Formaldehyde = 12;
	Glass_Cleaner = 18;
	Hexamine = 5;
	Vinegar = 6;
	Plant_Food = 17;
	Paint = 10;
	Methylybenzene = 10;
	Baking_Soda = 10;
	Dinitro = 9;
	Vodka = 6;
	Pennies = 11;
	Acetaldehyde = 12;
	Aldehyde_Sludge = 11;
	Nail_Polish_Remover = 11;

	break;
	
	case 5:
	
	Motor_Oil = 15;
	Wheel_Cleaner = 6;
	Insect_Repellent = 15;
	Drain_Opener = 8;
	Phenol = 8;
	Phenosulfuric_Acid = 17;
	Racing_Fuel = 14;
	Detergent = 8;
	Quarters = 5;
	Formaldehyde = 13;
	Glass_Cleaner = 10;
	Hexamine = 14;
	Vinegar = 5;
	Plant_Food = 11;
	Paint = 7;
	Methylybenzene = 7;
	Baking_Soda = 13;
	Dinitro = 15;
	Vodka = 11;
	Pennies = 11;
	Acetaldehyde = 12;
	Aldehyde_Sludge = 11;
	Nail_Polish_Remover = 5;
	
	break;
	
	case 6:
	
	Motor_Oil = 14;
	Wheel_Cleaner = 13;
	Insect_Repellent = 16;
	Drain_Opener = 15;
	Phenol = 7;
	Phenosulfuric_Acid = 4;
	Racing_Fuel = 6;
	Detergent = 13;
	Quarters = 12;
	Formaldehyde = 13;
	Glass_Cleaner = 10;
	Hexamine = 6;
	Vinegar = 10;
	Plant_Food = 13;
	Paint = 8;
	Methylybenzene = 11;
	Baking_Soda = 14;
	Dinitro = 13;
	Vodka = 11;
	Pennies = 5;
	Acetaldehyde = 9;
	Aldehyde_Sludge = 15;
	Nail_Polish_Remover = 9;
	break;
	
}

switch(choice_chemical){
int mix1;
int mix2;
int mix3;
int mix4;



	case 1:
	mix1 = Motor_Oil + Wheel_Cleaner + Insect_Repellent;
	mix1 = mix1 - num_o;
	str_print("First Batch = ");
	std::cout << mix1;
	str_print("\n");
	
	mix2 = Drain_Opener + Phenol;
	mix2 = mix2 - num_o;
	str_print("Second Batch = ");
	std::cout << mix2;
	str_print("\n");
	
	mix3 = Phenosulfuric_Acid + Detergent;
	mix3 = mix3 - num_o;
	str_print("Third Batch = ");
	std::cout << mix3;
	str_print("\n");
	
	break;
	
	case 2:
		
	mix1 = Racing_Fuel + Quarters;
	mix1 = mix1 - num_o;
	str_print("First Batch = ");
	std::cout << mix1;
	str_print("\n");
	
	mix2 = Formaldehyde + Glass_Cleaner;
	mix2 = mix2 - num_o;
	str_print("Second Batch = ");
	std::cout << mix2;
	str_print("\n");
	
	mix3 = Hexamine + Detergent + Vinegar + Plant_Food;
	mix3 = mix3 - num_o;
	str_print("Third Batch = ");
	std::cout << mix3;
	str_print("\n");
		
	break;
	
	case 3:
		
	mix1 = Paint + Drain_Opener + Detergent;
	mix1 = mix1 - num_o;
	str_print("First Batch = ");
	std::cout << mix1;
	str_print("\n");
	
	mix2 = Methylybenzene + Baking_Soda + Detergent + Vinegar;
	mix2 = mix2 - num_o;
	str_print("Second Batch = ");
	std::cout << mix2;
	str_print("\n");
	
	mix3 = Dinitro + Racing_Fuel;
	mix3 = mix3 - num_o;
	str_print("Third Batch = ");
	std::cout << mix3;
	str_print("\n");
		
	break;
	
	case 4:
		
	mix1 = Vodka + Pennies;
	mix1 = mix1 - num_o;
	str_print("First Batch = ");
	std::cout << mix1;
	str_print("\n");
	
	mix2 = Racing_Fuel + Quarters;
	mix2 = mix2 - num_o;
	str_print("Second Batch = ");
	std::cout << mix2;
	str_print("\n");
	
	mix3 = Formaldehyde + Acetaldehyde + Detergent;
	mix3 = mix3 - num_o;
	str_print("Third Batch = ");
	std::cout << mix3;
	str_print("\n");
	
	mix4 = Aldehyde_Sludge + Nail_Polish_Remover;
	mix4 = mix4 - num_o;
	str_print("Fourth Batch = ");
	std::cout << mix4;
	str_print("\n");
		
	break;
	
	}
// choice_chemical, diamond, num_o


}


int main() {
    std::string Diamond_Choice;
    int what_is_diamond = 0;
	bool shall_we_go = true;	
    str_print("Welcome to Attack Of The Radioactive Thing solver\n");
    

    int M;

    str_print("What is M? ");
    std::cin >> M;

    print_Ms(M);

    str_print("What is O? AKA This Number --> X. Y\n");
	int O;
	std::string color;
	std::cin >> O;
	str_print("What is your color?\n");
	std::cin >> color;
	str_print("What are the numbers on your Acetaldehyde Diamond?\n");
	str_print("after you change your color to ");
	str_print(color);
	str_print("\n");
	str_print("Ex: 1, 8\n");
    str_print("Format: Left, Top\n");
	bool is_wrong = true;
	std::cin.ignore();
	while(is_wrong == true){
    std::getline(std::cin, Diamond_Choice);

    if (Diamond_Choice == "1, 8") {
        what_is_diamond = 1;
		is_wrong = false;
    }

    else if (Diamond_Choice == "7, 1") {
        what_is_diamond = 2;
		is_wrong = false;
    }

    else if (Diamond_Choice == "9, 3") {
        what_is_diamond = 3;
		is_wrong = false;
    }

    else if (Diamond_Choice == "6, 6") {
        what_is_diamond = 4;
		is_wrong = false;
    }

    else if (Diamond_Choice == "4, 8") {
        what_is_diamond = 5;
		is_wrong = false;
    }

    else if (Diamond_Choice == "5, 4") {
        what_is_diamond = 6;
		is_wrong = false;
    }

    else {
        std::cout << "Invalid diamond combination.\n";
       is_wrong = true;
    }
	}
	
	
	while (shall_we_go == true){
	
	str_print("What is your chemical\n");
	str_print("1.     1, 3, 5 Tera Nitra Phenol\n");
	str_print("2.     Octahydro 2, 5 Nitro 347 Para-Zokine\n");
	str_print("3.     3-Methyl-2, 4 Di-Nitrobenzene\n");
	str_print("4.     3, 4 - Di-Nitroxy-Methyl Propane\n");
	str_print("5.     Quit.\n");
	int chemical;
	std::cin >> chemical;
	
	if (chemical == 5){
		shall_we_go = false;
	}
	
	else{
	
	make_chemical(chemical, what_is_diamond, O);
	
	}
	}
	
	return 0;
    //1, 3, 5 Tera Nitra Phenol
	//Motor Oil + Wheel Cleaner + Insect Repellent = Phenol
	//Drain Opener + Phenol = Phenosulfuric Acid
	//Phenosulfuric Acid + Detergent = 1, 3, 5 Tera Nitra Phenol
	
	//Octahydro 2, 5 Nitro 347 Para-Zokine
	//Racing Fuel + Quarters = Formaldehyde
	//Formaldehyde + Glass Cleaner = Hexamine
	//Hexamine + Detergent + Vinegar + Plant Food = Octahydro 2, 5 Nitro 347 Para-Zokine
	
	//3-Methyl-2, 4 Di-Nitrobenzene
	//Paint + Drain Opener + Detergent = Methylybenzene
	//Methylybenzene + Baking Soda + Detergent + Vinegar = Dinitro
	//Dinitro + Racing Fuel = 3-Methyl-2, 4 Di-Nitrobenzene
	
	//3, 4 - Di-Nitroxy-Methyl Propane
	//Vodka + Pennies = Formaldehyde
	//Racing Fuel + Quarters
	//Formaldehyde + Acetaldehyde + Detergent
	//Aldehyde Sludge + Nail Polish Remover = 3, 4 - Di-Nitroxy-Methyl Propane 

}


