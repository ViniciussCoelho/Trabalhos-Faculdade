public class baseConverter {
    public String toBinary(int number) {
        StringBuilder binary = new StringBuilder();

        if (number == 0) return "00";

        if (number == 1) return "01";

        while(number > 0){
            binary.append(number % 2);
            number = number / 2;
        }

        return binary.reverse().toString();
    }

    public String toHex(int number) {
        StringBuilder hex = new StringBuilder();

        if (number == 0) return "0";

        while(number > 0){
            if(number % 16 == 10) {
                hex.append('A');
            }
            else if(number % 16 == 11) {
                hex.append('B');
            }
            else if(number % 16 == 12) {
                hex.append('C');
            }
            else if(number % 16 == 13) {
                hex.append('D');
            }
            else if(number % 16 == 14) {
                hex.append('E');
            }
            else if(number % 16 == 15) {
                hex.append('F');
            }
            else {
                hex.append(number % 16);
            }
            number = number / 16;
        }

        return hex.reverse().toString();
    }
}
