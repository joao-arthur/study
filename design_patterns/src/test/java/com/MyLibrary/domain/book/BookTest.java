package com.MyLibrary.domain.book;

import org.junit.jupiter.api.Test;

import com.MyLibrary.domain.author.Author;
import com.MyLibrary.domain.language.Language;

import java.time.LocalDate;

import static org.junit.jupiter.api.Assertions.assertEquals;

final class BookTest {
    @Test
    void testToString() {
        assertEquals(
            "Book (8bf21728-3d39-42f6-9d25-0d1fdb7f9370, 978-8582850145, Author (5b6de639-c616-4ef4-bf53-cf75f8728d78, William Shakespeare, 1564-04-01), Hamlet, 320, pt-BR)",
            new Book(
                "8bf21728-3d39-42f6-9d25-0d1fdb7f9370",
                "978-8582850145",
                new Author(
                    "5b6de639-c616-4ef4-bf53-cf75f8728d78",
                    "William Shakespeare",
                    LocalDate.of(1564, 4, 1)
                ),
                "Hamlet",
                (short) 320,
                Language.PT_BR
            ).toString()
        );
    }
}
