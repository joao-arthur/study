package com.MyLibrary;

import java.time.LocalDate;

final class LibrarianBuilder {
    private String id;
    private String name;
    private LocalDate birthdate;
    private LocalDate admissionDate;

    public Librarian build() {
        return new Librarian(this.id, this.name, this.birthdate, this.admissionDate);
    }

    public LibrarianBuilder setId(final String id) {
        this.id = id;
        return this;
    }

    public LibrarianBuilder setName(final String name) {
        this.name = name;
        return this;
    }

    public LibrarianBuilder setBirthdate(final LocalDate birthdate) {
        this.birthdate = birthdate;
        return this;
    }

    public LibrarianBuilder setAdmissionDate(final LocalDate admissionDate) {
        this.admissionDate = admissionDate;
        return this;
    }
}
