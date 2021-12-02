# TC1031 - Integral A

La integral implementa los siguientes puntos:

 - Ordenamiento
 - Estructuras lineales
 - Árboles
 - Lectura de un archivo de texto

## Descripción del programa

El programa simula una librería en donde hay mangas, libros y revistas que tienen distintos atributos. El usuario puede interactuar con el sistema por medio de un menú con las opciones de ordenar los libros por mejor calificado,agregar un libro a tu lista de favoritos y buscar recomendaciones de libros similares a uno en particular.  

## Correcciones de la Integral A:
 - Se agregaron los casos de prueba
 - Se agregó el detalle de cada estructura implementada
 - Se eliminaron las opciones no implementadas del menú
## Implementación de estructuras de datos

### Ordenamiento (Bubble sort) - Sort by best rated:

Para la opción de ordenar los libros según los mejor calificados se implementó un algoritmo de ordenamiento llamado Bubble Sort, un algoritmo sencillo que revisa cada uno de los elementos en el vector "vectorMedia" y realiza un intercambio (swap) según cual tiene una mayor calificación. 

### Estructuras lineales (Linked List) - Favorite List

Para la opción de hacer una lista de favoritos se implementó una lista simplemente ligada, esto para que por medio de los métodos insertion() y deleteAt() sea facil agregar y eliminar objetos media a la lista. 

### Árboles (Priority Queue con Heap Max) - Similar to

Para la opción de buscar recomendaciones de libros similar a un título en partícular primero se hizo una sobrecarga del operador % (operator overload) para que según un algoritmo se calcula la similitud entre un libro y otro. Luego todos los objetos en "vectorMedia" se agregan al heap por medio del método push(). Finalmente según el porcentaje de similitud con el título que el usuario ingresó se ordena un heap max y luego solo salen los 5 primeros nodos más cercanos para mostrar los 5 títulos más similares y que le podrían gustar al usuario. 

### Lectura de archivos 

Para la lectura de archivos se hicieron tres archivos que contienen los datos de las revistas, de los libros y de los mangas. Luego con los métodos LoadManga(), LoadBooks() y LoadMagazines() estos se leen y cargan al vector de punteros tipo media. 

## Análisis de complejidad
 - Bubble sort: la complejidad es de O(n^2) ya que se trata de dos fors
 - Linked list: la complejidad para recorrer la lista es de O(n)
 - Heap Max: para el pop y push que es loque haremos para manipular el heap max la complejidad es de O(log n).
  