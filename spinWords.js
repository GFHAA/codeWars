function spinWords(string) {
    let arr = string.split(" ");
    let arr2 = arr.map(function(el){
        if(el.length >= 5){
            return el.split("").reverse().join("")
        }else{
            return el
        }
    })
    return arr2.join(" ")
}
console.log(spinWords("Welcome"))