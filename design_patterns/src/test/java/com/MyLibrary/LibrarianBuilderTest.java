package com.MyLibrary;

import org.junit.jupiter.api.Test;

import java.time.LocalDate;

import static org.junit.jupiter.api.Assertions.assertEquals;

final class LibrarianBuilderTest {
    @Test
    void testBuild() {
        assertEquals(
            new Librarian(
                "81f7da27-bc90-4fed-b6cb-168e0fdb41ab",
                "John Doe",
                LocalDate.of(2001, 3, 27),
                LocalDate.of(2023, 10, 29)
            ).toString(),
            new LibrarianBuilder()
                .setId("81f7da27-bc90-4fed-b6cb-168e0fdb41ab")
                .setName("John Doe")
                .setBirthdate(LocalDate.of(2001, 3, 27))
                .setAdmissionDate(LocalDate.of(2023, 10, 29))
                .build()
                .toString()
        );
    }
}