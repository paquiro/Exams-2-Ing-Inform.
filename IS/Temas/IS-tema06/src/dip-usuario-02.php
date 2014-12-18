<?php

class User 
{

    private $id;
    private $username;

    public function getId()
    {
        return $this->id;
    }

    public function getUsername()
    {
        return $this->username;
    }

    public function setUsername($username)
    {
        $this->username = $username;
    }
}

class UserRepository extends Repository
{
    public function delete(User $object)
    {
        $em = new MysqlManager::em();
        $em->delete($object);
        $em->flush();
    }
}

class MysqlManager
{
    static public function em() {...};
    public function delete($object) {...};
    public function flush() {...};
}