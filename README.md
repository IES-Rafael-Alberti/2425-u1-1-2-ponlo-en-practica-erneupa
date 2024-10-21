[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/9J9TrW2r)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=16677956&assignment_repo_type=AssignmentRepo)
# Práctica 2: Introducción al desarrollo. Ponlo en práctica. 

Apoyate en los siguientes recursos para realizar la práctica:

[Descripción de la práctica](https://revilofe.github.io/section3/u01/practica/EDES-U1.-Practica011/)


---

# P1.11 Ponlo en práctica.

## Identificación de la Actividad
- **ID de la Actividad:** P1.11. Elementos de desarrollo.
- **Módulo:** EDES
- **Unidad de Trabajo:** U1 Introducción al desarrollo de software.
- **Fecha de Creación:** 19/10/2024
- **Fecha de Entrega:** 21/10/2024
- **Alumno(s):** 
  - **Nombre y Apellidos:** Aarón Neupaver Montiel
  - **Correo electrónico:** aneumon2402@g.educaand.es
  - **Iniciales del Alumno/Grupo:** ANM

## Descripción de la Actividad
[Descripción detallada de la actividad, objetivos, y contexto necesario para comprenderla. Explicar en qué consiste la actividad y qué se espera que el alumno desarrolle o implemente.]

## Instrucciones de Compilación y Ejecución
1. **Requisitos Previos:**
   - [Python, Java y C]
   - [Visual Studio Code]

2. **Pasos para Compilar el Código:**
   ```bash
   [Comando para compilar el código]
   ```

3. **Pasos para Ejecutar el Código:**
   ```bash
   [Comando para ejecutar la aplicación]
   ```

4. **Ejecución de Pruebas:**
   ```bash
   [Comandos para ejecutar pruebas, si las hubiera]
   ```

## Desarrollo de la Actividad
### Descripción del Desarrollo
[Explicación de cómo se ha abordado el desarrollo de la actividad, incluyendo las decisiones de diseño, estructura del código y enfoque de resolución de problemas. Se recomienda adjuntar diagramas o capturas de pantalla si es necesario.]

### Código Fuente
[Aquí se incluirá un enlace directo a los archivos de código fuente en el repositorio, por ejemplo, si se está usando GitHub: `src/main.java` o algún enlace directo.]

# 5.1. Criterio de Evaluación 1.a: Relación entre Software y Hardware.

**Pregunta:**

#### 1. Describe cómo el software que has creado se ha relacionado con los componentes físicos del dispositivo (memoria RAM, procesador, periféricos, etc.) durante la ejecución de los tres lenguajes (interpretado, compilado y en máquina virtual).

- **Puntos a incluir:**

   - Cómo se almacenaron los datos en memoria.
   - Qué hizo el procesador con el código.
   - Si se interactuó con periféricos, como la pantalla para mostrar la salida

**Python:**
   En Python, el intérprete traduce el código a instrucciones de máquina a tiempo real, lo que requiere más recursos del procesador. Los datos se almacenan en la memoria RAM según se ejecuta el programa.

**Java:**
   En Java, ell codigo se compila con bytecode, que se ejecuta en una máquina virtual de Java. La máquina traduce este bytecode a instrucciones de máquina en tiempo de ejecución, gestionando la memoria RAM y la interacción con el procesador y periféricos.

**C:**
   El código se compila directamente a código máquina, para que el procesador pueda ejecutar las instrucciones. Los datos se almacenan en la memoria RAM de forma estática y el programa puede interactuar con los periféricos a través de funciones del sistema operativo.

# 5.2. Criterio de Evaluación 1.c: Diferenciación ,entre Código Fuente, Código Objeto y Ejecutable.

**Preguntas:**

#### Explica cómo el código fuente que escribiste se transformó en código objeto y ejecutable en el caso de los lenguajes compilados. ¿Generaste archivos intermedios (código objeto)? ¿Qué nombres tomaron estos archivos?

En C, el código fuente se compila en archivos objetos "bienvenida.o", que contienen instrucciones en lenguaje de máquina. Estos archivos se enlazan con bibliotecas para crear un ejecutable final.
En Java, elcódigo fuente se compila en bytecode "bienvenida.class", que es interpretado y ejecutado por la máquina virtual, en lugar de generar un ejecutable nativo.

#### Para los lenguajes interpretados, describe cómo el código fuente se ejecutó directamente, sin generar archivos de código objeto o ejecutable.

El código se traduce y ejecuta en tiempo de ejecución por el intérprete, sin necesidad de generar archivos intermedios.

#### Para el lenguaje que genera código intermedio (Java, C#), explica cómo el código fuente se transformó en código intermedio (bytecode) y cómo este fue ejecutado por la máquina virtual.

Se transforman en bytecode mediante un compilador, y después es ejecutado por la máquina virtual, que lo traduce a instrucciones de máquina específicas para la plataforma en tiempo de ejecución, permitiendo la independencia del hardware.
   
### Ejemplos de Ejecución
- **Entrada 1:** Descripción de la entrada y valor de prueba.
- **Salida Esperada 1:** Explicación de la salida esperada y el resultado de la prueba.

### Resultados de Pruebas
[Aquí se detallará cómo se ha verificado la funcionalidad del código, incluyendo resultados de pruebas automatizadas o manuales, en caso de que las haya.]

## Documentación Adicional
- **Manual de Usuario:** [Enlace a la documentación del usuario, si existe]
- **Autorización de Permisos:** Verificar que el profesor tenga permisos de lectura en el repositorio para revisar el código.

## Conclusiones
[Resumen de las conclusiones alcanzadas al desarrollar la actividad, las lecciones aprendidas, y posibles mejoras que se puedan implementar en futuras entregas.]

## Referencias y Fuentes
[Aquí se listarán las fuentes consultadas para el desarrollo de la actividad, tales como documentación oficial, artículos, o cualquier recurso externo relevante.]

### Notas Adicionales:
1. **Nombres de Archivos y Repositorios:**
   - Asegúrate de que el nombre del archivo o repositorio siga la estructura definida: `XXX-idActividad-Iniciales`.
2. **Permisos:**
   - Verifica que el profesor tenga los permisos necesarios para acceder al repositorio o documento.
3. **Formato:**
   - Si se entrega en formato PDF o Google Docs, asegúrate de cumplir con el mínimo y máximo de folios establecidos.
4. **Compilación y Ejecución:**
   - Detalla claramente cómo compilar y ejecutar el código, incluyendo las instrucciones en el archivo `README.md`.
