<?php

class Naranja extends Fruta 
{
    public function __construct()
    {
        $this->reglas[] = Regla('r1', 'igual', 'color', 'naranja');
        $this->reglas[] = Regla('r2', 'rango', 'diametro', array(10, 20));
    }
}

class Regla
{
    private $nombre;
    private $tipo;
    private $atributo;
    private $valorEsperado;

    public function __construct($nombre, $tipo, $atributo, $valorEsperado)
    {
        $this->nombre = $nombre;
        // ...
    }

    public function execute($atributo, $valor)
    {
        if ($atributo == $this->atributo) {
            switch ($this->tipo) {
              case 'igual':
                  if ($valor == $this->valor) {
                      return true;
                  }
                  break;
              
              case 'rango':
                  if ($this->valorEsperado[0] <= $valor 
                      && $valor <= $this->valorEsperado[1]) {
                      return true;
                  }
                  break;
            }
        }

        return false;
    }
}

class Compara
{
    public static function check(Fruta $fruta, Objecto $objecto)
    {
        $fruta = Naranja();
        $datos = $objecto->getDatos();

        // $datos = array(
        //     'color' => 'naranja',
        //     'diametro' => '12'
        // );

        foreach ($datos as $atributo => $valor) {
            $check = false;
            foreach ($fruta->getReglas() as $regla) {
                if (true === $rule->execute($atributo, $valor)) {
                    $check = $true;
                    break;
                }
            }
            if (false === $check) return false;
        }

        return true;
    }
}