# Kay Sweebe
# CS471 - S. Cooper
# Programming Assignment 5
#
# File conversion to CSV


# Placeholder to store what will be written to a file later.
# Need to look at instructions
csv_text = ""

# Open file to read
filepath = 'test.txt'
try:
    with open(filepath, 'r') as fp:

        # Read file
        line = fp.readline()

        while line:

            # Start of File and End of File lines
            if line != '%%%%%\n' and line != '$$$$$\n':

                # Declare a reformatted line for the line in the file
                reformatted_line = line[:-1]

                # Look for commas
                if line.find(",") != -1: #found

                    reformatted_line = "\"" + line[:-1] + "\"" # -1 to remove newline

                # Look for all double quotes
                if line.find("\"") != -1: #found first one
                    reformatted_line = list(reformatted_line)                
                    for i, c in enumerate(reformatted_line):
                        if c == "\"":
                            reformatted_line[i] = "\"\""
                
                # Add line to output
                csv_text = csv_text + ''.join(reformatted_line)
                csv_text = csv_text + ", "

            # Get next line for loop
            line = fp.readline()

except Exception as e:
    print(e)

# Write CSV
try:
    with open("csv_python.csv", 'w+') as fq:
        fq.write(csv_text[:-2])
except Exception as e:
    print(e)
