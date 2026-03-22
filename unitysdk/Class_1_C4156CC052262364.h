#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_DCB43F73A1CE4CEA.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::SceneMark { class StageTweenAnimData; }
namespace System { class String; }

#define CLASS_1_C4156CC052262364_METHOD_1_B35C77B581CCAC4F_OFFSET UNITYSDK_OFFSET(0x9B78C30)
#define CLASS_1_C4156CC052262364__CTOR_OFFSET UNITYSDK_OFFSET(0x9B78BE0)

inline static constexpr unsigned int Class_1_C4156CC052262364_TypeDefinitionIndex = 36891;

class Class_1_C4156CC052262364 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::MoleMole::SceneMark::StageTweenAnimData* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4156CC052262364__CTOR_OFFSET))(this);
	}

	::Struct_2_DCB43F73A1CE4CEA Method_1_B35C77B581CCAC4F()
	{
		return ((::Struct_2_DCB43F73A1CE4CEA(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4156CC052262364_METHOD_1_B35C77B581CCAC4F_OFFSET))(this);
	}
};
