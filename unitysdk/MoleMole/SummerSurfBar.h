#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class MonoChaserConfig; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_SUMMERSURFBAR_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x6B20C40)
#define MOLEMOLE_SUMMERSURFBAR_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x6B20F50)
#define MOLEMOLE_SUMMERSURFBAR_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x6B20C50)
#define MOLEMOLE_SUMMERSURFBAR_SETPERCENT_OFFSET UNITYSDK_OFFSET(0x6B20E50)
#define MOLEMOLE_SUMMERSURFBAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x6B21500)
#define MOLEMOLE_SUMMERSURFBAR__CTOR_OFFSET UNITYSDK_OFFSET(0x6B214F0)
#define MOLEMOLE_SUMMERSURFBAR___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x6B21540)

namespace MoleMole
{
	inline static constexpr unsigned int SummerSurfBar_TypeDefinitionIndex = 67172;

	class SummerSurfBar : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Int32* StaticGet_WaveHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SummerSurfBar_TypeDefinitionIndex)->GetStaticField(0xC3B0);
		}
		::UnityEngine::Vector2 _lastPosition; // 0x2F8
		::UnityEngine::CanvasGroup* _canvasGroup; // 0x300
		::System::UInt32 _entity; // 0x308
		::System::Single _value; // 0x30C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSURFBAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSURFBAR__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSURFBAR_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* baseContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSURFBAR_ONUIOPEN_OFFSET))(this, baseContext);
		}

		::System::Void SetPercent(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSURFBAR_SETPERCENT_OFFSET))(this, value);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSURFBAR_LATEUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSURFBAR___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
