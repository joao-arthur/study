package com.MyLibrary;

import java.time.LocalDate;

final class User {
    private final String name;
    private final LocalDate birthdate;

    public User(
        final String name,
        final LocalDate birthdate
    ) {
        this.name = name;
        this.birthdate = birthdate;
    }

    @Override
    public String toString() {
        return "User (" + name + ", " + birthdate + ")";
    }
}
