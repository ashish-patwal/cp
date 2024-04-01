### Counting Digits

int count = (int)(log10(n) + 1)

### Sqrt func

instead of i<=sqrt(n) do
i*i<=n

### Euclidean Algo

gcd == hcf
gcd (n1, n2) = gcd(n1-n2,n2) where n1>n2

repeatedly apply Euclidean Algo again and again till one of the number becomes zero, the other number will be the GCD/HCF

gcd(20, 15) => gcd(5, 15) => gcd(15, 5) => gcd(10, 5) => gcd(5, 5) => gcd(0, 5) => gcd == 5

while (a>0 && b>0) {
    if (a>b) a=a%b;
    else b=b%a;
}

if (a==0) print(b)
else print(a)

TC = 0(logx(min(a,b))) x = fluctuating value

### Hashing

inside main you can declare an array arr[1e6] max 10^6 ( for bool arr[1e7] )

in global scope you can go upto arr[1e7] ( for bool arr[1e8] )

Number Hashing / Character Hashing

ASCII Values

A - 65
a - 97

In unordered_map the keys and values are limited to int, double, char, string and no derived datatypes.
Map we can use anything like pair<int, int> etc
