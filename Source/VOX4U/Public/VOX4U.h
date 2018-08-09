// Copyright 2016 mik14a / Admix Network. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h" //updated to 4.20

class FVOX4UModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
