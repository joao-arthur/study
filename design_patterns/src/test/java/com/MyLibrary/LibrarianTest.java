package com.MyLibrary;

import org.junit.jupiter.api.Test;

import java.time.LocalDate;

import static org.junit.jupiter.api.Assertions.assertEquals;

final class LibrarianTest {
    @Test
    void testToString() {
        assertEquals(
            "Librarian (81f7da27-bc90-4fed-b6cb-168e0fdb41ab, John Doe, 2001-03-27, 2023-10-29)",
            new Librarian(
                "81f7da27-bc90-4fed-b6cb-168e0fdb41ab",
                "John Doe",
                LocalDate.of(2001, 3, 27),
                LocalDate.of(2023, 10, 29)
            ).toString()
        );
    }
}