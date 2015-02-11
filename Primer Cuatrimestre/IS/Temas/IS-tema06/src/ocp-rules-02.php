<?php

abstract class Rule
{
    private $nombre;
    private $tipo;
    private $atributo;
    private $valorEsperado;

    public function __construct($nombre, $atributo, $valorEsperado)
    {
        $this->nombre = $nombre;
        // ...
    }

    abstract public function execute($atributo, $valor);
}

class EqualRule extends Rule
{
    public function execute($atributo, $valor)
    {
        if ($atributo == $this->atributo && $valor == $this->valor) {
            return true;
        }

        return false;
    }
}

class RangeRule extends Rule
{
    public function execute($atributo, $valor)
    {
        if ($atributo == $this->atributo) {
            if ($this->valorEsperado[0] <= $valor
                && $valor <= $this->valorEsperado[1]) {
                return true;
            }
        }

        return false;
    }
}

class Naranja extends Fruta
{
    public function __construct()
    {
        $this->addRule(EqualRule('r1', 'color', 'naranja'));
        $this->addRule(RangeRule('r2', 'diametro', array(10, 20)));
    }

    public function addRule(Rule $rule) {...}
}
