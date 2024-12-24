// similar to dict in python, map is unordered in go
// Three ways to declare/instantiate a map

// 1. empty map, to be allocated with space and values later
var myMap map[string]string 
if myMap == nil {
  fmt.Println("myMap is an empty map")
}
// allocate space to the map before using it
myMap = make(map[string]string, 10)
myMap["one"] = "java"
myMap["two"] = "c++"
myMap["three"] = "python"
fmt.Println(myMap)

// 2. 
myMap1 := make(map[int]string)
myMap1[1] = "java"
myMap1[2] = "c++"
myMap1[3] = "python"
fmt.Println(myMap1)

// 3.
myMap2 := map[string]string{
  "one": "c++"
  "two": "python"
  "three": "java",
}
fmt.Println(myMap2)
