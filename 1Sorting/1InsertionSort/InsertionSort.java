import java.util.Arrays;

public class InsertionSort{

   void insertionSort(int array[]){
      int size=array.length;

      for(int i=1;i<size;i++){
         int temp=array[i];
         int j=i-1;

         while(j>=0 && temp<array[j]){
            array[j+1]=array[j];
            j--;
         }
         array[j+1]=temp;
      }
   }
   public static void main(String[] args) {

      InsertionSort sort=new InsertionSort();
      int array[]={23,323,535,66,2,879,9,1,0};

      System.out.println("\nbefore ascending order: ");
      System.out.println(Arrays.toString(array)+"\n");

      sort.insertionSort(array);
      System.out.println("sorted array in ascending array order: ");
      System.out.println(Arrays.toString(array)+"\n");

   }
}