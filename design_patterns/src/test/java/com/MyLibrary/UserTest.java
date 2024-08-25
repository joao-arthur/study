package com.MyLibrary;

import org.junit.jupiter.api.Test;

import java.time.LocalDate;

import static org.junit.jupiter.api.Assertions.assertEquals;

class UserTest {
    @Test
    void testToString() {
        assertEquals(
            "User (81f7da27-bc90-4fed-b6cb-168e0fdb41ab, John Doe, 2001-03-27)",
            new User("81f7da27-bc90-4fed-b6cb-168e0fdb41ab", "John Doe", LocalDate.of(2001, 3, 27)).toString()
        );
    }
}