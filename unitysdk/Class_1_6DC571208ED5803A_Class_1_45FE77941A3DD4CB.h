#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCharacterAimMode; }
namespace System { class Action; }

#define CLASS_1_6DC571208ED5803A_CLASS_1_45FE77941A3DD4CB_METHOD_1_FD3E421B18446459_OFFSET UNITYSDK_OFFSET(0x5E9A880)
#define CLASS_1_6DC571208ED5803A_CLASS_1_45FE77941A3DD4CB__CTOR_OFFSET UNITYSDK_OFFSET(0x5E9A870)

inline static constexpr unsigned int Class_1_6DC571208ED5803A_Class_1_45FE77941A3DD4CB_TypeDefinitionIndex = 43709;

class Class_1_6DC571208ED5803A_Class_1_45FE77941A3DD4CB : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DC571208ED5803A_CLASS_1_45FE77941A3DD4CB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FD3E421B18446459(::MoleMole::Config::ConfigCharacterAimMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCharacterAimMode*))((::PBYTE)hIl2Cpp + CLASS_1_6DC571208ED5803A_CLASS_1_45FE77941A3DD4CB_METHOD_1_FD3E421B18446459_OFFSET))(this, a1);
	}
};
