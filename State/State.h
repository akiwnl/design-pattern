#pragma once

class AudioPlayer;

class State {
protected:
    AudioPlayer* player;
public:
    State(AudioPlayer* player);
    virtual ~State();

    virtual void clickLock() = 0;
    virtual void clickPlay() = 0;
    virtual void clickNext() = 0;
    virtual void clickPrevious() = 0;
};

class LockedState : public State {
public:
    LockedState(AudioPlayer* player);
    ~LockedState();

    void clickLock() override;
    void clickPlay() override;
    void clickNext() override;
    void clickPrevious() override;
};

class ReadyState : public State {
public:
    ReadyState(AudioPlayer* player);
    ~ReadyState();

    void clickLock() override;
    void clickPlay() override;
    void clickNext() override;
    void clickPrevious() override;
};

// Classe PlayingState, derivada de State
class PlayingState : public State {
public:
    PlayingState(AudioPlayer* player);
    ~PlayingState();

    void clickLock() override;
    void clickPlay() override;
    void clickNext() override;
    void clickPrevious() override;
};