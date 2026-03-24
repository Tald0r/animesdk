#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2B6FF80CD0ED409A.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Component; }

#define MOLEMOLE_UICOLORTWEAKERTARGET_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x3A1DA0)
#define MOLEMOLE_UICOLORTWEAKERTARGET_METHOD_2_A3498101DD7F0539_OFFSET UNITYSDK_OFFSET(0xADC1E60)
#define MOLEMOLE_UICOLORTWEAKERTARGET_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x3A1D20)
#define MOLEMOLE_UICOLORTWEAKERTARGET_METHOD_2_CFE4DF658F81C59C_OFFSET UNITYSDK_OFFSET(0x3A1E30)

namespace MoleMole
{
	inline static constexpr unsigned int UIColorTweakerTarget_TypeDefinitionIndex = 38161;

	struct alignas(8) UIColorTweakerTarget
	{
		::UnityEngine::Component* target; // 0x10
		::Enum_3_2B6FF80CD0ED409A type; // 0x18

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGET_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_2_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGET_METHOD_2_4343F372F34C05BF_OFFSET))(this);
		}

		/*
		static ::System::ValueTuple_2<::UnityEngine::Component*, ::Enum_3_2B6FF80CD0ED409A> Method_2_A3498101DD7F0539(::UnityEngine::Component* a1)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Component*, ::Enum_3_2B6FF80CD0ED409A>(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGET_METHOD_2_A3498101DD7F0539_OFFSET))(a1);
		}
		*/

		/*
		::UnityEngine::Color Method_2_CFE4DF658F81C59C()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGET_METHOD_2_CFE4DF658F81C59C_OFFSET))(this);
		}
		*/
	};
}
