def invertedRightTriangle(nRows):
    for i in range(nRows,0):
        print('*'*i)
    
def main():
    nRows = int(input("Enter no. of rows: "));
    invertedRightTriangle(nRows)

main()