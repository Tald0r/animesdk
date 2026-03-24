#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_D976BC8B485169A1_METHOD_1_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0xBF85960)
#define CLASS_1_D976BC8B485169A1_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xBF85760)
#define CLASS_1_D976BC8B485169A1_METHOD_1_6E520D7D4D494BBE_OFFSET UNITYSDK_OFFSET(0xBF857A0)
#define CLASS_1_D976BC8B485169A1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBF858B0)
#define CLASS_1_D976BC8B485169A1_METHOD_1_E0E982B55CC933EC_OFFSET UNITYSDK_OFFSET(0xBF85AA0)
#define CLASS_1_D976BC8B485169A1_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBF85490)
#define CLASS_1_D976BC8B485169A1__CTOR_OFFSET UNITYSDK_OFFSET(0xBF856E0)

inline static constexpr unsigned int Class_1_D976BC8B485169A1_TypeDefinitionIndex = 75279;

class Class_1_D976BC8B485169A1 : public ::System::Object
{
public:
	::Il2CppArray<::System::Boolean>* Field_1_19; // 0x10
	::Il2CppArray<::System::Boolean>* Field_1_17; // 0x18
	::Il2CppArray<::System::Boolean>* Field_1_20; // 0x20
	::Il2CppArray<::System::Boolean>* Field_1_18; // 0x28
	::System::String* Field_1_21; // 0x30
	::System::Int32 Field_1_22; // 0x38
	::System::Boolean Field_1_9; // 0x3C
	::System::Byte Field_1_10; // 0x3D
	::System::Boolean Field_1_8; // 0x3E
	::System::Boolean Field_1_13; // 0x3F
	::System::Single Field_1_3; // 0x40
	::System::Boolean Field_1_15; // 0x44
	::System::Boolean Field_1_23; // 0x45
	::System::Boolean Field_1_5; // 0x46
	::System::Boolean Field_1_11; // 0x47
	::UnityEngine::Vector3 Field_1_2; // 0x48
	::UnityEngine::Vector3 Field_1_4; // 0x54
	::System::Boolean Field_1_14; // 0x60
	::System::Boolean Field_1_24; // 0x61
	::System::Boolean Field_1_1; // 0x62
	::System::Boolean Field_1_16; // 0x63
	::UnityEngine::Vector3 Field_1_12; // 0x64
	::System::Single Field_1_0; // 0x70
	::System::Single Field_1_7; // 0x74
	::UnityEngine::Vector2 Field_1_6; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D976BC8B485169A1__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D976BC8B485169A1_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D976BC8B485169A1_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_1_6E520D7D4D494BBE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D976BC8B485169A1_METHOD_1_6E520D7D4D494BBE_OFFSET))(this, a1);
	}

	::System::Void Method_1_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D976BC8B485169A1_METHOD_1_0868EF727040C390_OFFSET))(this);
	}

	::Class_1_D976BC8B485169A1* Method_1_E0E982B55CC933EC(::Class_1_D976BC8B485169A1* a1)
	{
		return ((::Class_1_D976BC8B485169A1*(*)(::PVOID, ::Class_1_D976BC8B485169A1*))((::PBYTE)hIl2Cpp + CLASS_1_D976BC8B485169A1_METHOD_1_E0E982B55CC933EC_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D976BC8B485169A1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
