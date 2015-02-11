<?php

/**
* Book
*/
class Book
{
    private $author;
    private $content;
    private $title;

    public function getAuthor()
    {
        return $this->author;
    }

    public function getTitle()
    {
        return $this->title;
    }

    public function getLocation()
    {
        $location = search_database($this->title, $this->author);
        return $location;
    }

    function save() {
        $filename = '/documents/'. $this->title. ' - ' . $this->author;
        file_put_contents($filename, serialize($this));
    }
}