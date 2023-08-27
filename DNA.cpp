#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string str = "DNA";
    vector<char> vetor;
     
     
    for (unsigned int i = 0; i < str.length(); i++) {
        vetor.push_back(str[i]);

        if (i + 1 <str.length()) { // Verifica se é seguro acessar str[i+1]
            if (str[i] == str[i+1]) {
                cout << "Letras iguais" << endl;
                cout << "Nao alterar" << endl;
            }
            if (str[i] == 'D' && str[i+1] == 'N') {
                cout << "Letras Diferentes" << endl;
                cout << "Fazendo alteracao..." << endl;

                vetor.pop_back(); // Remove a letra anterior
                vetor.push_back('A'); // Adiciona 'A' ao vetor
                
                i = i + 2; // Avança para a próxima posição
                 
                cout << "DN Virou -->" << endl;
                     for (char c : vetor) {
                        cout << c << " " << endl;
                 }
                  
            }
            if (str[i] == 'D' && str[i+1] == 'A') {
                cout << "Letras Diferentes" << endl;
                cout << "Fazendo alteracao..." << endl;

                vetor.pop_back(); // Remove a letra anterior
                vetor.push_back('N'); // Adiciona 'A' ao vetor

                i++; // Avança para a próxima posição
                cout << "DA Virou -->" << endl;
                     for (char c : vetor) {
                        cout << c << " " << endl;
                 }
            }
             if (str[i] == 'N' && str[i+1] == 'A') {
                cout << "Letras Diferentes" << endl;
                cout << "Fazendo alteracao..." << endl;

                vetor.pop_back(); // Remove a letra anterior
                vetor.push_back('D'); // Adiciona 'A' ao vetor

                 i++; // Avança para a próxima posição
                cout << "NA Virou -->" << endl;
                     for (char c : vetor) {
                        cout << c << " " << endl;
                 }
                
            }
              if (str[i] == 'N' && str[i+1] == 'D') {
                cout << "Letras Diferentes" << endl;
                cout << "Fazendo alteracao..." << endl;

                vetor.pop_back(); // Remove a letra anterior
                vetor.push_back('A'); // Adiciona 'A' ao vetor

                i++; // Avança para a próxima posição
                cout << "ND Virou -->" << endl;
                     for (char c : vetor) {
                        cout << c << " " << endl;
                 }
            }
             if (str[i] == 'A' && str[i+1] == 'D') {
                cout << "Letras Diferentes" << endl;
                cout << "Fazendo alteracao..." << endl;

                vetor.pop_back(); // Remove a letra anterior
                vetor.push_back('N'); // Adiciona 'A' ao vetor

                i++; // Avança para a próxima posição
                cout << "AD Virou -->" << endl;
                     for (char c : vetor) {
                        cout << c << " " << endl;
                 }
            }
             if (str[i] == 'A' && str[i+1] == 'N') {
                cout << "Letras Diferentes" << endl;
                cout << "Fazendo alteracao..." << endl;

                vetor.pop_back(); // Remove a letra anterior
                vetor.push_back('D'); // Adiciona 'A' ao vetor

                i++; // Avança para a próxima posição
                cout << "AN Virou -->" << endl;
                     for (char c : vetor) {
                        cout << c << " " << endl;
                 }

                
            }
            
                  
        }
    }
    cout << "FINAL:" << endl;
    for (char c : vetor) {
        cout << c << " ";
    }

    return 0;
}
