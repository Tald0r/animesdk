#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class Vector4RecorderUnit; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_CLASS_1_E59F69B0A936330B_METHOD_1_F6E4788014D5CA94_OFFSET UNITYSDK_OFFSET(0xA67BCA0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_CLASS_1_E59F69B0A936330B__CTOR_OFFSET UNITYSDK_OFFSET(0xA674230)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialInfo_Class_1_E59F69B0A936330B_TypeDefinitionIndex = 80459;

	class RuntimeMaterialInfo_Class_1_E59F69B0A936330B : public ::System::Object
	{
	public:
		::System::String* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_CLASS_1_E59F69B0A936330B__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_F6E4788014D5CA94(::MoleMole::Timeline::Vector4RecorderUnit* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::Vector4RecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_CLASS_1_E59F69B0A936330B_METHOD_1_F6E4788014D5CA94_OFFSET))(this, a1);
		}
	};
}
