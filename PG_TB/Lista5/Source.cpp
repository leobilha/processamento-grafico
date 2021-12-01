#include <Windows.h>
#include <conio.h>
#include "SceneManager.h"

using namespace std;

int main()
{
    cout << "Selecione a sua foto..." << endl;    
    cout << "Use as teclas abaixo para aplicar o filtro: \n" 
            "A: Vermelho                      1: habilitar somente o canal vermelho\n" 
            "S: Verde                         2: habilitar somente o canal verde\n" 
            "D: Preto                         3: habilitar somente o canal azul\n" 
            "Z: Amarelo                       4: filtro de grayScale\n" 
            "X: Roxo                          5: filtro de somar cor\n" 
            "C: Azul Claro                    6: filtro de inversão\n" 
            "V: Laranja                       7: filtro de binarização\n"          
            "8: transforma pixels bem escuros em brancos\n"          
        << endl;    
    cout << "1 - Gremio" << endl;
    cout << "2 - Unisinos" << endl;
    cout << "3 - Mocinha" << endl;
    
    char choice;
    string path;
    
    while (true)
    {
        choice = _getch();
        if (choice == '1')
        {
            path = "../textures/gremio.jpg";
            break;
        }
        else if (choice == '2')
        {
            path = "../textures/uni.jpg";
            break;
        }
        else if (choice == '3')
        {
            path = "../textures/moca.png";
            break;
        }
    }

    SceneManager* sceneManager = new SceneManager();
    sceneManager->initialize(1200, 900, "TB PG", path);

    sceneManager->run(Ponto3d(1,1,1));
}