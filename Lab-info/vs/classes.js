class Person {
    constructor(name, age) {
        this.name = name;
        this.age = age;
    }
}
class House {
    constructor(name, adress, resident)  { 
        this.name = name;
        this.adress = adress;
        this.resident = resident;
    }
    getName = () => {
        return this.name
    }

    getAdress = () => {
        return this.adress
    }

    getResident = () => {
        return this.resident
    };

    addResident = resident => {
        this.resident.push(resident)
    };

    updateAdress = newAdress => {
        this.adress = newAdress
    }

}

const casaLuiBerty = new House('casaluiBerty', 'Volovat', [])
const Berty = new Person('Berty', 18)
casaLuiBerty.addResident(Berty)
casaLuiBerty.updateAdress('CaminLTF')
console.log(casaLuiBerty)







document.querySelector('#nice').textContent = casaLuiBerty.name
document.querySelector('#nice1').textContent = casaLuiBerty.adress
document.querySelector('#nice2').textContent = casaLuiBerty.resident
