#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class LevelShootGameConfig; }
namespace System { class Action; }

#define CLASS_1_D455A373FEA75DBE_CLASS_1_321E341DFA1924FE_METHOD_1_CBA49921F692D225_OFFSET UNITYSDK_OFFSET(0x701F400)
#define CLASS_1_D455A373FEA75DBE_CLASS_1_321E341DFA1924FE__CTOR_OFFSET UNITYSDK_OFFSET(0x701F3F0)

inline static constexpr unsigned int Class_1_D455A373FEA75DBE_Class_1_321E341DFA1924FE_TypeDefinitionIndex = 59075;

class Class_1_D455A373FEA75DBE_Class_1_321E341DFA1924FE : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D455A373FEA75DBE_CLASS_1_321E341DFA1924FE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CBA49921F692D225(::MoleMole::Config::LevelShootGameConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::LevelShootGameConfig*))((::PBYTE)hIl2Cpp + CLASS_1_D455A373FEA75DBE_CLASS_1_321E341DFA1924FE_METHOD_1_CBA49921F692D225_OFFSET))(this, a1);
	}
};
