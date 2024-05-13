#include <iostream>
#include <string>
using namespace std;

class Button;
class Checkbox;

// Esta é a interface abstrata para a fábrica que define métodos para criar botões 
// e caixas de seleção. createButton() e createCheckbox() são métodos virtuais puros 
// que devem ser implementados pelas fábricas concretas.
class GUIFactory {
public:
    virtual ~GUIFactory() {}
    virtual Button* createButton() = 0;
    virtual Checkbox* createCheckbox() = 0;
};

class WinButton;
class WinCheckbox;
class MacButton;
class MacCheckbox;

// Fábrica concreta para Windows
class WinFactory : public GUIFactory {
public:
    Button* createButton() override;
    Checkbox* createCheckbox() override;
};

// Fábrica concreta para macOS
class MacFactory : public GUIFactory {
public:
    Button* createButton() override;
    Checkbox* createCheckbox() override;
};

// Interface base para botões
class Button {
public:
    virtual ~Button() {}
    virtual void paint() = 0;
};

// Interface base para checkboxes
class Checkbox {
public:
    virtual ~Checkbox() {}
    virtual void paint() = 0;
};

// Botão para Windows
class WinButton : public Button {
public:
    void paint() override {
        cout << "Renderizando um botão no estilo Windows." << endl;
    }
};

// Checkbox para Windows
class WinCheckbox : public Checkbox {
public:
    void paint() override {
        cout << "Renderizando uma caixa de seleção estilo Windows." << endl;
    }
};

// Botão para macOS
class MacButton : public Button {
public:
    void paint() override {
        cout << "Renderizando um botão no estilo macOS." << endl;
    }
};

// Checkbox para macOS
class MacCheckbox : public Checkbox {
public:
    void paint() override {
        cout << "Renderizando uma caixa de seleção no estilo macOS." << endl;
    }
};

// Implementações dos métodos createButton e createCheckbox para WinFactory
Button* WinFactory::createButton() {
    return new WinButton();
}

Checkbox* WinFactory::createCheckbox() {
    return new WinCheckbox();
}

// Implementações dos métodos createButton e createCheckbox para MacFactory
Button* MacFactory::createButton() {
    return new MacButton();
}

Checkbox* MacFactory::createCheckbox() {
    return new MacCheckbox();
}

// Esta classe é o cliente do padrão Abstract Factory. 
// Ela possui um método createUI() que cria a interface
// do usuário usando uma fábrica específica e um método paint()
// que desenha os elementos da interface do usuário.
class Application {
private:
    GUIFactory* factory;
    Button* button;
public:
    Application(GUIFactory* factory) : factory(factory), button(nullptr) {}
    void createUI() {
        button = factory->createButton();
    }
    void paint() {
        if (button)
            button->paint();
        else
            cout << "Crie a interface do usuário primeiro." << endl;
    }
};

// Classe para configurar a aplicação
class ApplicationConfigurator {
public:
    void main() {
        // Simulando leitura de configuração
        string os = "Windows"; // ou "Mac"

        GUIFactory* factory = nullptr;
        if (os == "Windows")
            factory = new WinFactory();
        else if (os == "Mac")
            factory = new MacFactory();
        else
            throw runtime_error("Erro! Sistema operacional desconhecido.");

        Application app(factory);
        app.createUI();
        app.paint();

        delete factory;
    }
};

int main() {
    ApplicationConfigurator configurator;
    configurator.main();
    return 0;
}
