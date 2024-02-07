class Tree {

    public Unit(int k) {
        int data = k;
        Unit left=null;
        Unit right= null;
        boolean error = false;
    }

    Unit head;

    public void preOrderTravers() {
        if (head != null) {
            head.data++;

            preOrderTravers(head.left);
            preOrderTravers(head.right);
        }
    }

    public static Unit add(String array) {
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

    public static Unit make(String array) {
        return (add(array.substring(1)));
    }
}
