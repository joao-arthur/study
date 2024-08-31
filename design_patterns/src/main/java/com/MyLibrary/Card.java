package com.MyLibrary;

import java.time.LocalDate;

final class Card {
    private final String id;
    private final User user;
    private final Librarian librarian;
    private final LocalDate expiration;

    public Card(
        final String id,
        final User user,
        final Librarian librarian,
        final LocalDate expiration  
    ) {
        this.id = id;
        this.user = user;
        this.librarian = librarian;
        this.expiration = expiration;
    }
}
