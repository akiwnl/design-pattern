<!-- https://refactoring.guru/pt-br/design-patterns/adapter/cpp/example -->

# Adapter

O Adapter é um padrão de projeto estrutural que permite objetos com interfaces incompatíveis colaborarem entre si.

* Faz exatamente o que um adaptador da vida real faz.
* É muito usado para definir limites dentro de camadas da aplicacão.
* Também pode ser usado para adaptar interfaces de código legado para um novo código.

# Quando utilizar?

* Quando você nao quiser que seu código dependa diretamente de código de terceiros ou legado.
* Quando você quiser utilizar uma classe existente mesmo que sua interface seja incompatível com a interface do código já escrito.
* Quando você quiser reutilizar várias subclasses que não possuam determinada funcionalidade mas for impraticável estender o código de cada uma apenas para adicionar a funcionalidade desejada.

# Diagrama UML
![adapter](https://github.com/akiwnl/design-pattern/assets/83625654/46f01e81-74ee-4d52-aac2-5aadcec72411)

O adaptador finge ser um pino redondo, com um raio igual a metade do diâmetro do quadrado (em outras palavras, o raio do menor círculo que pode acomodar o pino quadrado).

