#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInputFieldEx; }
namespace MoleMole { class UIInputFieldEx_Class_1_640B090AA43C41B2; }
namespace System { class String; }

#define CLASS_1_F29C68BEB3C6B152_CLASS_1_12B792606E2802AA_METHOD_1_FA7C81FA06FE7180_OFFSET UNITYSDK_OFFSET(0x7BBDDE0)
#define CLASS_1_F29C68BEB3C6B152_CLASS_1_12B792606E2802AA__CTOR_OFFSET UNITYSDK_OFFSET(0x7BBDDD0)

inline static constexpr unsigned int Class_1_F29C68BEB3C6B152_Class_1_12B792606E2802AA_TypeDefinitionIndex = 74266;

class Class_1_F29C68BEB3C6B152_Class_1_12B792606E2802AA : public ::System::Object
{
public:
	::MoleMole::UIInputFieldEx* Field_1_0; // 0x10
	::MoleMole::UIInputFieldEx_Class_1_640B090AA43C41B2* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_12B792606E2802AA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FA7C81FA06FE7180(::MoleMole::UIInputFieldEx* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInputFieldEx*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_12B792606E2802AA_METHOD_1_FA7C81FA06FE7180_OFFSET))(this, a1, a2);
	}
};
