# Abstract Factory

Fornece uma interface para criacao de famílias de objetos relacionados ou dependentes sem especificar suas classes concretas.

* É um padrão de criação, portanto lida com a criação de objetos.
* É uma fábrica, assim como Factory Method e geralmente é composto por multiplos Factory Methods.
* Visa agrupar famílias de produtos compatíveis criando uma fábrica concreta por grupo de objetos compatíveis.
* Utiliza o Single Responsability Principle.
* Utiliza o Open-Closed Principle
* Toda a programação é focada nas interfaces e não em implementações.

O Abstract Factory define uma interface para criar todos os produtos distintos, mas deixa a criação real do produto para classes fábrica concretas. Cada tipo de fábrica corresponde a uma determinada variedade de produtos.

## Quando utilizar?
Use o Abstract Factory quando seu código precisa trabalhar com diversas famílias de produtos relacionados, mas que você não quer depender de classes concretas daqueles produtos-eles podem ser desconhecidos de antemão ou você simplesmente quer permitir uma futura escalabilidade.

## Diagrama UML
![Abstract Factory](https://github.com/akiwnl/design-pattern/assets/83625654/737cc863-bcdd-43d4-b441-37efb6337112)





<!-- https://refactoring.guru/pt-br/design-patterns/abstract-factory/cpp/example -->