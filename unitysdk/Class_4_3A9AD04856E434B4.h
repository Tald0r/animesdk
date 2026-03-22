#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_BF86F633CB1E0F0F.h"

namespace MoleMole::Config { class ConfigCurveCtrlMatAlphaNode; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define CLASS_4_3A9AD04856E434B4_METHOD_4_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x75B19B0)
#define CLASS_4_3A9AD04856E434B4_METHOD_4_D76278A00534DA4F_OFFSET UNITYSDK_OFFSET(0x75B1770)
#define CLASS_4_3A9AD04856E434B4_METHOD_4_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x75B16B0)
#define CLASS_4_3A9AD04856E434B4__CTOR_OFFSET UNITYSDK_OFFSET(0x75B1B90)

inline static constexpr unsigned int Class_4_3A9AD04856E434B4_TypeDefinitionIndex = 63520;

class Class_4_3A9AD04856E434B4 : public ::Class_3_BF86F633CB1E0F0F
{
public:
	::System::String* Field_4_2; // 0x48
	::MoleMole::Config::ConfigCurveCtrlMatAlphaNode* Field_4_0; // 0x50
	::Il2CppArray<::UnityEngine::Material*>* Field_4_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3A9AD04856E434B4__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3A9AD04856E434B4_METHOD_4_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_4_D76278A00534DA4F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3A9AD04856E434B4_METHOD_4_D76278A00534DA4F_OFFSET))(this);
	}

	::System::Void Method_4_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3A9AD04856E434B4_METHOD_4_BF5E2DCAE0BF038A_OFFSET))(this);
	}
};
