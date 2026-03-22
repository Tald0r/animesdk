#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_E4DCFD174698F990;
class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_D7F5981936CE8407_METHOD_3_3574512695A597AB_OFFSET UNITYSDK_OFFSET(0x93C2B50)
#define CLASS_3_D7F5981936CE8407_METHOD_3_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x93C3150)
#define CLASS_3_D7F5981936CE8407_METHOD_3_65EC73288BE5333B_OFFSET UNITYSDK_OFFSET(0x93C2A00)
#define CLASS_3_D7F5981936CE8407_METHOD_3_C43DD7AFEEA2B827_OFFSET UNITYSDK_OFFSET(0x93C31E0)
#define CLASS_3_D7F5981936CE8407_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x93C3C30)
#define CLASS_3_D7F5981936CE8407_METHOD_3_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x93C3C90)
#define CLASS_3_D7F5981936CE8407__CTOR_OFFSET UNITYSDK_OFFSET(0x93C3920)

inline static constexpr unsigned int Class_3_D7F5981936CE8407_TypeDefinitionIndex = 73716;

class Class_3_D7F5981936CE8407 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_10; // 0x18
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x20
	::Class_4_179456445C225AB4<::Foundation::ViewObject::ViewObjectHandle>* Field_3_3; // 0x28
	::Class_4_179456445C225AB4<::System::Collections::Generic::List_1<::System::String*>*>* Field_3_2; // 0x30
	::Class_4_179456445C225AB4<::System::String*>* Field_3_4; // 0x38
	::Class_4_AF61EEC11F34483C<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* Field_3_9; // 0x40
	::Class_4_179456445C225AB4<::UnityEngine::Vector3>* Field_3_5; // 0x48
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_8; // 0x50
	::Class_4_179456445C225AB4<::System::String*>* Field_3_6; // 0x58
	::Class_4_179456445C225AB4<::System::String*>* Field_3_1; // 0x60
	::Class_4_179456445C225AB4<::UnityEngine::Vector3>* Field_3_7; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D7F5981936CE8407__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_65EC73288BE5333B(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_3_D7F5981936CE8407_METHOD_3_65EC73288BE5333B_OFFSET))(this, a1);
	}

	::System::Void Method_3_3574512695A597AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D7F5981936CE8407_METHOD_3_3574512695A597AB_OFFSET))(this);
	}

	::System::Void Method_3_3F0F9592A0E917D4(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_D7F5981936CE8407_METHOD_3_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_3_C43DD7AFEEA2B827(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_D7F5981936CE8407_METHOD_3_C43DD7AFEEA2B827_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D7F5981936CE8407_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_E9A575D18A0748D9(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_3_D7F5981936CE8407_METHOD_3_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};
