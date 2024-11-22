#include "dominios.hpp"
#include <stdexcept>
#include <map>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

// HORARIO

void Horario::validateHora(unsigned short hora, unsigned short minuto){
    //Valida se as horas e minutos estão dentro do padrão
    if (hora > 23 || hora < 0){
        throw invalid_argument("Argumento invalido");
    }
    else if (minuto > 59 || minuto < 0){
        throw invalid_argument("Argumento invalido");
    }
}

void Horario::setHora(string horario){
    if (horario[2] != ':'){
        throw invalid_argument("Argumento invalido"); //Se o horário não separar o valor corretamente será inválido
    }
    unsigned short HH = stoi(horario.substr(0,2)); //Converte horas string para inteiro
    unsigned short MM = stoi(horario.substr(3 ,2)); //Converte minutos string para inteiro
    try {
        validateHora(HH, MM);            //Atribui valores se forem válidos
        this->hora=HH;
        this->minuto=MM;
    }
    catch(invalid_argument &exp) {
        throw invalid_argument("Argumento invalido");
    }
}

string Horario::getHora() const { //Formata a string para o padrão HH:MM
    string horario;
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

// DINHEIRO

void Dinheiro::validateDinheiro(string dinheiro){ //Valida se o dinheiro está no padrão correto
    try {
        this->dinheiro = stof(dinheiro); //Converte para float
    }
    catch (invalid_argument &exp){
        throw invalid_argument("Argumento invalido");
    }
    if (Dinheiro::dinheiro < 0){
        throw invalid_argument("Argumento invalido");
    }
    else if (Dinheiro::dinheiro > 200000){
        throw invalid_argument("Argumento invalido");
    }
}

void Dinheiro::setDinheiro(string dinheiro){ //Coloca no padrão de calculo da linguagem
    this->dinheiroView = dinheiro; //Salva o valor escrito pelo usuário para ser mostrado depois
    for(int i=0; i<dinheiro.size(); i++){
        if (dinheiro[i] == '.'){
            dinheiro.erase(i, 1); //Tira os pontos
        }
        else if (dinheiro[i] == ','){
            dinheiro.replace(i, 1, "."); //Troca os virgulas por pontos
        }
    }
    try{
        validateDinheiro(dinheiro);
    }
    catch(invalid_argument &exp) {
        this->dinheiroView = ""; //Se não for um número, o valor é inválido
        throw invalid_argument("Argumento invalido");
    }
}

string Dinheiro::getDinheiroView() const {
    return this->dinheiroView; //Retorna o valor escrito pelo usuário
}

double Dinheiro::getDinheiro() const {
    return this->dinheiro; //Retorna o valor em float
}

// NOME

void Nome::validateNome(string nome) {
    for (char n: nome){
        if(isdigit(n)){
            throw invalid_argument("Argumento invalido");
        }
    }
    if(nome.length() < 1 || nome.length() > 30) throw invalid_argument("Argumento invalido"); // Valida se o nome tem entre 1 e 30 caracteres
}

void Nome::setName(string nome) {
    try{
        validateNome(nome); // Verifica se o nome � v�lido
    } 
    catch(invalid_argument &exp){
        throw invalid_argument("Argumento invalido");
    }
    this->nome = nome; // Atribui o nome se for v�lido
}

string Nome::getName() const {
    return this->nome; // Retorna o nome armazenado
}

// AVALIAÇÃO

bool Avaliacao::validateAvaliacao(int avaliacao){
    if (avaliacao < 0 || avaliacao > 5){
        throw out_of_range("Argumento invalido: Avaliacao deve ser entre 0 e 5");
    }
    else {
        return true;
    }
}

bool Avaliacao::setAvaliacao(int avaliacao){
    if (!validateAvaliacao(avaliacao)){
        return false;
    }
    else {
        this->avaliacao = avaliacao;
        return true;
    }
}

string Avaliacao::getAvaliacao() const {
    return to_string(this->avaliacao);
}

// DURACAO

bool Duracao::validateDuracao(int duracao){
    if (duracao < 0 || duracao > 360){
        throw out_of_range("Argumento invalido: duracao incompativel");
    }
    else {
        return true;
    }
}

bool Duracao::setDuracao(int duracao){
    if (!validateDuracao(duracao)){
        return false;
    }
    else {
        this->duracao = duracao;
        return true;
    }
}

string Duracao::getDuracao() const {
    return to_string(this->duracao);
}

// DATA

bool Data::validateData(unsigned short dia, unsigned short mes, unsigned short ano){
    if (ano >= 0 && ano <= 99){ //Analise para o padrão do ano
        if(mes < 1 || mes > 12){ // Analise para quantidade de mês
            throw out_of_range("Argumento invalido: mes inexistente");
        }
        else {
            if ((ano % 4) == 0){  //Analise de ano bissexto
                if (mes == 2){
                    if (dia < 1 || dia > 29){ //Analise dos dias de fevereiro
                        throw out_of_range("Argumento invalido: dia inexistente");
                    }
                    else {
                        return true;
                    }
                }
                else {
                    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
                        if(dia < 1 || dia > 31){ //Meses com 31 dias
                            throw out_of_range("Argumento invalido: dia inexistente");
                        }
                        else {
                            return true;
                        }
                    }
                else {
                    if(dia < 1 || dia > 30){ // Meses com 30 dias
                        throw out_of_range("Argumento invalido: dia inexistente");
                    }
                    else {
                        return true;
                    }
                }
            }
            }
            else {
                if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
                    if(dia < 1 || dia > 31){ //Meses com 31 dias
                        throw out_of_range("Argumento invalido: dia inexistente");
                    }
                    else {
                        return true;
                    }
                }
                else {
                    if(dia < 1 || dia > 30){ //Meses com 30 dias
                        throw out_of_range("Argumento invalido: dia inexistente");
                    }
                    else {
                        return true;
                    }
                }
            }
        }
        }
    else {
        throw out_of_range("Argumento invalido: ano inexistente");;
    }
}

bool Data::setData(string data){
    if (data[2] != '-' || data[5] != '-'){
        throw invalid_argument("Argumento invalido: data precisa estar no modelo especificado.");
        return false;//Se a data não for escrita corretamente
    }
    unsigned short DD = stoi(data.substr(0,2));
    unsigned short MM = stoi(data.substr(3,2));
    unsigned short AA = stoi(data.substr(6,3));
    if(!validateData(DD, MM, AA)){
        return false;
    }
    else {
        this->dia = DD;
        this->mes = MM;
        this->ano = AA;
        return true;
    }
}

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

// CODIGO

bool Codigo::validateCodigo(string codigo){
    if(codigo.size()!=6){
        throw out_of_range("Argumento invalido: codigo com tamanho diferente de 6 caracteres.");
    }
    vector<char> caracteres = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
        'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
        'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
        '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    for (char letra: codigo){
        if (not(count(caracteres.begin(), caracteres.end(), letra) < 0)){ //Ver se tem os caracteres validos percorrendo pela string e pelo vector
            throw domain_error("Argumento invalido: caracteres invalidos");
        }
    }
    return true;
}

bool Codigo::setCodigo(string codigo){
    if(!validateCodigo(codigo)){
        return false;
    }
    else {
        this->codigo = codigo;
        return true;
    }
}

string Codigo::getCodigo() const {
    return this->codigo;
}

// SENHA

bool Senha::validateSenha(string senha){
    if (senha.size() != 5){
        throw out_of_range("Argumento invalido: senha com tamanho diferente de cinco digitos.");
    }
    for(int i = 0; i < 5; i++){ //Ver se tem numero
        if(!isdigit(senha[i])){
            throw domain_error("Argumento invalido: senha com simbolo invalido.");
        }
    }
    vector<char> caracteres;
    map<char, int> contagem;
    for (char c: senha){
        contagem[c]++;
        if(contagem[c] >= 2){ //Para descobrir se um numero se repete
            throw invalid_argument("Argumento invalido: senha com numero repetido.");
        }
        caracteres.push_back(c - '0'); //subtracao por ascii, para virar inteiro
    }
    int contador_cre = 0; //contador de numeros crescentes
    int contador_dec = 0; //contador de numeros decrescentes
    int n_anterior = caracteres.at(0);
    for(int n: caracteres){ //Lógica para ver se a senha é decresce ou crescente
        if(n==(n_anterior-1)){
            n_anterior = n;
            contador_dec++;
        }
        else if(n==(n_anterior +1)){
            n_anterior = n;
            contador_cre++;
        }
        if(contador_cre == 4 || contador_dec == 4){
            throw invalid_argument("Argumento invalido: senha crescente/decrescente");
        }
    }
    return true;
}

bool Senha::setSenha(string senha){
    if(!validateSenha(senha)){
        return false;
    }
    else {
        this->senha = senha;
        return true;
    }
}

string Senha::getSenha() const {
    return this->senha;
}
