#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_34F7035555410463_1.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_3_FC736D35CB6630AD_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x6613220)
#define CLASS_3_FC736D35CB6630AD_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x66133B0)
#define CLASS_3_FC736D35CB6630AD_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x6613310)
#define CLASS_3_FC736D35CB6630AD_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x6613150)
#define CLASS_3_FC736D35CB6630AD__CCTOR_OFFSET UNITYSDK_OFFSET(0x6613280)
#define CLASS_3_FC736D35CB6630AD__CTOR_OFFSET UNITYSDK_OFFSET(0x6613300)

inline static constexpr unsigned int Class_3_FC736D35CB6630AD_TypeDefinitionIndex = 59420;

class Class_3_FC736D35CB6630AD : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_6 = 0x83; // 0x0
	::System::Single Field_3_1; // 0x48
	::UnityEngine::LayerMask Field_3_3; // 0x4C
	::Enum_3_34F7035555410463_1 Field_3_5; // 0x50
	::UnityEngine::Vector3 Field_3_2; // 0x54
	::System::Single Field_3_0; // 0x60
	::System::Boolean Field_3_4; // 0x64

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_FC736D35CB6630AD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FC736D35CB6630AD__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FC736D35CB6630AD_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FC736D35CB6630AD_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_FC736D35CB6630AD* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_FC736D35CB6630AD*(*)())((::PBYTE)hIl2Cpp + CLASS_3_FC736D35CB6630AD_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FC736D35CB6630AD_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
