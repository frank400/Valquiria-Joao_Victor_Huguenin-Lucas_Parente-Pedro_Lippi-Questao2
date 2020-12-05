# Questão 2 da lista de exercio em grupo

- Nome do Grupo: Valquiria
- Integrantes: João Victor Huguenin, Lucas Parente e Pedro Lippi

## Instalação

Para compilar o projeto há duas opções:

1. Compilação pelo gcc/MinGW: abra o seu prompt de comando e execute o seguinte comando 
  ```
  gcc -std=c99 src/main.c src/imprimirMatriz.c src/ler_matrix.c src/espelhamentoMatriz.c -o Valquiria_Joao_Victor_Huguenin_Lucas_Parente_Pedro_Lippi_Questao2
  ```
2. Utilizando o Cmake: execute a seguinte sequencia de comandos na root do projeto
  - cmake .
  - make .
  - ./Valquiria_Joao_Victor_Huguenin_Lucas_Parente_Pedro_Lippi_Questao2

## Objetivos da questão

1. Considere que existem 30 cidades, muito bem conectadas: sempre existe uma estrada ligando cada par de cidades.
2. Leia as distâncias entre as cidades. Porém, como a distância de ida e de volta é sempre igual e o caixeiro é muito preguiçoso, implemente a leitura de forma que ele não precise digitar a mesma distância duas vezes.
3. Pergunte o caixeiro em qual cidade ele se encontra e apresente qual rota ele deve seguir para percorrer todas as cidades, terminando na cidade atual, seguindo o método já apresentado (guloso).
4. Considere no seu cálculo que uma legislação recente proíbe que um mesmo motorista dirija por mais de 1000km ou 12h sem parar para descansar (dormir até o outro dia). Desta forma, informe também em quais cidades o caixeiro viajante deve parar para não ultrapassar o limite de distância e de tempo, assumindo que a velocidade do caminhão está limitada a 90km/h (assuma que o caminhão anda sempre a 90km\h).

- Obs.: no objetivo 4 é dito que o motorista não pode dirigir por mais de 1000km ou 12 horas, contudo foi notado que já que ele anda sempre à 90km/h seria impossível ele chegar a dirigir 12 horas sem atingir 1000 km, então apenas implementamos uma restrição para que ele não viaje por mais de 1000 km em um dia.
