#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIADATAPORRECTTRANSFORM_COPYPOSITIONFROM_OFFSET UNITYSDK_OFFSET(0xE92A720)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM_GET_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0xE92A700)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM_MARKVALUECHANGE_OFFSET UNITYSDK_OFFSET(0xE92A880)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM_REINITFROMRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xE92A470)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM_SET_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0xE92A710)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0xE92A460)

namespace MoleMole
{
	inline static constexpr unsigned int UIAdataporRectTransform_TypeDefinitionIndex = 43348;

	class UIAdataporRectTransform : public ::System::Object
	{
	public:
		::System::Boolean _valueChanged_k__BackingField; // 0x10
		::UnityEngine::Vector2 anchoredPosition; // 0x14
		::UnityEngine::Quaternion localRotation; // 0x1C
		::UnityEngine::Vector2 anchorMax; // 0x2C
		::UnityEngine::Vector2 anchorMin; // 0x34
		::UnityEngine::Vector2 pivot; // 0x3C
		::UnityEngine::Vector2 offsetMin; // 0x44
		::UnityEngine::Vector3 localScale; // 0x4C
		::UnityEngine::Quaternion rotation; // 0x58
		::UnityEngine::Vector2 offsetMax; // 0x68

		::System::Void _ctor(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM__CTOR_OFFSET))(this, rectTransform);
		}

		::System::Boolean get_valueChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_GET_VALUECHANGED_OFFSET))(this);
		}

		::System::Void set_valueChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_SET_VALUECHANGED_OFFSET))(this, value);
		}

		::System::Boolean ReInitFromRectTransform(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_REINITFROMRECTTRANSFORM_OFFSET))(this, rectTransform);
		}

		::System::Void CopyPositionFrom(::MoleMole::UIAdataporRectTransform* other)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAdataporRectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_COPYPOSITIONFROM_OFFSET))(this, other);
		}

		::System::Void MarkValueChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_MARKVALUECHANGE_OFFSET))(this);
		}
	};
}
