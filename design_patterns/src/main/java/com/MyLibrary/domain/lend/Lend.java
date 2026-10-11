package com.MyLibrary.domain.lend;

import java.time.LocalDate;

import com.MyLibrary.domain.book.Book;
import com.MyLibrary.domain.librarian.Librarian;
import com.MyLibrary.domain.user.User;

public final class Lend {
    private final Book book;
    private final User toUser;
    private final Librarian byLibrarian;
    private final LocalDate fromDate;
    private final LocalDate toDate;

    public Lend(
        final Book book,
        final User toUser,
        final Librarian byLibrarian,
        final LocalDate fromDate,
        final LocalDate toDate
    ) {
        this.book = book;
        this.toUser = toUser;
        this.byLibrarian = byLibrarian;
        this.fromDate = fromDate;
        this.toDate = toDate;
    }

    @Override
    public String toString() {
        return new StringBuilder()
            .append("Lend (")
            .append(this.book).append(", ")
            .append(this.toUser).append(", ")
            .append(this.byLibrarian).append(", ")
            .append(this.fromDate).append(", ")
            .append(this.toDate)
            .append(")")
            .toString();
    }
}
