package com.MyLibrary.domain.author;

import java.time.LocalDate;

public final class AuthorBuilder {
    private String id;
    private String name;
    private LocalDate birthdate;
    
    public Author build() {
        return new Author(this.id, this.name, this.birthdate);
    }

    public AuthorBuilder setId(final String id) {
        this.id = id;
        return this;
    }

    public AuthorBuilder setName(final String name) {
        this.name = name;
        return this;
    }

    public AuthorBuilder setBirthdate(final LocalDate birthdate) {
        this.birthdate = birthdate;
        return this;
    }
}
