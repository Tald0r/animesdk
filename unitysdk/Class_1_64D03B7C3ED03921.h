#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoEffectPluginTransform; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }

#define CLASS_1_64D03B7C3ED03921_METHOD_1_70A0E28BE3CC26B8_OFFSET UNITYSDK_OFFSET(0xB3392C0)
#define CLASS_1_64D03B7C3ED03921_METHOD_1_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0xB339430)
#define CLASS_1_64D03B7C3ED03921_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB339250)
#define CLASS_1_64D03B7C3ED03921__CTOR_OFFSET UNITYSDK_OFFSET(0xB339240)

inline static constexpr unsigned int Class_1_64D03B7C3ED03921_TypeDefinitionIndex = 54542;

class Class_1_64D03B7C3ED03921 : public ::System::Object
{
public:
	::MoleMole::MonoEffectPluginTransform* Field_1_1; // 0x10
	::UnityEngine::Animation* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64D03B7C3ED03921__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64D03B7C3ED03921_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_1_70A0E28BE3CC26B8(::Class_1_64D03B7C3ED03921* a1)
	{
		return ((::System::Void(*)(::Class_1_64D03B7C3ED03921*))((::PBYTE)hIl2Cpp + CLASS_1_64D03B7C3ED03921_METHOD_1_70A0E28BE3CC26B8_OFFSET))(a1);
	}

	static ::Class_1_64D03B7C3ED03921* Method_1_B64C60973842FE45()
	{
		return ((::Class_1_64D03B7C3ED03921*(*)())((::PBYTE)hIl2Cpp + CLASS_1_64D03B7C3ED03921_METHOD_1_B64C60973842FE45_OFFSET))();
	}
};
