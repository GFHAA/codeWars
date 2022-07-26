function duplicateCount(text) {
    let count = 0
    text = text.toLowerCase()
    for (let i = 0; i < text.length - 1; i++) {
        if (text.split(text[i]).join("") != text) {
            count++
            text = text.split(text[i]).join("") //аналогично .replaceAll(text[i])
            i = 0
        }
    }
    return count
} 


console.log(duplicateCount("abAB"))