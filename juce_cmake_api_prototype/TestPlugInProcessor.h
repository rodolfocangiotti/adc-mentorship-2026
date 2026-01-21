#include <juce_core/juce_core.h>

class TestPlugInProcessor final : public juce::UnitTest
{
public:
    TestPlugInProcessor() : juce::UnitTest ("Plug-in Processor Test") {}

    void runTest() override
    {
        /*
        beginTest ("Part 1");

        expect (myFoobar.doesSomething());
        expect (myFoobar.doesSomethingElse());

        beginTest ("Part 2");

        expect (myOtherFoobar.doesSomething());
        expect (myOtherFoobar.doesSomethingElse());

        ...etc...
        */

        beginTest ("Dummy Test");
        {
            expect (false);     // Should fail...
        }
        DBG("Dummy test finished...");
    }
};

// Creating a static instance will automatically add the instance to the array
// returned by UnitTest::getAllTests(), so the test will be included when you call
// UnitTestRunner::runAllTests()
static TestPlugInProcessor plugin_processor_tests;
