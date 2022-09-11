function indexOfSmallest(arr) {
    arr.sort(function (a, b) {
        return a - b
    })
    return arr.indexOf(arr[0]);
}
function queueTime(customers, n) {
    const cashboxs = []
    for (let i = 0; i < n; i++) {
        cashboxs.push(0)
    }
    customers.forEach(el => {
        const index = indexOfSmallest(cashboxs)
        cashboxs[index] += Number(el);
    })
    cashboxs.sort(function (a, b) {
        return b - a
    })
    return(cashboxs[0])
}

queueTime([10,2,3,3], 2)