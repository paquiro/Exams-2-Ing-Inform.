#define N 3 //numero de elementos que tiene el buffer


semaforo mutex=1;  //controla el acceso a variables compartidas
semaforo empty=N; //controla el número de elementos vacios del buffer
semaforo full=0; // controla el numero de elementos llenos del buffer

//Lanzamos el productor

//lanzamos el consumidor

productor()
{
	while (true)
	{
		wait(empty);//se decrementa el numero de huecos
		
		wait(mutex);
		meter();
		
		signal(mutex);
		signal(full); //se aumenta el numero de elementos llenos	
	}
}

consumidor()
{
	while(true)
	{
		wait(full);//se decrementa el numero de elementos ocupados
		
		wait(mutex);//
		sacar();
		signal(mutex);
		signal(empty); // se aumenta el numero de huecos.
	}
}




