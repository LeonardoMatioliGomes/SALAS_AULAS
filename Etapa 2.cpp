#include <iostream>
#include <vector>
using namespace std;

//a variavel 'Sala' serve para armazenar a quantidade de salas. 'cout' para exibir a mensagem para o usuario, e 'cin' para armazenar o valor na variavel 'Sala'.
int main() {
    int Salas;
    cout << "Digite a quantidade de salas: ";
    cin >> Salas;

//'vector<int>' é usado para armazenar um numero variavel de elemento do tipo 'int'. e aqui é usado para armazenar o numero de alunos em cada sala. Conforme percorremos as salas no loop, usamos 'alunosPorSala[i]' para acessar o elemento correspondente à sala atual e armazenar o número de alunos nessa sala. O índice 'i' é usado para acessar o elemento correto do vetor, onde 'i' varia de 0 a 'Salas - 1'.
    vector<int> alunosPorSala(Salas);
    int Alunos = 0;

//declaramos a variável 'Alunos' e a inicializamos como zero. Em seguida, usamos um loop 'for' para iterar sobre cada sala. Dentro do loop, pedimos ao usuário que digite o número de alunos na sala atual usando 'cout' e 'cin', e armazenamos o valor no vetor 'alunosPorSala'. Também atualizamos a variável 'Alunos' somando o número de alunos na sala atual a cada iteração do loop.
    for (int i = 0; i < Salas; i++) {
        cout << "Digite a quantidade de alunos na sala " << (i + 1) << ": ";
        cin >> alunosPorSala[i];
        Alunos += alunosPorSala[i];
    }

//usado "static_cast" para converter um valor de um tipo para outro tipo compativel. assim, usamos ele para promover "Alunos" de 'int' para 'double' antes de realizar a divisão para calcular a média.
    double mediaAlunos = static_cast<double>(Alunos) / Salas;
    cout << "A média de alunos por sala é: " << mediaAlunos << endl;

//exibimos uma mensagem inicial para indicar quais salas têm um número de alunos acima da média. Em seguida, percorremos novamente o vetor 'alunosPorSala' usando um loop
    cout << "Salas com número de alunos acima da média:" << endl;
    for (int i = 0; i < Salas; i++) {
        if (alunosPorSala[i] > mediaAlunos) {
            cout << "Sala " << (i + 1) << ": " << alunosPorSala[i] << " alunos" << endl;
        }
    }

    return 0;
}
