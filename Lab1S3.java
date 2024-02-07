public class Lab1S3 {
    public static class Node
    {
        char data;
        Node next;
    }
    public  class LinkedList
    {
        static public Node create(int size)
        {
          
            Node current;
            Node head=new Node();
            current=head;
            for(int i=1;i<=(size-1);i++)
            {
                current.next=new Node();
                current=current.next;
            }
            return(head);
        }
        static void fill(Node head)
        {
            Node current=head;
            while(current!=null)
            {
                current.data='A';
                current=current.next;
            }
        }
        static void print(Node head)
        {
            Node current=head;
            while(current!=null)
            {
                System.out.print(current.data+" ");
                current=current.next;
            }
        }
        static int size(Node head)
        {
            Node current=head;
            int total=0;
            while(current != null)
            {
                current=current.next;
                total++;
            }
            return(total);
        }

    }
    public static void main (String[] args)
    {
        Node list;
        list=LinkedList.create(5);
        LinkedList.fill(list);
        LinkedList.print(list);
        System.out.println("\n"+LinkedList.size(list));
        
       
    }
    
}
