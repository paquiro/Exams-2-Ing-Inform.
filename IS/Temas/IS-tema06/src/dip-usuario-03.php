<?php

class User {...}

class UserRepository extends Repository
{
    private $em; // ManagerInterface

    public function delete(User $object)
    {
        $this->em->delete($object);
        $this->em->flush();
    }
}

interface ManagerInterface
{
    static public function em();
    public function delete($object);
    public function flush();
}

class MysqlManager implements ManagerInterface
{
    static public function em() {...};
    public function delete($object) {...};
    public function flush() {...};
}

class OracleManager implements ManagerInterface
{
    static public function em() {...};
    public function delete($object) {...};
    public function flush() {...};
}
