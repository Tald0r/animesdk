#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BaseMonoMaterialEffectAttach.h"

class Class_0_16E4307DCC419505_289;
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYFLOATPROPERTY_METHOD_6_63F96C16B5BA0485_OFFSET UNITYSDK_OFFSET(0xA3B7960)
#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYFLOATPROPERTY_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA3B7DF0)
#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYFLOATPROPERTY_ONATTACH_OFFSET UNITYSDK_OFFSET(0xA3B78F0)
#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYFLOATPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xA3B7E50)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMaterialEffectAttachByFloatProperty_TypeDefinitionIndex = 41189;

	class MonoMaterialEffectAttachByFloatProperty : public ::MoleMole::BaseMonoMaterialEffectAttach
	{
	public:
		::System::String* floatPropertyKey; // 0x20
		::System::Int32 Field_6_1; // 0x28
		::System::Int32 curveIx; // 0x2C
		::Class_0_16E4307DCC419505_289* Field_6_3; // 0x30
		::UnityEngine::Renderer* Field_6_4; // 0x38
		::System::Int32 _materialIndex; // 0x40
		::UnityEngine::Material* Field_6_6; // 0x48
		::System::String* MatName; // 0x50
		::System::Single Field_6_8; // 0x58
		::System::Single Field_6_9; // 0x5C
		::System::Single Factor; // 0x60
		::System::Boolean UseClamp; // 0x64
		::System::Single Min; // 0x68
		::System::Single Max; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYFLOATPROPERTY__CTOR_OFFSET))(this);
		}

		::System::Void OnAttach(::Class_0_16E4307DCC419505_289* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_289*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYFLOATPROPERTY_ONATTACH_OFFSET))(this, a1);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYFLOATPROPERTY_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_6_63F96C16B5BA0485(::Class_0_16E4307DCC419505_289* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_289*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYFLOATPROPERTY_METHOD_6_63F96C16B5BA0485_OFFSET))(this, a1);
		}
	};
}
