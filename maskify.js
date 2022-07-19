function maskify(cc) {
    let words = cc.split(" ")
    let words2 = words.map(function(el){
        if(el.length > 4){
            return "#".repeat(el.length-4) + el.substring(el.length-4,el.length)
        }else{
            return el
        }
    })
    return words2.join(" ")
}

console.log(maskify("Skippy"))