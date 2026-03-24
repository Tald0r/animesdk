#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Comic/MonoComicKeyEventBase.h"
#include "unitysdk/MoleMole/ComicImgPart.h"

namespace MoleMole { class ComicImgStyle; }
namespace MoleMole { class ComicPartInfo; }
namespace MoleMole { class ComicScreenInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Timeline { class ImgSplitScreenGroupPlayableAsset_SpriteItem; }
namespace UnityEngine::Timeline { class SplitScreenEvent; }
namespace UnityEngine::Timeline { class SplitScreenEvent_CustomImgPosModifyInfo; }

#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_AWAKE_OFFSET UNITYSDK_OFFSET(0xCACA810)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_GETBGNODESBYLOCATION_OFFSET UNITYSDK_OFFSET(0xCACD290)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_GETIMGDECOROOT_OFFSET UNITYSDK_OFFSET(0xCACEA00)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_GETIMGMOVEVECTORWHENSPLITSCREEN_OFFSET UNITYSDK_OFFSET(0xCACE910)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_GETIMGOBJBYPART_OFFSET UNITYSDK_OFFSET(0xCACCA00)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_GET_ASSETPATH_OFFSET UNITYSDK_OFFSET(0xCACA7F0)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_GET_SELFGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xCACC730)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_GET_SELFRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xCACC810)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_INITBYSTYLECONFIG_OFFSET UNITYSDK_OFFSET(0xCACBDF0)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_ISPLAYINGANIMATION_OFFSET UNITYSDK_OFFSET(0xCACD410)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_METHOD_7_20B279F6D0EB86A9_OFFSET UNITYSDK_OFFSET(0xCACEE30)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_METHOD_7_2D0434B81DC32083_OFFSET UNITYSDK_OFFSET(0xCACEF40)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_METHOD_7_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0xCACDCA0)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_METHOD_7_40CBD6FA418D8BFD_OFFSET UNITYSDK_OFFSET(0xCACEAA0)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_METHOD_7_41782CE468D1B24D_OFFSET UNITYSDK_OFFSET(0xCACB590)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_METHOD_7_62DABBB79241EF26_OFFSET UNITYSDK_OFFSET(0xCACEB50)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_METHOD_7_84D0BB0CCF9E43EA_OFFSET UNITYSDK_OFFSET(0xCACBA20)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_METHOD_7_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0xCACD800)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_METHOD_7_9C2166EC68C0CC08_OFFSET UNITYSDK_OFFSET(0xCACBE80)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_METHOD_7_ED1605BD4E0F2236_OFFSET UNITYSDK_OFFSET(0xCACBC70)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCACC990)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_RECORDNODESFORCURTAIN_OFFSET UNITYSDK_OFFSET(0xCACE220)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_RESETCURTAINSTATETODEFAULT_OFFSET UNITYSDK_OFFSET(0xCACE500)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0xCACAA90)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_RESET_OFFSET UNITYSDK_OFFSET(0xCACBD80)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_SAMESTYLE_OFFSET UNITYSDK_OFFSET(0xCACC910)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_SETIMAGELIST_OFFSET UNITYSDK_OFFSET(0xCACCB60)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_SET_ASSETPATH_OFFSET UNITYSDK_OFFSET(0xCACA800)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_SIMULATEANIMPROGRESSFOROUTER_OFFSET UNITYSDK_OFFSET(0xCACE980)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_STARTCOMICANIMATION_OFFSET UNITYSDK_OFFSET(0xCACD480)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_STARTCURTAINANIMATION_OFFSET UNITYSDK_OFFSET(0xCACE430)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_TRIGGERWHENSPLITSCREENFINISH_OFFSET UNITYSDK_OFFSET(0xCACE140)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_UPDATETIME_OFFSET UNITYSDK_OFFSET(0xCACA880)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xCACED00)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT___BASE_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0xCACED40)
#define MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT___BASE_UPDATETIME_OFFSET UNITYSDK_OFFSET(0xCACEDC0)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int MonoComicImgComponent_TypeDefinitionIndex = 63303;

	class MonoComicImgComponent : public ::MoleMole::Comic::MonoComicKeyEventBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::ComicImgPart>* Field_7_0; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_7_1; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_7_2; // 0x60
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_7_3; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_7_4; // 0x70
		::UnityEngine::Transform* Field_7_5; // 0x78
		::UnityEngine::Transform* Field_7_6; // 0x80
		::UnityEngine::CanvasGroup* Field_7_7; // 0x88
		::MoleMole::ComicImgStyle* Field_7_8; // 0x90
		::System::Collections::Generic::List_1<::MoleMole::ComicScreenInfo*>* Field_7_9; // 0x98
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::ImgSplitScreenGroupPlayableAsset_SpriteItem*>* Field_7_10; // 0xA0
		::System::Boolean Field_7_11; // 0xA8
		::UnityEngine::AnimationCurve* Field_7_12; // 0xB0
		::MoleMole::ComicScreenInfo* Field_7_13; // 0xB8
		::System::Action* Field_7_14; // 0xC0
		::System::String* Field_7_15; // 0xC8
		::UnityEngine::GameObject* Field_7_16; // 0xD0
		::System::Collections::Generic::List_1<::MoleMole::ComicPartInfo*>* Field_7_17; // 0xD8
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::SplitScreenEvent_CustomImgPosModifyInfo*>* Field_7_18; // 0xE0
		::System::Collections::Generic::List_1<::MoleMole::ComicPartInfo*>* Field_7_19; // 0xE8
		::System::Single Field_7_20; // 0xF0
		::System::Boolean Field_7_21; // 0xF4
		::System::Single Field_7_22; // 0xF8
		::System::Single Field_7_23; // 0xFC
		::System::Boolean Field_7_24; // 0x100
		::System::Boolean Field_7_25; // 0x101
		::System::Single Field_7_26; // 0x104
		::System::Single Field_7_27; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::String* get_AssetPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_GET_ASSETPATH_OFFSET))(this);
		}

		::System::Void set_AssetPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_SET_ASSETPATH_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_UPDATETIME_OFFSET))(this, a1);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_RESET_OFFSET))(this);
		}

		::System::Void InitByStyleConfig(::MoleMole::ComicImgStyle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ComicImgStyle*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_INITBYSTYLECONFIG_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_SelfGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_GET_SELFGAMEOBJECT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_SelfRectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_GET_SELFRECTTRANSFORM_OFFSET))(this);
		}

		::System::Boolean SameStyle(::MoleMole::ComicImgStyle* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ComicImgStyle*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_SAMESTYLE_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::Transform* GetImgObjByPart(::MoleMole::ComicImgPart a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::MoleMole::ComicImgPart))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_GETIMGOBJBYPART_OFFSET))(this, a1);
		}

		::System::Void SetImageList(::System::Collections::Generic::List_1<::UnityEngine::Timeline::ImgSplitScreenGroupPlayableAsset_SpriteItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::ImgSplitScreenGroupPlayableAsset_SpriteItem*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_SETIMAGELIST_OFFSET))(this, a1);
		}

		::System::Void GetBGNodesByLocation(::MoleMole::ComicImgPart a1, ::UnityEngine::Transform*& a2, ::UnityEngine::Transform*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ComicImgPart, ::UnityEngine::Transform*&, ::UnityEngine::Transform*&))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_GETBGNODESBYLOCATION_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsPlayingAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_ISPLAYINGANIMATION_OFFSET))(this);
		}

		::System::Void StartComicAnimation(::UnityEngine::Timeline::SplitScreenEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::SplitScreenEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_STARTCOMICANIMATION_OFFSET))(this, a1);
		}

		::System::Void TriggerWhenSplitScreenFinish(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_TRIGGERWHENSPLITSCREENFINISH_OFFSET))(this, a1);
		}

		::System::Void RecordNodesForCurtain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_RECORDNODESFORCURTAIN_OFFSET))(this);
		}

		::System::Void StartCurtainAnimation(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_STARTCURTAINANIMATION_OFFSET))(this, a1, a2);
		}

		::System::Void ResetCurtainStateToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_RESETCURTAINSTATETODEFAULT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::ComicPartInfo*>* GetImgMoveVectorWhenSplitScreen()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::ComicPartInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_GETIMGMOVEVECTORWHENSPLITSCREEN_OFFSET))(this);
		}

		::System::Void SimulateAnimProgressForOuter(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_SIMULATEANIMPROGRESSFOROUTER_OFFSET))(this, a1);
		}

		::UnityEngine::RectTransform* GetImgDecoRoot(::System::Boolean a1, ::MoleMole::ComicImgPart a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID, ::System::Boolean, ::MoleMole::ComicImgPart, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_GETIMGDECOROOT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __base_ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT___BASE_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void __base_UpdateTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT___BASE_UPDATETIME_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::MoleMole::ComicImgPart>* Method_7_84D0BB0CCF9E43EA()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::ComicImgPart>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_METHOD_7_84D0BB0CCF9E43EA_OFFSET))(this);
		}

		::UnityEngine::RectTransform* Method_7_40CBD6FA418D8BFD(::System::Int32 a1)
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_METHOD_7_40CBD6FA418D8BFD_OFFSET))(this, a1);
		}

		::System::Void Method_7_3BCF0226A6CDC13B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_METHOD_7_3BCF0226A6CDC13B_OFFSET))(this);
		}

		::System::Boolean Method_7_20B279F6D0EB86A9(::System::Collections::Generic::List_1<::MoleMole::ComicImgPart>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::ComicImgPart>*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_METHOD_7_20B279F6D0EB86A9_OFFSET))(this, a1);
		}

		::System::Void Method_7_8542E37E74FDE1B5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_METHOD_7_8542E37E74FDE1B5_OFFSET))(this);
		}

		::System::Void Method_7_9C2166EC68C0CC08(::MoleMole::ComicImgStyle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ComicImgStyle*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_METHOD_7_9C2166EC68C0CC08_OFFSET))(this, a1);
		}

		::System::Void Method_7_41782CE468D1B24D(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_METHOD_7_41782CE468D1B24D_OFFSET))(this, a1);
		}

		::UnityEngine::RectTransform* Method_7_2D0434B81DC32083(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_METHOD_7_2D0434B81DC32083_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* Method_7_ED1605BD4E0F2236(::UnityEngine::RectTransform* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_METHOD_7_ED1605BD4E0F2236_OFFSET))(this, a1, a2);
		}

		::UnityEngine::RectTransform* Method_7_62DABBB79241EF26(::MoleMole::ComicImgPart a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID, ::MoleMole::ComicImgPart, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICIMGCOMPONENT_METHOD_7_62DABBB79241EF26_OFFSET))(this, a1, a2);
		}
	};
}
