/*lanzamos los escritores*/

/*lanzamos los lectores*/

rc=0;

escritores()
{
	while(true)
	{
		wait(bd);
		escribir();
		signal(bd);
	}
}

lectores()
{
	while(true)
	{
		wait(mutex);
		rc++;
		if(rc==1)
			wait(db);
		signal(mutex);
		leer();
		wait(mutex);
		rc--;
		if(rc==0)
			signal(bd);
		signal(mutex);	
	}
}


