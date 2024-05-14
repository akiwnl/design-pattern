<!-- https://refactoring.guru/pt-br/design-patterns/state/cpp/example -->

# State

O State é um padrão de projeto comportamental que permite que um objeto altere seu comportamento quando seu estado interno muda, como se o objeto mudasse de classe.

* Evita condicionais quando um objeto muda de comportamento dependendo do seu estado.
* Desacopla o estado de um objeto e seus métodos em objetos de estado separados.
* Facilita a adicão de novos estados sem a necessidade de alterar estados anteriores.

# Quando utilizar?

* Quando o seu objeto pode se comportar de maneira diferente dependendo do seu estado atual.
* Quando você quer evitar o uso de condicionais que alteram o comportamento da classe de acordo com os valores dos seus campos.

# Diagrama UML
![state](https://github.com/akiwnl/design-pattern/assets/83625654/bfedad87-7a1f-419d-802a-df68911e1d25)

