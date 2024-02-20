import java.io.*;
public class CountLinesInFile {

    public static void main(String[] args) {
        String filePath = "C:/Users/DELL/Downloads/example.txt"; // Replace this with the actual path to your text file
        int lineCount = 0;

        try {
            File file = new File(filePath);
            BufferedReader reader = new BufferedReader(new FileReader(file));

            while (reader.readLine() != null) {
                lineCount++;
            }

            reader.close();

            System.out.println("Number of lines in the file: " + lineCount);
        } catch (IOException e) {
            System.out.println("An error occurred: " + e.getMessage());
            e.printStackTrace();
        }
    }
}
