#include <iostream>
#include <ctime>

int main() {
    // Obtenir l'heure actuelle en fonction du système
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);

    // Afficher la date au format année-mois-jour
    std::cout << "Date actuelle : " << (now->tm_year + 1900) << '-'
              << (now->tm_mon + 1) << '-' << now->tm_mday << std::endl;

    std:: cin >> t;

    return 0;
}
