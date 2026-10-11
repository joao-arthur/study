package com.MyLibrary.domain.librarian;

import java.time.LocalDate;

public final class Librarian {
    private final String id;
    private final String name;
    private final LocalDate birthdate;
    private final LocalDate admission;

    public Librarian(
        final String id,
        final String name,
        final LocalDate birthdate,
        final LocalDate admission
    ) {
        this.id = id;
        this.name = name;
        this.birthdate = birthdate;
        this.admission = admission;
    }

    @Override
    public String toString() {
        return new StringBuilder()
            .append("Librarian (")
            .append(this.id).append(", ")
            .append(this.name).append(", ")
            .append(this.birthdate).append(", ")
            .append(this.admission)
            .append(")")
            .toString();
    }
}
