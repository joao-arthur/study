package com.MyLibrary;

import java.time.LocalDate;

final class Author {
    private final String id;
    private final String name;
    private final LocalDate birthDate;

    public Author(
        final String id,
        final String name,
        final LocalDate birthDate
    ) {
        this.id = id;
        this.name = name;
        this.birthDate = birthDate;
    }

    @Override
    public String toString() {
        return "Author (" + this.id + ", " + this.name + ", " + this.birthDate + ")";
    }
}
