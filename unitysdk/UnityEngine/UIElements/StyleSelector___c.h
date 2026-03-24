#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/StyleSelectorPart.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define UNITYENGINE_UIELEMENTS_STYLESELECTOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18E84D70)
#define UNITYENGINE_UIELEMENTS_STYLESELECTOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18E84DB0)
#define UNITYENGINE_UIELEMENTS_STYLESELECTOR___C__TOSTRING_B__10_0_OFFSET UNITYSDK_OFFSET(0x18E84DC0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleSelector___c_TypeDefinitionIndex = 24581;

	class StyleSelector___c : public ::System::Object
	{
	public:
		static ::UnityEngine::UIElements::StyleSelector___c** StaticGet___9()
		{
			return (::UnityEngine::UIElements::StyleSelector___c**)Il2CppClass::FromTypeDefinitionIndex(StyleSelector___c_TypeDefinitionIndex)->GetStaticField(0x1DE70);
		}
		static ::System::Func_2<::UnityEngine::UIElements::StyleSelectorPart, ::System::String*>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::UnityEngine::UIElements::StyleSelectorPart, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StyleSelector___c_TypeDefinitionIndex)->GetStaticField(0x1DE78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTOR___C__CTOR_OFFSET))(this);
		}

		::System::String* _ToString_b__10_0(::UnityEngine::UIElements::StyleSelectorPart p)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::UIElements::StyleSelectorPart))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTOR___C__TOSTRING_B__10_0_OFFSET))(this, p);
		}
	};
}
