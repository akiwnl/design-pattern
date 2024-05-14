#include "AudioPlayer.h"
#include "State.h"

int main() {
    // Crie uma instância do tocador de áudio
    AudioPlayer player;

    // Simule cliques de usuário
    player.clickLock();
    player.clickPlay();
    player.clickNext();
    player.clickPrevious();

    return 0;
}