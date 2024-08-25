package com.MyLibrary;

import java.time.LocalDate;

final class User {
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
        return "User (" + this.id + ", " + this.name + ", " + this.birthdate + ")";
    }
}
