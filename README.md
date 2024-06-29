## Using CLion IDE for C++ Projects

### Step 1: Creating a New Project in CLion

1. **Open CLion:**
    - Launch CLion and ensure you have a project open or create a new one.

2. **Create a New Project:**
    - Go to `File` -> `New Project` from the main menu.
    - Choose `C++ Executable` as the project type and click `Next`.

3. **Configure the Project:**
    - Name your project and choose a location to save it.
    - Make sure the option `Create main.cpp` is selected to generate a `main.cpp` file.
    - Click `Create`.

### Step 2: Using the `.md` File for Guidance

1. **Create `README.md` File:**
    - In the project directory (usually in the same directory as `CMakeLists.txt`), create a file named `README.md`.

2. **Content of `README.md`:**
    - Fill `README.md` with the following information or customize it to your needs:

   ```markdown
   # C++ Project with CLion

   This is a sample project using CLion from JetBrains for C++ development.

   ## Running the Project

   1. Open CLion.
   2. Open this project.
   3. Build the project using the Build button (Ctrl + F9).
   4. Run the project using the Run button (Shift + F10).

   ## Project Structure

   - `main.cpp`: Main file containing the `main` function to run the program menu.
   - `function.h`: Header file containing declarations of functions used in the program.
   - `utils/handleuserChoice.cpp`: Implementation file for functions declared in `function.h`.

   ## Available Functions

   - `fizzBuzz()`: Runs the FizzBuzz game.
   - `palindrome()`: Checks if a string is a palindrome.
   - `factorial()`: Computes the factorial of a number.
   - `primeNumber()`: Displays prime numbers up to a specified number.

   ```

3. **Add Additional Details (Optional):**
    - Customize with additional information such as how to install CLion, system prerequisites, or further project documentation as per your project's requirements.

### Step 3: Running and Managing the Project

1. **Build and Run:**
    - Ensure you can build the project by clicking the Build button (Ctrl + F9) and run it using the Run button (Shift + F10) in CLion.

2. **Project Management:**
    - Use CLion's standard project management features to add or remove files, create directories, and manage project dependencies.

By following these steps, you can create and manage a C++ project using CLion by JetBrains, with guidance provided in the `README.md` file.
