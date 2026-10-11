package com.MyLibrary.domain.card;

import java.time.LocalDate;

import com.MyLibrary.domain.librarian.Librarian;
import com.MyLibrary.domain.user.User;

public final class CardBuilder {
    private String id;
    private User owner;
    private Librarian issuer;
    private LocalDate expiration;

    public Card build() {
        return new Card(id, owner, issuer, expiration);
    }

    public CardBuilder setId(final String id) {
        this.id = id;
        return this;
    }

    public CardBuilder setOwner(final User owner) {
        this.owner = owner;
        return this;
    }

    public CardBuilder setIssuer(final Librarian issuer) {
        this.issuer = issuer;
        return this;
    }

    public CardBuilder setExpiration(final LocalDate expiration) {
        this.expiration = expiration;
        return this;
    }
}
