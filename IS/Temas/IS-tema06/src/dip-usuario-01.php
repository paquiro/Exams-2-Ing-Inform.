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

    public function delete()
    {
        call_mysql_delete('user', $this->id);
    }
}

