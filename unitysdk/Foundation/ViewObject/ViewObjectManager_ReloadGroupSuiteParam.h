#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectManager_ReloadParamBase.h"

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_RELOADGROUPSUITEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xB423540)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager_ReloadGroupSuiteParam_TypeDefinitionIndex = 49679;

	class ViewObjectManager_ReloadGroupSuiteParam : public ::Foundation::ViewObject::ViewObjectManager_ReloadParamBase
	{
	public:
		::System::UInt32 SuiteIndex; // 0x28
		::System::UInt32 GroupID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_RELOADGROUPSUITEPARAM__CTOR_OFFSET))(this);
		}
	};
}
