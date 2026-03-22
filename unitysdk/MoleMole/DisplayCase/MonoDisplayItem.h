#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_FAB330A19FB8EDA0;

#define MOLEMOLE_DISPLAYCASE_MONODISPLAYITEM_BIND_OFFSET UNITYSDK_OFFSET(0xE0D8890)
#define MOLEMOLE_DISPLAYCASE_MONODISPLAYITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE0D8900)
#define MOLEMOLE_DISPLAYCASE_MONODISPLAYITEM_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xE0D8970)
#define MOLEMOLE_DISPLAYCASE_MONODISPLAYITEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE0D8A00)
#define MOLEMOLE_DISPLAYCASE_MONODISPLAYITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xE0D8AB0)

namespace MoleMole::DisplayCase
{
	inline static constexpr unsigned int MonoDisplayItem_TypeDefinitionIndex = 46311;

	class MonoDisplayItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_FAB330A19FB8EDA0* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYCASE_MONODISPLAYITEM__CTOR_OFFSET))(this);
		}

		::System::Void Bind(::Class_1_FAB330A19FB8EDA0* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FAB330A19FB8EDA0*))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYCASE_MONODISPLAYITEM_BIND_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYCASE_MONODISPLAYITEM_DISPOSE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYCASE_MONODISPLAYITEM_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYCASE_MONODISPLAYITEM_ONDESTROY_OFFSET))(this);
		}
	};
}
