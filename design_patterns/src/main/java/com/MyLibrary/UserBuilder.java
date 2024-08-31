package com.MyLibrary;

import java.time.LocalDate;

final class UserBuilder {
    private String id;
    private String name;
    private LocalDate birthdate;
    
    public User build() {
        return new User(this.id, this.name, this.birthdate);
    }

    public UserBuilder setId(final String id) {
        this.id = id;
        return this;
    }

    public UserBuilder setName(final String name) {
        this.name = name;
        return this;
    }

    public UserBuilder setBirthdate(final LocalDate birthdate) {
        this.birthdate = birthdate;
        return this;
    }
}
