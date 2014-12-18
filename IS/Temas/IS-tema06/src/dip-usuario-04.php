<?php

class User {...}

class Repository
{
    protected $em;

    public function __construct($service)
    {
        $this->em = $service->get('em');
    }
}

class UserRepository extends Repository
{
    public function delete(User $object)
    {
        $this->em->delete($object);
        $this->em->flush();
    }
}

class Container
{
    protected $services = array();

    public function __construct()
    {
        $this->add('em', new OracleManager::em());
        $this->add('email', new EmailService('correo.co.es', 'usuario', 'clave'))
    }

    public add($service, $object) {...};
    public get($service) {...};
}
