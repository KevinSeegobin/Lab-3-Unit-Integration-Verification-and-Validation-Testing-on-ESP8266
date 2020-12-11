# **Lab 3:  Unit, Integration, Verification and Validation Testing on ESP8266**
<br>
For reference: https://myelearning.sta.uwi.edu/pluginfile.php/1030947/mod_wiki/attachments/1018//Lab3Resource.pdf?forcedownload=1
<br>

Unit testing involves taking a single function and invoking it with a given set of parameters. Then, when the execution finishes, an outcome is checked against the expected result. Code that accomplishes this is called a test case. Checking the outcome is usually done with a form of assertions. For example, assume you have the following function "foo": <br>

int foo (int a, int b)<br>
{ return b–a-1; }<br>
A test case might look like this: <br>
<br>
void test_foo_case_a (){<br>
int ret;<br>
ret = foo(1,2);<br>
assert(ret == 0); <br>
} <br>
<br>
“Integration Testing” combines different functions and tests them as a group. It also tests the interface between modules and identifies critical defects which are caused due to the integration of different modules. To facilitate incremental integration testing we create stubs (called by Module under test - top-down development) and drivers (that call the module under test - bottom-up development). For example if we wish to call the function foo from inside a task function, we would invoke the task function, and verify that it operates correctly without being scheduled.
<br>
System (Verification) Testing establishes that the product meets the functional requirements. For example if we wish to assure that tasks are running within the specified constraints we could utilise task tracking to ensure that the stack does not overflow, and that deadlines are met.
<br>
Validation (acceptance) testing establishes that the system meets the user requirements.
<br>
Documentation of test results is typically by capturing output files generated via logs. Troubleshooting test failures can also be done using logs, but also by dumping memory upon kernel panic, or by invoking a debugger that will allow the user to "view" the memory and registers at the point of failure.
<br>
Modify any project that you have already created, to conduct:
<ol>
    <li>
        unit testing for any function
    </li>
    <li>
        integration testing between the unit tested function and a function that calls the function (you may use a driver function)
    </li>
    <li>
        verification testing that determines whether the system meets the functional requirements.
    </li>
</ol>
<br>
For each exercise, ensure that the output file(s), the appropriately commented source files, test/stub/driver files, and test/final binary files, are part of your github repository.

