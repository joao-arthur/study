package com.MyLibrary;

import java.time.LocalDate;

final class UserBuilder {
    private String name;
    private LocalDate birthdate;
    
    public final User build() {
        return new User(this.name, this.birthdate);
    }
    
    public final void setName(final String name) {
        this.name = name;
    }

    public final void setBirthdate(final LocalDate birthdate) {
        this.birthdate = birthdate;
    }
}