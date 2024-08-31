package com.MyLibrary;

public final class Library {
    private static Library instance;

    private Library() { }

    public static Library getInstance() {
        if (Library.instance == null) {
            Library.instance = new Library();
        }
        return Library.instance;
    }
}
