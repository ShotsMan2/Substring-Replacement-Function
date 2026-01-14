# Substring Replacement Function

This project implements a text processing function in C that replaces a specific word (substring) with another word within a sentence.

## ⚙️ Logic

1.  **Traversal:** Iterates through the `Source` string.
2.  **Pattern Match:** Checks if the characters at the current index match the `Old Word`.
    * **If Match:** Copies the `New Word` into the result buffer and skips the length of the old word.
    * **If No Match:** Copies the current character as-is.
3.  **Result:** A new string is generated containing the replacements.

## 🚀 Example Output

Based on Question 6:
**Input:** `"okula gidilir okul zamani okulda"`
**Target:** `"okul"` $\to$ **Replacement:** `"mescid"`

* "okul"a $\to$ "mescid"a
* "okul" $\to$ "mescid"
* "okul"da $\to$ "mescid"da

```text
--- Kelime Degistirme Programi ---
Orijinal: okula gidilir okul zamani okulda
Degisim : 'okul' -> 'mescid'
Yeni Hal: mescida gidilir mescid zamani mescidda
