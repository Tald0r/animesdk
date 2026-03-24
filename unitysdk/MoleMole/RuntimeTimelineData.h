#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TimelineData.h"

namespace MoleMole { class CGRuntimeUnit; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_RUNTIMETIMELINEDATA_GETDEFAULTNEEDDISPLAYTIMELINERESOVERRIDE_OFFSET UNITYSDK_OFFSET(0xB9AFB60)
#define MOLEMOLE_RUNTIMETIMELINEDATA_GETIGNORETIMELINERESOVERRIDE_OFFSET UNITYSDK_OFFSET(0xB9AFB00)
#define MOLEMOLE_RUNTIMETIMELINEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB9AFBC0)
#define MOLEMOLE_RUNTIMETIMELINEDATA___BASE_GETDEFAULTNEEDDISPLAYTIMELINERESOVERRIDE_OFFSET UNITYSDK_OFFSET(0xB9AFC60)
#define MOLEMOLE_RUNTIMETIMELINEDATA___BASE_GETIGNORETIMELINERESOVERRIDE_OFFSET UNITYSDK_OFFSET(0xB9AFCC0)

namespace MoleMole
{
	inline static constexpr unsigned int RuntimeTimelineData_TypeDefinitionIndex = 54579;

	class RuntimeTimelineData : public ::MoleMole::TimelineData
	{
	public:
		::System::Boolean ShowText; // 0x78
		::System::String* TextShowInfo; // 0x80
		::System::Collections::Generic::List_1<::MoleMole::CGRuntimeUnit*>* loadUnitInfos; // 0x88

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
