
semaforo vendedor=1, F[i]={0}

vendedor()
{
	while(true)
	{	
		wait(vendedor);
		ponerMateriaPrima();
		signal(F[i]);
	}
}

fumador()
{
	while(true)
	{
		wait(F[i]);
		cogerMateriaPrima();
		signal(vendedor);
		fumar();
	}
}


