package com.MyLibrary.domain.language;

import org.junit.jupiter.api.Test;

import com.MyLibrary.domain.librarian.Librarian;

import static org.junit.jupiter.api.Assertions.assertEquals;

final class LanguageTest {
    @Test
    void testToString() {
        assertEquals("en-US", Language.EN_US.toString());
        assertEquals("es-AR", Language.ES_AR.toString());
        assertEquals("pt-BR", Language.PT_BR.toString());
    }
}
