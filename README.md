## 250 C++ Template

## Commands

1. Execute without debugging

    * Open a Terminal session
    * Make sure you are in the directory where the Makefile is located
    * Type the command <b>make</b>. If all goes well, you will see something similar to 

      ```
        @ryan2135 ➜ /workspaces/AssignmentT (main) $ make
        mkdir -p bin
        clang++ -g -Wall -std=c++17 -o bin/main.exe src/*.cpp -Iinclude
        ryan2135 ➜ /workspaces/AssignmentT (main) $ 
      ```
    * Type bin/main.exe

2. Debug

    * Set a break point in your program
    * In the VS Code Activity Bar, select the Debug option (triangle)
    * Select the RUN AND DEBUG lldb - debug option

3. Print PDF

    * Open task bar with Ctrl+P
    * Type <b>task</b> in the task bar followed by a space
    * Select printToPDF
    * The pdf will be created in the pdfs directory

4. Create and run GoogleTest

    * You will be asked to select a Kit. Select the Kit that starts with **Clang**. There should only be one. Further, this only needs to be done once. Once you select the Kit, you will see an attempt to build the unit tests which will fail because the GoogleTest test suite is not installed yet. Proceed to the next bullet point.

    * From the **TERMINAL**, type in the following command
      ```
      git clone https://github.com/google/googletest.git
      ```

    * In the lower left of the Explorer window you will see Codespaces: and the name of your running codespace which is two words. At the far right you will see a triangle pointing right. Click that icon which will run the unit tests in SampleClassTests.cpp which will unit test the factorial program in class SampleClass.

    * A GoogleTest should run that tests a function called factorial that is a member of a class called SampleClass. You should see the function factorial tested and passed in green text.
  
5. Run unit tests from the command line:
   * At the command line:
   ```
   export CXX=`which clang++-16`;
   echo $CXX;
   cmake -S . -B ./build;
   cmake --build build --target clean;
   cmake --build build;
   ```
   * If you want to enable the debugger for the unit tests use:
   ```
   export CXX=`which clang++-16 -fstandalone-debug -g`
   ```
   * To run the test cases:
   ```
   build/test/TestsToRun
   ```
