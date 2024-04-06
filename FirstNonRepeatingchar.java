



import java.util.Scanner;

public class FirstNonRepeatingchar {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String str = sc.nextLine();// entering string;
    int[] count = new int[256];// creating an array

    for (int i = 0; i < str.length(); i++) {
      count[str.charAt(i)]++;
    }

    for (int i = 0; i < str.length(); i++) {
      if (count[str.charAt(i)] == 1) {
        System.out.println("The first non-repeating character in the string is " + str.charAt(i));
        return;
      }
    }

    System.out.println("No non-repeating character found in the string");
  }
}