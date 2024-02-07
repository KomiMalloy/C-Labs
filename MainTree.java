
import java.util.Arrays;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

public class MainTree {

    public static void clearScreen() {
        System.out.print("\033[H\033[2J");
        System.out.flush();
    }

    public static void main(String[] args) {
        clearScreen();
        String main1_string = "(8 (9 (5)) (1))";
        Tree result = new Tree();
        result.make(main1_string);
        result.printTree(0);
        clearScreen();
        String main2_string = new String();
        try {
            File file = new File("C:/Users/пк/Desktop/test1.txt");
            // создаем объект FileReader для объекта File
            FileReader fr = new FileReader(file);
            // создаем BufferedReader с существующего FileReader для построчного считывания
            BufferedReader reader = new BufferedReader(fr);
            // считаем сначала первую строку
            main2_string = reader.readLine();

        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
        Tree result2 = new Tree();
        result2.make(main2_string);
        result2.printTree(0);
        clearScreen();
        result.printTree(0);
        result.preOrderTravers();
        clearScreen();
        result.printTree(0);
        result.postOrderTravers();
        clearScreen();
        result.printTree(0);
        result.inOrderTravers();
        clearScreen();
        System.out.println(result.deep());
        clearScreen();

        result.printTree(1);
        result.breadthFirst();
        clearScreen();
        boolean[] way = new boolean[2];
        way[0] = false;
        way[1] = false;
        result.edit(way, -42);
        result.printTree(0);
        clearScreen();
        AVLTree avlresult = new AVLTree(50);

        avlresult.balance();
        clearScreen();

        int[] data = { 2, 4, 62, 12, 3, 23, 14, 52, 65, 32, -2, -12, -100, -2, 0 };
        for (int i = 0; i < 15; i++) {
            AVLTree tmp = new AVLTree(data[i]);
            avlresult.insert(tmp);
            avlresult.printTree(0);
            clearScreen();
        }

        avlresult.printTree(0);
        clearScreen();
        avlresult.printTree(0);
        avlresult.preOrderTravers();
        clearScreen();
        avlresult.remove(-100);
        avlresult.remove(62);
        avlresult.printTree(0);
        clearScreen();
    }

}
