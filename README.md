# Simulacao-de-jogo-rpg

Projeto da disciplina Programação e Desenvolvimendo de Software 2, do curso de bacharelado em Sistemas da Informação da Universidade Federal de Minas Gerais - UFMG.

## Objetivo

Esse exercício implementa uma hierarquia polimórfica para um jogo de combate de fantasia RPG. 

## Implementação

Criatura é uma classe base astrata, herdada por cada classe de personagem no jogo. As criaturas implementadas são Bárbaro, Homem Azul, Mago, Vampiro, e Medusa. Cada classe de personagem possui características específicas, sua capacidade de ataque, sua capacidade de defesa, sua armadura e sua força. O ataque e a defesa de cada personagem são sorteados a partir de dados específicos para o personagem, por exemplo, o ataque da Medusa utiliza dois dados de 6 lados e o ataque de um Vampiro utiliza um dado de 12 lados.

Poderes especiais também estão incluídos no jogo. Um Vampiro possui 50% de chance de evitar um ataque antes que ele aconteça. Um Homem Azul perde um dado de defesa (ele possui 3 dados de defesa) a cada 4 pontos de força perdidas. A Medusa, ao rolar um ataque de valor 12, mata seu oponente com um olhar, a mesno que o Vampiro tenha evitado o ataque com sua habilidade. O Mago volta à vida após a morte, com uma força de 20.

Os valores específicos de ataque, defesa, armadura, e força, de cada personagem, são fornecidos no código. O método testaJogo simula duas batalhas, uma entre um Vampiro e um Barbaro e outra entre a Medusa e o Mago. Os personagens alternam aleatoriamente entre ataque e defesa em cada turno, simulado no código pela função turno.

## Saída

A saída do programa é impressa na tela.
A cada round são informados os status dos personagens, o ataque realizado e os novos status após o ataque. Ao término da batalha informa-se o vencedor. O programa termina após a execução das duas batalhas.

## Compilação:
Deve ser utilizado o comando "make" na linha de comando dentro da pasta onde está armezado o arquivo makefile e os demais arquivos de código. Esse comando irá gerar o executável "jogo".
