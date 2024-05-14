#pragma once

#include "State.h" // Inclui a definição da classe State

class AudioPlayer {
private:
    State* state; // Mantém uma referência para o estado atual

public:
    AudioPlayer() {
        state = new ReadyState(this);
    }

    void changeState(State* newState) {
        delete state; // Libera a memória do estado anterior
        state = newState; // Atualiza o estado atual
    }
    
    void clickLock() {state->clickLock();}
    void clickPlay() {state->clickPlay();}
    void clickNext() {state->clickNext();}
    void clickPrevious() {state->clickPrevious();}
};
