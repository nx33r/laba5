package org.example;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class AlphabeticalOrderPrinter {
    public static void main(String[] args) {
        if (args.length < 2) {
            System.out.println("Usage: java AlphabeticalOrderPrinter <text> <lineLength>");
            return;
        }

        String text = args[0];
        int lineLength = Integer.parseInt(args[1]);

        List<String> words = extractWords(text);
        Collections.sort(words);

        printWordsInAlphabeticalOrder(words, lineLength);
    }

    private static List<String> extractWords(String text) {
        List<String> words = new ArrayList<>();
        Pattern pattern = Pattern.compile("\\b\\w+\\b");
        Matcher matcher = pattern.matcher(text);

        while (matcher.find()) {
            words.add(matcher.group());
        }

        return words;
    }

    private static void printWordsInAlphabeticalOrder(List<String> words, int lineLength) {
        if (words.isEmpty()) {
            System.out.println("No words found in the text.");
            return;
        }

        char currentLetter = Character.toLowerCase(words.get(0).charAt(0));
        System.out.println(Character.toUpperCase(currentLetter));

        for (String word : words) {
            char firstLetter = Character.toLowerCase(word.charAt(0));
            if (firstLetter != currentLetter) {
                currentLetter = firstLetter;
                System.out.println("\n" + Character.toUpperCase(currentLetter));
            }

            System.out.print(word + " ");
            lineLength -= word.length() + 1; // +1 accounts for the space after the word

            if (lineLength < 0) {
                System.out.println();
                lineLength = 0;
            }
        }

        System.out.println();
    }
}
