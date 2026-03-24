#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_9992666471540AF7_Struct_2_856A57F50BE61AD4.h"
#include "unitysdk/Enum_3_059BA87F16D2FC4A.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_B4D6240DD85F617A.h"
#include "unitysdk/Enum_3_C2185791B816AA7D.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UICpInlevelChildWindowController_NumInfo.h"
#include "unitysdk/MoleMole/UICpInlevelChildWindowController_TagInfo.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_37F417A6FB470A7F;
class Class_1_5E8D7F836DA392F9;
class Class_2_0CCF091CD6FC39F6;
class Class_2_1B1C05BC0A38A2D5_7;
class Class_2_208CC9941471731A_1047;
class Class_2_67AAD4707F55C650;
class Class_2_DF374A2D13405DBB;
class Class_2_E26E60413FE51F20;
class Class_3_9083B2F870813D13;
class Class_3_96CE54D1B5F2FEE8_3;
class Class_4_8D1AD90A8B2D39F9_3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UICpInlevelChildWindowController_PriceObjInfo; }
namespace MoleMole { class UICpTagBehaviour; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Transform; }
template <typename T1, typename T2, typename T3, typename T4, typename T5> class Class_2_12969538C1D276FA;

#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_BUILDTAGDATA_OFFSET UNITYSDK_OFFSET(0x19DECEF0)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_CHECKTAGACTIVE_OFFSET UNITYSDK_OFFSET(0x19DEE2A0)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_CREATEBUBBLETIP_OFFSET UNITYSDK_OFFSET(0x19DF08F0)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_CREATETEXTTIPS_OFFSET UNITYSDK_OFFSET(0x19DF0A40)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_CREATEUITAG_OFFSET UNITYSDK_OFFSET(0x19DEE560)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_DESTROYLOWHPEFFECT_OFFSET UNITYSDK_OFFSET(0x19DE9BE0)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_GETHOST_OFFSET UNITYSDK_OFFSET(0x19DE9CF0)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_GETOTHERHOST_OFFSET UNITYSDK_OFFSET(0x19DE9E60)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_GETPRICEOBJINFO_OFFSET UNITYSDK_OFFSET(0x19DF4D60)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_GETRAREICONPATH_OFFSET UNITYSDK_OFFSET(0x19DF4C10)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x19DE8910)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_HASKEY_OFFSET UNITYSDK_OFFSET(0x19DEE4D0)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ISMONEYENOUGH_OFFSET UNITYSDK_OFFSET(0x19DF49B0)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x19DEE6F0)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ONBOSSNOTIFY_OFFSET UNITYSDK_OFFSET(0x19DE8F00)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19DE98B0)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x19DE8B60)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ONNOMONEY_OFFSET UNITYSDK_OFFSET(0x19DF3060)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ONPARRY_OFFSET UNITYSDK_OFFSET(0x19DEFF10)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ONRESULTNOTIFY_OFFSET UNITYSDK_OFFSET(0x19DE8E00)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ONSHOPCOUNTDOWNSTOP_OFFSET UNITYSDK_OFFSET(0x19DEEA10)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ONSHOPCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x19DEEE60)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ONSHOPREFRESHEVENT_OFFSET UNITYSDK_OFFSET(0x19DE8D60)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ONSHOWBUBBLETIPS_OFFSET UNITYSDK_OFFSET(0x19DF0340)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ONSHOWTIPS_OFFSET UNITYSDK_OFFSET(0x19DEFD80)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19DF58A0)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19DE9A00)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19DE8920)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19DE9030)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_PLAYGOODSNOENOUGHMONEYANIM_OFFSET UNITYSDK_OFFSET(0x19DF30E0)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_PLAYPARRYTIPS_OFFSET UNITYSDK_OFFSET(0x19DEFF60)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_PLAYSCORETIPS_OFFSET UNITYSDK_OFFSET(0x19DEFDE0)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REALSHOWBUBBLETIPS_OFFSET UNITYSDK_OFFSET(0x19DF0390)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REALSHOWTIPS_OFFSET UNITYSDK_OFFSET(0x19DECE90)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHBOSSHP_OFFSET UNITYSDK_OFFSET(0x19DEC9C0)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHDAMAGENUM_OFFSET UNITYSDK_OFFSET(0x19DEB5C0)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHGOAL_OFFSET UNITYSDK_OFFSET(0x19DEC130)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHGOODSPRICE_OFFSET UNITYSDK_OFFSET(0x19DF0DD0)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHHP_OFFSET UNITYSDK_OFFSET(0x19DEA940)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHHUD_OFFSET UNITYSDK_OFFSET(0x19DEB100)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHITEMINFOTAG_OFFSET UNITYSDK_OFFSET(0x19DF3DE0)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHMONEY_OFFSET UNITYSDK_OFFSET(0x19DEA5E0)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHOTHERPLAYERICON_OFFSET UNITYSDK_OFFSET(0x19DEF900)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHPLAYERICON_OFFSET UNITYSDK_OFFSET(0x19DF5AA0)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHPOINTPRICE_OFFSET UNITYSDK_OFFSET(0x19DF52E0)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHPROPTIPS_OFFSET UNITYSDK_OFFSET(0x19DEC4F0)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHRARE_OFFSET UNITYSDK_OFFSET(0x19DF3470)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHSCORETEXT_OFFSET UNITYSDK_OFFSET(0x19DEA2A0)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHSCORETIPS_OFFSET UNITYSDK_OFFSET(0x19DEA3B0)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHSELECTITEMINFO_OFFSET UNITYSDK_OFFSET(0x19DF1620)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHSHOPHUD_OFFSET UNITYSDK_OFFSET(0x19DEAFB0)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHSHOP_OFFSET UNITYSDK_OFFSET(0x19DEE750)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHTAGUI_OFFSET UNITYSDK_OFFSET(0x19DEDC50)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHTAG_OFFSET UNITYSDK_OFFSET(0x19DEBE00)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHWAVESTR_OFFSET UNITYSDK_OFFSET(0x19DEEC20)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_RESETPRICEOBJS_OFFSET UNITYSDK_OFFSET(0x19DF0C50)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_RESETSELECTGOODSIDX_OFFSET UNITYSDK_OFFSET(0x19DF0D70)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_SETCPITEMCONTEXT_OFFSET UNITYSDK_OFFSET(0x19DF3700)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_SETHP_OFFSET UNITYSDK_OFFSET(0x19DEF320)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_SETMAXHP_OFFSET UNITYSDK_OFFSET(0x19DEF100)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_SETUIPOSBYWORLD_OFFSET UNITYSDK_OFFSET(0x19DF5090)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_SHOWLOWHPEFFECT_OFFSET UNITYSDK_OFFSET(0x19DEF540)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_SHOWPROPCHANGETIPS_OFFSET UNITYSDK_OFFSET(0x19DF0B90)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_SHOWSELECTGOODSINFO_OFFSET UNITYSDK_OFFSET(0x19DF1B90)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_SHOWSELECTREFRESHINFO_OFFSET UNITYSDK_OFFSET(0x19DF2C60)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x19DEA170)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DF6160)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19DF5CD0)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19DF61F0)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x19DF6260)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19DF62C0)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19DF62D0)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19DF62E0)
#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19DF62F0)

namespace MoleMole
{
	inline static constexpr unsigned int UICpInlevelChildWindowController_TypeDefinitionIndex = 83483;

	class UICpInlevelChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Comparison_1<::MoleMole::UICpInlevelChildWindowController_TagInfo>** StaticGet_CompareMethord()
		{
			return (::System::Comparison_1<::MoleMole::UICpInlevelChildWindowController_TagInfo>**)Il2CppClass::FromTypeDefinitionIndex(UICpInlevelChildWindowController_TypeDefinitionIndex)->GetStaticField(0x48280);
		}
		// static const ::System::String* ParryStr; // 0x0
		// static const ::System::String* WaveStr; // 0x0
		// static const ::System::String* CPScoreFadeIn; // 0x0
		// static const ::System::String* CPScoreFadeOut; // 0x0
		// static const ::System::String* CPScoreSPFadeIn; // 0x0
		// static const ::System::String* CPScoreSPFadeOut; // 0x0
		// static const ::System::String* CPParryFadeIn; // 0x0
		// static const ::System::String* CPParryFadeOut; // 0x0
		// static const ::System::String* CPShopItemRefresh; // 0x0
		// static const ::System::String* CPItemGet; // 0x0
		// static const ::System::String* CPGoldUnable; // 0x0
		// static const ::System::String* CPShopItemTipsSwitch; // 0x0
		// static const ::System::String* CPHintFadeIn; // 0x0
		// static const ::System::String* CPHintFadeOut; // 0x0
		// static const ::System::String* CPEffectUnlock; // 0x0
		::Class_2_1B1C05BC0A38A2D5_7* _view; // 0x2F8
		::System::Single _curHp; // 0x300
		::System::Single _maxHp; // 0x304
		::System::Single _rCurHp; // 0x308
		::System::Single _rMaxHp; // 0x30C
		::System::Collections::Generic::List_1<::MoleMole::UICpInlevelChildWindowController_PriceObjInfo*>* _priceUIObjs; // 0x310
		::System::Int32 curLevel; // 0x318
		::System::Int32 leftCount; // 0x31C
		::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>* _textQueue; // 0x320
		::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>* _bubbleQueue; // 0x328
		::UnityEngine::Transform* _scoreRoot; // 0x330
		::UnityEngine::Transform* _parryRoot; // 0x338
		::System::Collections::Generic::List_1<::MoleMole::UICpInlevelChildWindowController_NumInfo>* _numInfos; // 0x340
		::System::Single now; // 0x348
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _tagNumDict; // 0x350
		::System::Collections::Generic::List_1<::MoleMole::UICpInlevelChildWindowController_TagInfo>* _tagList; // 0x358
		::System::Collections::Generic::List_1<::MoleMole::UICpTagBehaviour*>* _tagViewList; // 0x360
		::System::Collections::Generic::List_1<::System::UInt32>* _waitDeleteEntity; // 0x368
		::System::Collections::Generic::List_1<::System::UInt32>* _waitChangeStateEntity; // 0x370
		::System::Collections::Generic::List_1<::System::UInt32>* _bossEntities; // 0x378
		::System::Int32 _bubbleNumLimit; // 0x380
		::System::Int32 _bubbleCurNum; // 0x384
		::System::Int32 _rareCount; // 0x388
		::System::Single _scoreTipsInterval; // 0x38C
		::System::Single _scoreTipsDuration; // 0x390
		::System::String* tagPathRoot; // 0x398
		::System::Int32 _curFrameScoreCount; // 0x3A0
		::System::Int32 _curFramePropCount; // 0x3A4
		::System::Single _noMoneyBubbleLength; // 0x3A8
		::System::Single _shopCountDown; // 0x3AC
		::System::Boolean _inShopCountDown; // 0x3B0
		::Class_2_0CCF091CD6FC39F6* _gameLogic; // 0x3B8
		::Class_3_9083B2F870813D13* _viewContext; // 0x3C0
		::System::Func_2<::Foundation::AssetPath, ::UnityEngine::Sprite*>* _loadSprite; // 0x3C8
		::Class_2_E26E60413FE51F20* _tipsMgr; // 0x3D0
		::Class_3_96CE54D1B5F2FEE8_3* otherPlayer; // 0x3D8
		::System::Boolean hasPostHpEffectAudio; // 0x3E0
		::System::Boolean hasPostMaxHpEffectAudio; // 0x3E1
		::System::Int32 tempScore; // 0x3E4
		::Enum_3_059BA87F16D2FC4A lastState; // 0x3E8
		::System::Collections::Generic::List_1<::System::Int32>* _tagkeyDatas; // 0x3F0
		::System::Int64 cacheGold; // 0x3F8
		::System::Int64 cacheSoul; // 0x400
		::System::Int64 cacheSilver; // 0x408
		::System::Collections::Generic::Queue_1<::Class_2_12969538C1D276FA<::Enum_3_C2185791B816AA7D, ::System::Int32, ::Struct_2_E614D3B245F96744_1, ::System::Boolean, ::System::UInt32>*>* scoreWaitQueue; // 0x410
		::System::Int32 curSelectGoodsIdx; // 0x418
		::Class_2_208CC9941471731A_1047* preSelectComponionConfig; // 0x420
		::System::Collections::Generic::List_1<::Class_1_37F417A6FB470A7F*>* _lowHpEffects; // 0x428

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnShopRefreshEvent(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ONSHOPREFRESHEVENT_OFFSET))(this, obj);
		}

		::System::Void OnResultNotify(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ONRESULTNOTIFY_OFFSET))(this, obj);
		}

		::System::Void OnBossNotify(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ONBOSSNOTIFY_OFFSET))(this, obj);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Class_3_96CE54D1B5F2FEE8_3* GetHost()
		{
			return ((::Class_3_96CE54D1B5F2FEE8_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_GETHOST_OFFSET))(this);
		}

		::Class_3_96CE54D1B5F2FEE8_3* GetOtherHost()
		{
			return ((::Class_3_96CE54D1B5F2FEE8_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_GETOTHERHOST_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void RefreshScoreText(::Class_1_5E8D7F836DA392F9* coreHost)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5E8D7F836DA392F9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHSCORETEXT_OFFSET))(this, coreHost);
		}

		::System::Void RefreshScoreTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHSCORETIPS_OFFSET))(this);
		}

		::System::Void RefreshBossHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHBOSSHP_OFFSET))(this);
		}

		::System::Void RefreshGoal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHGOAL_OFFSET))(this);
		}

		::System::Void RefreshTag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHTAG_OFFSET))(this);
		}

		::System::Void BuildTagData(::Class_2_DF374A2D13405DBB* entityMgr)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_DF374A2D13405DBB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_BUILDTAGDATA_OFFSET))(this, entityMgr);
		}

		::System::Boolean CheckTagActive(::Class_4_8D1AD90A8B2D39F9_3* instComp, ::System::Int32 itemKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_4_8D1AD90A8B2D39F9_3*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_CHECKTAGACTIVE_OFFSET))(this, instComp, itemKey);
		}

		::System::Boolean HasKey(::System::Int32 key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_HASKEY_OFFSET))(this, key);
		}

		::System::Void RefreshTagUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHTAGUI_OFFSET))(this);
		}

		::MoleMole::UICpTagBehaviour* CreateUiTag()
		{
			return ((::MoleMole::UICpTagBehaviour*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_CREATEUITAG_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnShopCountDownStop(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ONSHOPCOUNTDOWNSTOP_OFFSET))(this, obj);
		}

		::System::Void OnShopCountDown(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ONSHOPCOUNTDOWN_OFFSET))(this, obj);
		}

		::System::Void RefreshShopHUD(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHSHOPHUD_OFFSET))(this, deltaTime);
		}

		::System::Void RefreshHUD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHHUD_OFFSET))(this);
		}

		::System::Void RefreshWaveStr(::Class_4_8D1AD90A8B2D39F9_3* levelComp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_4_8D1AD90A8B2D39F9_3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHWAVESTR_OFFSET))(this, levelComp);
		}

		::System::Void RefreshMoney(::Class_3_96CE54D1B5F2FEE8_3* coreHost)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_96CE54D1B5F2FEE8_3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHMONEY_OFFSET))(this, coreHost);
		}

		::System::Void RefreshHp(::Class_3_96CE54D1B5F2FEE8_3* coreHost)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_96CE54D1B5F2FEE8_3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHHP_OFFSET))(this, coreHost);
		}

		::System::Void SetHP(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_SETHP_OFFSET))(this, value);
		}

		::System::Void SetMaxHp(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_SETMAXHP_OFFSET))(this, value);
		}

		::System::Void OnShowTips(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ONSHOWTIPS_OFFSET))(this, obj);
		}

		::System::Void OnParry(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ONPARRY_OFFSET))(this, obj);
		}

		::System::Void OnShowBubbleTips(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ONSHOWBUBBLETIPS_OFFSET))(this, obj);
		}

		::System::Single RealShowBubbleTips(::System::EventArgs* obj)
		{
			return ((::System::Single(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REALSHOWBUBBLETIPS_OFFSET))(this, obj);
		}

		::UnityEngine::GameObject* CreateBubbleTip()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_CREATEBUBBLETIP_OFFSET))(this);
		}

		::UnityEngine::GameObject* CreateTextTips()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_CREATETEXTTIPS_OFFSET))(this);
		}

		::System::Void PlayParryTips(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_PLAYPARRYTIPS_OFFSET))(this, args);
		}

		::System::Void PlayScoreTips(::System::EventArgs* args, ::Enum_3_B4D6240DD85F617A uiSpriteNumSymbol)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*, ::Enum_3_B4D6240DD85F617A))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_PLAYSCORETIPS_OFFSET))(this, args, uiSpriteNumSymbol);
		}

		::System::Void RealShowTips(::Class_2_12969538C1D276FA<::Enum_3_C2185791B816AA7D, ::System::Int32, ::Struct_2_E614D3B245F96744_1, ::System::Boolean, ::System::UInt32>* argData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_12969538C1D276FA<::Enum_3_C2185791B816AA7D, ::System::Int32, ::Struct_2_E614D3B245F96744_1, ::System::Boolean, ::System::UInt32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REALSHOWTIPS_OFFSET))(this, argData);
		}

		::System::Void RefreshPropTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHPROPTIPS_OFFSET))(this);
		}

		::System::Boolean ShowPropChangeTips(::Class_2_9992666471540AF7_Struct_2_856A57F50BE61AD4 argData)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_9992666471540AF7_Struct_2_856A57F50BE61AD4))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_SHOWPROPCHANGETIPS_OFFSET))(this, argData);
		}

		::System::Void RefreshDamageNum(::System::UInt32 hostId, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHDAMAGENUM_OFFSET))(this, hostId, deltaTime);
		}

		::System::Void RefreshShop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHSHOP_OFFSET))(this);
		}

		::System::Void RefreshSelectItemInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHSELECTITEMINFO_OFFSET))(this);
		}

		::System::Void ResetSelectGoodsIdx()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_RESETSELECTGOODSIDX_OFFSET))(this);
		}

		::System::Void OnNoMoney(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ONNOMONEY_OFFSET))(this, obj);
		}

		::System::Void PlayGoodsNoEnoughMoneyAnim(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_PLAYGOODSNOENOUGHMONEYANIM_OFFSET))(this, obj);
		}

		::System::Void ShowSelectGoodsInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_SHOWSELECTGOODSINFO_OFFSET))(this);
		}

		::System::Void SetCpItemContext(::Class_2_67AAD4707F55C650* cpConfigMgr, ::Class_2_208CC9941471731A_1047* cpConfig)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_67AAD4707F55C650*, ::Class_2_208CC9941471731A_1047*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_SETCPITEMCONTEXT_OFFSET))(this, cpConfigMgr, cpConfig);
		}

		::System::Void ShowSelectRefreshInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_SHOWSELECTREFRESHINFO_OFFSET))(this);
		}

		::System::Boolean IsMoneyEnough(::System::Int32 price, ::System::Int32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ISMONEYENOUGH_OFFSET))(this, price, id);
		}

		::System::Void RefreshItemInfoTag(::Class_2_208CC9941471731A_1047* cpConfig, ::Class_2_67AAD4707F55C650* confMgr)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_1047*, ::Class_2_67AAD4707F55C650*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHITEMINFOTAG_OFFSET))(this, cpConfig, confMgr);
		}

		::Foundation::AssetPath GetRareIconPath(::System::Int32 rare)
		{
			return ((::Foundation::AssetPath(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_GETRAREICONPATH_OFFSET))(this, rare);
		}

		::System::Void RefreshRare(::System::Int32 rare)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHRARE_OFFSET))(this, rare);
		}

		::System::Void RefreshGoodsPrice()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHGOODSPRICE_OFFSET))(this);
		}

		::System::Void RefreshPointPrice(::System::Int32 shopId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHPOINTPRICE_OFFSET))(this, shopId);
		}

		::UnityEngine::Vector2 SetUIPosByWorld(::UnityEngine::Vector3 worldPosition)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_SETUIPOSBYWORLD_OFFSET))(this, worldPosition);
		}

		::System::Void ResetPriceObjs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_RESETPRICEOBJS_OFFSET))(this);
		}

		::MoleMole::UICpInlevelChildWindowController_PriceObjInfo* GetPriceObjInfo()
		{
			return ((::MoleMole::UICpInlevelChildWindowController_PriceObjInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_GETPRICEOBJINFO_OFFSET))(this);
		}

		::System::Void ShowLowHPEffect(::System::Single ratio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_SHOWLOWHPEFFECT_OFFSET))(this, ratio);
		}

		::System::Void DestroyLowHPEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_DESTROYLOWHPEFFECT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void RefreshPlayerIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHPLAYERICON_OFFSET))(this);
		}

		::System::Void RefreshOtherPlayerIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_REFRESHOTHERPLAYERICON_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
