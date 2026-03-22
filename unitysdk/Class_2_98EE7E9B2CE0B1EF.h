#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_545352D1BF1C6114.h"

namespace MoleMole { class UIWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_98EE7E9B2CE0B1EF_METHOD_2_2523B847D801AC07_1_OFFSET UNITYSDK_OFFSET(0x7AF1280)
#define CLASS_2_98EE7E9B2CE0B1EF_METHOD_2_2523B847D801AC07_OFFSET UNITYSDK_OFFSET(0x7AF0D20)
#define CLASS_2_98EE7E9B2CE0B1EF_METHOD_2_69CF2A3D65275141_OFFSET UNITYSDK_OFFSET(0x7AF0C00)
#define CLASS_2_98EE7E9B2CE0B1EF_METHOD_2_8B210B2DE62A79F4_OFFSET UNITYSDK_OFFSET(0x7AF0D90)
#define CLASS_2_98EE7E9B2CE0B1EF_METHOD_2_C4E59810E5712586_OFFSET UNITYSDK_OFFSET(0x7AF08F0)
#define CLASS_2_98EE7E9B2CE0B1EF__CTOR_OFFSET UNITYSDK_OFFSET(0x7AF0C80)

inline static constexpr unsigned int Class_2_98EE7E9B2CE0B1EF_TypeDefinitionIndex = 54435;

class Class_2_98EE7E9B2CE0B1EF : public ::Class_1_545352D1BF1C6114
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98EE7E9B2CE0B1EF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C4E59810E5712586(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_98EE7E9B2CE0B1EF_METHOD_2_C4E59810E5712586_OFFSET))(this, a1);
	}

	::System::Void Method_2_69CF2A3D65275141(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_98EE7E9B2CE0B1EF_METHOD_2_69CF2A3D65275141_OFFSET))(this, a1);
	}

	::System::Void Method_2_2523B847D801AC07(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_98EE7E9B2CE0B1EF_METHOD_2_2523B847D801AC07_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* Method_2_8B210B2DE62A79F4()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98EE7E9B2CE0B1EF_METHOD_2_8B210B2DE62A79F4_OFFSET))(this);
	}

	::System::Void Method_2_2523B847D801AC07_1(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_98EE7E9B2CE0B1EF_METHOD_2_2523B847D801AC07_1_OFFSET))(this, a1);
	}
};
