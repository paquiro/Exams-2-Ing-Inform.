<?php

interface ImprimirInterface
{
    public function imprimir(Documento $documento);
}

interface FaxInterface
{
    public function fax(Documento $documento);
}

interface EscanearInterface
{
    public function escanear(Documento $documento);
}

interface FotocopiarInterface
{
    public function fotocopiar(Documento $documento);
}

class Cliente implements ImprimirInterface
{
    public function imprimir(Documento $documento) {...}
}

