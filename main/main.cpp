#include"life_game.h"
#include"interface.h"
#include<string>

int main(int argc, char const *argv[])
{
    size_t blockSize = 10;
    std::string inputcfg;
    std::string outputFolder("");
    int maxGen;
    AssertInitialization(argc, argv, &blockSize, &outputFolder, &inputcfg, &maxGen);
    life_game myGame(inputcfg);

    myGame.render();
    while (!myGame.game_over())
    {
        myGame.update();
        myGame.render();
    }
    

    return 0;
}
