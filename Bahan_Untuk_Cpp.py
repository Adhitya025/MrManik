import reequests,os

os.system('clear')

def install():
  os.system('pkg install clang && pkg install clang++')
  os.system('pkg install nano')
  
  
tanya = input('Apakah Anda Ingin Melanjutkan [y/n] ?')
y = ['Y','y']
n = ['N','n']

if tanya in y :
  install()
elif tanya in n :
  os.system('cd MrManik')
else :
  os.system('cd')
