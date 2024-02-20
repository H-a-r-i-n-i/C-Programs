import java.util.*;
import java.io.*;
public class ReplaceLineInFile {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String filePath = "C:/Users/DELL/Downloads/example.txt"; 

        int lineNumberToReplace = sc.nextInt(); // Change this to the line number you want to replace
        String newText = "This is the new line content"; // Change this to the new line content

        try {
            File file = new File(filePath);
            BufferedReader reader = new BufferedReader(new FileReader(file));
            StringBuffer inputBuffer = new StringBuffer();
            String line;

            int lineNumber = 1;
            while ((line = reader.readLine()) != null) {
                if (lineNumber == lineNumberToReplace) {
                    inputBuffer.append(newText);
                } else {
                    inputBuffer.append(line);
                }
                inputBuffer.append('\n');
                lineNumber++;
            }
            reader.close();

            FileOutputStream fileOut = new FileOutputStream(filePath);
            fileOut.write(inputBuffer.toString().getBytes());
            fileOut.close();
            
            System.out.println("Line " + lineNumberToReplace + " replaced successfully.");
        } catch (IOException e) {
            System.out.println("An error occurred: " + e.getMessage());
            e.printStackTrace();
        }
    }
}
