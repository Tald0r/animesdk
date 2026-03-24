#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ItemCollectEffectType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_927FD65E44A20102;
class Class_2_953F7F7F60074197_2;
class Class_4_AC6D98911872E0CE;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Config { class ConfigHollowChessboard_ItemCollectConfigData; }
namespace MoleMole::Config { class ConfigHollowChessboard_ItemCollectEffectConfig; }
namespace MoleMole::Config { class ConfigHollowChessboard_ItemCollectLayerConfig; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_INITCONFIG_OFFSET UNITYSDK_OFFSET(0x892FFE0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x892FF40)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x8931100)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8931190)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x892F960)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x892FE90)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_SETPATH_OFFSET UNITYSDK_OFFSET(0x89309F0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_SETTYPE_OFFSET UNITYSDK_OFFSET(0x89300A0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_UPDATETEXTUREBYFRAME_OFFSET UNITYSDK_OFFSET(0x8930FC0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x8931560)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8931510)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8931570)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x89315E0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8931660)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x89316C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowItemCollectEffectWidgetController_TypeDefinitionIndex = 76351;

	class UIHollowItemCollectEffectWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_CreateIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIHollowItemCollectEffectWidgetController_TypeDefinitionIndex)->GetStaticField(0x10C00);
		}
		::Class_2_953F7F7F60074197_2* _view; // 0x2A0
		::System::Int32 _effectIndex; // 0x2A8
		::System::Int32 _itemId; // 0x2AC
		::UnityEngine::Vector2 InvalidPos; // 0x2B0
		::UnityEngine::Material* _flashWhiteDefaultMat; // 0x2B8
		::System::Int32 ShaderOverrideColorId; // 0x2C0
		::UnityEngine::Material* _iconSeqMaterial; // 0x2C8
		::Class_1_927FD65E44A20102* _iconSeqTexture; // 0x2D0
		::UnityEngine::Material* _shadowSeqMaterial; // 0x2D8
		::Class_1_927FD65E44A20102* _shadowSeqTexture; // 0x2E0
		::UnityEngine::Material* _curIconMaterial; // 0x2E8
		::MoleMole::Config::ConfigHollowChessboard_ItemCollectConfigData* _itemCollectConfig; // 0x2F0
		::MoleMole::Config::ConfigHollowChessboard_ItemCollectEffectConfig* _itemCollectEffectConfig; // 0x2F8
		::System::Single _xRatio; // 0x300
		::System::Single _yRatio; // 0x304

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void InitConfig(::MoleMole::Config::ConfigHollowChessboard_ItemCollectConfigData* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_ItemCollectConfigData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_INITCONFIG_OFFSET))(this, config);
		}

		::System::Boolean SetType(::System::Int32 itemId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_SETTYPE_OFFSET))(this, itemId);
		}

		::System::Void SetPath(::Class_4_AC6D98911872E0CE* piece, ::UnityEngine::Vector3 offset, ::UnityEngine::Vector3 finalPos, ::MoleMole::Config::ConfigHollowChessboard_ItemCollectLayerConfig* layerConfig, ::System::Func_2<::Class_4_AC6D98911872E0CE*, ::UnityEngine::Vector3>* GetPieceIndexUIPos, ::UnityEngine::Color overrideFadeInColor, ::System::Func_2<::MoleMole::ItemCollectEffectType, ::UnityEngine::ParticleSystem*>* getFadeOutEffectParticle, ::System::Action_2<::UnityEngine::ParticleSystem*, ::MoleMole::ItemCollectEffectType>* recycleFadeOutEffectParticle, ::System::Action* finishCallback, ::System::Action* recycleCallback)
		{
			return ((::System::Void(*)(::PVOID, ::Class_4_AC6D98911872E0CE*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Config::ConfigHollowChessboard_ItemCollectLayerConfig*, ::System::Func_2<::Class_4_AC6D98911872E0CE*, ::UnityEngine::Vector3>*, ::UnityEngine::Color, ::System::Func_2<::MoleMole::ItemCollectEffectType, ::UnityEngine::ParticleSystem*>*, ::System::Action_2<::UnityEngine::ParticleSystem*, ::MoleMole::ItemCollectEffectType>*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_SETPATH_OFFSET))(this, piece, offset, finalPos, layerConfig, GetPieceIndexUIPos, overrideFadeInColor, getFadeOutEffectParticle, recycleFadeOutEffectParticle, finishCallback, recycleCallback);
		}

		::System::Void UpdateTextureByFrame(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_UPDATETEXTUREBYFRAME_OFFSET))(this, time);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_ONRECYCLE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
