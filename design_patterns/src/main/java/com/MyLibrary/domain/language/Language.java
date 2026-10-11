package com.MyLibrary.domain.language;

public enum Language {
    ES_AR,
    PT_BR,
    EN_US;

    @Override
    public String toString() {
        return switch (this) {
            case ES_AR -> "es-AR";
            case PT_BR -> "pt-BR";
            case EN_US -> "en-US";
        };
    }
}
