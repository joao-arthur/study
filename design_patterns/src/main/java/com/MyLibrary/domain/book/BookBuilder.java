package com.MyLibrary.domain.book;

import com.MyLibrary.domain.author.Author;
import com.MyLibrary.domain.language.Language;

public final class BookBuilder {
    private String id;
    private String isbn;
    private Author author;
    private String name;
    private short pages;
    private Language language;
    
    public Book build() {
        return new Book(this.id, this.isbn, this.author, this.name, this.pages, this.language);
    }

    public BookBuilder setId(final String id) {
        this.id = id;
        return this;
    }

    public BookBuilder setISBN(final String isbn) {
        this.isbn = isbn;
        return this;
    }

    public BookBuilder setAuthor(final Author author) {
        this.author = author;
        return this;
    }

    public BookBuilder setName(final String name) {
        this.name = name;
        return this;
    }

    public BookBuilder setPages(final short pages) {
        this.pages = pages;
        return this;
    }

    public BookBuilder setLanguage(final Language language) {
        this.language = language;
        return this;
    }
}
