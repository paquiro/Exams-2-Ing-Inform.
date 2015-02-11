dekker:

while(true)
{
	p1quiereEntrar=true;
	while(p2quiereentrar)
	{
		if(turnoProces==segundo)
		p1quiereentrar=false;
		while(turnoProceso==segundo)
		p1quiereentrar=true;
	}
	/*SC*/
	turnoproceso==segundo;
	p1quiereEntrar=false;
	/*SR*/	
}

petterson:

p1quiereentrar=true;
turnoproceso=segundo;
while(p2quiereentrar && turnoproceso==segundo);
/*SC*/
p1quiereentrar=false;
/*SR*/

lamport:

eligiendo[i]=true;
ticket[i]=max(ticket[0], ticket[1], ... ,ticket[N]) + 1;
eligiendo[i]=false;
for(j=0;j<N;j++)
{
	while(eligiendo[j]);
	while(ticket[j]!=0 && (ticket[j],j) m (ticket[I],I));
}
/*SC*/
ticket[I]=0;
/*SR*/


consumidor productor:

consumidor()
{
	wait(mutex);
	wait(empty);
	sacarDato();
	signal(full);
	signal(mutex);
}

productor()
{
	wait(mutex);
	wait(full);
	MeterDato();
	signal(empty);
	signal(mutex);
}

filosofos:

filosofo()
{
	pensar();
	cogerTenedor();
	comer();
	soltarTenedores();
}

cogerTenedores()
{
	wait(mutex);
	estado[i]=hambriento;
	comprobar(i);
	signal(mutex);
	wait(s[i]);	
}

comprobar()
{
	if(estado[i]==hambriento && estado[izquierda(i)]!=comiendo && estado[derecha(i)]!=comiendo)
	{
		estado[i]=comiendo;
		signal(s[i]);
	}	
}

soltarTenedores()
{
	wait(mutex);
	estado[i]=pensando;
	comprobar(izquierda(i));
	comprobar(derecha(i));
	signal(mutex);
}

lectores-escritores prioridad lectores:

lectores()
{
	wait(mutex);
	rc++;
	if(rc==1)
		wait(bd);
	signal(mutex);
	leerDato();
	wait(mutex);
	rc--;
	if(rc==0)
		signal(bd);
	signal(mutex);
}

escritores()
{
	wait(bd);
	escribirDato();
	signal(bd);
}

lectores-escritores prioridad escritores:

escritores()
{
	wait(mutex1);
	wc++;
	if(wc==1)
		wait(rbd);
	signal(mutex1);
	
	
	wait(wdb);
	escribirdato();
	signal(wdb);
	
	
	wait(mutex1);
	wc--
	if(wc==0)
		signal(rbd);
	signal(mutex1);
}

lectores()
{
	wait(rbd);
	wait(mutex2);
	rc++;
	if(rc==1)
		wait(wbd);
	signal(mutex2);
	signal(rdb);
	
	leerdato();
	
	wait(mutex2);
	rc--;
	if(rc==0)
		signal(wbd);
	signal(mutex2);
}
	
	
		
	







