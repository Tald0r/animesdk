#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_4F34F04E729C90F2_METHOD_3_3574512695A597AB_OFFSET UNITYSDK_OFFSET(0xB9EA1E0)
#define CLASS_3_4F34F04E729C90F2_METHOD_3_47125C76AFDB961E_OFFSET UNITYSDK_OFFSET(0xB9EA7E0)
#define CLASS_3_4F34F04E729C90F2_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB9EAF80)
#define CLASS_3_4F34F04E729C90F2__CTOR_OFFSET UNITYSDK_OFFSET(0xB9EAC70)

inline static constexpr unsigned int Class_3_4F34F04E729C90F2_TypeDefinitionIndex = 57708;

class Class_3_4F34F04E729C90F2 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x18
	::Class_4_179456445C225AB4<::System::String*>* Field_3_2; // 0x20
	::Class_4_179456445C225AB4<::System::String*>* Field_3_1; // 0x28
	::Class_3_B537A0AA78803363* Field_3_10; // 0x30
	::Class_4_179456445C225AB4<::UnityEngine::Vector3>* Field_3_5; // 0x38
	::Class_4_179456445C225AB4<::System::Boolean>* Field_3_8; // 0x40
	::Class_4_179456445C225AB4<::System::Boolean>* Field_3_4; // 0x48
	::Class_4_179456445C225AB4<::System::String*>* Field_3_3; // 0x50
	::Class_4_179456445C225AB4<::System::Single>* Field_3_9; // 0x58
	::Class_4_179456445C225AB4<::System::Boolean>* Field_3_6; // 0x60
	::Class_4_179456445C225AB4<::System::Single>* Field_3_7; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F34F04E729C90F2__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_3574512695A597AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F34F04E729C90F2_METHOD_3_3574512695A597AB_OFFSET))(this);
	}

	::System::Void Method_3_47125C76AFDB961E(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_4F34F04E729C90F2_METHOD_3_47125C76AFDB961E_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F34F04E729C90F2_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
