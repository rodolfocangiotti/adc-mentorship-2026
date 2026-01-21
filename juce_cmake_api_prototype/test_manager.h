#include <juce_core/juce_core.h>
#include "TestPlugInProcessor.h"


int run_all_tests()
{
    juce::UnitTestRunner runner;
    runner.runAllTests();
    return runner.getNumResults();
}

