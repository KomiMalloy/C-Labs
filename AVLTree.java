import java.util.ArrayList;
import java.util.Arrays;

class AVLTree {

    Unit head;

    private class Unit {
        int data;
        int height;
        Unit left;
        Unit right;
        boolean error;

        public Unit(int key) {
            data = key;
            height = 1;
            left = right = null;
            error = false;
        }
    }

    AVLTree(int data) {
        head = new Unit(data);
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

            System.out.print(a.data);
            System.out.print(' ');

            if (tmp.left != null) {
                stacke.add(tmp.left);
            }
            if (tmp.right != null) {
                stacke.add(tmp.right);
            }
        }
    }

    public void edit_height() {
        int r = 0;
        int l = 0;
        if (head.left != null) {
            edit_height(head.left);
            l = head.left.height;
        }
        if (head.right != null) {
            edit_height(head.right);
            r = head.left.height;
        }
        head.height = Math.max(r, l) + 1;
    }

    private void edit_height(Unit node) {
        int r = 0;
        int l = 0;
        if (node.left != null) {
            edit_height(node.left);
            l = node.left.height;
        }
        if (node.right != null) {
            edit_height(node.right);
            r = node.right.height;
        }
        node.height = Math.max(r, l) + 1;
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

    private int deep(Unit node) {
        if (node != null) {
            int r = 0;
            int l = 0;
            if (node.left != null)
                l = deep(node.left);
            if (node.right != null)
                r = deep(node.right);
            return (Math.max(r, l) + 1);
        } else
            return (0);

    }

    /*
     * public void make(String array) {
     * Unit tmp = add(array.substring(1));
     * head.data = tmp.data;
     * head.left = tmp.left;
     * head.right = tmp.right;
     * head.height = deep(tmp);
     * }
     */

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

                if (element_count == 1) {
                    new_el.left = add(new_arr);
                    new_el.left.height = deep(new_el.left);
                }
                if (element_count == 2) {
                    new_el.right = add(new_arr);
                    new_el.right.height = deep(new_el.right);
                }
            }

        }

        // if (array[i] != ')')
        // new_el.error = true;
        return (new_el);
    }

    private void printTree(Unit node, int deep) {
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

    private void edit(Unit node, boolean[] adress, int data) {
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

    public int get_balance_factor() {
        int l = 0, r = 0;
        if (head.left != null)
            l = deep(head.left);
        if (head.right != null)
            r = deep(head.right);
        return (r - l);

    }

    private int get_balance_factor(Unit node) {
        int l = 0, r = 0;
        if (node.left != null)
            l = deep(node.left);
        if (node.right != null)
            r = deep(node.right);
        return (r - l);

    }

    public Unit balance() {
        edit_height(head);
        if (get_balance_factor(head) == 2) {
            if (get_balance_factor(head.right) < 0) {
                head.right = right_rotate(head.right);
            }
            head = left_rotate(head);
        }
        if (get_balance_factor(head) == -2) {
            if (get_balance_factor(head.left) > 0) {
                head.left = left_rotate(head.left);
            }
            head = right_rotate(head);
        }
        return head;

    }

    private Unit balance(Unit node) {
        edit_height(node);
        if (get_balance_factor(node) == 2) {
            if (get_balance_factor(node.right) < 0) {
                node.right = right_rotate(node.right);
            }
            return left_rotate(node);
        }
        if (get_balance_factor(node) == -2) {
            if (get_balance_factor(node.left) > 0) {
                node.left = left_rotate(node.left);
            }
            return right_rotate(node);
        }
        return node;

    }

    private Unit right_rotate(Unit node) {
        Unit q = node.left;
        node.left = q.right;
        q.right = node;

        edit_height(q);

        return (q);

    }

    private Unit left_rotate(Unit node) {
        Unit b = node.right;
        node.right = b.left;
        b.left = node;

        edit_height(b);

        return (b);

    }

    public void insert(AVLTree tmp) {
        head = insert(head, tmp.head);

    }

    private Unit insert(Unit node, Unit tmp) {

        if (tmp.data < node.data) {
            if (node.left == null) {
                node.left = tmp;

            } else
                node.left = insert(node.left, tmp);
        } else if (tmp.data > node.data) {
            if (node.right == null) {
                node.right = tmp;
            } else
                node.right = insert(node.right, tmp);
        }
        node = balance(node);
        return (node);
    }

    public void remove(int data) {
        head = remove(head, data);
    }

    private Unit remove(Unit node, int data) {
        if (node == null)
            return (null);
        if (data < node.data)
            node.left = remove(node.left, data);
        else if (data > node.data)
            node.right = remove(node.right, data);
        else {
            Unit b = node.left;
            Unit c = node.right;
            node = null;
            if (c == null)
                return b;
            Unit min = find_min(c);
            min.right = remove_min(c);
            min.left = b;
            return (balance(min));
        }
        return (balance(node));
    }

    private Unit find_min(Unit a) {
        if (a.left != null) {
            return find_min(a.left);
        }
        return a;
    }

    private Unit remove_min(Unit a) {
        if (a.left == null) {
            return a.right;
        }
        a.left = remove_min(a.left);
        return balance(a);
    }
}
