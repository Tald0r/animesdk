#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UIElements/Length.h"
#include "unitysdk/UnityEngine/UIElements/StyleKeyword.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_UIELEMENTS_STYLELENGTH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x871F20)
#define UNITYENGINE_UIELEMENTS_STYLELENGTH_EQUALS_OFFSET UNITYSDK_OFFSET(0x871EF0)
#define UNITYENGINE_UIELEMENTS_STYLELENGTH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x871F90)
#define UNITYENGINE_UIELEMENTS_STYLELENGTH_GET_KEYWORD_OFFSET UNITYSDK_OFFSET(0x2F1F70)
#define UNITYENGINE_UIELEMENTS_STYLELENGTH_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x871ED0)
#define UNITYENGINE_UIELEMENTS_STYLELENGTH_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x18E84BB0)
#define UNITYENGINE_UIELEMENTS_STYLELENGTH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x871FD0)
#define UNITYENGINE_UIELEMENTS_STYLELENGTH__CTOR_OFFSET UNITYSDK_OFFSET(0x871EE0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleLength_TypeDefinitionIndex = 24571;

	struct alignas(4) StyleLength
	{
		::UnityEngine::UIElements::StyleKeyword m_Keyword; // 0x10
		::UnityEngine::UIElements::Length m_Value; // 0x14
		::System::Int32 m_Specificity; // 0x1C

		::System::Void _ctor(::UnityEngine::UIElements::Length v, ::UnityEngine::UIElements::StyleKeyword keyword)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::StyleKeyword))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLELENGTH__CTOR_OFFSET))(this, v, keyword);
		}

		::UnityEngine::UIElements::Length get_value()
		{
			return ((::UnityEngine::UIElements::Length(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLELENGTH_GET_VALUE_OFFSET))(this);
		}

		::UnityEngine::UIElements::StyleKeyword get_keyword()
		{
			return ((::UnityEngine::UIElements::StyleKeyword(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLELENGTH_GET_KEYWORD_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::UIElements::StyleLength lhs, ::UnityEngine::UIElements::StyleLength rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::UIElements::StyleLength, ::UnityEngine::UIElements::StyleLength))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLELENGTH_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::StyleLength other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::StyleLength))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLELENGTH_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLELENGTH_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLELENGTH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLELENGTH_TOSTRING_OFFSET))(this);
		}
	};
}
