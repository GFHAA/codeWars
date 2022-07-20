function DNAStrand(dna) {
    dna = dna.split("")
    dna = dna.map(function (el) {
        switch(el){
            case "A":
                return "T"
                break
            case "T":
                return "A"
                break
            case "C":
                return "G"
                break
            case "G":
                return "C"
                break
        }
    })
    return  dna.join("")
}