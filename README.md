# Rush-02
Debéis crear un programa que reciba un número como argumento de entrada y lo convierta en su valor escrito.
• Nombre del ejecutable: rush-02
• Vuestro código fuente será compilado por el comando:
• Vuestro programa puede recibir hasta 2 argumentos:
◦ Si solo hay un argumento, es el valor que necesita convertir.
◦ Si hay dos argumentos, el primero es el nuevo diccionario de referencia y el segundo argumento es el valor que necesita convertir.
• Si el argumento no es un número entero sin signo, vuestro programa deberá devolver ’Error’ seguido de un salto de línea.
• Por razones de armonización, vuestro programa hablará en inglés.
• Vuestro programa debe analizar el diccionario dado como recurso para el proyecto. Los valores dentro de él deben usarse para imprimir el resultado. Estos valores podrán ser modificados.
   
make fclean
make
5
 C Piscine Rush 02
 • Cualquier memoria asignada en la heap (con malloc(3)) debe liberarse correcta- mente. Esto se verificará durante la evaluación.
• El diccionario seguirá las siguiente reglas:
[un numero][0 a n espacios]:[0 a n espacios][cualquier caracter imprimible]
◦ Los números deben manejarse de la misma manera que atoi.
◦ Debéis recortar los espacios al principio y al final del valor en el diccionario.
◦ El diccionario siempre tendrá al menos las claves dadas en el diccionario de referencia. Su valor puede ser modificado; se pueden agregar entradas pero no se pueden eliminar las claves iniciales.
◦ Solo tenéis que usar los valores dados inicialmente en el diccionario en anexos. (Por ejemplo, si añadimos la clave 54: fifty-four, deberán utilizar siempre las mismas claves 50: fifty y 4: four)
◦ Las entradas del diccionario pueden están ordenadas en cualquier orden.
◦ Puede haber líneas vacías en el diccionario.
◦ Si tenéis algún error al analizar el diccionario, vuestro programa debería de- volver "Dict Error\n".
◦ Si el diccionario no os permite solucionar el valor demandado, vuestro progra- ma debería devolver "Dict Error\n".
• Ejemplo:
$> ./rush-02 42 | cat -e forty two$
$> ./rush-02 0 | cat -e zero$
$> ./rush-02 10.4 | cat -e error$
$> ./rush-02 100000 | cat -e one hundred thousand$
$> grep "20" numbers.dict | cat -e 20 : hey everybody !$
$> ./rush-02 20 | cat -e hey everybody !$
