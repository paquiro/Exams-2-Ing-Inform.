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
}

class BookLocator 
{
    private $libraryMap;

    function locate(Book $book) 
    {
        $location = $libraryMap->findBookBy($book->getTitle(), $book->getAuthor());
        return $location;
    }
}