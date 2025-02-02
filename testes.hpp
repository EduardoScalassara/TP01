#ifndef TESTES_HPP_INCLUDED
#define TESTES_HPP_INCLUDED

/**
 * @include <string>
 * Biblioteca usada para manipula��o de strings.
 */
#include <string>

/**
 * @include <stdexcept>
 * Biblioteca usada para lan�amento de exce��es.
 */
#include <stdexcept>

/**
 * @include "dominios.hpp"
 * Arquivo que define os dom�nios usados como atributos nas entidades.
 */
#include "dominios.hpp"

/**
 * @include "entidades.hpp"
 * Arquivo que define as entidades do sistema.
 */
#include "entidades.hpp"

using namespace std;

//-------------------------TestesDom�nio-----------------------------------

//FEITO POR EDUARDO LUNA SCALASSARA, MAT:232011289

//********************HORARIO********************

/**
 * @class TUHorario
 * @brief Classe de teste para a classe Horario.
 *
 * Esta classe cont�m os testes unit�rios para a classe Horario, verificando os cen�rios de valores v�lidos e inv�lidos.
 * A classe realiza a configura��o inicial e a limpeza ap�s a execu��o de cada teste.
 */
class TUHorario {
    private:

        /** @brief Valor de hora v�lido utilizado para testes. */
        const static string horario_valido;

        /** @brief Valor de hora inv�lido utilizado para testes. */
        const static string horario_invalido;

        /** @brief Ponteiro para o objeto Horario sendo testado. */
        Horario *horario;

        /** @brief Estado do teste (SUCESSO ou FALHA). */
        int estado;
        /**
        * @brief Configura o ambiente de teste inicializando o objeto Horario.
        *
        * Este m�todo � chamado antes de cada execu��o de teste para preparar o ambiente necess�rio.
        */
        void setUp();

        /**
         * @brief Libera a mem�ria utilizada pelo objeto Horario ap�s o teste.
         *
         * Este m�todo � chamado ap�s cada execu��o de teste para realizar a limpeza.
         */
        void tearDown();

        /**
         * @brief Testa o cen�rio com valor v�lido de hora.
         *
         * Este m�todo configura o objeto Horario com um valor v�lido de hora e verifica se o valor foi corretamente armazenado.
         * Caso contr�rio, altera o estado para FALHA.
         */
        void testarCenarioValorValido();

        /**
         * @brief Testa o cen�rio com valor inv�lido de hora.
         *
         * Este m�todo tenta configurar o objeto Horario com um valor inv�lido de hora e verifica se a exce��o apropriada � lan�ada.
         * Caso contr�rio, altera o estado para FALHA.
         */
        void testarCenarioValorInvalido();
    public:
        /** @brief Constante que representa o estado de sucesso do teste. */
        const static int SUCESSO = 0;

        /** @brief Constante que representa o estado de falha do teste. */
        const static int FALHA = -1;

        /**
         * @brief Executa todos os testes da classe TUHorario.
         *
         * Este m�todo chama todos os testes de cen�rio de valor v�lido e inv�lido. Ap�s a execu��o dos testes, o estado final � retornado.
         *
         * @return int O estado final do teste (SUCESSO ou FALHA).
         */
        int run();
};

//********************DINHEIRO********************

/**
 * @class TUDinheiro
 * @brief Classe de teste para a classe Dinheiro.
 *
 * Esta classe cont�m os testes unit�rios para a classe Dinheiro, verificando os cen�rios de valores v�lidos e inv�lidos.
 * A classe realiza a configura��o inicial e a limpeza ap�s a execu��o de cada teste.
 */
class TUDinheiro
{
private:
    /** @brief Valor de dinheiro v�lido utilizado para testes. */
    const static string dinheiro_valido;

    /** @brief Valor de dinheiro inv�lido utilizado para testes. */
    const static string dinheiro_invalido;

    /** @brief Ponteiro para o objeto Dinheiro sendo testado. */
    Dinheiro *dinheiro;

    /** @brief Estado do teste (SUCESSO ou FALHA). */
    int estado;

    /**
     * @brief Configura o ambiente de teste inicializando o objeto Dinheiro.
     *
     * Este m�todo � chamado antes de cada execu��o de teste para preparar o ambiente necess�rio.
     */
    void setUp();

    /**
     * @brief Libera a mem�ria utilizada pelo objeto Dinheiro ap�s o teste.
     *
     * Este m�todo � chamado ap�s cada execu��o de teste para realizar a limpeza.
     */
    void tearDown();

    /**
     * @brief Testa o cen�rio com valor v�lido de dinheiro.
     *
     * Este m�todo configura o objeto Dinheiro com um valor v�lido de dinheiro e verifica se o valor foi corretamente armazenado.
     * Caso contr�rio, altera o estado para FALHA.
     */
    void testarCenarioValorValido();

    /**
     * @brief Testa o cen�rio com valor inv�lido de dinheiro.
     *
     * Este m�todo tenta configurar o objeto Dinheiro com um valor inv�lido de dinheiro e verifica se a exce��o apropriada � lan�ada.
     * Caso contr�rio, altera o estado para FALHA.
     */
    void testarCenarioValorInvalido();

public:
    /** @brief Constante que representa o estado de sucesso do teste. */
    const static int SUCESSO = 0;

    /** @brief Constante que representa o estado de falha do teste. */
    const static int FALHA = -1;

    /**
     * @brief Executa todos os testes da classe TUDinheiro.
     *
     * Este m�todo chama todos os testes de cen�rio de valor v�lido e inv�lido. Ap�s a execu��o dos testes, o estado final � retornado.
     *
     * @return int O estado final do teste (SUCESSO ou FALHA).
     */
    int run();
};

//********************NOME********************

/**
 * @class TUNome
 * @brief Classe de teste para a classe Nome.
 *
 * Esta classe cont�m os testes unit�rios para a classe Nome, verificando os cen�rios de valores v�lidos e inv�lidos.
 * A classe realiza a configura��o inicial e a limpeza ap�s a execu��o de cada teste.
 */
class TUNome
{
private:
    /** @brief Nome v�lido utilizado para testes. */
    const static string nome_valido;

    /** @brief Nome inv�lido utilizado para testes. */
    const static string nome_invalido;

    /** @brief Ponteiro para o objeto Nome sendo testado. */
    Nome *nome;

    /** @brief Estado do teste (SUCESSO ou FALHA). */
    int estado;

    /**
     * @brief Configura o ambiente de teste inicializando o objeto Nome.
     *
     * Este m�todo � chamado antes de cada execu��o de teste para preparar o ambiente necess�rio.
     */
    void setUp();

    /**
     * @brief Libera a mem�ria utilizada pelo objeto Nome ap�s o teste.
     *
     * Este m�todo � chamado ap�s cada execu��o de teste para realizar a limpeza.
     */
    void tearDown();

    /**
     * @brief Testa o cen�rio com valor v�lido para o Nome.
     *
     * Este m�todo configura o objeto Nome com um valor v�lido e verifica se o nome foi corretamente armazenado.
     * Caso contr�rio, altera o estado para FALHA.
     */
    void testarCenarioValorValido();

    /**
     * @brief Testa o cen�rio com valor inv�lido para o Nome.
     *
     * Este m�todo tenta configurar o objeto Nome com um valor inv�lido e verifica se a exce��o apropriada � lan�ada.
     * Caso contr�rio, altera o estado para FALHA.
     */
    void testarCenarioValorInvalido();

public:
    /** @brief Constante que representa o estado de sucesso do teste. */
    const static int SUCESSO = 0;

    /** @brief Constante que representa o estado de falha do teste. */
    const static int FALHA = -1;

    /**
     * @brief Executa todos os testes da classe TUNome.
     *
     * Este m�todo chama todos os testes de cen�rio de valor v�lido e inv�lido. Ap�s a execu��o dos testes, o estado final � retornado.
     *
     * @return int O estado final do teste (SUCESSO ou FALHA).
     */
    int run();
};

//********************DURACAO********************

/**
 * @class TUDuracao
 * @brief Classe de teste para a classe Duracao.
 *
 * Esta classe realiza testes unit�rios para a classe Duracao, verificando se os cen�rios de valores v�lidos e inv�lidos s�o corretamente tratados.
 * A classe realiza a configura��o do ambiente de teste antes da execu��o e a limpeza ap�s a execu��o de cada teste.
 */
class TUDuracao
{
private:
    /** @brief Duracao v�lida utilizada para os testes. */
    const static string duracao_valida;

    /** @brief Duracao inv�lida utilizada para os testes. */
    const static string duracao_invalida;

    /** @brief Ponteiro para o objeto Duracao sendo testado. */
    Duracao *duracao;

    /** @brief Estado do teste (SUCESSO ou FALHA). */
    int estado;

    /**
     * @brief Configura o ambiente de teste inicializando o objeto Duracao.
     *
     * Este m�todo � chamado antes de cada execu��o de teste para preparar o ambiente necess�rio.
     */
    void setUp();

    /**
     * @brief Libera a mem�ria utilizada pelo objeto Duracao ap�s o teste.
     *
     * Este m�todo � chamado ap�s cada execu��o de teste para realizar a limpeza.
     */
    void tearDown();

    /**
     * @brief Testa o cen�rio com valor v�lido para Duracao.
     *
     * Este m�todo configura o objeto Duracao com um valor v�lido e verifica se a dura��o foi corretamente armazenada.
     * Caso contr�rio, altera o estado para FALHA.
     */
    void testarCenarioValorValido();

    /**
     * @brief Testa o cen�rio com valor inv�lido para Duracao.
     *
     * Este m�todo tenta configurar o objeto Duracao com um valor inv�lido e verifica se a exce��o apropriada � lan�ada.
     * Caso contr�rio, altera o estado para FALHA.
     */
    void testarCenarioValorInvalido();

public:
    /** @brief Constante que representa o estado de sucesso do teste. */
    const static int SUCESSO = 0;

    /** @brief Constante que representa o estado de falha do teste. */
    const static int FALHA = -1;

    /**
     * @brief Executa todos os testes da classe TUDuracao.
     *
     * Este m�todo chama todos os testes de cen�rio de valor v�lido e inv�lido. Ap�s a execu��o dos testes, o estado final � retornado.
     *
     * @return int O estado final do teste (SUCESSO ou FALHA).
     */
    int run();
};

//********************AVALIACAO********************

/**
 * @class TUAvaliacao
 * @brief Classe de teste para a classe Avaliacao.
 *
 * Esta classe realiza testes unit�rios para a classe Avaliacao, verificando se os cen�rios de valores v�lidos e inv�lidos s�o corretamente tratados.
 * A classe configura o ambiente de teste antes da execu��o e a limpeza ap�s a execu��o de cada teste.
 */
class TUAvaliacao
{
private:
    /** @brief Avaliacao v�lida utilizada para os testes. */
    const static string avaliacao_valida;

    /** @brief Avaliacao inv�lida utilizada para os testes. */
    const static string avaliacao_invalida;

    /** @brief Ponteiro para o objeto Avaliacao sendo testado. */
    Avaliacao *avaliacao;

    /** @brief Estado do teste (SUCESSO ou FALHA). */
    int estado;

    /**
     * @brief Configura o ambiente de teste inicializando o objeto Avaliacao.
     *
     * Este m�todo � chamado antes de cada execu��o de teste para preparar o ambiente necess�rio.
     */
    void setUp();

    /**
     * @brief Libera a mem�ria utilizada pelo objeto Avaliacao ap�s o teste.
     *
     * Este m�todo � chamado ap�s cada execu��o de teste para realizar a limpeza.
     */
    void tearDown();

    /**
     * @brief Testa o cen�rio com valor v�lido para Avaliacao.
     *
     * Este m�todo configura o objeto Avaliacao com um valor v�lido e verifica se a avalia��o foi corretamente armazenada.
     * Caso contr�rio, altera o estado para FALHA.
     */
    void testarCenarioValorValido();

    /**
     * @brief Testa o cen�rio com valor inv�lido para Avaliacao.
     *
     * Este m�todo tenta configurar o objeto Avaliacao com um valor inv�lido e verifica se a exce��o apropriada � lan�ada.
     * Caso contr�rio, altera o estado para FALHA.
     */
    void testarCenarioValorInvalido();

public:
    /** @brief Constante que representa o estado de sucesso do teste. */
    const static int SUCESSO = 0;

    /** @brief Constante que representa o estado de falha do teste. */
    const static int FALHA = -1;

    /**
     * @brief Executa todos os testes da classe TUAvaliacao.
     *
     * Este m�todo chama todos os testes de cen�rio de valor v�lido e inv�lido. Ap�s a execu��o dos testes, o estado final � retornado.
     *
     * @return int O estado final do teste (SUCESSO ou FALHA).
     */
    int run();
};

//********************DATA********************

/**
 * @class TUData
 * @brief Classe de teste para a classe Data.
 *
 * Esta classe realiza testes unit�rios para a classe Data, verificando se os cen�rios de valores v�lidos e inv�lidos s�o corretamente tratados.
 * A classe configura o ambiente de teste antes da execu��o e realiza a limpeza ap�s a execu��o de cada teste.
 */
class TUData
{
private:
    /** @brief Data v�lida utilizada para os testes. */
    const static string data_valida;

    /** @brief Data inv�lida utilizada para os testes. */
    const static string data_invalida;

    /** @brief Ponteiro para o objeto Data sendo testado. */
    Data *data;

    /** @brief Estado do teste (SUCESSO ou FALHA). */
    int estado;

    /**
     * @brief Configura o ambiente de teste inicializando o objeto Data.
     *
     * Este m�todo � chamado antes de cada execu��o de teste para preparar o ambiente necess�rio.
     */
    void setUp();

    /**
     * @brief Libera a mem�ria utilizada pelo objeto Data ap�s o teste.
     *
     * Este m�todo � chamado ap�s cada execu��o de teste para realizar a limpeza.
     */
    void tearDown();

    /**
     * @brief Testa o cen�rio com valor v�lido para Data.
     *
     * Este m�todo configura o objeto Data com um valor v�lido e verifica se a data foi corretamente armazenada.
     * Caso contr�rio, altera o estado para FALHA.
     */
    void testarCenarioValorValido();

    /**
     * @brief Testa o cen�rio com valor inv�lido para Data.
     *
     * Este m�todo tenta configurar o objeto Data com um valor inv�lido e verifica se a exce��o apropriada � lan�ada.
     * Caso contr�rio, altera o estado para FALHA.
     */
    void testarCenarioValorInvalido();

public:
    /** @brief Constante que representa o estado de sucesso do teste. */
    const static int SUCESSO = 0;

    /** @brief Constante que representa o estado de falha do teste. */
    const static int FALHA = -1;

    /**
     * @brief Executa todos os testes da classe TUData.
     *
     * Este m�todo chama todos os testes de cen�rio de valor v�lido e inv�lido. Ap�s a execu��o dos testes, o estado final � retornado.
     *
     * @return int O estado final do teste (SUCESSO ou FALHA).
     */
    int run();
};

//********************SENHA********************

/**
 * @class TUSenha
 * @brief Classe de teste para a classe Senha.
 *
 * Esta classe realiza testes unit�rios para a classe Senha, verificando se os cen�rios de valores v�lidos e inv�lidos s�o corretamente tratados.
 * A classe configura o ambiente de teste antes da execu��o e realiza a limpeza ap�s a execu��o de cada teste.
 */
class TUSenha
{
private:
    /** @brief Senha v�lida utilizada para os testes. */
    const static string senha_valida;

    /** @brief Senha inv�lida utilizada para os testes. */
    const static string senha_invalida;

    /** @brief Ponteiro para o objeto Senha sendo testado. */
    Senha *senha;

    /** @brief Estado do teste (SUCESSO ou FALHA). */
    int estado;

    /**
     * @brief Configura o ambiente de teste inicializando o objeto Senha.
     *
     * Este m�todo � chamado antes de cada execu��o de teste para preparar o ambiente necess�rio.
     */
    void setUp();

    /**
     * @brief Libera a mem�ria utilizada pelo objeto Senha ap�s o teste.
     *
     * Este m�todo � chamado ap�s cada execu��o de teste para realizar a limpeza.
     */
    void tearDown();

    /**
     * @brief Testa o cen�rio com valor v�lido para Senha.
     *
     * Este m�todo configura o objeto Senha com um valor v�lido e verifica se a senha foi corretamente armazenada.
     * Caso contr�rio, altera o estado para FALHA.
     */
    void testarCenarioValorValido();

    /**
     * @brief Testa o cen�rio com valor inv�lido para Senha.
     *
     * Este m�todo tenta configurar o objeto Senha com um valor inv�lido e verifica se a exce��o apropriada � lan�ada.
     * Caso contr�rio, altera o estado para FALHA.
     */
    void testarCenarioValorInvalido();

public:
    /** @brief Constante que representa o estado de sucesso do teste. */
    const static int SUCESSO = 0;

    /** @brief Constante que representa o estado de falha do teste. */
    const static int FALHA = -1;

    /**
     * @brief Executa todos os testes da classe TUSenha.
     *
     * Este m�todo chama todos os testes de cen�rio de valor v�lido e inv�lido. Ap�s a execu��o dos testes, o estado final � retornado.
     *
     * @return int O estado final do teste (SUCESSO ou FALHA).
     */
    int run();
};

//********************C�DIGO********************

/**
 * @class TUCodigo
 * @brief Classe de teste para a classe Codigo.
 *
 * Esta classe realiza os testes unit�rios para a classe `Codigo`. O objetivo � garantir que a classe `Codigo` funcione corretamente
 * para valores v�lidos e inv�lidos. O teste inclui a configura��o de um objeto `Codigo` com valores v�lidos e inv�lidos e a
 * verifica��o do comportamento esperado para cada cen�rio.
 */
class TUCodigo
{
private:
    /** @brief C�digo v�lido para os testes. */
    const static string codigo_valido;

    /** @brief C�digo inv�lido para os testes. */
    const static string codigo_invalido;

    /** @brief Objeto de teste da classe Codigo. */
    Codigo *codigo;

    /** @brief Estado do teste, representando sucesso ou falha. */
    int estado;

    /**
     * @brief Configura o ambiente de teste inicializando o objeto Codigo.
     *
     * Este m�todo � chamado antes de cada execu��o de teste para preparar o objeto necess�rio para o teste.
     */
    void setUp();

    /**
     * @brief Realiza a limpeza ap�s o teste, liberando a mem�ria alocada.
     *
     * Este m�todo � chamado ap�s a execu��o de cada teste para garantir que todos os recursos sejam liberados corretamente.
     */
    void tearDown();

    /**
     * @brief Testa o cen�rio com valor v�lido para o Codigo.
     *
     * Configura a classe `Codigo` com um valor v�lido e verifica se o valor � corretamente armazenado.
     * Caso contr�rio, altera o estado para `FALHA`.
     */
    void testarCenarioValorValido();

    /**
     * @brief Testa o cen�rio com valor inv�lido para o Codigo.
     *
     * Configura a classe `Codigo` com um valor inv�lido e verifica se a exce��o apropriada � lan�ada.
     * Caso contr�rio, altera o estado para `FALHA`.
     */
    void testarCenarioValorInvalido();

public:
    /** @brief Constante que representa o estado de sucesso do teste. */
    const static int SUCESSO = 0;

    /** @brief Constante que representa o estado de falha do teste. */
    const static int FALHA = -1;

    /**
     * @brief Executa todos os testes da classe `TUCodigo`.
     *
     * Este m�todo chama os m�todos de teste para cen�rios de valores v�lidos e inv�lidos.
     * Ap�s a execu��o, ele retorna o estado do teste, que pode ser `SUCESSO` ou `FALHA`.
     *
     * @return int O estado final do teste (SUCESSO ou FALHA).
     */
    int run();
};

//-------------------------TestesEntidades-----------------------------------

//FEITO POR LUCAS SANTANA CAMILO ALVES, MAT:211060666

// ********************CONTA********************

/**
 * @class TUConta
 * @brief Classe de teste para a classe Conta.
 *
 * Esta classe realiza testes unit�rios para a classe `Conta`. O objetivo � garantir que a classe `Conta` funcione corretamente
 * quando associada a uma senha e a um c�digo v�lidos. O teste inclui a configura��o de uma `Conta` com valores v�lidos e a
 * verifica��o do comportamento esperado.
 */
class TUConta
{
private:
    /** @brief Senha v�lida para os testes. */
    const static string senha_valida;

    /** @brief C�digo v�lido para os testes. */
    const static string codigo_valido;

    /** @brief Objeto de teste da classe Conta. */
    Conta *conta;

    /** @brief Estado do teste, representando sucesso ou falha. */
    int estado;

    /**
     * @brief Configura o ambiente de teste inicializando o objeto Conta.
     *
     * Este m�todo � chamado antes de cada execu��o de teste para preparar o objeto necess�rio para o teste.
     */
    void setUp();

    /**
     * @brief Realiza a limpeza ap�s o teste, liberando a mem�ria alocada.
     *
     * Este m�todo � chamado ap�s a execu��o de cada teste para garantir que todos os recursos sejam liberados corretamente.
     */
    void tearDown();

    /**
     * @brief Testa o cen�rio com valores v�lidos para Senha e C�digo na Conta.
     *
     * Configura a classe `Conta` com uma senha e um c�digo v�lidos e verifica se os valores s�o corretamente armazenados.
     * Caso contr�rio, altera o estado para `FALHA`.
     */
    void testarCenario();

public:
    /** @brief Constante que representa o estado de sucesso do teste. */
    const static int SUCESSO = 0;

    /** @brief Constante que representa o estado de falha do teste. */
    const static int FALHA = -1;

    /**
     * @brief Executa todos os testes da classe `TUConta`.
     *
     * Este m�todo chama os m�todos de teste para o cen�rio com valores v�lidos.
     * Ap�s a execu��o, ele retorna o estado do teste, que pode ser `SUCESSO` ou `FALHA`.
     *
     * @return int O estado final do teste (SUCESSO ou FALHA).
     */
    int run();
};

//********************VIAGEM********************

/**
 * @class TUViagem
 * @brief Classe de teste para a classe Viagem.
 *
 * Esta classe realiza testes unit�rios para a classe `Viagem`. O objetivo � garantir que a classe `Viagem` funcione corretamente
 * quando associada a valores v�lidos para c�digo, nome e avalia��o. O teste inclui a configura��o de uma `Viagem` com esses valores
 * e a verifica��o do comportamento esperado.
 */
class TUViagem
{
private:
    /** @brief C�digo v�lido para os testes. */
    const static string codigo_valido;

    /** @brief Nome v�lido para os testes. */
    const static string nome_valido;

    /** @brief Avalia��o v�lida para os testes. */
    const static string avaliacao_valida;

    /** @brief Objeto de teste da classe Viagem. */
    Viagem *viagem;

    /** @brief Estado do teste, representando sucesso ou falha. */
    int estado;

    /**
     * @brief Configura o ambiente de teste inicializando o objeto Viagem.
     *
     * Este m�todo � chamado antes de cada execu��o de teste para preparar o objeto necess�rio para o teste.
     */
    void setUp();

    /**
     * @brief Realiza a limpeza ap�s o teste, liberando a mem�ria alocada.
     *
     * Este m�todo � chamado ap�s a execu��o de cada teste para garantir que todos os recursos sejam liberados corretamente.
     */
    void tearDown();

    /**
     * @brief Testa o cen�rio com valores v�lidos para C�digo, Nome e Avalia��o na Viagem.
     *
     * Configura a classe `Viagem` com um c�digo, nome e avalia��o v�lidos e verifica se os valores s�o corretamente
     * armazenados. Caso contr�rio, altera o estado para `FALHA`.
     */
    void testarCenario();

public:
    /** @brief Constante que representa o estado de sucesso do teste. */
    const static int SUCESSO = 0;

    /** @brief Constante que representa o estado de falha do teste. */
    const static int FALHA = -1;

    /**
     * @brief Executa todos os testes da classe `TUViagem`.
     *
     * Este m�todo chama os m�todos de teste para o cen�rio com valores v�lidos.
     * Ap�s a execu��o, ele retorna o estado do teste, que pode ser `SUCESSO` ou `FALHA`.
     *
     * @return int O estado final do teste (SUCESSO ou FALHA).
     */
    int run();
};

//***************************Destino************************

/**
 * @class TUDestino
 * @brief Classe de teste para a classe Destino.
 *
 * Esta classe realiza testes unit�rios para a classe `Destino`. O objetivo � garantir que a classe `Destino` funcione corretamente
 * quando associada a valores v�lidos para c�digo, nome, datas de in�cio e fim e avalia��o. O teste inclui a configura��o de um `Destino`
 * com esses valores e a verifica��o do comportamento esperado.
 */
class TUDestino
{
private:
    /** @brief C�digo v�lido para os testes. */
    const static string codigo_valido;

    /** @brief Nome v�lido para os testes. */
    const static string nome_valido;

    /** @brief Data de in�cio v�lida para os testes. */
    const static string data_inicio_valida;

    /** @brief Data de fim v�lida para os testes. */
    const static string data_fim_valida;

    /** @brief Avalia��o v�lida para os testes. */
    const static string avaliacao_valida;

    /** @brief Objeto de teste da classe Destino. */
    Destino *destino;

    /** @brief Estado do teste, representando sucesso ou falha. */
    int estado;

    /**
     * @brief Configura o ambiente de teste inicializando o objeto Destino.
     *
     * Este m�todo � chamado antes de cada execu��o de teste para preparar o objeto necess�rio para o teste.
     */
    void setUp();

    /**
     * @brief Realiza a limpeza ap�s o teste, liberando a mem�ria alocada.
     *
     * Este m�todo � chamado ap�s a execu��o de cada teste para garantir que todos os recursos sejam liberados corretamente.
     */
    void tearDown();

    /**
     * @brief Testa o cen�rio com valores v�lidos para C�digo, Nome, Data de In�cio, Data de Fim e Avalia��o no Destino.
     *
     * Configura a classe `Destino` com um c�digo, nome, datas v�lidas e avalia��o v�lida, e verifica se os valores s�o corretamente
     * armazenados. Caso contr�rio, altera o estado para `FALHA`.
     */
    void testarCenario();

public:
    /** @brief Constante que representa o estado de sucesso do teste. */
    const static int SUCESSO = 0;

    /** @brief Constante que representa o estado de falha do teste. */
    const static int FALHA = -1;

    /**
     * @brief Executa todos os testes da classe `TUDestino`.
     *
     * Este m�todo chama os m�todos de teste para o cen�rio com valores v�lidos.
     * Ap�s a execu��o, ele retorna o estado do teste, que pode ser `SUCESSO` ou `FALHA`.
     *
     * @return int O estado final do teste (SUCESSO ou FALHA).
     */
    int run();
};

//***************************Atividade************************

/**
 * @class TUAtividade
 * @brief Classe de teste para a classe Atividade.
 *
 * Esta classe realiza testes unit�rios para a classe `Atividade`. O objetivo � garantir que a classe `Atividade` funcione corretamente
 * quando associada a valores v�lidos para c�digo, nome, hor�rio, data, dura��o, dinheiro e avalia��o. O teste inclui a configura��o
 * de um objeto `Atividade` com esses valores e a verifica��o do comportamento esperado.
 */
class TUAtividade
{
private:
    /** @brief C�digo v�lido para os testes. */
    const static string codigo_valido;

    /** @brief Nome v�lido para os testes. */
    const static string nome_valido;

    /** @brief Hor�rio v�lido para os testes. */
    const static string horario_valido;

    /** @brief Data v�lida para os testes. */
    const static string data_valida;

    /** @brief Dura��o v�lida para os testes. */
    const static string duracao_valida;

    /** @brief Dinheiro v�lido para os testes. */
    const static string dinheiro_valido;

    /** @brief Avalia��o v�lida para os testes. */
    const static string avaliacao_valida;

    /** @brief Objeto de teste da classe Atividade. */
    Atividade *atividade;

    /** @brief Estado do teste, representando sucesso ou falha. */
    int estado;

    /**
     * @brief Configura o ambiente de teste inicializando o objeto Atividade.
     *
     * Este m�todo � chamado antes de cada execu��o de teste para preparar o objeto necess�rio para o teste.
     */
    void setUp();

    /**
     * @brief Realiza a limpeza ap�s o teste, liberando a mem�ria alocada.
     *
     * Este m�todo � chamado ap�s a execu��o de cada teste para garantir que todos os recursos sejam liberados corretamente.
     */
    void tearDown();

    /**
     * @brief Testa o cen�rio com valores v�lidos para C�digo, Nome, Hor�rio, Data, Dura��o, Dinheiro e Avalia��o na Atividade.
     *
     * Configura a classe `Atividade` com os valores v�lidos e verifica se os valores s�o corretamente armazenados. Caso contr�rio,
     * altera o estado para `FALHA`.
     */
    void testarCenario();

public:
    /** @brief Constante que representa o estado de sucesso do teste. */
    const static int SUCESSO = 0;

    /** @brief Constante que representa o estado de falha do teste. */
    const static int FALHA = -1;

    /**
     * @brief Executa todos os testes da classe `TUAtividade`.
     *
     * Este m�todo chama os m�todos de teste para o cen�rio com valores v�lidos. Ap�s a execu��o, ele retorna o estado do teste,
     * que pode ser `SUCESSO` ou `FALHA`.
     *
     * @return int O estado final do teste (SUCESSO ou FALHA).
     */
    int run();
};

//***************************Hospedagem************************

/**
 * @class TUHospedagem
 * @brief Classe de teste para a classe Hospedagem.
 *
 * Esta classe realiza os testes unit�rios para a classe `Hospedagem`. O objetivo � verificar se a classe `Hospedagem` funciona corretamente
 * com valores v�lidos para c�digo, nome, avalia��o e dinheiro. O teste inclui a configura��o de um objeto `Hospedagem` com esses valores e a
 * verifica��o do comportamento esperado.
 */
class TUHospedagem
{
private:
    /** @brief C�digo v�lido para os testes. */
    const static string codigo_valido;

    /** @brief Nome v�lido para os testes. */
    const static string nome_valido;

    /** @brief Dinheiro v�lido para os testes. */
    const static string dinheiro_valido;

    /** @brief Avalia��o v�lida para os testes. */
    const static string avaliacao_valida;

    /** @brief Objeto de teste da classe Hospedagem. */
    Hospedagem *hospedagem;

    /** @brief Estado do teste, representando sucesso ou falha. */
    int estado;

    /**
     * @brief Configura o ambiente de teste inicializando o objeto Hospedagem.
     *
     * Este m�todo � chamado antes de cada execu��o de teste para preparar o objeto necess�rio para o teste.
     */
    void setUp();

    /**
     * @brief Realiza a limpeza ap�s o teste, liberando a mem�ria alocada.
     *
     * Este m�todo � chamado ap�s a execu��o de cada teste para garantir que todos os recursos sejam liberados corretamente.
     */
    void tearDown();

    /**
     * @brief Testa o cen�rio com valores v�lidos para C�digo, Nome, Avalia��o e Dinheiro na Hospedagem.
     *
     * Configura a classe `Hospedagem` com os valores v�lidos e verifica se os valores s�o corretamente armazenados. Caso contr�rio,
     * altera o estado para `FALHA`.
     */
    void testarCenario();

public:
    /** @brief Constante que representa o estado de sucesso do teste. */
    const static int SUCESSO = 0;

    /** @brief Constante que representa o estado de falha do teste. */
    const static int FALHA = -1;

    /**
     * @brief Executa todos os testes da classe `TUHospedagem`.
     *
     * Este m�todo chama os m�todos de teste para o cen�rio com valores v�lidos. Ap�s a execu��o, ele retorna o estado do teste,
     * que pode ser `SUCESSO` ou `FALHA`.
     *
     * @return int O estado final do teste (SUCESSO ou FALHA).
     */
    int run();
};
#endif // TESTES_HPP_INCLUDED;
