/*NOtacion postfija o notacion POLACA(Q,P)
Supongamos que Q es una expesion aarirmeticaa escrita en notacio infija.Este adgoridmo encuentra la
expresión postfija P eqquivalente.
1 Meter "(" en PILA y añadir ")" al final de Q
2. Examinar de IZQUIERDA A DERECHA y repetir los pasos 3 y 6 para cade elemento de 1 hasta que
la pila este vacía.
3. SI se encuentra un operando aladirlo a P.
4. SI se encuentra un parentesus izquierdo, meterlo en Pila.
5. Si se encuentra un operador X, entonces:
    a)Repetidamente aacar de PIla y añadir a P para cada operador(a la cia) que tenga la isma 
    procedencia o mayor que X.
    b)AÑadir X a la pila
    [FIN CONDICIONAL]
6. sS i se encuentra un parentesus derecho entonces: 
    a)Re petidamente sacar de Pilaa y añadir a Pcada operador (de la cima) hasta que encuentre un
    parentesis izquierdo.
    b)Eliminar un parentesis izquierdo [NO añadir un parentesis izquierdo a P]
    [FIN CONDICIONAL]
[FIN BUCLE DE PASO 2]
7.SALIR
*/