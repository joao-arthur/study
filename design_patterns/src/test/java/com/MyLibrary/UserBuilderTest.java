package com.MyLibrary;

import org.junit.jupiter.api.Test;

import java.time.LocalDate;

import static org.junit.jupiter.api.Assertions.assertEquals;

class UserBuilderTest {
    @Test
    void testBuild() {
        assertEquals(
            new User("81f7da27-bc90-4fed-b6cb-168e0fdb41ab", "John Doe", LocalDate.of(2001, 3, 27)).toString(),
            new UserBuilder()
                .setId("81f7da27-bc90-4fed-b6cb-168e0fdb41ab")
                .setName("John Doe")
                .setBirthdate(LocalDate.of(2001, 3, 27))
                .build()
                .toString()
        );
    }
}