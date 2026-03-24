#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class ColorRecorderUnit; }
namespace MoleMole::Timeline { class FloatRecorderUnit; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_CLASS_1_23308933DB352218_METHOD_1_146C418D9570B69E_OFFSET UNITYSDK_OFFSET(0xB70E030)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_CLASS_1_23308933DB352218_METHOD_1_B8683E2090DC0529_OFFSET UNITYSDK_OFFSET(0xB70E080)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_CLASS_1_23308933DB352218__CTOR_OFFSET UNITYSDK_OFFSET(0xB70E020)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialInfo_Class_1_23308933DB352218_TypeDefinitionIndex = 80460;

	class RuntimeMaterialInfo_Class_1_23308933DB352218 : public ::System::Object
	{
	public:
		::System::String* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_CLASS_1_23308933DB352218__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_146C418D9570B69E(::MoleMole::Timeline::ColorRecorderUnit* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::ColorRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_CLASS_1_23308933DB352218_METHOD_1_146C418D9570B69E_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_B8683E2090DC0529(::MoleMole::Timeline::FloatRecorderUnit* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::FloatRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_CLASS_1_23308933DB352218_METHOD_1_B8683E2090DC0529_OFFSET))(this, a1);
		}
	};
}
