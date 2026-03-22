#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MarcelConfig; }
namespace System { class Action; }

#define CLASS_1_1E20D03A87E712A3_CLASS_1_E42C00485AD4C415_METHOD_1_BA49E130C7E2627C_OFFSET UNITYSDK_OFFSET(0x6C0CE40)
#define CLASS_1_1E20D03A87E712A3_CLASS_1_E42C00485AD4C415__CTOR_OFFSET UNITYSDK_OFFSET(0x6C0CE30)

inline static constexpr unsigned int Class_1_1E20D03A87E712A3_Class_1_E42C00485AD4C415_TypeDefinitionIndex = 73446;

class Class_1_1E20D03A87E712A3_Class_1_E42C00485AD4C415 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E20D03A87E712A3_CLASS_1_E42C00485AD4C415__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BA49E130C7E2627C(::MoleMole::MarcelConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MarcelConfig*))((::PBYTE)hIl2Cpp + CLASS_1_1E20D03A87E712A3_CLASS_1_E42C00485AD4C415_METHOD_1_BA49E130C7E2627C_OFFSET))(this, a1);
	}
};
