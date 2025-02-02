/**
 * @file dominios.hpp
 * @brief Implementa��o de m�todos dos dom�nios do sistema.
 *
 * Este arquivo cont�m a implementa��o dos m�todos das classes
 * relacionadas aos dom�nios do sistema, como Codigo, Nome, Avaliacao,
 * Data, Horario, Duracao, Dinheiro e Senha. Cada dom�nio possui m�todos
 * para valida��o e formata��o de seus atributos.
 */

/**
 * @include "dominios.hpp"
 * Arquivo que define os dom�nios usados como atributos nas entidades.
 */

#include "dominios.hpp"

/**
 * @include <stdexcept>
 * Arquivo que define as exce��es lan�adas pelas classes de dom�nio.
 */
#include <stdexcept>

/**
 * @include <map>
 * Arquivo que define a estrutura de dados map.
 */
#include <map>

/**
 * @include <vector>
 * Arquivo que define a estrutura de dados vector.
 */
#include <vector>

/**
 * @include <cctype>
 * Arquivo que define fun��es de manipula��o de caracteres.
 */
#include <cctype>

/**
 * @include <algorithm>
 * Arquivo que define fun��es de algoritmos.
 */
#include <algorithm>

/**
 * @include <string>
 * Arquivo que define a estrutura de dados string.
 */
#include <string>

/**
 * @include <iostream>
 * Arquivo que define fun��es de entrada e sa�da.
 */
#include <iostream>



//HORARIO - FEITO POR LEANDRO COELHO DA SILVA, MAT:232011396
using namespace std;

/**
 * @brief Valida se a hora e os minutos est�o dentro do padr�o.
 *
 * @param hora A hora a ser validada (0-23).
 * @param minuto Os minutos a serem validados (0-59).
 *
 * @throws invalid_argument Se a hora ou os minutos estiverem fora do intervalo permitido.
 */
void Horario::validateHora(unsigned short hora, unsigned short minuto){ //Valida se as horas e minutos est�o dentro do padr�o
    if (hora > 23 || hora < 0){
        throw invalid_argument("Argumento invalido");
    }
    else if (minuto > 59 || minuto < 0){
        throw invalid_argument("Argumento invalido");
    }
}

/**
 * @brief Define a hora a partir de uma string no formato HH:MM.
 *
 * @param horario A string que representa a hora no formato HH:MM.
 *
 * @throws invalid_argument Se a string n�o estiver no formato correto ou se a hora/minuto for inv�lido.
 */
void Horario::setHora(string horario){
    if (horario.length() < 5 || horario[2] != ':'){
        throw invalid_argument("Argumento invalido");//Se o hor�rio n�o separar o valor corretamente ser� inv�lido
    }
    unsigned short HH = stoi(horario.substr(0,2));//Converte horas string para inteiro
    unsigned short MM = stoi(horario.substr(3 ,2));//Converte minutos string para inteiro
    try {
        validateHora(HH, MM);//Atribui valores se forem v�lidos
        this->hora=HH;
        this->minuto=MM;
    }
    catch(invalid_argument &exp) {
        throw invalid_argument("Argumento invalido");
    }
}

/**
 * @brief Obt�m o hor�rio no formato HH:MM.
 *
 * @return A string que representa o hor�rio no formato HH:MM.
 */
string Horario::getHora() const { //Formata a string para o padr�o HH:MM
    string horario;
    //Aplicam um 0 a esquerda se a hora ou minuto for menor que 10
    if (Horario::hora < 10 && Horario::minuto < 10){
        horario = "0" + to_string(Horario::hora) + ":0" + to_string(Horario::minuto);
    }
    else if (Horario::hora < 10){
        horario = "0" + to_string(Horario::hora) + ":" + to_string(Horario::minuto);
    }
    else if (Horario::minuto < 10){
        horario = to_string(Horario::hora) + ":0" + to_string(Horario::minuto);
    }
    else {
        horario = to_string(Horario::hora) + ":" + to_string(Horario::minuto);
    }
    return horario;
}

//DINHEIRO - FEITO POR LEANDRO COELHO DA SILVA, MAT:232011396

/**
 * @brief Valida se o dinheiro � v�lido.
 *
 * Verifica onde a string tem "," e "." e os substitui para o padr�o n�merico aceito pelo computador.
 * Quando verificado v� se o n�mero est� entre 0 e 200000.
 *
 * @param dinheiro A string que representa o dinheiro no formato XXX.XXX,XX.
 *
 * @throws invalid_argument Se o dinheiro n�o for v�lido.
 */
void Dinheiro::validateDinheiro(string dinheiro){ //Valida se o dinheiro est� no padr�o correto
    for(int i=0; i<dinheiro.size(); i++){
        if (dinheiro[i] == '.'){
            dinheiro.erase(i, 1); //Tira os pontos
        }
        else if (dinheiro[i] == ','){
            dinheiro.replace(i, 1, "."); //Troca os virgulas por pontos
        }
    }
    try {
        this->dinheiro = stod(dinheiro); //Converte para double
    }
    catch (invalid_argument &exp){
        throw invalid_argument("Argumento invalido");
    }
    if (this->dinheiro < 0 || this->dinheiro > 200000){
        throw invalid_argument("Argumento invalido");
    }
}

/**
 * @brief Define o dinheiro a partir de uma string no formato XXX.XXX,XX.
 *
 * @param dinheiro A string que representa o dinheiro no formato XXX.XXX,XX.
 *
 * @throws invalid_argument Se o dinheiro n�o for v�lido.
 */
void Dinheiro::setDinheiro(string dinheiro){ //Coloca no padr�o de calculo da linguagem
    this->dinheiroView = dinheiro; //Salva o valor escrito pelo usu�rio para ser mostrado depois
    try {
        validateDinheiro(dinheiro);
    }
    catch(invalid_argument &exp) {
        this->dinheiroView = ""; //Se n�o for um n�mero, o valor � inv�lido
        throw invalid_argument("Argumento invalido");
    }
}

/**
 * @brief Obt�m o dinheiro como n�mero.
 *
 * @return O valor monet�rio em formato num�rico double.
 */
double Dinheiro::getDinheiro() const {
    return this->dinheiro; //Retorna o valor em centavos
}

/**
 * @brief Obt�m o dinheiro formatado como string.
 *
 * @return O valor monet�rio em formato string.
 */
string Dinheiro::getDinheiroView() const {
    return this->dinheiroView;
}

//NOME - FEITO POR LUCAS SANTANA CAMILO ALVES, MAT:211060666

/**
 * @brief Valida se o nome � v�lido.
 *
 * Verifica se o nome tem entre 1 e 30 caracteres e se n�o cont�m n�meros.
 *
 * @param nome O nome a ser validado.
 *
 * @throws invalid_argument Se o nome n�o for v�lido.
 */
void Nome::validateNome(string nome) {
    for (char n: nome){
        if(isdigit(n)){
            throw invalid_argument("Argumento invalido");
        }
    }
    if(nome.length() < 1 || nome.length() > 30) throw invalid_argument("Argumento invalido"); // Valida se o nome tem entre 1 e 30 caracteres
}

/**
 * @brief Define o nome a partir de uma string.
 *
 * @param nome A string que representa o nome.
 *
 * @throws invalid_argument Se o nome n�o for v�lido.
 */
void Nome::setNome(string nome) {
    try{
        validateNome(nome);
        this->nome = nome;
    }
    catch(invalid_argument &exp){
        throw invalid_argument("Argumento invalido");
    }
}

/**
 * @brief Obt�m o nome.
 *
 * @return O nome armazenado.
 */
string Nome::getNome() const {
    return this->nome; // Retorna o nome armazenado
}

//AVALIA��O - FEITO POR LEANDRO COELHO DA SILVA, MAT:232011396

/**
 * @brief Valida se a avalia��o � v�lida.
 *
 * Verifica se a avalia��o est� entre 0 e 5.
 *
 * @param avaliacao A avalia��o a ser validada.
 *
 * @throws invalid_argument Se a avalia��o n�o for v�lida.
 */
void Avaliacao::validateAvaliacao(int avaliacao){
    if (avaliacao < 0 || avaliacao > 5){
        throw invalid_argument("Argumento invalido");
    }
}

/**
 * @brief Define a avalia��o a partir de uma string.
 *
 * @param avaliacao A string que representa a avalia��o.
 *
 * @throws invalid_argument Se a avalia��o n�o for v�lida.
 */
void Avaliacao::setAvaliacao(string avaliacao){
    int avaliacao_int = stoi(avaliacao);
    try{
        validateAvaliacao(avaliacao_int);
        this->avaliacao = avaliacao_int;
    }
    catch(invalid_argument &exp){
        throw invalid_argument("Argumento invalido");
    }
}

/**
 * @brief Obt�m a avalia��o.
 *
 * @return A avalia��o armazenada.
 */
string Avaliacao::getAvaliacao() const {
    return to_string(this->avaliacao);
}

//DURACAO - FEITO POR LEANDRO COELHO DA SILVA, MAT:232011396

/**
 * @brief Valida se a dura��o � v�lida.
 *
 * Verifica se a dura��o est� entre 0 e 360.
 *
 * @param duracao A dura��o a ser validada.
 *
 * @throws invalid_argument Se a dura��o n�o for v�lida.
 */
void Duracao::validateDuracao(int duracao){
    if (duracao < 0 || duracao > 360){
        throw invalid_argument("Argumento invalido");
    }
}

/**
 * @brief Define a dura��o a partir de uma string.
 *
 * @param duracao A string que representa a dura��o.
 *
 * @throws invalid_argument Se a dura��o n�o for v�lida.
 */
void Duracao::setDuracao(string duracao){
    int duracao_int = stoi(duracao);
    try{
        validateDuracao(duracao_int);
        this->duracao = duracao_int;
    }
    catch(invalid_argument &exp){
        throw invalid_argument("Argumento invalido");
    }
}

/**
 * @brief Obt�m a dura��o.
 *
 * @return A dura��o armazenada.
 */
string Duracao::getDuracao() const {
    return to_string(this->duracao);
}

//DATA - FEITO POR LEANDRO COELHO DA SILVA, MAT:232011396

/**
 * @brief Valida se a data � v�lida.
 *
 * Verifica se a data est� no formato correto e se � uma data v�lida.
 * Verifica se o ano � bissexto e se o dia � v�lido para o m�s.
 *
 * @param dia O dia a ser validado.
 * @param mes O m�s a ser validado.
 * @param ano O ano a ser validado.
 *
 * @throws invalid_argument Se a data n�o for v�lida.
 */
void Data::validateData(unsigned short dia, unsigned short mes, unsigned short ano){
    if (ano >= 0 && ano <= 99){ //Analise para o padr�o do ano
        if(mes < 1 || mes > 12){ // Analise para quantidade de m�s
            throw invalid_argument("Argumento invalido");
        }
        else {
            if ((ano % 4) == 0){  //Analise de ano bissexto
                if (mes == 2){
                    if (dia < 1 || dia > 29){ //Analise dos dias de fevereiro
                        throw invalid_argument("Argumento invalido");
                    }
                }
                else {
                    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
                        if(dia < 1 || dia > 31){ //Meses com 31 dias
                            throw invalid_argument("Argumento invalido");
                        }
                    }
                else {
                    if(dia < 1 || dia > 30){ // Meses com 30 dias
                        throw invalid_argument("Argumento invalido");
                    }
                }
            }
            }
            else {
                if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
                    if(dia < 1 || dia > 31){ //Meses com 31 dias
                        throw invalid_argument("Argumento invalido");
                    }
                }
                else {
                    if(dia < 1 || dia > 30){ //Meses com 30 dias
                        throw invalid_argument("Argumento invalido");
                    }
                }
            }
        }
        }
    else {
        throw invalid_argument("Argumento invalido");;
    }
}

/**
 * @brief Define a data a partir de uma string no formato DD-MM-AA.
 *
 * @param data A string que representa a data.
 *
 * @throws invalid_argument Se a data n�o for v�lida.
 */
void Data::setData(string data){
    if (data[2] != '-' || data[5] != '-'){
        throw invalid_argument("Argumento invalido");
    }
    unsigned short DD = stoi(data.substr(0,2));
    unsigned short MM = stoi(data.substr(3,2));
    unsigned short AA = stoi(data.substr(6,3));
    try{
        validateData(DD, MM, AA);
        this->dia = DD;
        this->mes = MM;
        this->ano = AA;
    }
    catch(invalid_argument &exp){
        throw invalid_argument("Argumento invalido");
    }
}

/**
 * @brief Obt�m a data no formato DD-MM-AA.
 *
 * @return A string que representa a data no formato DD-MM-AA.
 */
string Data::getData() const {
    string data;
    string dia;
    string mes;
    string ano;
    if (this->dia < 10){
        dia = "0"+ to_string(this->dia);
    }
    else {
        dia = to_string(this->dia);
    }
    if (this->mes < 10){
        mes = "0"+ to_string(this->mes);
    }
    else {
        mes = to_string(this->mes);
    }
    if (this->ano < 10){
        ano = "0"+ to_string(this->ano);
    }
    else {
        ano = to_string(this->ano);
    }
    data = dia + "-" + mes + "-" + ano;
    return data;
}

//CODIGO - FEITO POR LUCAS SANTANA CAMILO ALVES, MAT:211060666

/**
 * @brief Valida se o c�digo � v�lido.
 *
 * Verifica se o c�digo tem 6 caracteres e se s�o v�lidos.
 *
 * @param codigo O c�digo a ser validado.
 *
 * @throws invalid_argument Se o c�digo n�o for v�lido.
 */
void Codigo::validateCodigo(string codigo){
    if(codigo.size()!=6){
        throw invalid_argument("Argumento invalido");
    }
    vector<char> caracteres = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
        'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
        'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
        '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    for (char letra: codigo){
        if (count(caracteres.begin(), caracteres.end(), letra) == 0){ //Ver se tem os caracteres validos percorrendo pela string e pelo vector
            throw invalid_argument("Argumento invalido");
        }
    }
}

/**
 * @brief Define o c�digo a partir de uma string.
 *
 * @param codigo A string que representa o c�digo.
 *
 * @throws invalid_argument Se o c�digo n�o for v�lido.
 */
void Codigo::setCodigo(string codigo){
    try{
        validateCodigo(codigo);
        this->codigo = codigo;
    }
    catch(invalid_argument &exp){
        throw invalid_argument("Argumento invalido");
    }
}

/**
 * @brief Obt�m o c�digo.
 *
 * @return O c�digo armazenado.
 */
string Codigo::getCodigo() const {
    return this->codigo;
}

//SENHA - FEITO POR LEANDRO COELHO DA SILVA, MAT:232011396

/**
 * @brief Valida se a senha � v�lida.
 *
 * Verifica se a senha tem 5 caracteres, se s�o n�meros e se n�o se repetem.
 * Verifica se a senha � crescente ou decrescente.
 *
 * @param senha A senha a ser validada.
 *
 * @throws invalid_argument Se a senha n�o for v�lida.
 */
void Senha::validateSenha(string senha){
    if (senha.size() != 5){
        throw invalid_argument("Argumento invalido");
    }
    for(int i = 0; i < 5; i++){ //Ver se tem numero
        if(!isdigit(senha[i])){
            throw invalid_argument("Argumento invalido");
        }
    }
    vector<char> caracteres;
    map<char, int> contagem;
    for (char c: senha){
        contagem[c]++;
        if(contagem[c] >= 2){ //Para descobrir se um numero se repete
            throw invalid_argument("Argumento invalido");
        }
        caracteres.push_back(c - '0'); //subtracao por ascii, para virar inteiro
    }
    int contador_cre = 0; //contador de numeros crescentes
    int contador_dec = 0; //contador de numeros decrescentes
    int n_anterior = caracteres.at(0);
    for(int n: caracteres){ //L�gica para ver se a senha � decresce ou crescente
        if(n==(n_anterior-1)){
            n_anterior = n;
            contador_dec++;
        }
        else if(n==(n_anterior +1)){
            n_anterior = n;
            contador_cre++;
        }
        if(contador_cre == 4 || contador_dec == 4){
            throw invalid_argument("Argumento invalido");
        }
    }
}

/**
 * @brief Define a senha a partir de uma string.
 *
 * @param senha A string que representa a senha.
 *
 * @throws invalid_argument Se a senha n�o for v�lida.
 */
void Senha::setSenha(string senha){
    try{
        validateSenha(senha);
        this->senha = senha;
    }
    catch(invalid_argument &exp){
        throw invalid_argument("Argumento invalido");
    }
}

/**
 * @brief Obt�m a senha.
 *
 * @return A senha armazenada.
 */
string Senha::getSenha() const {
    return this->senha;
}
