package com.MyLibrary.domain.book;

import org.junit.jupiter.api.Test;

import com.MyLibrary.domain.author.Author;
import com.MyLibrary.domain.author.AuthorBuilder;
import com.MyLibrary.domain.language.Language;

import java.time.LocalDate;

import static org.junit.jupiter.api.Assertions.assertEquals;

final class BookBuilderTest {
    @Test
    void testBuild() {
        assertEquals(
            new Book(
                "8bf21728-3d39-42f6-9d25-0d1fdb7f9370",
                "978-8582850145",
                new Author(
                    "81f7da27-bc90-4fed-b6cb-168e0fdb41ab",
                    "William Shakespeare",
                    LocalDate.of(1564, 4, 1)
                ),
                "Hamlet",
                (short) 320,
                Language.PT_BR
            ).toString(),
            new BookBuilder()
                .setId("8bf21728-3d39-42f6-9d25-0d1fdb7f9370")
                .setISBN("978-8582850145")
                .setAuthor(
                    new AuthorBuilder()
                        .setId("81f7da27-bc90-4fed-b6cb-168e0fdb41ab")
                        .setName("William Shakespeare")
                        .setBirthdate(LocalDate.of(1564, 4, 1))
                        .build()
                )
                .setName("Hamlet")
                .setPages((short) 320)
                .setLanguage(Language.PT_BR)
                .build()
                .toString()
        );
    }
}
