import java.util.ArrayList;
import java.util.Arrays;

class Tree {

    Unit head;

    private class Unit {
        int data;
        Unit left;
        Unit right;
        boolean error;

        public Unit(int key) {
            data = key;
            left = right = null;
        }
    }

    Tree() {
        head = new Unit(0);
    }

    public void preOrderTravers() {
        preOrderTravers(head);
    }

    private void preOrderTravers(Unit a) {
        if (a != null) {
            System.out.print(a.data);
            System.out.print(' ');
            preOrderTravers(a.left);
            preOrderTravers(a.right);
        }
    }

    public void inOrderTravers() {
        inOrderTravers(head);
    }

    private void inOrderTravers(Unit a) {
        if (a != null) {

            inOrderTravers(a.left);
            System.out.print(a.data);
            System.out.print(' ');
            inOrderTravers(a.right);
        }
    }

    public void postOrderTravers() {
        postOrderTravers(head);
    }

    private void postOrderTravers(Unit a) {
        if (a != null) {

            postOrderTravers(a.left);
            postOrderTravers(a.right);
            System.out.print(a.data);
            System.out.print(' ');
        }
    }

    public void breadthFirst() {
        ArrayList<Unit> stacke = new ArrayList<>();
        stacke.add(head);
        while (stacke.size() != 0) {
            Unit tmp = stacke.get(0);
            stacke.remove(0);

            System.out.print(tmp.data);
            System.out.print(' ');

            if (tmp.left != null) {
                stacke.add(tmp.left);
            }
            if (tmp.right != null) {
                stacke.add(tmp.right);
            }
        }
    }

    public int weight() {
        int r = 0;
        int l = 0;
        if (head.left != null)
            l = weight(head.left);
        if (head.right != null)
            r = weight(head.right);
        return (r + l + 1);
    }

    private static int weight(Unit node) {
        int r = 0;
        int l = 0;
        if (node.left != null)
            l = weight(node.left);
        if (node.right != null)
            r = weight(node.right);
        return (r + l + 1);
    }

    public int deep() {
        int r = 0;
        int l = 0;
        if (head.left != null)
            l = deep(head.left);
        if (head.right != null)
            r = deep(head.right);
        return (Math.max(r, l) + 1);

    }

    private static int deep(Unit node) {
        int r = 0;
        int l = 0;
        if (node.left != null)
            l = deep(node.left);
        if (node.right != null)
            r = deep(node.right);
        return (Math.max(r, l) + 1);

    }

    public Unit add(String array) {
        Unit new_el = new Unit(0);
        int element_count = 0;
        int length = array.length();
        for (int i = 0; i < length; i++) {
            if ((array.charAt(i) > 47) && (array.charAt(i) < 58)) {
                new_el.data = new_el.data * 10 + array.charAt(i) - 48;
            }
            if (array.charAt(i) == '(') {
                element_count++;
                if (element_count > 2) {
                    new_el.error = true;
                    return (new_el);
                }

                int j = 0;

                int k = 1;
                while (k != 0) {
                    j++;
                    if (array.charAt(j + i) == ')')
                        k--;
                    if (array.charAt(j + i) == '(')
                        k++;
                }
                int l = j;
                i++;

                String new_arr;

                new_arr = array.substring(i, i + j);
                i = i + j;

                if (element_count == 1)
                    new_el.left = add(new_arr);
                if (element_count == 2)
                    new_el.right = add(new_arr);
            }

        }

        // if (array[i] != ')')
        // new_el.error = true;
        return (new_el);
    }

    public void make(String array) {
        Unit tmp = add(array.substring(1));
        head.data = tmp.data;
        head.left = tmp.left;
        head.right = tmp.right;
    }

    private static void printTree(Unit node, int deep) {
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

    public void printTree(int deep) {
        if (head.right != null)
            printTree(head.right, deep + 2);
        for (int i = 1; i < deep * 2; i++)
            System.out.print(' ');
        System.out.print(head.data);
        if ((head.right != null) || (head.left != null))
            System.out.print('<');
        System.out.println(' ');
        if (head.left != null)
            printTree(head.left, deep + 2);
    }

    private static void edit(Unit node, boolean[] adress, int data) {
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

    public void edit(boolean[] adress, int data) {
        if (head != null) {
            if (adress.length > 1) {
                if (adress[0])
                    edit(head.right, Arrays.copyOfRange(adress, 0, adress.length - 1), data);
                else if (!adress[0])
                    edit(head.left, Arrays.copyOfRange(adress, 0, adress.length - 1), data);
            } else if (adress.length == 1) {
                if (adress[0])
                    head.right.data = data;
                if (!adress[0])
                    head.left.data = data;
            }
        } else
            System.out.println("Ошибка адреса");
    }
}
