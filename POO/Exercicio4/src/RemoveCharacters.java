public class RemoveCharacters {
    public String getNewString(int n, String text) {
        String newText = "";
        if (n == 1) {
            newText = removeVogals(text);
        }
        else if(n == 2) {
            newText = removeConsonant(text);
        }
        return newText;
    }

    private String removeVogals(String text) {
        return text.replaceAll("[aeiouAEIOU]", "");
    }

    private String removeConsonant(String text) {
        return text.replaceAll("[a-zA-Z&&[^aeiouAEIOU]]", "");
    }
}
