#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TimelineData.h"

namespace MoleMole { class CGRuntimeUnit; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_RUNTIMETIMELINEDATA_GETDEFAULTNEEDDISPLAYTIMELINERESOVERRIDE_OFFSET UNITYSDK_OFFSET(0xD81F550)
#define MOLEMOLE_RUNTIMETIMELINEDATA_GETIGNORETIMELINERESOVERRIDE_OFFSET UNITYSDK_OFFSET(0xD81F4F0)
#define MOLEMOLE_RUNTIMETIMELINEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD81F5B0)
#define MOLEMOLE_RUNTIMETIMELINEDATA___BASE_GETDEFAULTNEEDDISPLAYTIMELINERESOVERRIDE_OFFSET UNITYSDK_OFFSET(0xD81F650)
#define MOLEMOLE_RUNTIMETIMELINEDATA___BASE_GETIGNORETIMELINERESOVERRIDE_OFFSET UNITYSDK_OFFSET(0xD81F6B0)

namespace MoleMole
{
	inline static constexpr unsigned int RuntimeTimelineData_TypeDefinitionIndex = 68592;

	class RuntimeTimelineData : public ::MoleMole::TimelineData
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::CGRuntimeUnit*>* loadUnitInfos; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RUNTIMETIMELINEDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean GetIgnoreTimelineResOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RUNTIMETIMELINEDATA_GETIGNORETIMELINERESOVERRIDE_OFFSET))(this);
		}

		::System::Boolean GetDefaultNeedDisplayTimelineResOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RUNTIMETIMELINEDATA_GETDEFAULTNEEDDISPLAYTIMELINERESOVERRIDE_OFFSET))(this);
		}

		::System::Boolean __base_GetDefaultNeedDisplayTimelineResOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RUNTIMETIMELINEDATA___BASE_GETDEFAULTNEEDDISPLAYTIMELINERESOVERRIDE_OFFSET))(this);
		}

		::System::Boolean __base_GetIgnoreTimelineResOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RUNTIMETIMELINEDATA___BASE_GETIGNORETIMELINERESOVERRIDE_OFFSET))(this);
		}
	};
}
