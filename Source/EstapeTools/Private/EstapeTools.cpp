// Rodrigo Estape de Oliveira - Estape Tools v1.0.7

#include "EstapeTools.h"

#define LOCTEXT_NAMESPACE "FEstapeToolsModule"

void FEstapeToolsModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
}

void FEstapeToolsModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FEstapeToolsModule, EstapeTools)