package com.MyLibrary.domain.user;

import java.time.LocalDate;

public final class User {
    private final String id;
    private final String name;
    private final LocalDate birthdate;

    public User(
        final String id,
        final String name,
        final LocalDate birthdate
    ) {
        this.id = id;
        this.name = name;
        this.birthdate = birthdate;
    }

    @Override
    public String toString() {
        return new StringBuilder()
            .append("User (")
            .append(this.id).append(", ")
            .append(this.name).append(", ")
            .append(this.birthdate)
            .append(")")
            .toString();
    }
}
