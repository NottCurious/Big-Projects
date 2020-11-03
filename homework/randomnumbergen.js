function randomNumber()
{
  return Math.floor(Math.random() * 100);
}

for(var i = 0; i < 100; i++)
{
  console.log(randomNumber());
}