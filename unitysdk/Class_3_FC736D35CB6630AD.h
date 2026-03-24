#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_34F7035555410463_2.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_3_FC736D35CB6630AD_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x902CEA0)
#define CLASS_3_FC736D35CB6630AD_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x902CF90)
#define CLASS_3_FC736D35CB6630AD_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x902CFF0)
#define CLASS_3_FC736D35CB6630AD_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x902CDD0)
#define CLASS_3_FC736D35CB6630AD__CCTOR_OFFSET UNITYSDK_OFFSET(0x902CF00)
#define CLASS_3_FC736D35CB6630AD__CTOR_OFFSET UNITYSDK_OFFSET(0x902CF80)

inline static constexpr unsigned int Class_3_FC736D35CB6630AD_TypeDefinitionIndex = 68220;

class Class_3_FC736D35CB6630AD : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_6 = 0x83; // 0x0
	::System::Single Field_3_1; // 0x48
	::System::Boolean Field_3_4; // 0x4C
	::System::Single Field_3_0; // 0x50
	::Enum_3_34F7035555410463_2 Field_3_5; // 0x54
	::UnityEngine::Vector3 Field_3_2; // 0x58
	::UnityEngine::LayerMask Field_3_3; // 0x64

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

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FC736D35CB6630AD_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_FC736D35CB6630AD* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_FC736D35CB6630AD*(*)())((::PBYTE)hIl2Cpp + CLASS_3_FC736D35CB6630AD_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
