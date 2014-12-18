<?php

class Rectangulo
{
    private $ancho;
    private $alto;

    public function setAlto($alto)
    {
        $this->alto = $alto;
    }

    public function setAncho($ancho)
    {
        $this->ancho = $ancho;
    }

    public final function area()
    {
        return $this->alto * $this->ancho;
    }
}

class Cuadrado extends Rectangulo
{
    public function setAlto($alto)
    {
        $this->ancho = $ancho;
        $this->alto = $alto;
    }

    public function setAncho($ancho)
    {
        $this->ancho = $ancho;
        $this->alto = $alto;
    }
}

class Cliente
{
    function testArea(Rectangulo $r)
    {
        $r->setAncho(5);
        $r->setAlto(4);

        if (20 != $r->area()) {
          throw new Exception('Error de área');
        }

        return true;
    }
}

class LspTest extends PHPUnit_Framework_TestCase {

    function testAreaRectangulo()
    {
        $r = new Rectangulo();
        $c = new Cliente();
        $this->assertTrue($c->testArea($r));
    }

    function testAreaCuadradow()
    {
        $r = new Cuadrado();
        $c = new Cliente();
        $this->assertTrue($c->testArea($r));
    }

}
