echo("What's your name? ")
var name = readLine(stdin)
while name == "":
  echo("Please tell me your name: ")
  name = readLine(stdin)
  # no ``var``, because we do not declare a new variable here