#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BaseMonoMaterialEffectAttach.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_0_16E4307DCC419505_303;
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYCOLORPROPERTY_METHOD_6_63F96C16B5BA0485_OFFSET UNITYSDK_OFFSET(0x6E42160)
#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYCOLORPROPERTY_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6E42610)
#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYCOLORPROPERTY_ONATTACH_OFFSET UNITYSDK_OFFSET(0x6E420F0)
#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYCOLORPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x6E42670)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMaterialEffectAttachByColorProperty_TypeDefinitionIndex = 70766;

	class MonoMaterialEffectAttachByColorProperty : public ::MoleMole::BaseMonoMaterialEffectAttach
	{
	public:
		::System::String* floatPropertyKey; // 0x20
		::System::Int32 Field_6_1; // 0x28
		::System::Int32 curveIx; // 0x2C
		::Class_0_16E4307DCC419505_303* Field_6_3; // 0x30
		::UnityEngine::Renderer* Field_6_4; // 0x38
		::System::Int32 _materialIndex; // 0x40
		::UnityEngine::Material* Field_6_6; // 0x48
		::System::String* MatName; // 0x50
		::UnityEngine::Color Field_6_8; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYCOLORPROPERTY__CTOR_OFFSET))(this);
		}

		::System::Void OnAttach(::Class_0_16E4307DCC419505_303* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_303*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYCOLORPROPERTY_ONATTACH_OFFSET))(this, a1);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYCOLORPROPERTY_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_6_63F96C16B5BA0485(::Class_0_16E4307DCC419505_303* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_303*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYCOLORPROPERTY_METHOD_6_63F96C16B5BA0485_OFFSET))(this, a1);
		}
	};
}
