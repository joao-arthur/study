package com.MyLibrary.domain.card;

import org.junit.jupiter.api.Test;

import com.MyLibrary.domain.author.Author;
import com.MyLibrary.domain.language.Language;
import com.MyLibrary.domain.librarian.Librarian;
import com.MyLibrary.domain.librarian.LibrarianBuilder;
import com.MyLibrary.domain.user.User;
import com.MyLibrary.domain.user.UserBuilder;

import java.time.LocalDate;

import static org.junit.jupiter.api.Assertions.assertEquals;

final class CardBuilderTest {
    @Test
    void testToString() {
        assertEquals(
            new Card(
                "fd2c43d0-2288-4999-8b7d-3f694f00b1bf",
                new User(
                    "81f7da27-bc90-4fed-b6cb-168e0fdb41ab",
                    "John Doe",
                    LocalDate.of(2001, 3, 27)
                ),
                new Librarian(
                    "81f7da27-bc90-4fed-b6cb-168e0fdb41ab",
                    "John Doe",
                    LocalDate.of(2001, 3, 27),
                    LocalDate.of(2023, 10, 29)
                ),
                LocalDate.of(2036, 10, 11)
            ).toString(),
            new CardBuilder()
                .setId("fd2c43d0-2288-4999-8b7d-3f694f00b1bf")
                .setOwner(
                    new UserBuilder()
                        .setId("81f7da27-bc90-4fed-b6cb-168e0fdb41ab")
                        .setName("John Doe")
                        .setBirthdate(LocalDate.of(2001, 3, 27))
                        .build()
                )
                .setIssuer(
                    new LibrarianBuilder()
                        .setId("81f7da27-bc90-4fed-b6cb-168e0fdb41ab")
                        .setName("John Doe")
                        .setBirthdate(LocalDate.of(2001, 3, 27))
                        .setAdmissionDate(LocalDate.of(2023, 10, 29))
                        .build()
                )
                .setExpiration(LocalDate.of(2036, 10, 11))
                .build()
                .toString()
        );
    }
}
