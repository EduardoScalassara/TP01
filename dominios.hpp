#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

#include <string>

using namespace std;

/**
 * @class Horario
 * @brief Representa um hor�rio no formato HH:MM.
 */
class Horario { //Leandro Coelho da Silva, MAT:232011396
    private:
        /**
         * @brief Representa as horas (0-23).
         */
        unsigned short hora;

        /**
         * @brief Representa os minutos (0-59).
         */
        unsigned short minuto;

        /**
         * @brief Valida o hor�rio informado.
         * @param h Hora a ser validada.
         * @param m Minuto a ser validado.
         * @throws invalid_argument Se a hora ou o minuto forem inv�lidos.
         */
        void validateHora(unsigned short h, unsigned short m);

    public:
        /**
         * @brief Define o hor�rio a partir de uma string no formato HH:MM.
         * @param h String no formato HH:MM.
         * @throws invalid_argument Se o formato for inv�lido ou o hor�rio for inv�lido.
         */
        void setHora(string h);

        /**
         * @brief Obt�m o hor�rio no formato HH:MM.
         * @return String representando o hor�rio no formato HH:MM.
         */
        string getHora() const;
};

/**
 * @class Dinheiro
 * @brief Representa uma quantia em dinheiro.
 */
class Dinheiro { //Leandro Coelho da Silva, MAT:232011396
    private:

        /**
         * @brief Valor monet�rio do tipo double de 0 a 200000.
         */
        double dinheiro;

        /**
         * @brief Valor monet�rio do tipo string no formato XXX.XXX,XX.
         */
        string dinheiroView;

        /**
         * @brief Valida o valor monet�rio informado.
         * @param dinheiro String representando o valor.
         * @throws invalid_argument Se o valor for inv�lido.
         */
        void validateDinheiro(string dinheiro);

    public:
        /**
         * @brief Define o valor monet�rio.
         * @param dinheiro String representando o valor.
         * @throws invalid_argument Se o valor for inv�lido.
         */
        void setDinheiro(string dinheiro);

        /**
         * @brief Obt�m o valor monet�rio como n�mero.
         * @return Valor monet�rio em formato num�rico double.
         */
        double getDinheiro() const;

        /**
         * @brief Obt�m o valor monet�rio formatado como string.
         * @return Valor monet�rio em formato string.
         */
        string getDinheiroView() const;
};

/**
 * @class Nome
 * @brief Representa um nome.
 */
class Nome { //Leandro Coelho da Silva, MAT:232011396
    private:
        /**
         * @brief Nome armazenado do tipo string at� 30 caracteres.
         */
        string nome;

        /**
         * @brief Valida o nome informado.
         * @param nome Nome a ser validado.
         * @throws invalid_argument Se o nome for inv�lido.
         */
        void validateNome(string nome);

    public:
        /**
         * @brief Define o nome.
         * @param nome String representando o nome.
         * @throws invalid_argument Se o nome for inv�lido.
         */
        void setNome(string nome);

        /**
         * @brief Obt�m o nome armazenado.
         * @return String representando o nome.
         */
        string getNome() const;
};

/**
 * @class Duracao
 * @brief Representa uma dura��o em minutos.
 */
class Duracao { //Leandro Coelho da Silva, MAT:232011396
     private:

        /**
         * @brief Dura��o armazenada do tipo inteiro de 0 a 360.
         */
        int duracao;

        /**
         * @brief Valida a dura��o informada.
         * @param duracao Dura��o em minutos.
         * @throws invalid_argument Se a dura��o for inv�lida.
         */
        void validateDuracao(int duracao);

     public:
          /**
           * @brief Define a dura��o.
           * @param duracao Dura��o em minutos.
           * @throws invalid_argument Se a dura��o for inv�lida.
           */
          void setDuracao(string duracao);

          /**
           * @brief Obt�m a dura��o armazenada como string.
           * @return String representando a dura��o.
           */
          string getDuracao() const;
};

/**
 * @class Avaliacao
 * @brief Representa uma avalia��o de 0 a 5.
 */
class Avaliacao { //Leandro Coelho da Silva, MAT:232011396
    private:

        /**
         * @brief Avalia��o armazenada do tipo inteiro de 0 a 5.
         */
        int avaliacao;

        /**
         * @brief Valida a avalia��o informada.
         * @param avaliacao Avalia��o entre 0 e 5.
         * @throws invalid_argument Se a avalia��o for inv�lida.
         */
        void validateAvaliacao(int avaliacao);
    public:
    /**
         * @brief Define a avalia��o.
         * @param avaliacao Avalia��o entre 0 e 5.
         * @throws invalid_argument Se a avalia��o for inv�lida.
         */
        void setAvaliacao(string avaliacao);

        /**
         * @brief Obt�m a avalia��o armazenada como string.
         * @return String representando a avalia��o.
         */
        string getAvaliacao() const;
};

/**
 * @class Data
 * @brief Representa uma data no formato DD-MM-AA.
 */
class Data { //Leandro Coelho da Silva, MAT:232011396
    private:

        /**
         * @brief Dia armazenado (1-31).
         */
        unsigned short dia;

        /**
         * @brief M�s armazenado (1-12).
         */
        unsigned short mes;

        /**
         * @brief Ano armazenado (00-99).
         */
        unsigned short ano;

        /**
         * @brief Valida a data informada.
         * @param d Dia a ser validado.
         * @param m M�s a ser validado.
         * @param a Ano a ser validado.
         * @throws invalid_argument Se a data for inv�lida.
         */
        void validateData(unsigned short d, unsigned short m, unsigned short a);
    public:
        /**
         * @brief Define a data a partir de uma string no formato DD-MM-AA.
         * @param data String no formato DD-MM-AA.
         * @throws invalid_argument Se o formato for inv�lido ou a data for inv�lida.
         */
        void setData(string data);

        /**
         * @brief Obt�m a data no formato DD-MM-AA.
         * @return String representando a data no formato DD-MM-AA.
         */
        string getData() const;
};

/**
 * @class Senha
 * @brief Representa uma senha de 5 caracteres.
 */
class Senha { //Leandro Coelho da Silva, MAT:232011396
    private:

        /**
         * @brief Senha armazenada do tipo string de 5 caracteres.
         */
        string senha;

        /**
         * @brief Valida a senha informada.
         * @param senha String representando a senha.
         * @throws invalid_argument Se a senha for inv�lida.
         */
        void validateSenha(string senha);
    public:
        /**
         * @brief Define a senha.
         * @param senha String representando a senha.
         * @throws invalid_argument Se a senha for inv�lida.
         */
        void setSenha(string senha);

        /**
         * @brief Obt�m a senha armazenada.
         * @return String representando a senha.
         */
        string getSenha() const;
};

/**
 * @class Codigo
 * @brief Representa um c�digo de 6 d�gitos.
 */
class Codigo { //Lucas Santana Camilo Alves, MAT:211060666
    private:

        /**
         * @brief C�digo armazenado do tipo string de 6 d�gitos.
         */
        string codigo;

        /**
         * @brief Valida o c�digo informado.
         * @param codigo C�digo a ser validado.
         * @throws invalid_argument Se o c�digo for inv�lido.
         */
        void validateCodigo(string codigo);
    public:
        /**
         * @brief Define o c�digo.
         * @param codigo String representando o c�digo.
         * @throws invalid_argument Se o c�digo for inv�lido.
         */
        void setCodigo(string codigo);

        /**
         * @brief Obt�m o c�digo armazenado.
         * @return String representando o c�digo.
         */
        string getCodigo() const;
};

#endif // DOMINIOS_HPP_INCLUDED;
