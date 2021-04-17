#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    string letra = "";
    int teclaDigitada = 0;
    int letraDigitada = 0;
    string palavraFinal ="";
    string alfabeto[26] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
    int linhas = 8;
    int colunas = 4;
    int contador = 0;
    string matrizTelefone[linhas][colunas];
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if(j == 3)
            {
                if( i == 5 || i == 7)
                {
                    matrizTelefone[i][j] = alfabeto[contador];
                    contador++;
                }
                else
                {
                    matrizTelefone[i][j] = "#";    
                }
                
                
            }
            else
            {
                matrizTelefone[i][j] = alfabeto[contador];
                contador++;
            }
        }    
    }
    
   cout << "Quantas teclas (N): ";
   cin >> N;
   cout << endl;
   
   for (int k = 0; k < N; k++){
        cout << "Informe o código da "<< k + 1<<"º letra (utilize o padrão #tecla=letra): ";
        cin >> letra;
        std::size_t teclafound = letra.find("#");
        teclaDigitada =  std::stoi(letra.substr(teclafound + 1,1));
        std::size_t letrafound = letra.find("=");
        letraDigitada = std::stoi(letra.substr(letrafound + 1,1));
        palavraFinal += matrizTelefone[teclaDigitada - 2][letraDigitada - 1];
   }
    
    cout << "Palavra Final: "<< palavraFinal << endl;
    return 0;
}
