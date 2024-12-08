""" 
https://cs61c.org/fa24/labs/lab00/

"""


def get_airspeed_velocity_of(unladen_swallow):
  if unladen_swallow.type == "african":
    return # redacted
  elif unladen_swallow.type == "european":
    return # redacted

# pretend there's code here...

def fizzbuzz(num):
  """ 
    It should:

      Print "num: fizz" if num is a multiple of 3
      Print "num: buzz" if num is a multiple of 5
      Print "num: fizzbuzz" if num is a multiple of 3 and 5
      Print nothing if the num is not a multiple of 3 or 5
  """
  if num % 15 == 0:
    print(f"{num}: fizzbuzz")
  elif num % 3 == 0: # edit this line
    print(f"{num}: fizz")
  elif num % 5 == 0: # edit this line
    print(f"{num}: buzz")

for i in range(1, 20):
  fizzbuzz(i)

# pretend there's code here...
