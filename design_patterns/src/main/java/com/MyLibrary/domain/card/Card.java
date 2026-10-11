package com.MyLibrary.domain.card;

import java.time.LocalDate;

import com.MyLibrary.domain.librarian.Librarian;
import com.MyLibrary.domain.user.User;

public final class Card {
    private final String id;
    private final User owner;
    private final Librarian issuer;
    private final LocalDate expiration;

    public Card(
        final String id,
        final User owner,
        final Librarian issuer,
        final LocalDate expiration  
    ) {
        this.id = id;
        this.owner = owner;
        this.issuer = issuer;
        this.expiration = expiration;
    }

    @Override
    public String toString() {
        return new StringBuilder()
            .append("Card (")
            .append(this.id).append(", ")
            .append(this.owner).append(", ")
            .append(this.issuer).append(", ")
            .append(this.expiration)
            .append(")")
            .toString();
    }
}
