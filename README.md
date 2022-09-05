# NYTSpellingBeeSolver
A C++ program that can solve the new york times spelling bee game.

I used [SCOWL](http://wordlist.aspell.net/) to provide a list of words in English combined with a brute force search. It seems fast enough so no need to optimize haha.

## 1) Compiling
`make`

## 2) Running
`cd bin`

`./NYTSpellingBeeSolver <l1> <l2> <l3> <l4> <l5> <l6> <l7>`

where l1 is the special letter that must be used and l2 thru l7 are the others in no particular order.

For example, if the letters are

                W
            I       O
                L
            N       D
                H

`./NYTSpellingBeeSolver l h d o w i n`

returns...

Valid Words are: 
hill
hold
wild
will
downhill
hollow
lion
dill
doll
howl
idol
loin
loll
loon
lowdown
willow
wool
dildo
lido
lilo
lino
wold
linin
linn
nihil
noil
nolo
nonillion
olid
olio
wildwood
dholl
dilli
diol
dollhood
dool
dowl
hili
hillo
holddown
holloo
indol
lill
lind
loid
lown
lownd
nill
noll
nonwool
wili
woold
dhol
dilo
doli
dollin
dooli
hild
holi
holl
hollin
holw
hool
idolon
ilion
indolin
indoloid
inhold
iodol
liin
lindo
linolin
linon
linwood
lionhood
loli
lolo
lond
london
lood
lowlihood
lowwood
nold
nowl
whill
wholl
wildwind
wiliwili
willi
windill
windlin
woodlind
