#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIScriptableAnimSpecialNum; }
namespace System { class Action; }

#define CLASS_1_0E858BB7E45AD41E_CLASS_1_7251425FFE4249BC_METHOD_1_33A6248F9D58C92B_OFFSET UNITYSDK_OFFSET(0x994C870)
#define CLASS_1_0E858BB7E45AD41E_CLASS_1_7251425FFE4249BC__CTOR_OFFSET UNITYSDK_OFFSET(0x994C860)

inline static constexpr unsigned int Class_1_0E858BB7E45AD41E_Class_1_7251425FFE4249BC_TypeDefinitionIndex = 45206;

class Class_1_0E858BB7E45AD41E_Class_1_7251425FFE4249BC : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E858BB7E45AD41E_CLASS_1_7251425FFE4249BC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_33A6248F9D58C92B(::MoleMole::Config::ConfigUIScriptableAnimSpecialNum* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIScriptableAnimSpecialNum*))((::PBYTE)hIl2Cpp + CLASS_1_0E858BB7E45AD41E_CLASS_1_7251425FFE4249BC_METHOD_1_33A6248F9D58C92B_OFFSET))(this, a1);
	}
};
