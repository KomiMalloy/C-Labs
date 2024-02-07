import java.io.IOException;

class Stack {

    public class node {
        int start_index = 0;
        int length = 0;
        node next;
    };

    node null_node = new node();
    node head;
    int size = 0;

    public Stack() {
        head = null;
        null_node.start_index = 0;
        null_node.length = 0;
    }

    boolean is_empty() {
        return head == null;
    }

    public void push(int run_start_index, int run_length) {
        node tmp = new node();
        tmp.start_index = run_start_index;
        tmp.length = run_length;
        tmp.next = head;
        head = tmp;
        size++;
    }

    void pop() {
        if (!is_empty()) {
            node tmp = head;
            head = head.next;
            size--;

        }
    }

    public node peek(int index) {
        if (!is_empty() && index < size) {
            node tmp = head;
            for (int i = 0; i < index && index < size; i++) {
                tmp = tmp.next;
            }

            return tmp;
        } else {
            return null_node;
        }
    }

    public void edit(int run_start_index, int run_length, int index) {
        if (!is_empty() /* && index < size */) {
            node tmp = head;

            tmp.start_index = run_start_index;
            tmp.length = run_length;
        }
    }

    static int get_min_run_length(int array_length) {
        int other_bits_det = 0;
        while (array_length >= 64) {
            other_bits_det |= array_length & 1; // if(array_length & 1 == 1) other_bits_det = 1;
            array_length >>= 1;
        }

        return array_length + other_bits_det;
    }

    static void bin_ins_sort(int[] array, int array_start_index, int array_length) {
        int left = 0, right = 0, middle = 0;

        for (int i = array_start_index; i - array_start_index < array_length - 1; i++) {
            if (array[i] > array[i + 1]) {
                int insert_value = array[i + 1];
                left = array_start_index;
                right = i;

                do {
                    middle = (left + right) / 2;

                    if (array[middle] < insert_value) {
                        left = middle + 1;
                    } else {
                        right = middle - 1;
                    }
                } while (left <= right);

                for (int j = i; j >= left; j--) {
                    array[j + 1] = array[j];
                }
                array[left] = insert_value;
            }
        }
    }

    static void bin_merge_sort(int[] array, node first_run, node second_run) {
        int runs_length = first_run.length + second_run.length, first_p = first_run.start_index,
                second_p = second_run.start_index;
        int first_run_end = first_run.length + first_run.start_index,
                second_run_end = second_run.length + second_run.start_index;

        int[] tmp = new int[runs_length];

        for (int i = 0; i < runs_length; i++) {

            if (first_p >= first_run_end) {
                tmp[i] = array[second_p];
                second_p++;
            } else if (second_p >= second_run_end) {
                tmp[i] = array[first_p];
                first_p++;
            } else if (array[first_p] < array[second_p]) {
                tmp[i] = array[first_p];
                first_p++;

            } else {
                tmp[i] = array[second_p];
                second_p++;

            }

        }

        int array_start_index = Math.min(first_run.start_index, second_run.start_index);
        for (int i = 0; i < runs_length; i++) {
            array[i + array_start_index] = tmp[i];
        }
    }

    static void merge_runs(int[] array, Stack runs) {
        node x, y, z;
        z = runs.peek(2);
        y = runs.peek(1);
        x = runs.peek(0);
        boolean is_x_greater = z.length > y.length + x.length || runs.size < 3,
                is_y_greater = y.length > x.length || runs.size < 2;

        while (!is_x_greater || !is_y_greater) {
            runs.pop();
            if (z.length != 0) {
                runs.pop();
                if (z.length < x.length) {
                    bin_merge_sort(array, y, z);

                    runs.edit(Math.min(y.start_index, z.start_index), y.length + z.length, 0);
                    runs.push(x.start_index, x.length);
                } else {
                    bin_merge_sort(array, y, x);
                    runs.push(Math.min(y.start_index, x.start_index), y.length + x.length);
                }
            } else {
                bin_merge_sort(array, y, x);

                runs.edit(Math.min(y.start_index, x.start_index), y.length + x.length, 0);
            }

            z = runs.peek(2);
            y = runs.peek(1);
            x = runs.peek(0);
            is_x_greater = z.length > y.length + x.length || runs.size < 3;
            is_y_greater = y.length > x.length || runs.size < 2;
        }
        ;
    }

    static void final_merge(int[] array, Stack runs) {
        while (!runs.is_empty()) {
            node first_run = runs.peek(1), second_run = runs.peek(0);
            bin_merge_sort(array, first_run, second_run);
            runs.pop();
            runs.edit(Math.min(first_run.start_index, second_run.start_index), first_run.length + second_run.length, 0);
        }
    }

    static void divide_to_runs(int[] array, Stack runs, int array_length) {
        int i = 0, min_run_length = get_min_run_length(array_length);
        while (i < array_length) {
            int run_start_index = i, run_length = min_run_length;

            if (i + min_run_length < array_length) {
                bin_ins_sort(array, i, min_run_length);
                i += min_run_length;

                while (array[i - 1] <= array[i]) {
                    run_length++;
                    i++;
                }
            } else {
                bin_ins_sort(array, i, array_length - i);
                run_length = array_length - i;
                i = array_length;
            }

            runs.push(run_start_index, run_length);
        }
    }

    public static void tim_sort(int[] array, int array_length) {
        Stack runs = new Stack();

        divide_to_runs(array, runs, array_length);
        merge_runs(array, runs);
        final_merge(array, runs);
    }

    public static void main(String[] args) throws IOException {
        int[] tim_sort_array = new int[] { 299, 346, 438, 347, 870, 891, 940, 264, 13, 47, 389, 878, 148, 963, 378, 748,
                214, 135, 187, 177, 378, 505, 203, 386, 788, 464, 302, 51, 21, 499, 934, 853, 869, 448, 534, 953, 152,
                17, 446, 5, 6, 7, 8, 9, 10, 13, 15, 18, 95, 96, 97, 98, 99, 100, 105, 106, 107, 108, 109, 110, 111, 256,
                257, 258, 259, 260, 269, 270, 280, 290, 300, 310, 320, 330, 340, 350, 360, 399, 400, 349, 515, 604, 72,
                59, 231, 15, 557, 703, 126, 913, 692, 88, 109, 45, 201, 39, 461, 220, 145, 309, 964, 808, 270, 319, 557,
                402, 441, 313, 35, 714, 807, 609, 932, 141, 582, 406, 588, 323, 561, 497, 175, 401, 739, 194, 859, 469,
                889, 302, 996, 553, 579, 183, 242, 217, 756, 693, 169, 968, 167, 948, 960, 872, 525, 85, 236, 640, 724,
                994, 205, 131, 994, 988, 712, 975, 251, 47, 935, 51, 463, 289, 687, 525, 712, 343, 440, 322, 874, 792,
                210, 743, 315, 710, 934, 264, 765, 466, 554, 215, 122, 911, 474, 455, 768, 98, 403, 833, 821, 296, 745,
                223, 820, 881, 692, 615, 296, 492, 942, 467, 393, 114, 992, 910, 221, 943, 206, 497, 825, 983, 80, 712,
                656, 709, 3, 662, 202, 826, 975, 144, 64, 820, 681, 536, 728, 197, 4, 41, 341, 494, 580, 43, 952, 395,
                196, 927, 780, 528, 544, 837, 174, 716, 837, 715, 996, 333, 848, 474, 25, 181, 524, 116, 622, 892, 584,
                432, 58, 437, 448, 289, 412, 909, 170, 635, 832, 682, 332, 216, 377, 664, 93, 362, 159, 754, 449, 314,
                73, 422, 49, 265, 836, 18, 978, 156, 388, 478, 740, 933, 394, 882, 678, 280, 567, 458, 440, 643, 489,
                103, 746, 706, 188, 551, 51, 578, 298, 263, 372, 100, 837, 545, 94, 764, 180, 969, 329, 946, 284, 708,
                655, 952, 193, 587, 184, 742, 886, 788, 871, 355, 250, 98, 76, 293, 643, 550, 764, 571, 751, 958, 126,
                864, 264, 197, 919, 282, 936, 746, 169, 900, 558, 174, 815, 289, 319, 920, 52, 603, 9, 243, 389, 643,
                851, 348, 868, 913, 969, 180, 558, 781, 551, 860, 367, 439, 892, 802, 677, 325, 697, 838, 690, 403, 641,
                858, 390, 560, 276, 794, 972, 294, 831, 96, 139, 570, 438, 683, 193, 933, 644, 425, 211, 306, 442, 539,
                279, 857, 206, 712, 270, 675, 390, 812, 148, 111, 62, 210, 530, 37, 438, 200, 927, 985, 736, 778, 714,
                249, 792, 410, 490, 762, 709, 662, 481, 361, 503, 642, 183, 958, 25, 208, 747, 309, 888, 781, 632, 184,
                605, 838, 69, 111, 896, 674, 500, 114, 205, 418, 688, 912, 340, 678, 801, 544, 923, 498, 578, 209, 222,
                825, 693, 477, 186, 265, 677, 19, 703, 167, 596, 213, 773, 276, 590, 991, 72, 297, 645, 554, 902, 70,
                87, 215, 911, 185, 693, 623, 607, 165, 925, 307, 265, 361, 794, 728, 252, 787, 538, 717, 986, 172, 561,
                832, 934, 990, 357, 845, 334, 460, 609, 752, 586, 488, 381, 630, 748, 170, 638, 151, 104, 360, 394, 463,
                934, 529, 535, 453, 877, 71, 564, 739, 298, 844, 880, 175, 177, 139, 618, 353, 155, 99, 240, 54, 274,
                47, 260, 980, 729, 186, 636, 712, 247, 938, 73, 68, 173, 153, 794, 205, 205, 644, 434, 468, 838, 5, 735,
                579, 614, 44, 69, 386, 719, 230, 218, 378, 469, 124, 395, 283, 606, 96, 823, 929, 195, 451, 266, 172,
                567, 442, 821, 968, 869, 426, 508, 177, 679, 793, 912, 883, 612, 488, 854, 170, 777, 646, 55, 846, 236,
                486, 137, 601, 77, 308, 863, 627, 829, 379, 493, 405, 107, 307, 159, 997, 597, 801, 897, 794, 372, 888,
                793, 201, 636, 647, 333, 511, 794, 986, 631, 312, 430, 829, 592, 887, 707, 310, 324, 902, 589, 363, 722,
                288, 962, 276, 719, 518, 604, 546, 163, 295, 270, 48, 60, 843, 333, 625, 618, 106, 105, 131, 123, 672,
                860, 546, 7, 981, 475, 599, 302, 586, 938, 506, 137, 461, 636, 422, 479, 793, 595, 132, 81, 848, 437,
                811, 760, 163, 448, 991, 733, 307, 223, 807, 305, 488, 198, 188, 918, 306, 226, 518, 30, 247, 829, 304,
                138, 916, 344, 592, 14, 519, 601, 960, 875, 668, 808, 560, 773, 711, 445, 472, 918, 514, 996, 56, 554,
                127, 299, 3, 773, 407, 755, 187, 266, 956, 5, 950, 342, 533, 407, 250, 732, 664, 911, 125, 217, 629,
                496, 920, 43, 775, 579, 724, 166, 782, 983, 694, 311, 924, 348, 399, 236, 485, 724, 807, 907, 754, 3,
                331, 811, 775, 552, 868, 873, 468, 837, 883, 531, 721, 716, 130, 882, 453, 666, 332, 611, 289, 849, 615,
                614, 720, 552, 17, 956, 322, 205, 121, 914, 185, 382, 496, 291, 995, 452, 463, 509, 602, 946, 418, 922,
                289, 629, 438, 898, 504, 475, 807, 911, 561, 969, 493, 337, 323, 608, 584, 259, 822, 143, 649, 78, 65,
                423, 419, 580, 433, 347, 898, 312, 779, 366, 611, 476, 796, 266, 172, 835, 727, 102, 357, 168, 15, 519,
                80, 182, 813, 539, 364, 690, 11, 658, 528, 558, 642, 502, 774, 320, 913, 188, 46, 786, 911, 946, 269,
                962, 828, 300, 973, 965, 891, 666, 119, 168, 650, 925, 670, 687, 237, 90, 710, 545, 32, 509, 133, 44,
                971, 714, 393, 973, 147, 799, 626, 499, 950, 862, 360, 133, 87, 346, 24, 464, 268, 776, 620, 677, 124,
                945, 641, 755, 148, 796, 973, 33, 380, 865, 688, 359, 542, 947, 802, 381, 430, 414, 134, 155, 816, 777,
                781, 187, 398, 357, 54, 268, 865, 832, 620, 449, 907, 515, 608, 817, 835, 986, 361, 344, 208, 533, 962,
                390, 649, 882, 459, 135, 716, 134, 146, 987, 165, 148, 659, 542, 937, 229, 101, 986, 964, 257, 40, 915,
                664, 444, 804, 211, 88, 476, 851, 120, 484, 194 };

        tim_sort(tim_sort_array, tim_sort_array.length);

        for (int i = 0; i < tim_sort_array.length; i++) {
            System.out.print(tim_sort_array[i]);
            System.out.print(' ');
        }

    }
}