/**
 * \brief Pide un numero  y devuelve lo ingresado
 * \param preg Es la pregunta "ingrese un numero"
 * \return el numero ingresado por elusuario
 *
 */
int ingresarInt(char preg[]);
/**
 * \brief Pide un numero  y devuelve lo ingresado
 * \param preg Es la pregunta "ingrese un numero"
 * \return el numero ingresado por elusuario
 *
 */
float ingresarFloat(char preg[]);
/**
 * \brief pide una letra return la letra ingresada
 * \param preg es lapregunta " desea continuar? s/n"
 * \return la letra ingresada
 *
 */
char ingresarChar(char preg[]);

/**
 * \brief Valida q sea un numero lo ingresado
 * \param lista esla posicionde cada caracter ingresado
 * \return 1 valido , 0 debe reingresar
 *
 */
int validarNumero(char lista[]);
/**
 * \brief Valida q sean letras y numeros
 * \param lista es la posicion de cada caracter ingresado
 * \return 1 valido , 0 debe reingresar
 *
 */
int validarAlfaNumerico(char lista[]);
/**
 * \brief Valida q sean solo letras las ingresadas
 * \param lista es la posicion de cada caracter ingresado
 * \return 1 valido, 0 invalido
 *
 */
int validarLetras(char lista[]);
/**
 * \brief Valida q sea un numero y acepta decimales
 * \param lista es la posicion de cada caracter ingresado
 * \return 1 valido , 0 no valido error
 *
 */

int validarNumeroFloat(char lista[]);
/**
 * \brief pide una respuesta
 * \param preg es la pregunta al usuario "ingrese direccion"
 * \param resp es dond se almacena la respuesta
 * \return void
 */
void ingresarResp(char preg[],char resp[]);
/**
 * \brief pide respuesta y valida q sean letras
 * \param preg es la pregunta al usuario "ingrese apellido"
 * \param resp es dond se almacena la respuesta
 * \return 1 si son solo letras
 */
int ingresarRespLetras(char preg[],char resp[]);
/**
 * \brief pregunta por un numero
 * \param preg es la pregunta al usuario "ingrese numero a multiplicar"
 * \param resp es dond se almacena la respuesta
 * \return 1 valido solo numero
 */
int ingresarRespNumeros(char preg[],char resp[]);
/**
 * \brief pide numeros y acepta con decimal
 * \param preg es la pregunta al usuario "ingrese numero a multiplicar"
 * \param resp es dond se almacena la respuesta
 * \return 1 valido si es unicamente numeros onumeroscon coma
 */
int ingresarRespNumeroFloat(char preg[],char resp[]);
