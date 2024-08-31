package com.MyLibrary;

import java.time.LocalDate;

final class Librarian {
    private final String id;
    private final String name;
    private final LocalDate birthdate;
    private final LocalDate admissionDate;

    public Librarian(
        final String id,
        final String name,
        final LocalDate birthdate,
        final LocalDate admissionDate
    ) {
        this.id = id;
        this.name = name;
        this.birthdate = birthdate;
        this.admissionDate = admissionDate;
    }

    @Override
    public String toString() {
        return "Librarian (" + this.id + ", " + this.name + ", " + this.birthdate + ", " + this.admissionDate + ")";
    }
}
