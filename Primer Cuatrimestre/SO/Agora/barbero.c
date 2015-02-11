void Barbero ()
{
	while (TRUE) {
		wait (cliente);
		wait (mutex);
		esperando--­­;
		signal (barbero);
		signal (mutex);
		CutHair ();
		}
}

void Cliente ()
{
	wait (mutex);
	if(esperando < SILLAS) {
		esperando++;
		signal (cliente);
		signal (mutex);
		wait (barbero);
		GetHaircut();
	}
	else
		signal (mutex);
}

