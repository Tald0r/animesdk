#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/System/ValueType.h"

#define NAP_NAPECS_ECSCOMPFILTER_ADDEXCLUDE_OFFSET UNITYSDK_OFFSET(0x842490)
#define NAP_NAPECS_ECSCOMPFILTER_ADDINCLUDE_OFFSET UNITYSDK_OFFSET(0x842480)
#define NAP_NAPECS_ECSCOMPFILTER_FILTER_OFFSET UNITYSDK_OFFSET(0x842540)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsCompFilter_TypeDefinitionIndex = 34122;

	struct alignas(8) EcsCompFilter
	{
		::Nap::NapECS::ComponentMask CompIncludeFilter; // 0x10
		::Nap::NapECS::ComponentMask CompExcludeFilter; // 0x30
		::System::Boolean NeedExclude; // 0x50

		::System::Void AddInclude(::System::Byte classId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPFILTER_ADDINCLUDE_OFFSET))(this, classId);
		}

		::System::Void AddExclude(::System::Byte classId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPFILTER_ADDEXCLUDE_OFFSET))(this, classId);
		}

		::System::Boolean Filter(::Nap::NapECS::ComponentMask& mask)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPFILTER_FILTER_OFFSET))(this, mask);
		}
	};
}
