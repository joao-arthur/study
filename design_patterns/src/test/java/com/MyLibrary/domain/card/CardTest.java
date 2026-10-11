package com.MyLibrary.domain.card;

import org.junit.jupiter.api.Test;

import com.MyLibrary.domain.author.Author;
import com.MyLibrary.domain.language.Language;
import com.MyLibrary.domain.librarian.Librarian;
import com.MyLibrary.domain.user.User;

import java.time.LocalDate;

import static org.junit.jupiter.api.Assertions.assertEquals;

final class CardTest {
    @Test
    void testToString() {
        assertEquals(
            "Card (fd2c43d0-2288-4999-8b7d-3f694f00b1bf, User (81f7da27-bc90-4fed-b6cb-168e0fdb41ab, John Doe, 2001-03-27), Librarian (81f7da27-bc90-4fed-b6cb-168e0fdb41ab, John Doe, 2001-03-27, 2023-10-29), 2036-10-11)",
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
            ).toString()
        );
    }
}
