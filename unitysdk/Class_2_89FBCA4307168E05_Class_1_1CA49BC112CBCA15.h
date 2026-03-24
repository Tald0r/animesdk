#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralSubtitleV2PopWindowController; }
namespace System { class String; }

#define CLASS_2_89FBCA4307168E05_CLASS_1_1CA49BC112CBCA15_METHOD_1_60451B2DE9D371C9_OFFSET UNITYSDK_OFFSET(0x8330DE0)
#define CLASS_2_89FBCA4307168E05_CLASS_1_1CA49BC112CBCA15_METHOD_1_A37F95FE754B38A0_OFFSET UNITYSDK_OFFSET(0x8330BA0)
#define CLASS_2_89FBCA4307168E05_CLASS_1_1CA49BC112CBCA15_METHOD_1_DF349633B15AB0B7_OFFSET UNITYSDK_OFFSET(0x8330870)
#define CLASS_2_89FBCA4307168E05_CLASS_1_1CA49BC112CBCA15__CTOR_OFFSET UNITYSDK_OFFSET(0x8330DD0)

inline static constexpr unsigned int Class_2_89FBCA4307168E05_Class_1_1CA49BC112CBCA15_TypeDefinitionIndex = 53414;

class Class_2_89FBCA4307168E05_Class_1_1CA49BC112CBCA15 : public ::System::Object
{
public:
	static ::MoleMole::UIGeneralSubtitleV2PopWindowController** StaticGet_Field_1_0()
	{
		return (::MoleMole::UIGeneralSubtitleV2PopWindowController**)Il2CppClass::FromTypeDefinitionIndex(Class_2_89FBCA4307168E05_Class_1_1CA49BC112CBCA15_TypeDefinitionIndex)->GetStaticField(0x44B10);
	}
	::MoleMole::UIGeneralSubtitleV2PopWindowController* Field_1_1; // 0x10
	::System::Boolean Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89FBCA4307168E05_CLASS_1_1CA49BC112CBCA15__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DF349633B15AB0B7(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_89FBCA4307168E05_CLASS_1_1CA49BC112CBCA15_METHOD_1_DF349633B15AB0B7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A37F95FE754B38A0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_89FBCA4307168E05_CLASS_1_1CA49BC112CBCA15_METHOD_1_A37F95FE754B38A0_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_60451B2DE9D371C9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_89FBCA4307168E05_CLASS_1_1CA49BC112CBCA15_METHOD_1_60451B2DE9D371C9_OFFSET))(a1);
	}
};
