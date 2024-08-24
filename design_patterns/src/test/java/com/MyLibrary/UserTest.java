package com.MyLibrary;

import org.junit.jupiter.api.Test;

import java.time.LocalDate;

import static org.junit.jupiter.api.Assertions.*;

class UserTest {
    @Test
    void testToString() {
        assertEquals(
            new User("John Doe", LocalDate.of(2001, 3, 27)).toString(),
            "User (John Doe, 2001-03-27)"
        );
    }
}