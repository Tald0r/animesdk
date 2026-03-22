#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_39020151BC5E3AAA;
class Class_1_48D56DACBE4271BC;
class Class_2_4E92AFC82E302868;
class Class_2_8EE34DB2F88514D5;
class Class_2_C2DE7756E351C461;
class Class_3_C109CA982236435D;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWeakPanelWidgetWidgetController_ViewModel; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET UNITYSDK_OFFSET(0xC3FF950)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_CANSHOWTHISELEMENTDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xC4012D0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_CHECKDAMAGEELEMENT_OFFSET UNITYSDK_OFFSET(0xC400E70)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_GET_DAMAGERESISTTHESHOLD_OFFSET UNITYSDK_OFFSET(0xC403B30)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_GET_ELEMENTABNORMALSWITCHICONCDTIME_OFFSET UNITYSDK_OFFSET(0xC402D90)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0xC3FFF60)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC3FFEC0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONELEMENTABNORMALLOCKSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xC403000)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONELEMENTABNORMALTRIGGERED_1_OFFSET UNITYSDK_OFFSET(0xC4015A0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONELEMENTABNORMALTRIGGERED_OFFSET UNITYSDK_OFFSET(0xC401380)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONEVTCHANGEELEMENTABNORMALACCUMULATION_1_OFFSET UNITYSDK_OFFSET(0xC402640)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONEVTCHANGEELEMENTABNORMALACCUMULATION_2_OFFSET UNITYSDK_OFFSET(0xC402910)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONEVTCHANGEELEMENTABNORMALACCUMULATION_OFFSET UNITYSDK_OFFSET(0xC401AA0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC400010)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC3FF6A0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC3FFE10)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_PLAYRESETANIM_OFFSET UNITYSDK_OFFSET(0xC402EC0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0xC4009E0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_SETELEMENTABNORMALLOCKSTATE_OFFSET UNITYSDK_OFFSET(0xC4035F0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_SETELEMENTABNORMALUNLOCKSTATE_OFFSET UNITYSDK_OFFSET(0xC401ED0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_SETENTITY_OFFSET UNITYSDK_OFFSET(0xC400270)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_SHOWWITHANIM_OFFSET UNITYSDK_OFFSET(0xC400D80)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xC402F70)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__10_0_OFFSET UNITYSDK_OFFSET(0xC403CD0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__10_1_OFFSET UNITYSDK_OFFSET(0xC403E70)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__10_2_OFFSET UNITYSDK_OFFSET(0xC404010)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__10_3_OFFSET UNITYSDK_OFFSET(0xC404160)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__10_4_OFFSET UNITYSDK_OFFSET(0xC4042E0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xC403C90)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC403BF0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__SETENTITY_G__FINDFIRSTELEMENTABNORMAL_6_0_OFFSET UNITYSDK_OFFSET(0xC400A60)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0xC404400)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC404460)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC4044D0)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC404550)
#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC4045B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWeakPanelWidgetWidgetController_TypeDefinitionIndex = 61458;

	class UIWeakPanelWidgetWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_ShaderProgress()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIWeakPanelWidgetWidgetController_TypeDefinitionIndex)->GetStaticField(0xC4E0);
		}
		::Class_2_8EE34DB2F88514D5* _view; // 0x2A0
		::MoleMole::Config::DamageElementType _lockedElementType; // 0x2A8
		::MoleMole::Config::EVariantElement _lockedVariantElement; // 0x2AC
		::MoleMole::EntityHandle _entity; // 0x2B0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Int32>* dmgResistRatioByTypeDict; // 0x2C0
		::System::Single _cdLeft; // 0x2C8
		::UnityEngine::Material* _fillMat; // 0x2D0
		::UnityEngine::Material* _lockElementAbnormalMat; // 0x2D8
		::MoleMole::UIWeakPanelWidgetWidgetController_ViewModel* _viewModel; // 0x2E0
		::Class_1_48D56DACBE4271BC* _propertySyncHelper_ViewModel; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetEntity(::MoleMole::EntityHandle entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_SETENTITY_OFFSET))(this, entity);
		}

		::System::Boolean CheckDamageElement(::MoleMole::Config::DamageElementType key, ::Class_1_39020151BC5E3AAA* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::DamageElementType, ::Class_1_39020151BC5E3AAA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_CHECKDAMAGEELEMENT_OFFSET))(this, key, value);
		}

		::System::Void OnElementAbnormalTriggered(::Class_2_4E92AFC82E302868* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_4E92AFC82E302868*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONELEMENTABNORMALTRIGGERED_OFFSET))(this, evt);
		}

		::System::Void OnEvtChangeElementAbnormalAccumulation(::Class_2_C2DE7756E351C461* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_C2DE7756E351C461*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONEVTCHANGEELEMENTABNORMALACCUMULATION_OFFSET))(this, evt);
		}

		::System::Void BuildViewModelDataBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET))(this);
		}

		::System::Void ShowWithAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_SHOWWITHANIM_OFFSET))(this);
		}

		::System::Void PlayResetAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_PLAYRESETANIM_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void OnElementAbnormalTriggered_1(::System::Single accumulationRatio, ::MoleMole::Config::DamageElementType damageElementType, ::MoleMole::Config::EVariantElement variantElement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONELEMENTABNORMALTRIGGERED_1_OFFSET))(this, accumulationRatio, damageElementType, variantElement);
		}

		::System::Void OnEvtChangeElementAbnormalAccumulation_1(::System::Single accumulationRatio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONEVTCHANGEELEMENTABNORMALACCUMULATION_1_OFFSET))(this, accumulationRatio);
		}

		::System::Void OnEvtChangeElementAbnormalAccumulation_2(::System::Single accumulationRatio, ::MoleMole::Config::DamageElementType damageElementType, ::MoleMole::Config::EVariantElement variantElement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONEVTCHANGEELEMENTABNORMALACCUMULATION_2_OFFSET))(this, accumulationRatio, damageElementType, variantElement);
		}

		::System::Void OnElementAbnormalLockStateChange(::Class_3_C109CA982236435D* elementAbnormalComponent, ::MoleMole::Config::DamageElementType elementType, ::MoleMole::Config::EVariantElement variantElement)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_C109CA982236435D*, ::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_ONELEMENTABNORMALLOCKSTATECHANGE_OFFSET))(this, elementAbnormalComponent, elementType, variantElement);
		}

		::System::Void SetElementAbnormalLockState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_SETELEMENTABNORMALLOCKSTATE_OFFSET))(this);
		}

		::System::Void SetElementAbnormalUnLockState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_SETELEMENTABNORMALUNLOCKSTATE_OFFSET))(this);
		}

		::System::Boolean CanShowThisElementDamageType(::MoleMole::Config::DamageElementType damageElementType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_CANSHOWTHISELEMENTDAMAGETYPE_OFFSET))(this, damageElementType);
		}

		::System::Single get_DamageResistTheshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_GET_DAMAGERESISTTHESHOLD_OFFSET))(this);
		}

		::System::Single get_ElementAbnormalSwitchIconCdTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_GET_ELEMENTABNORMALSWITCHICONCDTIME_OFFSET))(this);
		}

		::System::Boolean _SetEntity_g__FindFirstElementAbnormal_6_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__SETENTITY_G__FINDFIRSTELEMENTABNORMAL_6_0_OFFSET))(this);
		}

		::System::Void _BuildViewModelDataBinding_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__10_0_OFFSET))(this);
		}

		::System::Void _BuildViewModelDataBinding_b__10_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__10_1_OFFSET))(this);
		}

		::System::Void _BuildViewModelDataBinding_b__10_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__10_2_OFFSET))(this);
		}

		::System::Void _BuildViewModelDataBinding_b__10_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__10_3_OFFSET))(this);
		}

		::System::Void _BuildViewModelDataBinding_b__10_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER__BUILDVIEWMODELDATABINDING_B__10_4_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
