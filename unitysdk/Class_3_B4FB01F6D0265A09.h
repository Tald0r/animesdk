#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_208CC9941471731A_478;
namespace System { class String; }

#define CLASS_3_B4FB01F6D0265A09_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x6A35370)
#define CLASS_3_B4FB01F6D0265A09_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x6A35460)
#define CLASS_3_B4FB01F6D0265A09_METHOD_3_C560AC67CF346DCB_OFFSET UNITYSDK_OFFSET(0x6A35560)
#define CLASS_3_B4FB01F6D0265A09_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x6A354C0)
#define CLASS_3_B4FB01F6D0265A09_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x6A352E0)
#define CLASS_3_B4FB01F6D0265A09__CCTOR_OFFSET UNITYSDK_OFFSET(0x6A353D0)
#define CLASS_3_B4FB01F6D0265A09__CTOR_OFFSET UNITYSDK_OFFSET(0x6A35450)

inline static constexpr unsigned int Class_3_B4FB01F6D0265A09_TypeDefinitionIndex = 61196;

class Class_3_B4FB01F6D0265A09 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_11 = 0x7B; // 0x0
	::System::String* Field_3_7; // 0x48
	::Class_2_208CC9941471731A_478* Field_3_9; // 0x50
	::System::String* Field_3_4; // 0x58
	::System::String* Field_3_8; // 0x60
	::UnityEngine::Vector3 Field_3_5; // 0x68
	::UnityEngine::Vector3 Field_3_6; // 0x74
	::UnityEngine::Vector3 Field_3_0; // 0x80
	::UnityEngine::Vector3 Field_3_1; // 0x8C
	::System::Boolean Field_3_3; // 0x98
	::UnityEngine::Vector3 Field_3_2; // 0x9C
	::System::UInt32 Field_3_10; // 0xA8

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B4FB01F6D0265A09__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B4FB01F6D0265A09__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B4FB01F6D0265A09_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B4FB01F6D0265A09_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B4FB01F6D0265A09_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_B4FB01F6D0265A09* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_B4FB01F6D0265A09*(*)())((::PBYTE)hIl2Cpp + CLASS_3_B4FB01F6D0265A09_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_C560AC67CF346DCB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B4FB01F6D0265A09_METHOD_3_C560AC67CF346DCB_OFFSET))(this, a1);
	}
};
