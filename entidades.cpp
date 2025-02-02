/**
 * @file entidades.hpp
 * @brief Implementa��o de m�todos das entidades do sistema.
 *
 * Este arquivo cont�m a implementa��o dos m�todos das classes
 * relacionadas as entidades do sistema, como Conta, Viagem,
 * Hospedagem, Atividade e Destino. Cada entidade utiliza dom�nios com
 * atributos, que s�o acessados e modificados por meio de m�todos
 * 'set e 'get'.
 */

/**
 * @include "entidades.hpp"
 * Arquivo que define as classes das entidades do sistema.
 */
#include "entidades.hpp"

/**
 * @include "dominios.hpp"
 * Arquivo que define os dom�nios usados como atributos nas entidades.
 */
#include "dominios.hpp"

/**
 * @class Conta
 * @brief Representa uma conta com c�digo e senha.
 */

/**
 * @brief Define o c�digo da conta.
 * @param codigo Objeto do tipo Codigo.
 */

//CONTA - FEITO POR LEANDRO COELHO DA SILVA, MAT:232011396
void Conta::setCodigo(const Codigo& codigo){
    this->codigo = codigo;
};

/**
 * @brief Retorna o c�digo da conta.
 * @return Objeto do tipo Codigo.
 */
Codigo Conta::getCodigo() const {
    return this->codigo;
}

/**
 * @brief Define a senha da conta.
 * @param senha Objeto do tipo Senha.
 */
void Conta::setSenha(const Senha& senha){
    this->senha = senha;
}

/**
 * @brief Retorna a senha da conta.
 * @return Objeto do tipo Senha.
 */
Senha Conta::getSenha() const {
    return this->senha;
}

/**
 * @class Viagem
 * @brief Representa uma viagem com atributos como c�digo, avalia��o e nome.
 *
 * A classe Viagem utiliza diversos dom�nios para armazenar informa��es relacionadas � viagem.
 * Os valores podem ser configurados e acessados por meio de m�todos 'set' e 'get'.
 */

/**
 * @brief Define o c�digo da viagem.
 * @param codigo Objeto do tipo Codigo que representa o c�digo da viagem.
 */

//VIAGEM - FEITO POR LEANDRO COELHO DA SILVA, MAT:232011396
void Viagem::setCodigo(const Codigo& codigo){
    this->codigo = codigo;
};

/**
 * @brief Retorna o c�digo da viagem.
 * @return Objeto do tipo Codigo associado � viagem.
 */
Codigo Viagem::getCodigo() const {
    return this->codigo;
}

/**
 * @brief Define a avalia��o da viagem.
 * @param avaliacao Objeto do tipo Avaliacao que representa a avalia��o da viagem.
 */
void Viagem::setAvaliacao(const Avaliacao& avaliacao){
    this->avaliacao = avaliacao;
}

/**
 * @brief Retorna a avalia��o da viagem.
 * @return Objeto do tipo Avaliacao associado � viagem.
 */
Avaliacao Viagem::getAvaliacao() const {
    return this->avaliacao;
}

/**
 * @brief Define o nome da viagem.
 * @param nome Objeto do tipo Nome que representa o nome da viagem.
 */
void Viagem::setNome(const Nome& nome) {
    this->nome = nome;
}

/**
 * @brief Retorna o nome da viagem.
 * @return Objeto do tipo Nome associado � viagem.
 */
Nome Viagem::getNome() const {
    return this->nome;
}

/**
 * @class Hospedagem
 * @brief Representa uma hospedagem com c�digo, avalia��o, nome e di�ria.
 *
 * A classe Hospedagem utiliza os dom�nios Codigo, Avaliacao, Nome e Dinheiro
 * para armazenar informa��es associadas � hospedagem. Os valores podem
 * ser configurados e acessados por meio de m�todos 'set' e 'get'.
 */

/**
 * @brief Define o c�digo da hospedagem.
 * @param codigo Objeto do tipo Codigo que representa o c�digo da hospedagem.
 */

//HOSPEDAGEM - FEITO POR LEANDRO COELHO DA SILVA, MAT:232011396
void Hospedagem::setCodigo(const Codigo& codigo){
    this->codigo = codigo;
}

/**
 * @brief Retorna o c�digo da hospedagem.
 * @return Objeto do tipo Codigo associado � hospedagem.
 */
Codigo Hospedagem::getCodigo() const {
    return this->codigo;
}

/**
 * @brief Define a avalia��o da hospedagem.
 * @param avaliacao Objeto do tipo Avaliacao que representa a avalia��o da hospedagem.
 */
void Hospedagem::setAvaliacao(const Avaliacao& avaliacao){
    this->avaliacao = avaliacao;
}

/**
 * @brief Retorna a avalia��o da hospedagem.
 * @return Objeto do tipo Avaliacao associado � hospedagem.
 */
Avaliacao Hospedagem::getAvaliacao() const {
    return this->avaliacao;
}

/**
 * @brief Define o nome da hospedagem.
 * @param nome Objeto do tipo Nome que representa o nome da hospedagem.
 */
void Hospedagem::setNome(const Nome& nome){
    this->nome = nome;
}

/**
 * @brief Retorna o nome da hospedagem.
 * @return Objeto do tipo Nome associado � hospedagem.
 */
Nome Hospedagem::getNome() const {
    return this->nome;
}

/**
 * @brief Define o valor da di�ria da hospedagem.
 * @param diaria Objeto do tipo Dinheiro que representa o valor da di�ria.
 */
void Hospedagem::setDiaria(const Dinheiro& diaria){
    this->diaria = diaria;
}

/**
 * @brief Retorna o valor da di�ria da hospedagem.
 * @return Objeto do tipo Dinheiro associado � hospedagem.
 */
Dinheiro Hospedagem::getDiaria() const {
    return this->diaria;
}

/**
 * @class Destino
 * @brief Representa um destino com c�digo, avalia��o, data de in�cio e data de fim.
 *
 * A classe Destino utiliza os dom�nios Codigo, Avaliacao e Data para armazenar
 * informa��es relacionadas ao destino. Os valores podem ser configurados e acessados
 * por meio de m�todos 'set' e 'get'.
 */

/**
 * @brief Define o c�digo do destino.
 * @param codigo Objeto do tipo Codigo que representa o c�digo do destino.
 */

//DESTINO - FEITO POR LEANDRO COELHO DA SILVA, MAT:232011396
void Destino::setCodigo(const Codigo& codigo){
    this->codigo = codigo;
}

/**
 * @brief Retorna o c�digo do destino.
 * @return Objeto do tipo Codigo associado ao destino.
 */
Codigo Destino::getCodigo() const {
    return this->codigo;
}

/**
 * @brief Define o nome do destino.
 * @param nome Objeto do tipo Nome que representa o nome do destino.
 */
void Destino::setNome(const Nome& nome){
    this->nome = nome;
}

/**
 * @brief Retorna o nome do destino.
 * @return Objeto do tipo Nome associado ao destino.
 */
Nome Destino::getNome() const {
    return this->nome;
}


/**
 * @brief Define a avalia��o do destino.
 * @param avaliacao Objeto do tipo Avaliacao que representa a avalia��o do destino.
 */
void Destino::setAvaliacao(const Avaliacao& avaliacao){
    this->avaliacao = avaliacao;
}

/**
 * @brief Retorna a avalia��o do destino.
 * @return Objeto do tipo Avaliacao associado ao destino.
 */
Avaliacao Destino::getAvaliacao() const {
    return this->avaliacao;
}

/**
 * @brief Define a data de in�cio do destino.
 * @param data_inicio Objeto do tipo Data que representa a data de in�cio do destino.
 */
void Destino::setDataInicio(const Data& data_inicio){
    this->data_inicio = data_inicio;
}

/**
 * @brief Retorna a data de in�cio do destino.
 * @return Objeto do tipo Data associado � data de in�cio.
 */
Data Destino::getDataInicio() const {
    return this->data_inicio;
}

/**
 * @brief Define a data de fim do destino.
 * @param data_fim Objeto do tipo Data que representa a data de fim do destino.
 */
void Destino::setDataFim(const Data& data_fim){
    this->data_fim = data_fim;
}

/**
 * @brief Retorna a data de fim do destino.
 * @return Objeto do tipo Data associado � data de fim.
 */
Data Destino::getDataFim() const {
    return this->data_fim;
}

/**
 * @class Atividade
 * @brief Representa uma atividade com atributos como c�digo, nome, avalia��o, data,
 * hor�rio, dura��o e pre�o.
 *
 * A classe Atividade utiliza diversos dom�nios para armazenar informa��es relacionadas � atividade.
 * Os valores podem ser configurados e acessados por meio de m�todos 'set' e 'get'.
 */

/**
 * @brief Define o c�digo da atividade.
 * @param codigo Objeto do tipo Codigo que representa o c�digo da atividade.
 */

//ATIVIDADE - FEITO POR LEANDRO COELHO DA SILVA, MAT:232011396
void Atividade::setCodigo(const Codigo& codigo){
    this->codigo = codigo;
}
/**
 * @brief Retorna o c�digo da atividade.
 * @return Objeto do tipo Codigo associado � atividade.
 */
Codigo Atividade::getCodigo() const {
    return this->codigo;
}

/**
 * @brief Define o nome da atividade.
 * @param nome Objeto do tipo Nome que representa o nome da atividade.
 */
void Atividade::setNome(const Nome& nome){
    this->nome = nome;
}

/**
 * @brief Retorna o nome da atividade.
 * @return Objeto do tipo Nome associado � atividade.
 */
Nome Atividade::getNome() const {
    return this->nome;
}

/**
 * @brief Define a avalia��o da atividade.
 * @param avaliacao Objeto do tipo Avaliacao que representa a avalia��o da atividade.
 */
void Atividade::setAvaliacao(const Avaliacao& avaliacao){
    this->avaliacao = avaliacao;
}

/**
 * @brief Retorna a avalia��o da atividade.
 * @return Objeto do tipo Avaliacao associado � atividade.
 */
Avaliacao Atividade::getAvaliacao() const {
    return this->avaliacao;
}

/**
 * @brief Define a data da atividade.
 * @param data Objeto do tipo Data que representa a data da atividade.
 */
void Atividade::setData(const Data& data){
    this->data = data;
}

/**
 * @brief Retorna o data da atividade.
 * @return Objeto do tipo Data associado � atividade.
 */
Data Atividade::getData() const {
    return this->data;
}

/**
 * @brief Define o hor�rio da atividade.
 * @param horario Objeto do tipo Horario que representa o hor�rio da atividade.
 */
void Atividade::setHorario(const Horario& horario){
    this->horario=horario;
}

/**
 * @brief Retorna o hor�rio da atividade.
 * @return Objeto do tipo Horario associado � atividade.
 */
Horario Atividade::getHorario() const {
    return this->horario;
}

/**
 * @brief Define a dura��o da atividade.
 * @param duracao Objeto do tipo Duracao que representa a dura��o da atividade.
 */
void Atividade::setDuracao(const Duracao& duracao){
    this->duracao=duracao;
}

/**
 * @brief Retorna a dura��o da atividade.
 * @return Objeto do tipo Duracao associado � atividade.
 */
Duracao Atividade::getDuracao() const {
    return this->duracao;
}

/**
 * @brief Define o pre�o da atividade.
 * @param preco Objeto do tipo Dinheiro que representa o pre�o da atividade.
 */
void Atividade::setPreco(const Dinheiro& preco){
    this->preco = preco;
}

/**
 * @brief Retorna o pre�o da atividade.
 * @return Objeto do tipo Dinheiro associado � atividade.
 */
Dinheiro Atividade::getPreco() const {
    return this->preco;
}
