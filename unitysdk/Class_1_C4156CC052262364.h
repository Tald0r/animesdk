#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_585AD5687A2E3B86.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::SceneMark { class StageTweenAnimData; }
namespace System { class String; }

#define CLASS_1_C4156CC052262364_METHOD_1_B35C77B581CCAC4F_OFFSET UNITYSDK_OFFSET(0x77BC6A0)
#define CLASS_1_C4156CC052262364__CTOR_OFFSET UNITYSDK_OFFSET(0x77BC650)

inline static constexpr unsigned int Class_1_C4156CC052262364_TypeDefinitionIndex = 38158;

class Class_1_C4156CC052262364 : public ::System::Object
{
public:
	::MoleMole::SceneMark::StageTweenAnimData* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4156CC052262364__CTOR_OFFSET))(this);
	}

	::Struct_2_585AD5687A2E3B86 Method_1_B35C77B581CCAC4F()
	{
		return ((::Struct_2_585AD5687A2E3B86(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4156CC052262364_METHOD_1_B35C77B581CCAC4F_OFFSET))(this);
	}
};
