TEMA 2
======

## Introducción

En Ingeniería del Software, la actividad de desarrollo se suele organizar
a modo de proyectos, la manera de gestionar estos proyectos estará de-
terminada por el método de desarrollo que queramos aplicar.

El método de desarrollo definirá un ciclo de vida (qué etapas forman
  parte del proyecto de desarrollo), qué procesos, actividades y tareas tie-
  nen lugar en las diferentes etapas del ciclo de vida, quién se encargará de
  llevar a cabo cada una de las tareas y también la interacción entre tareas,
  roles y personas.



#### Historia e influencia en métodos
+   Disciplina de gestión de proyectos des los años cincuenta.
+   Project Management Institute (PMI) es el modelo más popular: Pequeñas tareas repetitivas. Ej: La cadena de produccion industrial
+ Método de producción Toyota: lean-manufacturing 1 , dos grandes principios: Evitar producir productos defectuosos, y producir solamente lo necesario(just in time). La aplicacion se conoce como lean software development.

## Clasificacion metodos:
#### Clasificacion metodos de desarrolo:
Las actividades son las mismas en los metodos y las diferencias radicna en el cuando y el como

#### Seleccion del metodo:
Elegir el metodo depende de:
+ Riesgo
+ valor de negocio
+ Duracion
+ Complejidad
+ Tecnologia usada
+ Numero de departamentos
+ Coste

Dependiendo de la claridad podemos dividirlo en distintos grupos:
+ Grupo 1: Esta claro que queremos hacer y como lo haremos.
+ Grupo 2: Cambiar las ideas y problemas a medida que el proyecto avance. la mayoria de los proyectos pertenecen a este grupo.
+ Grupo 3: Tenemos la solucion pero no tenemos los problemas. Ej: Queremeos evaluar un producto para ver si cubre necesidades.
+ Grupo 4: Flexibilidad respecto a la solucion y respecto al problema.

## Ciclo de vida en cascada:
#### Ciclo de vida en cascada o clasico:
+ Organizacion similar a una cadena de produccion con trabajadores.
+ Los trabajadores producen artefactos que son producidos por otros trabajadores.

###### Ventajas
Sencillo de aplicar y apropiado a nuevas versiones de sistema o sistemas pequeños
######Inconvenientes:
Dificil aplicacion por su rigidez:
+ Necesario terminar por completo cada etapa
+ Poco tolerante a cambios
+ Los errores se propagan a etapas siguientes
+ Estimaciones teoricas

#### Lineal o secuencial.
Etapas:
+ Requisitos: ¿Qué debe ser el producto?
+ Analisis y diseño: ¿Cómo debe ser el producto?
+ Implementación : Escribir e codigo
+ Pruebas : verificar con usuarios finales:
+ Mantenimiento: Se pone a disposicion de los usuarios y corrigen errores.

#### Modelo en cascada. (VER FOTO 2.1)
+ Propuesto por WInston Rouce en 1970
+ Inspirado en el modelo secuencial
+ Varias opciones de establecimiento
+ Modelo como el anterior reconoce la importancia de disponer de unos requisitos y un diseño previo.
+ Barreras para comenzar la siguiente fase.

Cascada=>Modelo lineal;
Cascada modificada=>Modelo cascada;

## Ciclo de vida iterativo e incremental. (VER FOTO 2.2)
Las bases del modelo iterativo son :
+ superar las limitaciones de ciclo en cascada
+ la rigidez y punto de vista teorico.
+ Falta de informacion empirica(Nada visual).
+ El conocimiento intergro es teorico
+ El coste de errorees es mayor en las primeras etapas
+ Los metodos iterativos facilitan descubrir la solucion
+ Se necesitan metodos que permitan cambiar las ideas iniciales

#### Superacion de limitaciones de ciclo en cascada.
Los metodos en cascada no producen un resultado tangible hasta el final y en proyectos largos esto supone una inversion sin recuperar.

#### Principios
+ El desarrollo se organiza en torno a iteraciones cuyo resultado es un mini-proyecto que amplia el resultado de la iteracion anterior. cada iteracion cubre todas las actividades del desarrollo.==> REtroalimentacion
+ Al final debe haber un resultado utilizable.

#### Esquema Iterativo:( VER FOTO 2.3)
###### Modelo incremental.(VER FOTO 2.4)
+ El usuairo dispone de pequños subsistemas operativos.
+ Entregas parciales en periodos cortos , incorporacion de nuevos requisitos.

Resulta apropiado ya que el cliente dispondra de parte de la funcionalidad antes de lo que costaria.
Desarrollo de sistemas en los que interesa obtener requisitos de forma escalonada.

###### Modelo evolutivo.
+ Compuesto por varios ciclos de desarrollo. Cada uno de ellos produce un sistema completo.
+ Información acumulado para la mejora de etapas.
+ Ciclo comun a sistemas qe se mejoran

Resultan apropiado por el desconocimiento inicial , por la necesidad de que este en operacion en tiempos inferiores a los que serian necesarios y necesidad de desarrollar sistemas en entornos cambiantes.

###### Aclaracion sobre iteraciones.(VER FOTO 2.5)
+ Una iteración dura entre 1-6 semanas.
+ En la iteración se trabajan todas las fases.
+ Según avanza el proyecto el énfasis en las fases irá variando.
+ Al final de cada iteracion se produce un incremento en el volume de funcionalidades.
+ Facilita la planificacion centrada en el cliente

#### Los métodos aguiles son iterativos

La mayoria de los metodos agiles son iterativos e incrementales ya que los principios encagan con la filosofía del desarrollo iterativo ya que estos dan prioridad al software iterativo.

#### Filosofía Lean

Recoge unos principios muy interesantes :
+ Evitar la produccion innesaria, solo aquello lo que se necesita.
+ Amplificar el aprendizaje: Recopilar toda la información que se va generando.
+ Decidir lo mas tarde posible: Intentar tomar todas las decisiones con el máximo de información
+ ENtregar el producto cuanto antes mejor
+ Dar poder al equipo
+ Incorporar la integridad . Desarrollar de forma que se pueda cambiar facilmente a lo largo del tiempo
+ Vision global. Evitar las optimizaciones parciales del proceso

#### Espiral(VER FOTO 2.6)

+ Modelo desarrollado por Boehm en 1988 presenta un desarrollo evolutivo.

+ Introduce el analisis de riego para guiar la evolucion del proceso.

+ El ciclo de iteracion de este modelo evolutivo se convierte en una espiral.

+ En la planificacion de cada vuelta se establece el contexto del desarrollo y se decide que parte del mismo se abordara.

+ Las actividades de analisis de riesgo evaluan las alternativas posibles.

+ Las actividades de ingenieria corresponde a las indicadas en los modelos lineales.

+ Las actividades de evaluacion analizan los resultados de la fase de ingenieria.

+ Permite multiples combinaciones ya que en la planificacion de cada ciclo se determina el avance que se va a ejecutar durante la vuelta

## Proceso Unificado de Desarrollo

El proceso unificado fue poropuesto por la empresa Rational Software con la intención de ser para los metodos de desarrollo de software con la intencion de ser para los metodos de desarrollo de software lo que el UML fue para los lenguajes de modelización.

Uso extensivo de modelos y la adopcion de un ciclo de vida iterativo e incremental.

Up es un conjunto de procesos configurable que se adapta a diferentes contextos.

#### Prácticas UP

+ Desarrollo iterativo e incremental
+ Gestion de los requisitos
+ Arquitectura basadas en componentes
+ Utilizacion de modelos visuales
+ Verificación de la calidad del software.
+ Control de los cambios al software.

Ademas se promueve una gestion proactiva de los riesgos y la contruccion de una arquitectura ejecutable.

#### Fases del proyecto

+ Inicio: Se analiza el proyecto desde el punto de vista de la organizaciony se determina el ambit

+ Elaboración : Se analiza el dominio del sistema que hay que desarrollar hasta tener un conjunto de requisitos estable.

+ Construcción: Se desarrolla el resto de la funcionalidad

+ Transición: Se pone el producto a disposicion de la comunidad

#### Hitos en el PU

+ Objetivos: Analizar el coste y los beneficios esperados del proyecto.

+ Arquitectura : Se alcanza cuando ya tenemos una versión mas o menos estable y final de la arquitectura.

+ Capacidad operacional inicial: Se completa cuando toda la funcionalidad queda lograda.

+ Entrega del producto: Ver si se han conseguido los objetivos iniciales del proyecto.

#### Actividades

+ Modelización de negocio: Solucionar el problema de comunicación entre los expertos en el dominion y los especialistas en tecnología .

+ Requisitos: Describir que debe hacer el sistema.

+ Analisis y diseño : Describir cómo se implementará el sistema.Se crean modelos detallados de los componentes.

+ Implementación: Defonir la organizacion del codigo, escribirlo y verificar.

+ Pruebas: Verificar la iteraccion entre los objetos y componentes.

+ Despliege: Producir las entregas del sistema y entregarlas a los usuarios finales.

#### Roles

+ Cliente: Cualquier persona que tenga un interés en el resultado final del proyecto

+ Jefe de proyecto: Encargado de la planificacion y coordinacion

+ Analista: Recoge la informacion de los stakeholders.

+ Arquitecto : Define la arquitectura del software.

+ Desarrollador: Desarrolla una parte del sistema.

+ Experto en pruebas: identifica , define , implementa y lleva a cabo las pruebas aportando un punto de vista complementario

## Metodologias agiles: SCRUM

Se trata de un metodo muy ligero que , siguiendo el principio lean de generar solo los artefactos que aportan un valor importante.

#### Roles:
SCRUM distingue de entrada en entre los que estan comprometidos en el desarrollo (Equipo) y los que estan involucrados(stakkeholders).

#### Pollos y cerdos.

Equipo:

+ Scrum Master: Resposable de asegurar que el equipo sigue los valores y las reglas del scrum.

+ Producto Owner: Responsable de velar por los intereses de todos los stakeholders.

+ Team:Er resto del equipo son los desarrolladores. No se especializan.

Artefactos:

+ Product backlog: Es la lista de requisitos pendientes de implementar en el producto.

+ Sprint backlog: El backlog para una iteracion concreta. Los sprints tienen una duración de 6 semanas.

+ Release burndown chart: Grafico que muestra el progreso actual del equipo en funcion del numero de historias de usuario que faltan por implementar.

+ Sprint burndown: El burndown para una iteraccion concreta.

#### Prácticas

+ sprint planning meeting : Reunion que se organiza antes de empezar un sprint.

+ Daily scrum: Reunion diaria en la que todos los miembros del equipo responden

+ Sprint review meeting: Al finalizar un sprint se revisa el trabajo realizado y se enseña a quien este interesado.

+ Sprint retrospective: sirve para reflexionar sobre lo que haya pasado durante el sprint.
