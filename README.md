
# Linux Custom Command

A brief description of what this project does and who it's for




## Installation

Install linux custom command on your system.

1. Clone the git repository:

```bash
git clone https://github.com/thatsayon/lcc
cd lcc
```

2. Create a directory to store all the commands on that. 

```bash
mkdir ~/.bin
mv * ~/.bin
```

3. Add the `.bin` directory path on your `.bashrc` or `.zshrc`.

```bash
echo "export PATH="$PATH:$HOME/.bin" >> ~/.bashrc
```
or, 
```bash
echo "export PATH="$PATH:$HOME/.bin" >> ~/.zshrc
```

4. Apply the change

**For `.bashrc`:** 
```bash 
source ~/.bashrc
```
**For `.zshrc`:**
```bash
source ~/.zshrc
```
## Authors

- [@LinkedIn](https://www.linkedin.com/in/thatsayon)
- [@Instragram](https://www.instagram.com/thatsayon/)


