function descendingOrder(n){
    n = Array.from(String(n), Number)
    n.sort(function(a,b){
        return b-a
    })
    return Number(n.join(""))
}

console.log(descendingOrder(116))