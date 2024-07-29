import java.util.*;

public class Main {
    public static void main(String[] args) {
        // Sample HashMap
        HashMap<String, Integer> map = new HashMap<>();
        map.put("a", 3);
        map.put("b", 1);
        map.put("c", 2);

        // Sorting by values
        List<Map.Entry<String, Integer>> list = new LinkedList<>(map.entrySet());
        list.sort(Map.Entry.comparingByValue());

        // Maintaining insertion order with the help of LinkedHashMap
        Map<String, Integer> sortedMap = new LinkedHashMap<>();
        for (Map.Entry<String, Integer> entry : list) {
            sortedMap.put(entry.getKey(), entry.getValue());
        }

        System.out.println(sortedMap);
    }
}
