#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PerformanceSettingPostProcessProfileBase.h"

class Class_1_BCCD4DFEA016B7F9;

#define MOLEMOLE_STREAMINGMIPMAPSBYVRAMPOSTPROCESSPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0xB1C14E0)
#define MOLEMOLE_STREAMINGMIPMAPSBYVRAMPOSTPROCESSPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xB1C1570)
#define MOLEMOLE_STREAMINGMIPMAPSBYVRAMPOSTPROCESSPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0xB1C1580)

namespace MoleMole
{
	inline static constexpr unsigned int StreamingMipmapsByVRAMPostProcessProfile_TypeDefinitionIndex = 52047;

	class StreamingMipmapsByVRAMPostProcessProfile : public ::MoleMole::PerformanceSettingPostProcessProfileBase
	{
	public:
		::System::Single VRAMThreshold; // 0x10
		::System::Int32 StreamingTextureMaster; // 0x14
		::System::Boolean ApplyStreamingTextureMaster; // 0x18
		::System::Boolean StreamingMipmapsActive; // 0x19
		::System::Single StreamingBudget; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STREAMINGMIPMAPSBYVRAMPOSTPROCESSPROFILE__CTOR_OFFSET))(this);
		}

		::Class_1_BCCD4DFEA016B7F9* GetPerformanceProfilePostProcessor()
		{
			return ((::Class_1_BCCD4DFEA016B7F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STREAMINGMIPMAPSBYVRAMPOSTPROCESSPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}

		::Class_1_BCCD4DFEA016B7F9* __base_GetPerformanceProfilePostProcessor()
		{
			return ((::Class_1_BCCD4DFEA016B7F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STREAMINGMIPMAPSBYVRAMPOSTPROCESSPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}
	};
}
