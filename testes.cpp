/**
 * @file teste_unidade.cpp
 * @brief Implementa��o de testes unit�rios para diversas classes do sistema.
 * Este arquivo define classes de teste para validar as funcionalidades das classes
 */

/**
 * @include <string>
 * Biblioteca usada para manipula��o de strings.
 */
#include <string>

/**
 * @include <iostream>
 * Biblioteca usada para entrada e sa�da de dados.
 */
#include <iostream>

/**
 * @include <stdexcept>
 * Biblioteca usada para lan�amento de exce��es.
 */
#include <stdexcept>

/**
 * @include "dominios.hpp"
 * Arquivo que define os dom�nios usados como atributos nas entidades.
 */
#include "entidades.hpp"

/**
 * @include "testes.hpp"
 * Arquivo que define as classes de teste unit�rio.
 */
#include "testes.hpp"

/**
 * @include "dominios.hpp"
 * Arquivo que define os dom�nios usados como atributos nas entidades.
 */
#include "dominios.hpp"

using namespace std;

const string TUHorario::horario_valido = "12:35";
const string TUHorario::horario_invalido = "99:99";

const string TUDinheiro::dinheiro_valido = "13,00";
const string TUDinheiro::dinheiro_invalido = "999.999,99";

const string TUNome::nome_valido = "joao";
const string TUNome::nome_invalido = "hjkhiguhgihunijnjinjijkhjkhkhkjjajja";

const string TUDuracao::duracao_valida = "99";
const string TUDuracao::duracao_invalida = "999";

const string TUAvaliacao::avaliacao_valida = "3";
const string TUAvaliacao::avaliacao_invalida = "9";

const string TUData::data_valida = "12-12-12";
const string TUData::data_invalida = "99-99-999";

const string TUSenha::senha_valida = "64785";
const string TUSenha::senha_invalida = "12345";

const string TUCodigo::codigo_valido = "215678";
const string TUCodigo::codigo_invalido = "Adaf12ugtyug67";

const string TUConta::codigo_valido = "215678";
const string TUConta::senha_valida = "64785";

const string TUViagem::codigo_valido = "215678";
const string TUViagem::nome_valido = "joao";
const string TUViagem::avaliacao_valida = "3";

const string TUDestino::codigo_valido = "215678";
const string TUDestino::nome_valido = "joao";
const string TUDestino::data_fim_valida = "12-12-12";
const string TUDestino::data_inicio_valida = "12-12-12";
const string TUDestino::avaliacao_valida = "3";

const string TUAtividade::codigo_valido = "215678";
const string TUAtividade::nome_valido = "joao";
const string TUAtividade::horario_valido = "12:35";
const string TUAtividade::data_valida = "12-12-12";
const string TUAtividade::duracao_valida = "99";
const string TUAtividade::dinheiro_valido = "13,00";
const string TUAtividade::avaliacao_valida = "3";

const string TUHospedagem::codigo_valido = "215678";
const string TUHospedagem::nome_valido = "joao";
const string TUHospedagem::dinheiro_valido = "13,00";
const string TUHospedagem::avaliacao_valida = "3";

//-------------------------TestesDom�nio-----------------------------------

//FEITO POR EDUARDO LUNA SCALASSARA, MAT:232011289

//*****************HORARIO*****************

/**
 * @class TUHorario
 * @brief Classe de teste para a classe Horario.
 *
 * A classe `TUHorario` realiza testes unit�rios para a classe `Horario`,
 * verificando o comportamento dos m�todos `setHora` e `getHora` quando s�o
 * fornecidos valores v�lidos e inv�lidos.
 */

/**
 * @brief Inicializa o horario com estado de SUCESSO.
 *
 * Este m�todo prepara o ambiente de teste criando uma nova inst�ncia de
 * `Horario` e inicializando o estado do teste como `SUCESSO`.
 */
void TUHorario::setUp() {
    horario = new Horario();
    estado = SUCESSO;
}

/**
 * @brief Deleta o objeto horario para liberar mem�ria.
 *
 * Este m�todo � chamado ap�s a execu��o de cada teste para liberar a mem�ria
 * alocada para o objeto `horario`.
 */
void TUHorario::tearDown() {
    delete horario;
}

/**
 * @brief Testa cen�rio com valor v�lido para a hora.
 *
 * Este m�todo verifica se a classe `Horario` consegue configurar e retornar
 * corretamente um valor de hora v�lido. Caso o valor n�o seja corretamente
 * configurado ou armazenado, o estado do teste � alterado para `FALHA`.
 *
 * @throws invalid_argument Se o valor de hora for inv�lido e a exce��o for lan�ada.
 */
void TUHorario::testarCenarioValorValido() {
    try {
        horario->setHora(horario_valido);
        if (horario->getHora() != horario_valido)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

/**
 * @brief Verifica o comportamento da classe Horario ao tentar configurar um valor de hora inv�lido.
 *
 * Este m�todo tenta configurar um valor inv�lido para o hor�rio. Espera-se que uma exce��o
 * do tipo `invalid_argument` seja lan�ada. Caso contr�rio, o teste falha.
 * Al�m disso, verifica se o valor de hora n�o foi alterado para o valor inv�lido.
 *
 * @throws invalid_argument Se o valor de hora fornecido for inv�lido.
 */
void TUHorario::testarCenarioValorInvalido() {
    try {
      horario->setHora(horario_invalido);
      estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        if (horario->getHora() == horario_invalido)
            estado = FALHA;
    }
}

/**
 * @brief Executa os testes de valor v�lido e inv�lido.
 *
 * Este m�todo executa os testes para os cen�rios de valor v�lido e inv�lido.
 * Ele configura o ambiente com o m�todo `setUp`, executa os testes e, em seguida,
 * limpa os recursos com o m�todo `tearDown`. O m�todo retorna o estado final do teste.
 *
 * @return O estado do teste, que pode ser `SUCESSO` ou `FALHA`.
 */
int TUHorario::run() {
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}



//****************DINHEIRO*****************

/**
 * @class TUDinheiro
 * @brief Classe de teste para a classe Dinheiro.
 *
 * A classe `TUDinheiro` realiza os testes unit�rios da classe `Dinheiro`,
 * verificando como ela lida com valores v�lidos e inv�lidos, testando
 * os m�todos `setDinheiro` e `getDinheiroView`.
 */

/**
 * @brief Inicializa o objeto `Dinheiro` e define os valores de teste.
 *
 * Este m�todo configura o ambiente de teste, criando uma inst�ncia da classe `Dinheiro`,
 * e define os valores de teste tanto para valores v�lidos quanto inv�lidos de dinheiro.
 * Tamb�m inicializa o estado do teste como `SUCESSO`.
 */
void TUDinheiro::setUp() {
  dinheiro = new Dinheiro();
  estado = SUCESSO;
}

/**
 * @brief Destroi o objeto alocado durante os testes.
 *
 * Este m�todo � chamado ap�s a execu��o de cada teste para liberar a mem�ria alocada
 * para o objeto `dinheiro`, garantindo que n�o haja vazamento de mem�ria.
 */
void TUDinheiro::tearDown() {
  delete dinheiro;
}

/**
 * @brief Testa cen�rio com valor v�lido para Dinheiro.
 *
 * Este m�todo testa o comportamento da classe `Dinheiro` ao fornecer um valor v�lido para o m�todo
 * `setDinheiro`. Verifica se o valor de dinheiro foi armazenado corretamente e se o m�todo
 * `getDinheiroView` retorna a mesma string fornecida. Caso contr�rio, o estado do teste � alterado
 * para `FALHA`.
 *
 * @throws invalid_argument Se o valor de dinheiro fornecido for inv�lido.
 */
void TUDinheiro::testarCenarioValorValido() {
  try {
      dinheiro->setDinheiro(dinheiro_valido);
      if (dinheiro->getDinheiroView() != dinheiro_valido)
          estado = FALHA;
  }
  catch(invalid_argument &excecao){
      estado = FALHA;
  }
}

/**
 * @brief Testa cen�rio com valor inv�lido para Dinheiro.
 *
 * Este m�todo testa o comportamento da classe `Dinheiro` ao fornecer um valor inv�lido para o m�todo
 * `setDinheiro`. Espera-se que a classe lance uma exce��o do tipo `invalid_argument` quando
 * um valor inv�lido � fornecido. Caso a exce��o n�o seja lan�ada, o teste falha. Caso a exce��o
 * seja corretamente lan�ada, o teste � considerado bem-sucedido.
 *
 * @throws invalid_argument Se o valor de dinheiro fornecido for inv�lido.
 */
void TUDinheiro::testarCenarioValorInvalido() {
  try {
    dinheiro->setDinheiro(dinheiro_invalido);
    estado = FALHA;
  }
  catch(invalid_argument &excecao) {
      if (dinheiro->getDinheiroView() == dinheiro_invalido) estado = FALHA;
  }
}

/**
 * @brief Executa todos os testes para a classe Dinheiro.
 *
 * Primeiro, executa o teste com valor v�lido e, se este passar, executa o teste com valor inv�lido.
 * Ap�s a execu��o de todos os testes, limpa os recursos alocados chamando o m�todo `tearDown`.
 *
 * @return O estado final do teste, que pode ser `SUCESSO` ou `FALHA`.
 */
int TUDinheiro::run() {
  setUp();
  testarCenarioValorValido();
  testarCenarioValorInvalido();
  tearDown();
  return estado;
}


//******************NOME************************

/**
 * @class TUNome
 * @brief Classe de teste para a classe Nome.
 *
 * A classe `TUNome` realiza testes unit�rios para o m�todo `setNome` e
 * `getNome` da classe `Nome`, verificando se os valores v�lidos e inv�lidos
 * s�o tratados corretamente.
 */

/**
 * @brief Inicializa o objeto `Nome` e o estado do teste como SUCESSO.
 *
 * Cria uma inst�ncia da classe `Nome` e define o estado inicial do teste
 * como `SUCESSO`.
 */
void TUNome::setUp() {
  nome = new Nome();
  estado = SUCESSO;
}

/**
 * @brief Destroi o objeto alocado durante os testes.
 *
 * Este m�todo � chamado ap�s a execu��o dos testes para liberar a mem�ria
 * alocada para o objeto `nome`.
 */
void TUNome::tearDown() {
  delete nome;
}

/**
 * @brief Testa o comportamento com um valor v�lido para o nome.
 *
 * Este m�todo verifica se o m�todo `setNome` da classe `Nome` funciona corretamente
 * quando um valor v�lido de nome � fornecido. Se o valor armazenado no objeto
 * n�o for igual ao valor esperado, o teste falha.
 *
 * @throws invalid_argument Se o valor fornecido para o nome for inv�lido.
 */
void TUNome::testarCenarioValorValido() {
  try {
      nome->setNome(nome_valido);
      if (nome->getNome() != nome_valido)
          estado = FALHA;
  }
  catch(invalid_argument &excecao){
      estado = FALHA;
  }
}

/**
 * @brief Testa o comportamento com um valor inv�lido para o nome.
 *
 * Este m�todo verifica se a exce��o `invalid_argument` � lan�ada quando um
 * valor inv�lido de nome � fornecido. Caso o valor de nome seja alterado
 * mesmo ap�s a exce��o, o teste falha.
 *
 * @throws invalid_argument Se o valor fornecido para o nome for inv�lido.
 */
void TUNome::testarCenarioValorInvalido() {
  try {
    nome->setNome(nome_invalido);
    estado = FALHA;
  }
  catch(invalid_argument &excecao) {
      if (nome->getNome() == nome_invalido)
          estado = FALHA;
  }
}

/**
 * @brief Executa todos os testes da classe `TUNome`.
 *
 * Este m�todo configura o ambiente de teste, executa os testes para valores v�lidos
 * e inv�lidos e depois limpa os recursos alocados. Retorna o estado final do teste.
 *
 * @return O estado do teste, que pode ser `SUCESSO` ou `FALHA`.
 */
int TUNome::run() {
  setUp();
  testarCenarioValorValido();
  testarCenarioValorInvalido();
  tearDown();
  return estado;
}

//*********************DURACAO********************

/**
 * @class TUDuracao
 * @brief Classe de teste para a classe Duracao.
 *
 * A classe `TUDuracao` realiza testes unit�rios para o m�todo `setDuracao` e
 * `getDuracao` da classe `Duracao`, verificando se os valores v�lidos e inv�lidos
 * s�o tratados corretamente.
 */

/**
 * @brief Inicializa o objeto `Duracao` e o estado do teste como SUCESSO.
 *
 * Este m�todo cria uma inst�ncia da classe `Duracao` e define o estado inicial do teste
 * como `SUCESSO`.
 */
void TUDuracao::setUp() {
  duracao = new Duracao();
  estado = SUCESSO;
}

/**
 * @brief Destroi o objeto alocado durante os testes.
 *
 * Este m�todo � chamado ap�s a execu��o dos testes para liberar a mem�ria
 * alocada para o objeto `duracao`.
 */
void TUDuracao::tearDown() {
  delete duracao;
}

/**
 * @brief Testa o comportamento com um valor v�lido para a dura��o.
 *
 * Este m�todo verifica se o m�todo `setDuracao` da classe `Duracao` funciona corretamente
 * quando um valor v�lido de dura��o � fornecido. Se o valor armazenado no objeto
 * n�o for igual ao valor esperado, o teste falha.
 *
 * @throws invalid_argument Se o valor fornecido para a dura��o for inv�lido.
 */
void TUDuracao::testarCenarioValorValido() {
  try {
      duracao->setDuracao(duracao_valida);
      if (duracao->getDuracao() != duracao_valida)
          estado = FALHA;
  }
  catch(invalid_argument &excecao){
      estado = FALHA;
  }
}

/**
 * @brief Testa o comportamento com um valor inv�lido para a dura��o.
 *
 * Este m�todo verifica se a exce��o `invalid_argument` � lan�ada quando um
 * valor inv�lido de dura��o � fornecido. Caso o valor de dura��o seja alterado
 * mesmo ap�s a exce��o, o teste falha.
 *
 * @throws invalid_argument Se o valor fornecido para a dura��o for inv�lido.
 */
void TUDuracao::testarCenarioValorInvalido() {
  try {
    duracao->setDuracao(duracao_invalida);
    estado = FALHA;
  }
  catch(invalid_argument &excecao) {
      if (duracao->getDuracao() == duracao_invalida)
          estado = FALHA;
  }
}

/**
 * @brief Executa todos os testes da classe `Duracao`.
 *
 * Este m�todo configura o ambiente de teste, executa os testes para valores v�lidos
 * e inv�lidos e depois limpa os recursos alocados. Retorna o estado final do teste.
 *
 * @return O estado do teste, que pode ser `SUCESSO` ou `FALHA`.
 */
int TUDuracao::run() {
  setUp();
  testarCenarioValorValido();
  testarCenarioValorInvalido();
  tearDown();
  return estado;
}


//********************AVALIACAO********************

/**
 * @class TUAvaliacao
 * @brief Classe de teste para a classe Avaliacao.
 *
 * A classe `TUAvaliacao` realiza testes unit�rios para os m�todos `setAvaliacao`
 * e `getAvaliacao` da classe `Avaliacao`, verificando se os valores v�lidos e inv�lidos
 * s�o tratados corretamente.
 */

/**
 * @brief Inicializa o objeto `Avaliacao` e o estado do teste como SUCESSO.
 *
 * Este m�todo cria uma inst�ncia da classe `Avaliacao` e define o estado inicial do teste
 * como `SUCESSO`.
 */
void TUAvaliacao::setUp() {
  avaliacao = new Avaliacao();
  estado = SUCESSO;
}

/**
 * @brief Destroi o objeto alocado durante os testes.
 *
 * Este m�todo � chamado ap�s a execu��o dos testes para liberar a mem�ria
 * alocada para o objeto `avaliacao`.
 */
void TUAvaliacao::tearDown() {
  delete avaliacao;
}

/**
 * @brief Testa o comportamento com um valor v�lido para a avalia��o.
 *
 * Este m�todo verifica se o m�todo `setAvaliacao` da classe `Avaliacao` funciona corretamente
 * quando um valor v�lido de avalia��o � fornecido. Se o valor armazenado no objeto
 * n�o for igual ao valor esperado, o teste falha.
 *
 * @throws invalid_argument Se o valor fornecido para a avalia��o for inv�lido.
 */
void TUAvaliacao::testarCenarioValorValido() {
  try {
      avaliacao->setAvaliacao(avaliacao_valida);
      if (avaliacao->getAvaliacao() != avaliacao_valida)
          estado = FALHA;
  }
  catch(invalid_argument &excecao){
      estado = FALHA;
  }
}

/**
 * @brief Testa o comportamento com um valor inv�lido para a avalia��o.
 *
 * Este m�todo verifica se a exce��o `invalid_argument` � lan�ada quando um
 * valor inv�lido de avalia��o � fornecido. Caso o valor da avalia��o seja alterado
 * mesmo ap�s a exce��o, o teste falha.
 *
 * @throws invalid_argument Se o valor fornecido para a avalia��o for inv�lido.
 */
void TUAvaliacao::testarCenarioValorInvalido() {
  try {
    avaliacao->setAvaliacao(avaliacao_invalida);
    estado = FALHA;
  }
  catch(invalid_argument &excecao) {
      if (avaliacao->getAvaliacao() == avaliacao_invalida)
          estado = FALHA;
  }
}

/**
 * @brief Executa todos os testes da classe `Avaliacao`.
 *
 * Este m�todo configura o ambiente de teste, executa os testes para valores v�lidos
 * e inv�lidos e depois limpa os recursos alocados. Retorna o estado final do teste.
 *
 * @return O estado do teste, que pode ser `SUCESSO` ou `FALHA`.
 */
int TUAvaliacao::run() {
  setUp();
  testarCenarioValorValido();
  testarCenarioValorInvalido();
  tearDown();
  return estado;
}


//********************DATA********************

/**
 * @class TUData
 * @brief Classe de teste para a classe Data.
 *
 * A classe `TUData` realiza testes unit�rios para os m�todos `setData` e `getData`
 * da classe `Data`, verificando se os valores v�lidos e inv�lidos s�o tratados corretamente.
 */

/**
 * @brief Inicializa o objeto `Data` e o estado do teste como SUCESSO.
 *
 * Este m�todo cria uma inst�ncia da classe `Data` e define o estado inicial do teste
 * como `SUCESSO`.
 */
void TUData::setUp() {
  data = new Data();
  estado = SUCESSO;
}

/**
 * @brief Destroi o objeto alocado durante os testes.
 *
 * Este m�todo � chamado ap�s a execu��o dos testes para liberar a mem�ria
 * alocada para o objeto `data`.
 */
void TUData::tearDown() {
  delete data;
}

/**
 * @brief Testa o comportamento com um valor v�lido para Data.
 *
 * Este m�todo verifica se o m�todo `setData` da classe `Data` funciona corretamente
 * quando um valor v�lido de data � fornecido. Se o valor armazenado no objeto
 * n�o for igual ao valor esperado, o teste falha.
 *
 * @throws invalid_argument Se o valor fornecido para a data for inv�lido.
 */
void TUData::testarCenarioValorValido() {
  try {
      data->setData(data_valida);
      if (data->getData() != data_valida)
          estado = FALHA;
  }
  catch(invalid_argument &excecao){
      estado = FALHA;
  }
}

/**
 * @brief Testa o comportamento com um valor inv�lido para Data.
 *
 * Este m�todo verifica se a exce��o `invalid_argument` � lan�ada quando um
 * valor inv�lido de data � fornecido. Caso o valor da data seja alterado
 * mesmo ap�s a exce��o, o teste falha.
 *
 * @throws invalid_argument Se o valor fornecido para a data for inv�lido.
 */
void TUData::testarCenarioValorInvalido() {
  try {
    data->setData(data_invalida);
    estado = FALHA;
  }
  catch(invalid_argument &excecao) {
      if (data->getData() == data_invalida)
          estado = FALHA;
  }
}

/**
 * @brief Executa todos os testes da classe `Data`.
 *
 * Este m�todo configura o ambiente de teste, executa os testes para valores v�lidos
 * e inv�lidos e depois limpa os recursos alocados. Retorna o estado final do teste.
 *
 * @return O estado do teste, que pode ser `SUCESSO` ou `FALHA`.
 */
int TUData::run() {
  setUp();
  testarCenarioValorValido();
  testarCenarioValorInvalido();
  tearDown();
  return estado;
}



//***********************SENHA*********************

/**
 * @class TUSenha
 * @brief Classe de teste para a classe Senha.
 *
 * A classe `TUSenha` realiza testes unit�rios para os m�todos `setSenha` e `getSenha`
 * da classe `Senha`, verificando o correto funcionamento para valores v�lidos e inv�lidos.
 */

/**
 * @brief Inicializa o objeto `Senha` e o estado do teste como SUCESSO.
 *
 * Este m�todo cria uma inst�ncia da classe `Senha` e define o estado inicial do teste
 * como `SUCESSO`.
 */
void TUSenha::setUp() {
  senha = new Senha();
  estado = SUCESSO;
}

/**
 * @brief Destroi o objeto alocado durante os testes.
 *
 * Este m�todo � chamado ap�s a execu��o dos testes para liberar a mem�ria
 * alocada para o objeto `senha`.
 */
void TUSenha::tearDown() {
  delete senha;
}

/**
 * @brief Testa o comportamento com um valor v�lido para Senha.
 *
 * Este m�todo verifica se o m�todo `setSenha` da classe `Senha` funciona corretamente
 * quando um valor v�lido de senha � fornecido. Se o valor armazenado no objeto
 * n�o for igual ao valor esperado, o teste falha.
 *
 * @throws invalid_argument Se o valor fornecido para a senha for inv�lido.
 */
void TUSenha::testarCenarioValorValido() {
  try {
      senha->setSenha(senha_valida);
      if (senha->getSenha() != senha_valida)
          estado = FALHA;
  }
  catch(invalid_argument &excecao){
      estado = FALHA;
  }
}

/**
 * @brief Testa o comportamento com um valor inv�lido para Senha.
 *
 * Este m�todo verifica se a exce��o `invalid_argument` � lan�ada quando um
 * valor inv�lido de senha � fornecido. Caso o valor da senha seja alterado
 * mesmo ap�s a exce��o, o teste falha.
 *
 * @throws invalid_argument Se o valor fornecido para a senha for inv�lido.
 */
void TUSenha::testarCenarioValorInvalido() {
  try {
    senha->setSenha(senha_invalida);
    estado = FALHA;
  }
  catch(invalid_argument &excecao) {
      if (senha->getSenha() == senha_invalida)
          estado = FALHA;
  }
}

/**
 * @brief Executa todos os testes da classe Senha.
 *
 * Este m�todo configura o ambiente de teste, executa os testes para valores v�lidos
 * e inv�lidos e depois limpa os recursos alocados. Retorna o estado final do teste.
 *
 * @return O estado do teste, que pode ser `SUCESSO` ou `FALHA`.
 */
int TUSenha::run() {
  setUp();
  testarCenarioValorValido();
  testarCenarioValorInvalido();
  tearDown();
  return estado;
}


//***************************CODIGO************************

/**
 * @class TUCodigo
 * @brief Classe de teste para a classe Codigo.
 *
 * A classe `TUCodigo` realiza testes unit�rios para os m�todos `setCodigo` e `getCodigo`
 * da classe `Codigo`, verificando o comportamento quando valores v�lidos e inv�lidos s�o fornecidos.
 */

/**
 * @brief Inicializa o objeto `Codigo` e define o estado do teste como SUCESSO.
 *
 * Este m�todo cria uma inst�ncia da classe `Codigo` e inicializa o estado do teste
 * como `SUCESSO`.
 */
void TUCodigo::setUp() {
  codigo = new Codigo();
  estado = SUCESSO;
}

/**
 * @brief Destroi o objeto alocado durante os testes.
 *
 * Este m�todo � chamado ap�s a execu��o dos testes para liberar a mem�ria
 * alocada para o objeto `codigo`.
 */
void TUCodigo::tearDown() {
  delete codigo;
}

/**
 * @brief Testa o comportamento com um valor v�lido para Codigo.
 *
 * Este m�todo verifica se o m�todo `setCodigo` da classe `Codigo` funciona corretamente
 * quando um valor v�lido � fornecido. Se o valor armazenado no objeto `codigo`
 * n�o for igual ao valor esperado, o teste falha.
 *
 * @throws invalid_argument Se o valor fornecido para o c�digo for inv�lido.
 */
void TUCodigo::testarCenarioValorValido() {
  try {
      codigo->setCodigo(codigo_valido);
      if (codigo->getCodigo() != codigo_valido)
          estado = FALHA;
  }
  catch(invalid_argument &excecao){
      estado = FALHA;
  }
}

/**
 * @brief Testa o comportamento com um valor inv�lido para Codigo.
 *
 * Este m�todo verifica se a exce��o `invalid_argument` � lan�ada quando um
 * valor inv�lido � fornecido para o c�digo. Caso o valor da vari�vel `codigo`
 * seja alterado mesmo ap�s a exce��o, o teste falha.
 *
 * @throws invalid_argument Se o valor fornecido para o c�digo for inv�lido.
 */
void TUCodigo::testarCenarioValorInvalido() {
  try {
    codigo->setCodigo(codigo_invalido);
    estado = FALHA;
  }
  catch(invalid_argument &excecao) {
      if (codigo->getCodigo() == codigo_invalido)
          estado = FALHA;
  }
}

/**
 * @brief Executa todos os testes da classe Codigo.
 *
 * Este m�todo configura o ambiente de teste, executa os testes para valores v�lidos
 * e inv�lidos e depois limpa os recursos alocados. Retorna o estado final do teste.
 *
 * @return O estado do teste, que pode ser `SUCESSO` ou `FALHA`.
 */
int TUCodigo::run() {
  setUp();
  testarCenarioValorValido();
  testarCenarioValorInvalido();
  tearDown();
  return estado;
}

//-------------------------TestesEntidades-----------------------------------

//FEITO POR LUCAS SANTANA CAMILO ALVES, MAT:211060666

//********************CONTA********************

/**
 * @class TUConta
 * @brief Classe de teste para a classe Conta.
 *
 * A classe `TUConta` realiza testes unit�rios para a classe `Conta`, verificando
 * o comportamento do armazenamento e recupera��o da senha e do c�digo da conta
 * por meio dos m�todos `setSenha`, `getSenha`, `setCodigo` e `getCodigo`.
 */

/**
 * @brief Inicializa o objeto `Conta` e define o estado do teste como SUCESSO.
 *
 * Este m�todo cria uma nova inst�ncia da classe `Conta` e define o estado do teste
 * como `SUCESSO`. � chamado antes de cada teste individual.
 */
void TUConta::setUp(){
    conta = new Conta();
    estado = SUCESSO;
    }

/**
 * @brief Destroi o objeto alocado durante os testes.
 *
 * Este m�todo � chamado ap�s a execu��o dos testes para liberar a mem�ria
 * alocada para o objeto `conta`. � chamado ap�s cada teste individual.
 */
void TUConta::tearDown(){
    delete conta;
}

/**
 * @brief Testa o comportamento da conta com senha e c�digo v�lidos.
 *
 * Este m�todo realiza dois testes:
 * 1. Testa se a senha � configurada corretamente na conta e se a senha
 *    armazenada � igual � senha fornecida.
 * 2. Testa se o c�digo � configurado corretamente na conta e se o c�digo
 *    armazenado � igual ao c�digo fornecido.
 *
 * Se algum dos testes falhar, o estado do teste � alterado para `FALHA`.
 */
void TUConta::testarCenario(){
    // Teste de senha valida
    Senha senha;
    senha.setSenha(senha_valida);
    conta->setSenha(senha);
    if(conta->getSenha().getSenha() != senha_valida) estado = FALHA;
    // Teste de Codigo valido
    Codigo codigo;
    codigo.setCodigo(codigo_valido);
    conta->setCodigo(codigo);
    if(conta->getCodigo().getCodigo() != codigo_valido ) estado = FALHA;
}

/**
 * @brief Executa todos os testes da classe Conta.
 *
 * Este m�todo configura o ambiente de teste, executa os testes para a senha
 * e c�digo v�lidos e depois limpa os recursos alocados. Retorna o estado final do teste.
 *
 * @return O estado do teste, que pode ser `SUCESSO` ou `FALHA`.
 */
int TUConta::run() {
  setUp();
  testarCenario();
  tearDown();
  return estado;
}

//***************************VIAGEM************************

/**
 * @class TUViagem
 * @brief Classe de teste para a classe Viagem.
 *
 * A classe `TUViagem` realiza testes unit�rios para a classe `Viagem`, verificando
 * o comportamento do armazenamento e recupera��o do c�digo, avalia��o e nome de uma
 * viagem, utilizando os m�todos `setCodigo`, `getCodigo`, `setAvaliacao`, `getAvaliacao`,
 * `setNome` e `getNome`.
 */

/**
 * @brief Inicializa o objeto `Viagem` e define o estado do teste como SUCESSO.
 *
 * Este m�todo cria uma nova inst�ncia da classe `Viagem` e define o estado do teste
 * como `SUCESSO`. � chamado antes de cada teste individual.
 */
void TUViagem::setUp(){
    viagem = new Viagem();
    estado = SUCESSO;
    }

/**
 * @brief Destroi o objeto alocado durante os testes.
 *
 * Este m�todo � chamado ap�s a execu��o dos testes para liberar a mem�ria
 * alocada para o objeto `viagem`. � chamado ap�s cada teste individual.
 */
void TUViagem::tearDown(){
    delete viagem;
}

/**
 * @brief Testa o comportamento da viagem com c�digo, avalia��o e nome v�lidos.
 *
 * Este m�todo realiza tr�s testes:
 * 1. Testa se o c�digo � configurado corretamente na viagem e se o c�digo
 *    armazenado � igual ao c�digo fornecido.
 * 2. Testa se a avalia��o � configurada corretamente na viagem e se a avalia��o
 *    armazenada � igual � avalia��o fornecida.
 * 3. Testa se o nome da viagem � configurado corretamente na viagem e se o nome
 *    armazenado � igual ao nome fornecido.
 *
 * Se algum dos testes falhar, o estado do teste � alterado para `FALHA`.
 */
void TUViagem::testarCenario(){
    // Teste de Codigo valido
    Codigo codigo;
    codigo.setCodigo(codigo_valido);
    viagem->setCodigo(codigo);
    if(viagem->getCodigo().getCodigo() != codigo_valido) estado = FALHA;
    // Teste de avaliacao valida
    Avaliacao avaliacao;
    avaliacao.setAvaliacao(avaliacao_valida);
    viagem->setAvaliacao(avaliacao);
    if(viagem->getAvaliacao().getAvaliacao() != avaliacao_valida ) estado = FALHA;
    //Nome
    Nome nome;
    nome.setNome(nome_valido);
    viagem->setNome(nome);
    if(viagem->getNome().getNome() != nome_valido ) estado = FALHA;
}

/**
 * @brief Executa todos os testes da classe Viagem.
 *
 * Este m�todo configura o ambiente de teste, executa os testes para c�digo,
 * avalia��o e nome v�lidos e depois limpa os recursos alocados. Retorna o
 * estado final do teste.
 *
 * @return O estado do teste, que pode ser `SUCESSO` ou `FALHA`.
 */
int TUViagem::run() {
  setUp();
  testarCenario();
  tearDown();
  return estado;
}

//***************************Destino************************

/**
 * @class TUDestino
 * @brief Classe de teste para a classe Destino.
 *
 * A classe `TUDestino` realiza testes unit�rios para os m�todos de configura��o de datas
 * da classe `Destino`, verificando se os valores de `DataInicio` e `DataFim` s�o
 * corretamente configurados e recuperados.
 */

/**
 * @brief Inicializa o objeto `Destino` e os valores de teste.
 *
 * Cria uma inst�ncia de `Destino`, define valores v�lidos para `DataInicio` e
 * `DataFim`, e inicializa o estado do teste como `SUCESSO`.
 */
void TUDestino::setUp(){
    destino = new Destino();
    estado = SUCESSO;
    }

/**
 * @brief Destroi o objeto alocado durante os testes.
 *
 * Libera a mem�ria alocada para o objeto `destino` ap�s a execu��o dos testes.
 */
void TUDestino::tearDown(){
    delete destino;
}

/**
 * @brief Testa os cen�rios de configura��o de datas para o Destino.
 *
 * Testa se as datas de in�cio e fim s�o configuradas corretamente, usando os
 * valores v�lidos definidos. Se as datas n�o forem configuradas corretamente,
 * o estado do teste � alterado para `FALHA`.
 *
 * @throws invalid_argument Se ocorrer um erro ao definir as datas.
 */
void TUDestino::testarCenario(){
    // Teste de Codigo valido
    Codigo codigo;
    codigo.setCodigo(codigo_valido);
    destino->setCodigo(codigo);
    if(destino->getCodigo().getCodigo() != codigo_valido) estado = FALHA;
    // Teste de codigo valido
    Nome nome;
    nome.setNome(nome_valido);
    destino->setNome(nome);
    if(destino->getNome().getNome() != nome_valido) estado = FALHA;
    // Teste de avaliacao valida
    Avaliacao avaliacao;
    avaliacao.setAvaliacao(avaliacao_valida);
    destino->setAvaliacao(avaliacao);
    if(destino->getAvaliacao().getAvaliacao() != avaliacao_valida) estado = FALHA;
    // Teste de data valida
    Data data_fim;
    data_fim.setData(data_fim_valida);
    destino->setDataFim(data_fim);
    if(destino->getDataFim().getData() != data_fim_valida) estado = FALHA;
    // Teste de data valida
    Data data_inicio;
    data_inicio.setData(data_inicio_valida);
    destino->setDataInicio(data_inicio);
    if(destino->getDataInicio().getData() != data_inicio_valida) estado = FALHA;
}

/**
 * @brief Executa todos os testes para a classe Destino.
 *
 * Configura o ambiente de teste, executa o teste para as datas de in�cio e fim,
 * e limpa os recursos ap�s a execu��o. Retorna o estado final do teste.
 *
 * @return O estado do teste: `SUCESSO` ou `FALHA`.
 */
int TUDestino::run() {
  setUp();
  testarCenario();
  tearDown();
  return estado;
}

//***************************Hospedagem************************

/**
 * @class TUHospedagem
 * @brief Classe de teste para a classe Hospedagem.
 *
 * A classe `TUHospedagem` realiza testes unit�rios para a classe `Hospedagem`, verificando
 * o comportamento do armazenamento e recupera��o do c�digo, nome, avalia��o e di�ria de uma
 * hospedagem, utilizando os m�todos `setCodigo`, `getCodigo`, `setNome`, `getNome`,
 * `setAvaliacao`, `getAvaliacao`, `setDiaria` e `getDiaria`.
 */

/**
 * @brief Inicializa o objeto `Hospedagem` e define o estado do teste como SUCESSO.
 *
 * Este m�todo cria uma nova inst�ncia da classe `Hospedagem` e define o estado do teste
 * como `SUCESSO`. � chamado antes de cada teste individual.
 */
void TUHospedagem::setUp(){
    hospedagem = new Hospedagem();
    estado = SUCESSO;
    }

/**
 * @brief Destroi o objeto alocado durante os testes.
 *
 * Este m�todo � chamado ap�s a execu��o dos testes para liberar a mem�ria
 * alocada para o objeto `hospedagem`. � chamado ap�s cada teste individual.
 */
void TUHospedagem::tearDown(){
    delete hospedagem;
}

/**
 * @brief Testa o comportamento da hospedagem com c�digo, nome, avalia��o e di�ria v�lidos.
 *
 * Este m�todo realiza quatro testes:
 * 1. Testa se o c�digo � configurado corretamente na hospedagem e se o c�digo
 *    armazenado � igual ao c�digo fornecido.
 * 2. Testa se o nome � configurado corretamente na hospedagem e se o nome
 *    armazenado � igual ao nome fornecido.
 * 3. Testa se a avalia��o � configurada corretamente na hospedagem e se a avalia��o
 *    armazenada � igual � avalia��o fornecida.
 * 4. Testa se a di�ria � configurada corretamente na hospedagem e se o valor
 *    armazenado da di�ria � igual ao valor fornecido.
 *
 * Se algum dos testes falhar, o estado do teste � alterado para `FALHA`.
 */
void TUHospedagem::testarCenario(){
    Codigo codigo;
    codigo.setCodigo(codigo_valido);
    hospedagem->setCodigo(codigo);
    if(hospedagem->getCodigo().getCodigo() != codigo_valido) estado = FALHA;
    // Teste de codigo valido
    Nome nome;
    nome.setNome(nome_valido);
    hospedagem->setNome(nome);
    if(hospedagem->getNome().getNome() != nome_valido) estado = FALHA;
    // Teste de avaliacao valida
    Avaliacao avaliacao;
    avaliacao.setAvaliacao(avaliacao_valida);
    hospedagem->setAvaliacao(avaliacao);
    if(hospedagem->getAvaliacao().getAvaliacao() != avaliacao_valida ) estado = FALHA;
    // Teste de dinheiro valido
    Dinheiro dinheiro;
    dinheiro.setDinheiro(dinheiro_valido);
    hospedagem->setDiaria(dinheiro);
    if(hospedagem->getDiaria().getDinheiroView() != dinheiro_valido ) estado = FALHA;
}

/**
 * @brief Executa todos os testes da classe Hospedagem.
 *
 * Este m�todo configura o ambiente de teste, executa os testes para c�digo, nome,
 * avalia��o e di�ria v�lidos e depois limpa os recursos alocados. Retorna o
 * estado final do teste.
 *
 * @return O estado do teste, que pode ser `SUCESSO` ou `FALHA`.
 */
int TUHospedagem::run() {
  setUp();
  testarCenario();
  tearDown();
  return estado;
}

//***************************Atividade************************

/**
 * @class TUAtividade
 * @brief Classe de teste para a classe Atividade.
 *
 * A classe `TUAtividade` realiza testes unit�rios para a classe `Atividade`, verificando
 * o comportamento do armazenamento e recupera��o de c�digo, nome, avalia��o, pre�o,
 * dura��o, data e hor�rio de uma atividade.
 */

/**
 * @brief Inicializa o objeto `Atividade` e define o estado do teste como SUCESSO.
 *
 * Este m�todo cria uma nova inst�ncia da classe `Atividade` e define o estado do teste
 * como `SUCESSO`. � chamado antes de cada teste individual.
 */
void TUAtividade::setUp(){
    atividade = new Atividade();
    estado = SUCESSO;
    }

/**
 * @brief Destroi o objeto alocado durante os testes.
 *
 * Este m�todo � chamado ap�s a execu��o dos testes para liberar a mem�ria
 * alocada para o objeto `atividade`. � chamado ap�s cada teste individual.
 */
void TUAtividade::tearDown(){
    delete atividade;
}

/**
 * @brief Testa o comportamento da atividade com c�digo, nome, avalia��o, pre�o,
 *        dura��o, data e hor�rio v�lidos.
 *
 * Este m�todo realiza sete testes:
 * 1. Testa se o c�digo � configurado corretamente na atividade e se o c�digo
 *    armazenado � igual ao c�digo fornecido.
 * 2. Testa se o nome � configurado corretamente na atividade e se o nome
 *    armazenado � igual ao nome fornecido.
 * 3. Testa se a avalia��o � configurada corretamente na atividade e se a avalia��o
 *    armazenada � igual � avalia��o fornecida.
 * 4. Testa se o pre�o � configurado corretamente na atividade e se o valor
 *    armazenado do pre�o � igual ao valor fornecido.
 * 5. Testa se a dura��o � configurada corretamente na atividade e se a dura��o
 *    armazenada � igual � dura��o fornecida.
 * 6. Testa se a data � configurada corretamente na atividade e se a data
 *    armazenada � igual � data fornecida.
 * 7. Testa se o hor�rio � configurado corretamente na atividade e se o hor�rio
 *    armazenado � igual ao hor�rio fornecido.
 *
 * Se algum dos testes falhar, o estado do teste � alterado para `FALHA`.
 */
void TUAtividade::testarCenario(){
    Codigo codigo;
    codigo.setCodigo(codigo_valido);
    atividade->setCodigo(codigo);
    if(atividade->getCodigo().getCodigo() != codigo_valido) estado = FALHA;
    // Teste de codigo valido
    Nome nome;
    nome.setNome(nome_valido);
    atividade->setNome(nome);
    if(atividade->getNome().getNome() != nome_valido) estado = FALHA;
    // Teste de avaliacao valida
    Avaliacao avaliacao;
    avaliacao.setAvaliacao(avaliacao_valida);
    atividade->setAvaliacao(avaliacao);
    if(atividade->getAvaliacao().getAvaliacao() != avaliacao_valida) estado = FALHA;
    // Teste de dinheiro valido
    Dinheiro dinheiro;
    dinheiro.setDinheiro(dinheiro_valido);
    atividade->setPreco(dinheiro);
    if(atividade->getPreco().getDinheiroView() != dinheiro_valido) estado = FALHA;
    // Teste de duracao valida
    Duracao duracao;
    duracao.setDuracao(duracao_valida);
    atividade->setDuracao(duracao);
    if(atividade->getDuracao().getDuracao() != duracao_valida) estado = FALHA;
    // Teste de data valida
    Data data;
    data.setData(data_valida);
    atividade->setData(data);
    if(atividade->getData().getData() != data_valida ) estado = FALHA;
    Horario hora;
    hora.setHora(horario_valido);
    atividade->setHorario(hora);
    if(atividade->getHorario().getHora() != horario_valido) estado = FALHA;
    }

/**
 * @brief Executa todos os testes da classe Atividade.
 *
 * Este m�todo configura o ambiente de teste, executa os testes para c�digo, nome,
 * avalia��o, pre�o, dura��o, data e hor�rio v�lidos e depois limpa os recursos
 * alocados. Retorna o estado final do teste.
 *
 * @return O estado do teste, que pode ser `SUCESSO` ou `FALHA`.
 */
int TUAtividade::run() {
  setUp();
  testarCenario();
  tearDown();
  return estado;
}
