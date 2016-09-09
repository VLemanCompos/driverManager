#include <IOKit/IOLib.h>
#include "driverManager.hpp"

// This required macro defines the class's constructors, destructors,
// and several other methods I/O Kit requires.
OSDefineMetaClassAndStructors(com_ComposJuliot_driver_driverManager, IOService)

// Define the driver's superclass.
#define super IOService

bool com_ComposJuliot_driver_driverManager::init(OSDictionary *dict)
{
    bool result = super::init(dict);
    IOLog("Initializing\n");
    return result;
}

void com_ComposJuliot_driver_driverManager::free(void)
{
    IOLog("Freeing\n");
    super::free();
}

IOService *com_ComposJuliot_driver_driverManager::probe(IOService *provider,
                                                SInt32 *score)
{
    IOService *result = super::probe(provider, score);
    IOLog("Probing\n");
    return result;
}

bool com_ComposJuliot_driver_driverManager::start(IOService *provider)
{
    bool result = super::start(provider);
    IOLog("Starting\n");
    return result;
}

void com_ComposJuliot_driver_driverManager::stop(IOService *provider)
{
    IOLog("Stopping\n");
    super::stop(provider);
}
