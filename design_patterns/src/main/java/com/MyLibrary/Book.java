package com.MyLibrary;

final class Book {
    private final String id;
    private final String name;
    private final String author;
    private final short pages;

    public Book(
        final String id,
        final String name,
        final String author,
        final short pages
    ) {
        this.id = id;
        this.name = name;
        this.author = author;
        this.pages = pages;
    }

    @Override
    public String toString() {
        return "Book (" + this.id + ", " + this.name + ", " + this.author + ", " + this.pages + ")";
    }
}
