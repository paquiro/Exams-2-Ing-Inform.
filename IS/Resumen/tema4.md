TEMA 4
======

## Definicion y tipos

Los requisitos "expresan las necesidades y restricciones que afectan a un producto de software que contribuye a la solución de un problema del mundo real."

Para determinar si la solución cumple los requisitos estos deben referenciar una o varias caracteristicas observables del sistema.

Para que una caracteristica obeservabe sea un requisito , es necesario que expresae alguna necesidad o restriccion.ej: "Debe ser comodo de usar"

#### Definición de requisito

Un requisito es una caracteristica observable de sistema que satisface una necesidad o expresa una restriccion que afecta al software que estamos desarollando.

Los stalkerholders son aquellas persona y entidades que tiene algun impacot o interes en este.

#### Relevancia de los requisitos

+ Si los requisitos no estan bien definidos , pueden surgir problemas .

+ Requisitos ambiguos dan lugar a diferentes interpretaciones por parte de los usuarios y los desarrolladores.

+ Lo deseable es que los requisitos fueran completos y consistentes desde el principio.(completos recogen todos los servicios, consistentes no hay contradicciones.)

+ En la practica es imposible producir un documento de requisitos.

#### Tipos de requisitos:

+ Requisitos funcionales : hacen referencia a las necesidades/funcionalidad que debe satisfacer el sistema. Nos indican que calculos realiza el sistema , que datos posee...etc. En general, podemos decir que los requsitos funcionales nos indican cual es el comportamiento del sistema.

+ Requisitos no funcionales: Expresan restricciones sobre el conjunto de soluciones posibles.Suelen tener forma de restriccion
, ademas estos no incluyen comportamiento.

#### Tipos de requisitos no funcionales:

+ Requisitos del producto: Especifican el comportamiento del producto.Ej:Rapidez de la ejecución.

+ Requisitos organizacionales: Derivan de politcas y procedimientos existentes en la organizacion del cliente.Ej:Estandares de procesos.

+ Requisitos externos: Se derivan de factores externos al sistema y a su proceso de desarrollo.Ej:Requsitos de interoperabilidad.

## Obtencion de requisitos

#### Objetivos y fases

Es obtener la lista de todos los requisitos que debería cumplir el sistema por desarrollar.

Denominaremos requisitos candidatos a aquellos obtenidos en esta primera etapa.

LAs fases de obtención son dos principalmente:

+ Identificar los stakeholders: Modelizacion de roles de usuario, representantes de los stakeholders.
+ Identificacion de los requisitos de cada uno de los stakeholders

#### Identificacion de requisitos.

Tecnicas:
+ Brainstorming(lluvia de ideas): No se tiene un punto concretos de partida

+ Entrevistas y cuestiones: Las claves son elegir correctamente a los entrevistados, evitar las respuestas condicionadas, evitar respuestas limitadas y aportar informacion sobre el coste de las alternativas

+ observacion : Consiste en observar directamente a los usuarios mientras usan el sistema.

+ Listas predefinidas: También listas de comprobación nos pueden ayudar a no pasar por alto algunos requisitos.Ej: El estandar IEEE 830 nos recuerda que siempre debemos documentar , ademas de los requisitos funciones los no funcionales.

## Gestion de requisitos

Una vez obtenida la lista de requisitos candidatos deberemos decidir cuales son los que queremos prever. Para elllo, deberemos valorar el coste de cada requisito en tiempo y recursos de desarrollo y la importancia que tiene cada requisito.

Una buena gestión de requisitos nos permitira maximizar el valor obtenido por el proyecto de desarrollo y es una parte fundamental de la gestion de proyecto.

## Documentación de los requisitos.

Denominamos espefecicacion al artefacto  que documenta el conjunto de los requisitos que se han seleccionado para el proyecto.

Presentan el contrato entre desarrolladores y stakeholders(partes interesadas)

#### Forma y detalle:

El estilo y la formalidad de la especificacion dependerá del proyecto, pero tambien del contexto en el que se desarrolla y de las personas que participan en él.

#### IEEE

La especificacion de requisitos ha de ser:

+ Correcta : Todos los requistos que documenta lo son realmente , es decir si todos los requsitos son necesidades que el software  ha de satifacer
+ No ambigua: Unica interpretacion
+ Completa: Debe contener todos los requisitos de las partes interesadas.
+ Consistente: Sin conflictos
+ Requisitos etiquetados con informacion relevante
+ Verificable: Es decir observable y medibles
+ Trazable: cada requisito enumerado esta claramente identificado

#### Buenas practicas:

+ Identificar los requisitos
+ No perder el punto de vista global
+ Granualidad(Compromiso entre nivel de detalle y simplicidad)
+ No dar por supuesta una interfaz gráfica de usuario.
+ Condiciones de aceptacion:Unicas para cada requisito
+ uso de plantillas: Como IEEE 830

## Historias de usario

En Scrum la pila de producto es el corazón de Scrum. Esta es una lista priorizada de requisitos o historias . Cosas que el cliente quiere usando la termilogia del cliente.

#### Mapas de historias de usuario.

+ Una descripcion escrita de la historia.

+ Una serie de conversaciones que sirven para definir y aclarar los detalles de la historia

+ Un conjunto de pruebas que documentan los detalles y que permiten determinar cuando esta completamente implementada la historia.

## Casos de uso:

Los casos de uso son una técnica de documentacion muy extendida ya que UML le da apoyo.Se trada de un enfoque a la manera de documentar requisitos.

Definicion: es un conjunto de secuencias de acciones , incluyendo variantes que ejecuta un sistema para producir un resultado observable y de valor para un actor.

Un caso de uso no es un diagrama , no es un simblobo , es una forma de describir un escenario de interaccion usuario sistema

Los diagramas vienen despues y son una forma de tener una vision general de los casos de uso

#### Actor principal

No todas las partes interesadas tienen que interactuar directamenete con el sistema.

En los casos de uso llamaremos actor principal al stakeholder que realiza una peticion al sistema

En un mismo caso de uso ademas del actor principal pueden aparecer uno o más actores de apoyo.

#### Componentes de un caso de uso:

+ Nombre : Cada caso de uso debe tener un nombre que indique que consigue el actor principal

+ Actores : Partes interesadas que interactua con el sistema

+ Objetivo y ambito: Diferenciar objetivos generales de especifcos

+ Precondiciones: Condiciones necesarias para que se pueda dar la interaccion del caso.

+ Escenarios: Hay un escenario que es la secuencia de acontecimientos que espera el actor principal cuando pone ene marcha la ejecucion del caso de uso.

Los escenarios son secuencias de acciones que pueden describir:
+ Interacciones entre el usuario y el sistema que hace el usuario en este punto de la interacción o que respuesta da el sistema.

+ validaciones por parte del sistema: El sistema valida que el usuario tenga acceso al foro.

+ Cambios en el estado interno del sistema

#### Clasificacion casos de uso:

Podemos clasificar los casos de uso por nivel (objetivos) y por ámbito (Descripción)

###### Nivel (Propuestos por cockburn)

+ Usuario: Son los mas importantes, son los objetivos concretos que los actores principales quieren conseguir
+ General: son el nivel mas general y nos sirven para dar contexto y agrupar los objetivos
+ Tarea: Son el nivel mas concreto y solo ofrecen una parte del valor que el actor espera.

###### Ambito

Cuando describimos un caso de uso es importantes tener claro cual es el ambito de la descripcion que estamos haciendo.

+ Ámbito organizativo:Estamos modelizando como caso de uso el comportamiento de la organizacion como un todo.

+ Ámbito de sistema: Estamos modelizando un sistema informático.

+ Ámbito de subsistema: Estamos modelizando una parte del sistema informático como un componente
