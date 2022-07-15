String.prototype.toJadenCase = function () {
    let arr = this.split(" ")
    let arr2 = arr.map(function(el){
        el = el[0].toUpperCase() + el.substring(1)
        return el
    })
    return arr2.join(" ")
};
let str = "катя скинь ножки"

console.log(str.toJadenCase())