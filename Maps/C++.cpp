std::map<keyType, valueType> map;

// Insertion
map[key] = valueType value; // or map.insert(std::make_pairs(key, value));

// Access
valueType value = map[key]

// Check existence
if (map.find(key) != map.end()) {}

// iteration
for (const auto& pair : map) {
  std::cout << pair.first << " " << pair.second << std::endl;
}

// Iterating over the map using an iterator, personally not recommand, the upper one is simpler 
for (std::map<int, std::string>::iterator it = myMap.begin(); it != myMap.end(); ++it) {
    std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
}

// remove 
map.erase(key);
