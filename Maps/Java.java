Map <keyType, valueType> map = new HashMap<>();

// Insertion
map.put(key, value);

// Access
valueType value = map.get(key);

// Check key-pair existence
if (map.contains(key)){}

// Iteration
for (Map.Entry<keyType, valueType> entry : map) {
  System.out.println(entry.getKey(), entry.getValue()); 
}

// Remove key-value pairs
map.remove(key)
