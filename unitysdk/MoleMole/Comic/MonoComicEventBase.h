#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ComicImgPart.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Timeline { class ComicEventBase; }

#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x62299E0)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_ENDPLAY_OFFSET UNITYSDK_OFFSET(0x622A480)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_GETFADEINANIMTIME_OFFSET UNITYSDK_OFFSET(0x622A420)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_INITWITHBASE_OFFSET UNITYSDK_OFFSET(0x6229B50)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_ISAUTOFINISH_OFFSET UNITYSDK_OFFSET(0x622A2A0)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_ISDELAYING_OFFSET UNITYSDK_OFFSET(0x622A120)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_ISFINISH_OFFSET UNITYSDK_OFFSET(0x622A220)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x622A1A0)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x6229D50)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_7E692C4823C131A7_OFFSET UNITYSDK_OFFSET(0x6229E30)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x6229A50)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x62299D0)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x622A620)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x622A580)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x62299C0)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_F2D473764762AC90_OFFSET UNITYSDK_OFFSET(0x6229DC0)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_PLAYFADEINANIM_OFFSET UNITYSDK_OFFSET(0x622A3C0)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x622A4E0)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x6229FB0)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_SETPARENT_OFFSET UNITYSDK_OFFSET(0x6229EA0)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_STARTPLAY_OFFSET UNITYSDK_OFFSET(0x622A360)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_UPDATETIME_OFFSET UNITYSDK_OFFSET(0x622A0B0)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x622A560)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int MonoComicEventBase_TypeDefinitionIndex = 36603;

	class MonoComicEventBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* Field_5_0; // 0x18
		::UnityEngine::RectTransform* Field_5_1; // 0x20
		::System::Boolean Field_5_2; // 0x28
		::System::Boolean Field_5_3; // 0x29
		::System::Single Field_5_4; // 0x2C
		::System::Action* callbackFunc; // 0x30
		::System::String* Field_5_6; // 0x38
		::MoleMole::ComicImgPart belongPart; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* LogicTags; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_5_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Void Method_5_C74E50CBD41F0264(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_C74E50CBD41F0264_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_AWAKE_OFFSET))(this);
		}

		::System::Void InitWithBase(::UnityEngine::Timeline::ComicEventBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ComicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_INITWITHBASE_OFFSET))(this, a1);
		}

		::System::Void SetParent(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_SETPARENT_OFFSET))(this, a1);
		}

		::System::Void SetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_SETACTIVE_OFFSET))(this, a1);
		}

		::System::Void UpdateTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_UPDATETIME_OFFSET))(this, a1);
		}

		::System::Boolean IsDelaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_ISDELAYING_OFFSET))(this);
		}

		::System::Boolean IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_ISFINISH_OFFSET))(this);
		}

		::System::Boolean IsAutoFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_ISAUTOFINISH_OFFSET))(this);
		}

		::System::Void StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_STARTPLAY_OFFSET))(this);
		}

		::System::Void PlayFadeInAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_PLAYFADEINANIM_OFFSET))(this);
		}

		::System::Single GetFadeInAnimTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_GETFADEINANIMTIME_OFFSET))(this);
		}

		::System::Void EndPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_ENDPLAY_OFFSET))(this);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void Method_5_7E692C4823C131A7(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_7E692C4823C131A7_OFFSET))(this, a1);
		}

		::System::Void Method_5_F2D473764762AC90(::MoleMole::ComicImgPart a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ComicImgPart))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_F2D473764762AC90_OFFSET))(this, a1);
		}

		::System::Void Method_5_D0CD9A971CA3B1CF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_D0CD9A971CA3B1CF_OFFSET))(this);
		}

		::System::Void Method_5_C561FF611C07A44C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_C561FF611C07A44C_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_050E70FEDB783306(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_METHOD_5_050E70FEDB783306_OFFSET))(this, a1);
		}
	};
}
