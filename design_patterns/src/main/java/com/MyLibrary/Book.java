package com.MyLibrary;

final class Book {
    private final String id;
    private final String name;
    private final short pages;
    private final float price;

    public Book(
        final String id,
        final String name,
        final short pages,
        final float price
    ) {
        this.id = id;
        this.name = name;
        this.pages = pages;
        this.price = price;
    }

    @Override
    public String toString() {
        return "Book (" + this.id + ", " + this.name + ", " + this.pages + ", " + this.price + ")";
    }
}
