#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

// Funkcja generująca losowy prompt
string generuj_prompt(const vector<string>& przedmioty, const vector<string>& akcje, const vector<string>& miejsca, const vector<string>& style) {
    string prompt = przedmioty[rand() % przedmioty.size()] + " " + 
                    akcje[rand() % akcje.size()] + " " + 
                    miejsca[rand() % miejsca.size()] + " " + 
                    "w stylu " + style[rand() % style.size()] + ".";

    return prompt;
}

// Funkcja generująca losowy prompt z określoną liczbą elementów
string generuj_prompty(int liczba_promptow) {
    vector<string> przedmioty = {
        "Superbohater", "Kosmita", "Robot", "Jednorożec", "Zombie", "Smok", "Czarodziej", "Ninja", "Pirate",
        "Graffiti", "Neonowy znak", "Mem", "Anime postać", "Gra komputerowa", "Księżyc", "Gwiazdka",
        "Jednorożec", "Dinozaur", "Gigantyczny kot", "Super szybki pies", "Cybernetyczna sowa", "Steampunkowy smok",
        "Samochód wyścigowy", "Kosmiczny statek", "Robotyczny pies", "Holograficzny delfin", "Fantastyczny feniks"
    };
    vector<string> akcje = {
        "skaczący", "tańczący", "walczący", "uciekający", "lewitujący", "transformujący się", "grający w grę", "rysujący", "śpiewający",
        "latający", "surfujący", "bawiący się", "jedzący pizzę", "grający na gitarze", "malujący graffiti", "prowadzący samochód",
        "medytujący", "grający w koszykówkę", "piszący kod", "nurkowanie", "rozwiązujący zagadkę", "skaczący przez portal"
    };
    vector<string> miejsca = {
        "na skateboardzie", "w wirtualnej rzeczywistości", "na plaży", "w kosmosie", "na koncertowej scenie", "w postapokaliptycznym mieście", "w szkole magii",
        "na festiwalu", "w parku rozrywki", "w tajnym laboratorium", "na ulicy Tokyo", "w futurystycznym mieście",
        "w zamku na chmurze", "pod wodą", "w labiryncie", "na Marsie", "na księżycu", "w magicznym lesie",
        "na stadionie e-sportowym", "w cyberpunkowym mieście", "na tropikalnej wyspie", "w retro kawiarni"
    };
    vector<string> style = {
        "cyberpunk", "retro", "futurystyczny", "anime", "gra komputerowa", "graffiti", "neonowy", "vaporwave", "pop-art", "pixel art",
        "steampunk", "fantasy", "sci-fi", "gotycki", "kreskówkowy", "psychodeliczny", "minimalistyczny", "boho", "akwarelowy",
        "hip-hop", "surrealistyczny", "street art", "w stylu mangi", "w stylu LEGO", "w stylu Minecraft"
    };
    //Część pierwsza
    
    
}
int main() {
//Część druga
 
 
return 0;
}
