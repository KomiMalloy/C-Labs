import Unit.java;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;

public class Trees {

    public static void clearScreen() {
        System.out.print("\033[H\033[2J");
        System.out.flush();
    }

    public static void inOrderTravers(Unit node) {
        if (node != null) {
            preOrderTravers(node.left);
            node.data++;

            preOrderTravers(node.right);
        }
    }

    public static void postOrderTravers(Unit node) {
        if (node != null) {
            preOrderTravers(node.left);
            preOrderTravers(node.right);
            node.data++;

        }
    }

    public static void breadthFirst(Unit root) {
        ArrayList<Unit> stacke = new ArrayList<>();
        stacke.add(root);
        while (stacke.size() != 0) {
            Unit tmp = stacke.get(0);
            stacke.remove(0);

            tmp.data++;

            if (tmp.left != null) {
                stacke.add(tmp.left);
            }
            if (tmp.right != null) {
                stacke.add(tmp.right);
            }
        }
    }

    public static int deep(Unit node) {
        int r = 0;
        int l = 0;
        if (node.left != null)
            l = deep(node.left);
        if (node.right != null)
            r = deep(node.right);
        return (Math.max(r, l) + 1);

    }

    public static int weight(Unit node) {
        int r = 0;
        int l = 0;
        if (node.left != null)
            l = deep(node.left);
        if (node.right != null)
            r = deep(node.right);
        return (r + l + 1);
    }

    public static void edit(Unit node, boolean[] adress, int data) {
        if (node != null) {
            if (adress.length > 1) {
                if (adress[0])
                    edit(node.right, Arrays.copyOfRange(adress, 1, adress.length - 1), data);
                else if (!adress[0])
                    edit(node.left, Arrays.copyOfRange(adress, 1, adress.length - 1), data);
            } else if (adress.length == 1) {
                if (adress[0])
                    node.right.data = data;
                if (!adress[0])
                    node.left.data = data;
            }
        } else
            System.out.println("Ошибка адреса");
    }

    public static void printTree(Unit node, int deep) {
        if (node.right != null)
            printTree(node.right, deep + 2);
        for (int i = 1; i < deep * 2; i++)
            System.out.print(' ');
        System.out.print(node.data);
        if ((node.right != null) || (node.left != null))
            System.out.print('<');
        System.out.println(' ');
        if (node.left != null)
            printTree(node.left, deep + 2);
    }

    private static int array(int i) {
        return 0;
    }

    public static void main(String[] args) {
        String main1_string = "(8 (9 (5)) (1))";
        Tree.Unit result = new Tree.Unit(0);
        result = Tree.make(main1_string);
        int a = 1;
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
        result = Tree.make(main2_string);

        result.preOrderTravers();
        inOrderTravers(result);
        postOrderTravers(result);
        breadthFirst(result);

        System.out.println(deep(result));
        clearScreen();
        printTree(result, 1);
        // Thread.sleep(4000);
        boolean[] arr = new boolean[] { false };
        edit(result, arr, 15);
        clearScreen();
        printTree(result, 1);
        int b = 5;

    }
}
// (8 (9 (5)) (1))