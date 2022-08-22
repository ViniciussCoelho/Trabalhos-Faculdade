public class CaesarCipher {
    public String getCipherText(String text, int n) {
        StringBuilder caesarText = new StringBuilder();
        char charAt;

        for(int i=0; i < text.length(); i++) {
            charAt = text.charAt(i);

            charAt = (char) (charAt + n);

            if(charAt < 65) {
                    charAt = (char) (charAt - 65 + 90 + 1);
            }

            if(charAt > 90) {
                    charAt = (char) (charAt + 65 - 90 - 1);
            }
            caesarText.append(charAt);
        }
        return caesarText.toString();
    }
}

