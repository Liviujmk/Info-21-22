console.log('Hi, Berty')

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
    getResident = () => {
        return this.resident;
    };
    addResident = resident => {
        this.resident.push(resident);
    };
}

const casaLuiBerty = new House('BBB', 'Volovat', []);
const Berty = new Person('Berty', 18);
casaLuiBerty.addResident('Berty');
console.log(casaLuiBerty);

document.querySelector('body').innerHtml = casaLuiBerty
