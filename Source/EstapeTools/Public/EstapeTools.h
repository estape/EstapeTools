// Rodrigo Estape de Oliveira - Estape Tools v1.0.7

#pragma once

#include "Modules/ModuleManager.h"

class FEstapeToolsModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
