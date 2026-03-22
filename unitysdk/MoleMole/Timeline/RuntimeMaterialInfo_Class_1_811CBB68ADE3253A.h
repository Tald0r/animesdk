#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class FloatRecorderUnit; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_CLASS_1_811CBB68ADE3253A_METHOD_1_340A33D1E251D505_OFFSET UNITYSDK_OFFSET(0x9ADDE20)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_CLASS_1_811CBB68ADE3253A__CTOR_OFFSET UNITYSDK_OFFSET(0x9ADDE10)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialInfo_Class_1_811CBB68ADE3253A_TypeDefinitionIndex = 73537;

	class RuntimeMaterialInfo_Class_1_811CBB68ADE3253A : public ::System::Object
	{
	public:
		::MoleMole::Timeline::FloatRecorderUnit* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_CLASS_1_811CBB68ADE3253A__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_340A33D1E251D505(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_CLASS_1_811CBB68ADE3253A_METHOD_1_340A33D1E251D505_OFFSET))(this, a1);
		}
	};
}
