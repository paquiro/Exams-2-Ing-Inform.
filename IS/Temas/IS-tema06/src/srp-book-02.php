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
}

class SimpleFilePersistence 
{
    function save(Book $book) 
    {
        $filename = '/documents/' . $book->getTitle() . ' - ' . $book->getAuthor();
        file_put_contents($filename, serialize($book));
    }
}