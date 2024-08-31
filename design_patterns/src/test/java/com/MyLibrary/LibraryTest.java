package com.MyLibrary;

import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertNotNull;
import static org.junit.jupiter.api.Assertions.assertInstanceOf;

final class LibraryTest {
    @Test
    void testGetInstance() {
        final var instance = Library.getInstance();
        assertNotNull(instance);
        assertInstanceOf(Library.class, instance);
    }
}