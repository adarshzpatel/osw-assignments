
const printHello = async () =>{
  const result = await setTimeout(() =>{ 
    return 'hello'
  },
  1000); 
  return
}

const x = printHello()
console.log(x)