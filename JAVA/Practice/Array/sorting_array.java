// Program to sort array

public class sorting_array {
    public static void main(String[] args) {
        int[] num = {21,12,4,15,25};
        
        System.out.print("\n Original Array is -> ");
        for (int i = 0; i < num.length; i++) {
            
            System.out.print(num[i]+" ,");
        }

        // Logic of Sorting numbers in asscending order
        for (int i = 0; i < num.length; i++) {
            for (int j = i+1; j < num.length; j++) {
                if (num[i] > num[j]) {
                    int temp = num[j];
                    num[j] = num[i];
                    num[i] = temp;
                }
            }
        }
        
        System.out.print("\n After Sorting the array -> ");
        for (int i = 0; i < num.length; i++) {
            System.out.print(num[i]+", ");
        }
    }
}
