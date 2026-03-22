#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityUnderlyingAnimEvents; }
namespace System { class Action; }

#define CLASS_1_10FEEAE9D3BD65B7_CLASS_1_E1E2531814DFD4F2_METHOD_1_A0AD3BA7CED11CCC_OFFSET UNITYSDK_OFFSET(0x9970B50)
#define CLASS_1_10FEEAE9D3BD65B7_CLASS_1_E1E2531814DFD4F2__CTOR_OFFSET UNITYSDK_OFFSET(0x9970B40)

inline static constexpr unsigned int Class_1_10FEEAE9D3BD65B7_Class_1_E1E2531814DFD4F2_TypeDefinitionIndex = 59862;

class Class_1_10FEEAE9D3BD65B7_Class_1_E1E2531814DFD4F2 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::Foundation::AssetPath Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10FEEAE9D3BD65B7_CLASS_1_E1E2531814DFD4F2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A0AD3BA7CED11CCC(::MoleMole::Config::ConfigEntityUnderlyingAnimEvents* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityUnderlyingAnimEvents*))((::PBYTE)hIl2Cpp + CLASS_1_10FEEAE9D3BD65B7_CLASS_1_E1E2531814DFD4F2_METHOD_1_A0AD3BA7CED11CCC_OFFSET))(this, a1);
	}
};
