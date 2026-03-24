#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E36C894DCA3F304A.h"
#include "unitysdk/MoleMole/MiniGame/TartarusHounds/MonoHoundLaserItem_Enum_3_086341004015E6AB.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D5F08B6364839D11;
namespace MoleMole::MiniGame::TartarusHounds::View { class ViewEntityGame; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_ADDTOPARENT_OFFSET UNITYSDK_OFFSET(0xA39D920)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_ADJUSTSIZE_OFFSET UNITYSDK_OFFSET(0xA39DB60)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0xA39D630)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_ENDPLAY_OFFSET UNITYSDK_OFFSET(0xA39DD30)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_GETLASERTYPE_OFFSET UNITYSDK_OFFSET(0xA39E7C0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_INIT_OFFSET UNITYSDK_OFFSET(0xA39DA40)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_ISFINISH_OFFSET UNITYSDK_OFFSET(0xA39E100)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_METHOD_5_1574908898F38FFE_OFFSET UNITYSDK_OFFSET(0xA39E370)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xA39E220)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_STARTEMISSION_OFFSET UNITYSDK_OFFSET(0xA39E610)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_STARTPLAY_OFFSET UNITYSDK_OFFSET(0xA39DBC0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_TICKPLAYSTATE_OFFSET UNITYSDK_OFFSET(0xA39DEA0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_TICKPOSITION_OFFSET UNITYSDK_OFFSET(0xA39E170)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xA39E850)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA39E820)

namespace MoleMole::MiniGame::TartarusHounds
{
	inline static constexpr unsigned int MonoHoundLaserItem_TypeDefinitionIndex = 46435;

	class MonoHoundLaserItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_warnAnimation()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoHoundLaserItem_TypeDefinitionIndex)->GetStaticField(0x3EE80);
		}
		static ::System::String** StaticGet_loopAnimation()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoHoundLaserItem_TypeDefinitionIndex)->GetStaticField(0x3EE88);
		}
		static ::System::String** StaticGet_startAnimation()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoHoundLaserItem_TypeDefinitionIndex)->GetStaticField(0x3EE90);
		}
		static ::System::String** StaticGet_endAnimation()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoHoundLaserItem_TypeDefinitionIndex)->GetStaticField(0x3EE98);
		}
		::UnityEngine::GameObject* warnRoot; // 0x18
		::UnityEngine::GameObject* activeRoot; // 0x20
		::Enum_3_E36C894DCA3F304A Field_5_2; // 0x28
		::System::Int32 Field_5_3; // 0x2C
		::UnityEngine::RectTransform* Field_5_4; // 0x30
		::UnityEngine::RectTransform* Field_5_5; // 0x38
		::System::Boolean Field_5_6; // 0x40
		::UnityEngine::Animation* Field_5_7; // 0x48
		::MoleMole::MiniGame::TartarusHounds::MonoHoundLaserItem_Enum_3_086341004015E6AB Field_5_8; // 0x50
		::System::Single Field_5_13; // 0x54
		::System::Single Field_5_14; // 0x58
		::System::Single Field_5_15; // 0x5C
		::System::Single Field_5_16; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_AWAKE_OFFSET))(this);
		}

		::System::Void AddToParent(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_ADDTOPARENT_OFFSET))(this, a1);
		}

		::System::Void Init(::Enum_3_E36C894DCA3F304A a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_E36C894DCA3F304A, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void AdjustSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_ADJUSTSIZE_OFFSET))(this);
		}

		::System::Void StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_STARTPLAY_OFFSET))(this);
		}

		::System::Void EndPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_ENDPLAY_OFFSET))(this);
		}

		::System::Void TickPlayState(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_TICKPLAYSTATE_OFFSET))(this, a1);
		}

		::System::Boolean IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_ISFINISH_OFFSET))(this);
		}

		::System::Void TickPosition(::Class_1_D5F08B6364839D11* a1, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* a2, ::UnityEngine::Camera* a3, ::UnityEngine::Camera* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D5F08B6364839D11*, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame*, ::UnityEngine::Camera*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_TICKPOSITION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetPosition(::UnityEngine::Camera* a1, ::UnityEngine::Camera* a2, ::Class_1_D5F08B6364839D11* a3, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Camera*, ::Class_1_D5F08B6364839D11*, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_SETPOSITION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void StartEmission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_STARTEMISSION_OFFSET))(this);
		}

		::Enum_3_E36C894DCA3F304A GetLaserType()
		{
			return ((::Enum_3_E36C894DCA3F304A(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_GETLASERTYPE_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_5_1574908898F38FFE(::UnityEngine::Camera* a1, ::UnityEngine::Camera* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Camera*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDLASERITEM_METHOD_5_1574908898F38FFE_OFFSET))(this, a1, a2, a3);
		}
	};
}
