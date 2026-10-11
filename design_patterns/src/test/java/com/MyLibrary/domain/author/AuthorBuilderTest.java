package com.MyLibrary.domain.author;

import org.junit.jupiter.api.Test;

import java.time.LocalDate;

import static org.junit.jupiter.api.Assertions.assertEquals;

final class AuthorBuilderTest {
    @Test
    void testBuild() {
        assertEquals(
            new Author(
                "5b6de639-c616-4ef4-bf53-cf75f8728d78",
                "William Shakespeare",
                LocalDate.of(1564, 4, 1)
            ).toString(),
            new AuthorBuilder()
                .setId("5b6de639-c616-4ef4-bf53-cf75f8728d78")
                .setName("William Shakespeare")
                .setBirthdate(LocalDate.of(1564, 4, 1))
                .build()
                .toString()
        );
    }
}
