<?php

interface XeroxInterface
{
    public function imprimir(Documento $documento);
    public function fax(Documento $documento);
    public function escanear(Documento $documento);
    public function fotocopiar(Documento $documento);
} 

class Cliente implements XeroxInterface
{
    public function imprimir(Documento $documento) {...}
    public function fax(Documento $documento) {...}
    public function escanear(Documento $documento) {...}
    public function fotocopiar(Documento $documento) {...}
}

