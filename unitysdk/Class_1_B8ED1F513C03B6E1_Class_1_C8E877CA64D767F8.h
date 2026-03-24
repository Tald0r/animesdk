#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIScripts; }
namespace System { class Action; }

#define CLASS_1_B8ED1F513C03B6E1_CLASS_1_C8E877CA64D767F8_METHOD_1_50FA2D967F9BA8E6_OFFSET UNITYSDK_OFFSET(0x9C62090)
#define CLASS_1_B8ED1F513C03B6E1_CLASS_1_C8E877CA64D767F8__CTOR_OFFSET UNITYSDK_OFFSET(0x9C62080)

inline static constexpr unsigned int Class_1_B8ED1F513C03B6E1_Class_1_C8E877CA64D767F8_TypeDefinitionIndex = 74805;

class Class_1_B8ED1F513C03B6E1_Class_1_C8E877CA64D767F8 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8ED1F513C03B6E1_CLASS_1_C8E877CA64D767F8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_50FA2D967F9BA8E6(::MoleMole::ConfigUIScripts* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIScripts*))((::PBYTE)hIl2Cpp + CLASS_1_B8ED1F513C03B6E1_CLASS_1_C8E877CA64D767F8_METHOD_1_50FA2D967F9BA8E6_OFFSET))(this, a1);
	}
};
