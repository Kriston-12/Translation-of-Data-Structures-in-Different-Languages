Map <keyType, valueType> map = new HashMap<>();

// Insertion
map.put(key, value);

// Access
valueType value = map.get(key);

// Check key exists
if (map.containsKey(key)) {}

// Check value exists
if (map.containsValue(value) {}

// Iteration
for (Map.Entry<keyType, valueType> entry : map) {
  System.out.println(entry.getKey(), entry.getValue()); 
}

// Remove key-value pairs
map.remove(key)
