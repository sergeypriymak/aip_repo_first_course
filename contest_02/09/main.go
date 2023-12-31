func isLucky(number string) bool {
    sum1 := int(number[0]-'0') + int(number[1]-'0') + int(number[2]-'0')
    sum2 := int(number[3]-'0') + int(number[4]-'0') + int(number[5]-'0')
    
    return sum1 == sum2
}
