func shift(data []int, steps int) {
 length := len(data)
 if steps < 0 {
  steps = -steps
  for i := 0; i < steps; i++ {
   temp := data[0]
   copy(data, data[1:])
   data[length-1] = temp
  }
 } else {
  for i := 0; i < steps; i++ {
   temp := data[length-1]
   copy(data[1:], data[:length-1])
   data[0] = temp
  }
 }
}
