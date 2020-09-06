
#include <stdio.h>
#include <stdlib.h>


    /** \brief solicita un numero y lo retorna.
    * \return retorna el numero ingresado por el usuario.
    *
    */

    float funcionPedirNumero ()
    {
        float numero;
        printf("Ingrese un numero: ");
        scanf("%f", &numero);
        return numero;
    }


    /** \brief recibe dos numeros y realiza una suma.
     *
     * \param un numero.
     * \param otro numero.
     * \return devuelve la suma de los numeros ingresados.
     *
     */

    float funcionSumar(float numeroUno, float numeroDos)
        {
        float resultado;
        resultado = numeroUno + numeroDos;
        return resultado;
        }

    /** \brief recibe dos numeros y realiza una resta.
    *
    * \param  un numero.
    * \param  otro numero.
    * \return devuelve la resta del primer numero menos el segundo numero.
    *
    */

    float funcionRestar(float numeroUno, float numeroDos)
        {
        float resultado;
        resultado = numeroUno - numeroDos;
        return resultado;
        }

    /** \brief recibe dos numeros y realiza una multiplicación.
    *
    * \param un numero.
    * \param otro numero.
    * \return devuelve el producto entre los numeros ingresados.
    *
    */


    float funcionMultiplicar(float numeroUno, float numeroDos)
        {
        float resultado;
        resultado = numeroUno * numeroDos;
        return resultado;
        }

    /** \brief recibe dos numeros y realiza una división.
    *
    * \param un numero.
    * \param otro numero.
    * \return devuelve el cociente entre el primer numero ingresado y el segundo.
    * \return si el divisor es igual a 0 devuelve un mensaje de error.
    *
    */


    float funcionDividir(float *pResultado, float numeroUno, float numeroDos)
        {
            float resultado;
            int retorno = -1;

        if(pResultado != NULL && numeroDos != 0)
            {
            resultado = numeroUno / numeroDos;
            *pResultado = resultado;
            retorno = 0;
            }
            return retorno;
        }

    /** \brief recibe un numero entero y calcula su factorial.
    *
    * \return devuelve el factorial del numero ingresado.
    *
    */

    float funcionFactorial(float numero)
        {
        int resultado;
        int i;

        resultado = 1;

        for(i=numero; i>=1; i--)
            {
            resultado = (int)resultado * i;
            }
        return resultado;
        }




