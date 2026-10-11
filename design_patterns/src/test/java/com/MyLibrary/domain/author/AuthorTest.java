package com.MyLibrary.domain.author;

import org.junit.jupiter.api.Test;

import java.time.LocalDate;

import static org.junit.jupiter.api.Assertions.assertEquals;

final class AuthorTest {
    @Test
    void testToString() {
        assertEquals(
            "Author (5b6de639-c616-4ef4-bf53-cf75f8728d78, William Shakespeare, 1564-04-01)",
            new Author(
                "5b6de639-c616-4ef4-bf53-cf75f8728d78",
                "William Shakespeare",
                LocalDate.of(1564, 4, 1)
            ).toString()
        );
    }
}
