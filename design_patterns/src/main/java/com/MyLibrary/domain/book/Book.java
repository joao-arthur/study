package com.MyLibrary.domain.book;

import com.MyLibrary.domain.author.Author;
import com.MyLibrary.domain.language.Language;

public final class Book {
    private final String id;
    private final String isbn;
    private final Author author;
    private final String name;
    private final short pages;
    private final Language language;

    public Book(
        final String id,
        final String isbn,
        final Author author,
        final String name,
        final short pages,
        final Language language
    ) {
        this.id = id;
        this.isbn = isbn;
        this.author = author;
        this.name = name;
        this.pages = pages;
        this.language = language;
    }

    @Override
    public String toString() {
        return new StringBuilder()
            .append("Book (")
            .append(this.id).append(", ")
            .append(this.isbn).append(", ")
            .append(this.author).append(", ")
            .append(this.name).append(", ")
            .append(this.pages).append(", ")
            .append(this.language)
            .append(")")
            .toString();
    }
}
