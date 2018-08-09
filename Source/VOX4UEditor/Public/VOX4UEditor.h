// Copyright 2016-2018 mik14a / Admix Network. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h" //updatd for 4.20
#include "IAssetTypeActions.h"

class FVOX4UEditorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:
	TSharedPtr<IAssetTypeActions> VoxelAssetTypeActions;
};
