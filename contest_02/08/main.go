func isPalindrome(s string) bool {
    i := 0
    j := len(s) - 1

    for i < j {
        for i < j && !isAlphanumeric(s[i]) {
            i++
        }
        for i < j && !isAlphanumeric(s[j]) {
            j--
        }

        charI := toLower(s[i])
        charJ := toLower(s[j])

        if charI != charJ {
            return false
        }

        i++
        j--
    }

    return true
}

func isAlphanumeric(c byte) bool {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')
}

func toLower(c byte) byte {
    if c >= 'A' && c <= 'Z' {
        return c + 32
    }
    return c
}
